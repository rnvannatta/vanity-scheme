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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1857 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1856 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1855 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1854 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1853 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1852 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1851 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1850 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1849 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDllMain~A" };
VWEAK VWORD _V0printout2;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0printout2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "printout2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1848 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1847 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1846 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1845 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1844 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1843 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdlib.h>" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1842 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "int VanityCurToplevel;" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VRuntime * VanityRuntime;" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1840 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "int VanityStatus;" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1839 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "void VanityMainLoop() {" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1838 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "  if(VanityStatus == VEXITED)" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1837 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "    return;" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1836 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "  bool dotoplevel = VanityCurToplevel < VanityToplevelCount;" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D1835 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "  VClosure * thunk = dotoplevel \? &VanityToplevels[VanityCurToplevel]" };
static struct { VBlob sym; char bytes[84]; } _V10_Dstring_D1834 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 84 }, "                                : (VClosure[]){VMakeClosure2((VFunc)VExit2, NULL)};" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1833 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "  VanityStatus = VExecute(VanityRuntime, thunk);" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1832 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  if(VanityStatus == VEXITED) {" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "    int ret = VDecodeExitCode(VGetExitCode(VanityRuntime));" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1830 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "    VDestroyRuntime(VanityRuntime);" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1829 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "    exit(ret);" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1828 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "  }" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1827 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  if(VanityStatus == VFINISHED)" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "    VanityCurToplevel++;" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1825 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "none" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1824 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "emscripten-loop" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "winmain" };
static struct { VBlob sym; char bytes[93]; } _V10_Dstring_D1822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 93 }, "int __stdcall WinMain(void* hInstance, void* hPrevInstance, char* lpCmdLine, int nShowCmd) {" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "  VInitRuntime2(&VanityRuntime, __argc, __argv);" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "  while(1) VanityMainLoop();" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "#include <emscripten/emscripten.h>" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "int main(int argc, char ** argv) {" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  VInitRuntime2(&VanityRuntime, argc, argv);" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "  emscripten_set_main_loop(VanityMainLoop, 0, 1);" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "VClosure VanityToplevels[] = {~N" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D1814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "  { .base.tag = VCLOSURE, .func = (VFunc)toplevel~A~N, .env = NULL }," };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "};~N" };
static struct { VBlob sym; char bytes[78]; } _V10_Dstring_D1812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 78 }, "int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;~N" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D1811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "__attribute__((constructor)) static void VRegisterAllDeclares() {~N" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-declaretable: unknown form" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "  VRegisterSym(\"~A\", &~A);~N" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "print-declare: unknown form" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-foreign-declare: unknown form" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VEnv * self = NULL;" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "static V_BEGIN_FUNC(toplevel~A, \"toplevel~A\", 1, _k)~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "    self = NULL;" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_k" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, " VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "void ~A(VRuntime * runtime, VEnv * statics, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "#ifdef __linux__~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "\".type ~A, @function\\n\"~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#endif~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "\"    je ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    cmp \" ARGC_REG \", ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "V_BEGIN_FUNC_MIN(~A, \"~A\", 0)~N" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D1782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "  VFunc func = (VFunc)_V20CaseError_~A;~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  if(0)~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "    /*dummy*/;~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  else if(argc == ~A)~N" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  else if(argc >= ~A)~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    func = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "  func(runtime, statics, argc, self);~N" };
static struct { VBlob sym; char bytes[106]; } _V10_Dstring_D1774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 106 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * statics, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D1773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "__attribute__((used)) static V_BEGIN_FUNC_MIN(_V20CaseError_~A, \"_V20CaseError_~A\", 0)~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "  struct { VEnv self; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "  VEnv * self = &container.self;~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "  VInitEnv(self, ~A, ~A, statics);~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "  self->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  self->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "argc" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[48]; } _V10_Dstring_D1762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 48 }, " V_GATHER_VARARGS_PUREC(&_varargs, ~A, argc);~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, " self->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, " VRecordCall2(runtime, &dbg);~N" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "static void ~A(VRuntime * runtime, VEnv * statics, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ", ..." };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "static V_BEGIN_FUNC~A(~A, \"~A\", ~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ")~N" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_MIN" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1741 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1740 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-expr: malformed expression" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[65]; } _V10_Dstring_D1739 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 65 }, "(VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})))" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1738 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "} else {" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "}" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "VGetArg(statics, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "statics->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "statics->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "statics->up->vars[~A]" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "statics->vars[~A]" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "(VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, self)}))" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "~A(runtime,~N        " };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "    V_CALL_FUNC(VSetGlobalVar2, NULL, runtime,~N      " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[105]; } _V10_Dstring_D1719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 105 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,~N      " };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D1718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "    V_CALL((VEncodeClosure(((VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }))), runtime,~N      " };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[66]; } _V10_Dstring_D1716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 66 }, "    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "    V_CALL_FUNC(VDefineGlobalVar2, NULL, runtime,~N      " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    {" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "    VEnv * statics = self;" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "    VInitEnv(self, ~A, ~A, statics);~N" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "self->vars[~A]" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "    self->vars[~A] = " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ";" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    }" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "    struct { VEnv self; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "    self = &container.self;~N" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "    self = alloca(sizeof(VEnv)+sizeof(VWORD[~A]));~N" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "), ~A" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "    V_CALL(" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ", runtime" };
static struct { VBlob sym; char bytes[88]; } _V10_Dstring_D1700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 88 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)~A, .env = self }, }, ~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ");~N" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "    VCallFuncWithGC(runtime, (VFunc)~A, ~A" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D1697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "    V_CALL_FUNC((VFunc)~A, self, runtime" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_VBasic_~A(runtime, NULL" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "basic expression that isn't an intrinsic call" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "closes\?: unknown form" };
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
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static __attribute__((constructor)) void ~A() {~N" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "}~N" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D1689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VWEAK VWORD _V40~A;" };
static struct { VBlob sym; char bytes[102]; } _V10_Dstring_D1685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 102 }, "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)~A, NULL };~N" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[139]; } _V10_Dstring_D1684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 139 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VWEAK VWORD ~A;" };
static struct { VBlob sym; char bytes[123]; } _V10_Dstring_D1682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 123 }, "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VNULLPTR" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VVOID" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V40~A" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\t" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "\\177" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\a" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "\\0~A~A" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "VLookupGlobalVarFast2(runtime, \"~A\")" };
static struct { VBlob sym; char bytes[64]; } _V10_Dstring_D1660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 64 }, "(VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})))" };
static __attribute__((constructor)) void VDllMain1() {
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VLookupConstant("_V0print__foreign__function", &_VW_V0print__foreign__function), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VLookupConstant("_V0displayln", &_VW_V0displayln), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
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
static void _V10_Dprint__global_D237_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D237_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.builtin.259 0 0) ((bruijn ##.x.669 6 0) (bruijn ##.k.672 1 0) (##string ##.string.1660) (bruijn ##.builtin.259 0 0)) ((bruijn ##.x.669 6 0) (bruijn ##.k.672 1 0) (##string ##.string.1661) (bruijn ##.sym.258 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1660.sym, VPOINTER_OTHER),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1661.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
}
static void _V10_Dprint__global_D237_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D237_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.668 6 0) (close _V10_Dprint__global_D237_k35) (bruijn ##.sym.258 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D237_k35, self)})),
      _var1);
}
static void _V10_Descape__octal__char_D238_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__octal__char_D238_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.670 8 0) (bruijn ##.k.673 4 0) (##string ##.string.1662) (bruijn ##.x.675 1 0) (bruijn ##.x.676 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 4,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1662.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V10_Descape__octal__char_D238_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__octal__char_D238_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.remainder (close _V10_Descape__octal__char_D238_k38) (bruijn ##.reg.1638 2 0) 8)
    VCallFuncWithGC(runtime, (VFunc)VRem2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__octal__char_D238_k38, self)})),
      statics->up->vars[0],
      VEncodeInt(8l));
}
static void _V10_Descape__octal__char_D238_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__octal__char_D238_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.674 0 0) (##vcore.quotient (close _V10_Descape__octal__char_D238_k37) (bruijn ##.reg.1638 1 0) 8) ((bruijn ##.k.673 2 0) (bruijn ##.c.260 2 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VQuot2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__octal__char_D238_k37, self)})),
      statics->vars[0],
      VEncodeInt(8l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
static void _V10_Descape__octal__char_D238_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__octal__char_D238_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1638) ((##vcore.char-integer (bruijn ##.c.260 1 1))) (##vcore.< (close _V10_Descape__octal__char_D238_k36) (bruijn ##.reg.1638 0 0) 32))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__octal__char_D238_k36, self)})),
      self->vars[0],
      VEncodeInt(32l));
    }
}
static void _V10_Dloop_D265_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.697 1 0) ((bruijn ##.k.698 0 0) (bruijn ##.p.697 1 0)) (##vcore.eqv? (bruijn ##.k.698 0 0) (bruijn ##.reg.1640 10 0) '#\\))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 10-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Dloop_D265_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.665 26 0) (bruijn ##.k.687 9 0) (bruijn ##.reg.1640 11 0) (bruijn ##.x.679 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 15-1, 0));
}
static void _V10_Dloop_D265_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.665 26 0) (bruijn ##.k.687 9 0) (bruijn ##.x.696 0 0) (bruijn ##.x.679 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      _var0,
      VGetArg(statics, 15-1, 0));
}
static void _V10_Dloop_D265_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.694 0 0) ((bruijn ##.x.665 25 0) (close _V10_Dloop_D265_k52) #\\ (bruijn ##.x.679 14 0)) ((bruijn ##.escape-octal-char.238 17 1) (close _V10_Dloop_D265_k53) (bruijn ##.reg.1640 10 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k52, self)})),
      VEncodeChar('\\'),
      VGetArg(statics, 14-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k53, self)})),
      VGetArg(statics, 10-1, 0));
}
}
static void _V10_Dloop_D265_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D265_k50) (close _V10_Dloop_D265_k51))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D265_k50, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k51, self)})));
}
static void _V10_Dloop_D265_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.693 0 0) ((bruijn ##.x.665 23 0) (bruijn ##.k.687 6 0) (##string ##.string.1669) (bruijn ##.x.679 12 0)) (##vcore.eqv? (close _V10_Dloop_D265_k49) (bruijn ##.reg.1640 8 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1669.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k49, self)})),
      VGetArg(statics, 8-1, 0),
      VEncodeChar('"'));
}
}
static void _V10_Dloop_D265_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.692 0 0) ((bruijn ##.x.665 22 0) (bruijn ##.k.687 5 0) (##string ##.string.1668) (bruijn ##.x.679 11 0)) (##vcore.eqv? (close _V10_Dloop_D265_k48) (bruijn ##.reg.1640 7 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k48, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D265_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.691 0 0) ((bruijn ##.x.665 21 0) (bruijn ##.k.687 4 0) (##string ##.string.1667) (bruijn ##.x.679 10 0)) (##vcore.eqv? (close _V10_Dloop_D265_k47) (bruijn ##.reg.1640 6 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1667.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k47, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('\r'));
}
}
static void _V10_Dloop_D265_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.690 0 0) ((bruijn ##.x.665 20 0) (bruijn ##.k.687 3 0) (##string ##.string.1666) (bruijn ##.x.679 9 0)) (##vcore.eqv? (close _V10_Dloop_D265_k46) (bruijn ##.reg.1640 5 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1666.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k46, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('\n'));
}
}
static void _V10_Dloop_D265_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.689 0 0) ((bruijn ##.x.665 19 0) (bruijn ##.k.687 2 0) (##string ##.string.1665) (bruijn ##.x.679 8 0)) (##vcore.eqv? (close _V10_Dloop_D265_k45) (bruijn ##.reg.1640 4 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1665.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k45, self)})),
      statics->up->up->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D265_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.688 0 0) ((bruijn ##.x.665 18 0) (bruijn ##.k.687 1 0) (##string ##.string.1664) (bruijn ##.x.679 7 0)) (##vcore.eqv? (close _V10_Dloop_D265_k44) (bruijn ##.reg.1640 3 0) '#\delete))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1664.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k44, self)})),
      statics->up->up->vars[0],
      VEncodeChar('\177'));
}
}
static void _V10_Dloop_D265_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.686 1 0) ((bruijn ##.x.665 17 0) (bruijn ##.k.687 0 0) (##string ##.string.1663) (bruijn ##.x.679 6 0)) (##vcore.eqv? (close _V10_Dloop_D265_k43) (bruijn ##.reg.1640 2 0) '#\backspace))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1663.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k43, self)})),
      statics->up->vars[0],
      VEncodeChar('\b'));
}
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
  // (basic-block 1 1 (##.reg.1641) ((##vcore.+ (bruijn ##.i.266 5 1) 1)) ((bruijn ##.loop.265 6 0) (bruijn ##.k.682 5 0) (bruijn ##.reg.1641 0 0)))
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
static void _V10_Dloop_D265_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D265_k42) (close _V10_Dloop_D265_k54))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D265_k42, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k54, self)})));
}
static void _V10_Dloop_D265_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.683 0 0) (basic-block 1 1 (##.reg.1640) ((##vcore.string-ref (bruijn ##.s.262 6 1) (bruijn ##.i.266 2 1))) (##vcore.eqv? (close _V10_Dloop_D265_k41) (bruijn ##.reg.1640 0 0) '#\alarm)) ((bruijn ##.k.682 1 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k41, self)})),
      self->vars[0],
      VEncodeChar('\a'));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D265_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D265_k40) (bruijn ##.i.266 0 1) (bruijn ##.reg.1639 3 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k40, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Descape__string_D239_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D239_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.677 6 0) (bruijn ##.ret.269 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->vars[0]);
}
static void _V10_Descape__string_D239_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D239_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 12 0) (close _V10_Descape__string_D239_k57) (bruijn ##.x.679 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D239_k57, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Descape__string_D239_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D239_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.666 12 0) (close _V10_Descape__string_D239_k56) (bruijn ##.x.679 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D239_k56, self)})),
      statics->up->vars[0]);
}
static void _V10_Descape__string_D239_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D239_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D265_lambda6)) ((bruijn ##.loop.265 0 0) (close _V10_Descape__string_D239_k55) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_lambda6, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D239_k55, self)})),
      VEncodeInt(0l));
    }
}
static void _V10_Descape__string_D239_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D239_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1639) ((##vcore.string-length (bruijn ##.s.262 1 1))) ((bruijn ##.x.664 11 0) (close _V10_Descape__string_D239_k39)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D239_k39, self)})));
    }
}
static void _V10_Descape__char_D240_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.707 0 0) ((bruijn ##.k.699 8 0) (##string ##.string.1671)) ((bruijn ##.escape-octal-char.238 9 1) (bruijn ##.k.699 8 0) (bruijn ##.c.270 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1671.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 2,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 8-1, 1));
}
}
static void _V10_Descape__char_D240_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.706 0 0) ((bruijn ##.k.699 7 0) (##string ##.string.1670)) (##vcore.eqv? (close _V10_Descape__char_D240_k65) (bruijn ##.c.270 7 1) '#\'))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1670.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k65, self)})),
      VGetArg(statics, 7-1, 1),
      VEncodeChar('\''));
}
}
static void _V10_Descape__char_D240_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.705 0 0) ((bruijn ##.k.699 6 0) (##string ##.string.1668)) (##vcore.eqv? (close _V10_Descape__char_D240_k64) (bruijn ##.c.270 6 1) '#\\))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k64, self)})),
      VGetArg(statics, 6-1, 1),
      VEncodeChar('\\'));
}
}
static void _V10_Descape__char_D240_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.704 0 0) ((bruijn ##.k.699 5 0) (##string ##.string.1667)) (##vcore.eqv? (close _V10_Descape__char_D240_k63) (bruijn ##.c.270 5 1) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1667.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k63, self)})),
      VGetArg(statics, 5-1, 1),
      VEncodeChar('\r'));
}
}
static void _V10_Descape__char_D240_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.703 0 0) ((bruijn ##.k.699 4 0) (##string ##.string.1666)) (##vcore.eqv? (close _V10_Descape__char_D240_k62) (bruijn ##.c.270 4 1) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1666.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k62, self)})),
      statics->up->up->up->vars[1],
      VEncodeChar('\n'));
}
}
static void _V10_Descape__char_D240_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.702 0 0) ((bruijn ##.k.699 3 0) (##string ##.string.1665)) (##vcore.eqv? (close _V10_Descape__char_D240_k61) (bruijn ##.c.270 3 1) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1665.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k61, self)})),
      statics->up->up->vars[1],
      VEncodeChar('\t'));
}
}
static void _V10_Descape__char_D240_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.701 0 0) ((bruijn ##.k.699 2 0) (##string ##.string.1664)) (##vcore.eqv? (close _V10_Descape__char_D240_k60) (bruijn ##.c.270 2 1) '#\delete))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1664.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k60, self)})),
      statics->up->vars[1],
      VEncodeChar('\177'));
}
}
static void _V10_Descape__char_D240_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.700 0 0) ((bruijn ##.k.699 1 0) (##string ##.string.1663)) (##vcore.eqv? (close _V10_Descape__char_D240_k59) (bruijn ##.c.270 1 1) '#\backspace))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1663.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k59, self)})),
      statics->vars[1],
      VEncodeChar('\b'));
}
}
static void _V10_Descape__char_D240_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D240_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.eqv? (close _V10_Descape__char_D240_k58) (bruijn ##.c.270 0 1) '#\alarm)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_k58, self)})),
      _var1,
      VEncodeChar('\a'));
}
static void _V10_Dprint__literal__string_D241_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D241_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 6 0) (bruijn ##.k.708 1 0) (##string ##.string.1672) (bruijn ##.x.709 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1672.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__string_D241_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D241_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.663 11 0) (close _V10_Dprint__literal__string_D241_k66) (bruijn ##.x.272 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D241_k66, self)})),
      _var1);
}
static void _V10_Dprint__intrinsic_D242_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D242_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 6 0) (bruijn ##.k.710 1 0) (##string ##.string.1673) (bruijn ##.x.711 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1673.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__intrinsic_D242_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D242_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.663 11 0) (close _V10_Dprint__intrinsic_D242_k67) (bruijn ##.x.273 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D242_k67, self)})),
      _var1);
}
static void _V10_Dprint__literal_D243_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D243_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.712 6 0) (##string ##.string.1678) (bruijn ##.x.718 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1678.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal_D243_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D243_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.665 16 0) (bruijn ##.k.712 7 0) (bruijn ##.x.722 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      _var0);
}
static void _V10_Dprint__literal_D243_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D243_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.714 0 0) ((bruijn ##.x.669 7 0) (bruijn ##.k.712 2 0) (##string ##.string.1675) (bruijn ##.x.274 2 1)) (basic-block 1 1 (##.reg.1643) ((##vcore.void? (bruijn ##.x.274 3 1))) (if (bruijn ##.reg.1643 0 0) ((bruijn ##.x.669 8 0) (bruijn ##.k.712 3 0) (##string ##.string.1676)) (basic-block 1 1 (##.reg.1644) ((##vcore.nullptr? (bruijn ##.x.274 4 1))) (if (bruijn ##.reg.1644 0 0) ((bruijn ##.x.669 9 0) (bruijn ##.k.712 4 0) (##string ##.string.1677)) (basic-block 1 1 (##.reg.1645) ((##vcore.char? (bruijn ##.x.274 5 1))) (if (bruijn ##.reg.1645 0 0) ((bruijn ##.escape-char.240 6 3) (close _V10_Dprint__literal_D243_k69) (bruijn ##.x.274 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.274 5 1) #t) ((bruijn ##.x.669 10 0) (bruijn ##.k.712 5 0) (##string ##.string.1679)) (if (##inline ##vcore.eq? (bruijn ##.x.274 5 1) #f) ((bruijn ##.x.669 10 0) (bruijn ##.k.712 5 0) (##string ##.string.1680)) (basic-block 1 1 (##.reg.1646) ((##vcore.symbol? (bruijn ##.x.274 6 1))) (if (bruijn ##.reg.1646 0 0) ((bruijn ##.x.663 17 0) (close _V10_Dprint__literal_D243_k70) (bruijn ##.x.274 6 1)) ((bruijn ##.x.645 35 0) (bruijn ##.k.712 6 0) (##string ##.string.1681) (bruijn ##.x.274 6 1)))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1675.sym, VPOINTER_OTHER),
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1676.sym, VPOINTER_OTHER));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1677.sym, VPOINTER_OTHER));
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D243_k69, self)})),
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(true)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1679.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1680.sym, VPOINTER_OTHER));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D243_k70, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER),
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
static void _V10_Dprint__literal_D243_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D243_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1642) ((##vcore.int? (bruijn ##.x.274 1 1))) (if (bruijn ##.reg.1642 0 0) ((bruijn ##.x.669 6 0) (bruijn ##.k.712 1 0) (##string ##.string.1674) (bruijn ##.x.274 1 1)) ((bruijn ##.x.662 13 0) (close _V10_Dprint__literal_D243_k68) (bruijn ##.x.274 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1674.sym, VPOINTER_OTHER),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D243_k68, self)})),
      statics->vars[1]);
}
    }
}
static void _V10_Dprint__literal__declaration_D244_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.723 7 0) (##string ##.string.1682) (bruijn ##.reg.1649 1 1) (bruijn ##.mangled.276 5 0) (bruijn ##.reg.1649 1 1) (bruijn ##.escaped.277 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 6,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1682.sym, VPOINTER_OTHER),
      statics->vars[1],
      VGetArg(statics, 5-1, 0),
      statics->vars[1],
      statics->up->up->vars[0]);
}
static void _V10_Dprint__literal__declaration_D244_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.1648 ##.reg.1649) ((##vcore.string-length (bruijn ##.x.727 1 0)) (##vcore.+ (bruijn ##.reg.1648 0 0) 1)) ((bruijn ##.x.669 11 0) (close _V10_Dprint__literal__declaration_D244_k75) (##string ##.string.1683) (bruijn ##.mangled.276 4 0)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k75, self)})),
      VEncodePointer(&_V10_Dstring_D1683.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
    }
}
static void _V10_Dprint__literal__declaration_D244_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V10_Dprint__literal__declaration_D244_k74) (##inline ##vcore.car (bruijn ##.lit.275 4 1)))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k74, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V10_Dprint__literal__declaration_D244_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.escape-string.239 4 2) (close _V10_Dprint__literal__declaration_D244_k73) (bruijn ##.x.729 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k73, self)})),
      _var0);
}
static void _V10_Dprint__literal__declaration_D244_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V10_Dprint__literal__declaration_D244_k72) (##inline ##vcore.car (bruijn ##.lit.275 2 1)))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k72, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
static void _V10_Dprint__literal__declaration_D244_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.1651 ##.reg.1652) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.lit.275 5 1))) (##vcore.+ (bruijn ##.reg.1651 0 0) 1)) ((bruijn ##.x.669 10 0) (bruijn ##.k.723 5 0) (##string ##.string.1684) (bruijn ##.reg.1652 0 1) (bruijn ##.mangled.279 2 0) (bruijn ##.reg.1652 0 1) (bruijn ##.escaped.280 1 0)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 6,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1684.sym, VPOINTER_OTHER),
      self->vars[1],
      statics->up->vars[0],
      self->vars[1],
      statics->vars[0]);
    }
}
static void _V10_Dprint__literal__declaration_D244_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.escape-string.239 4 2) (close _V10_Dprint__literal__declaration_D244_k77) (##inline ##vcore.car (bruijn ##.lit.275 3 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k77, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dprint__literal__declaration_D244_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.742 1 0) (bruijn ##.x.743 0 0) '##intrinsic)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__literal__declaration_D244_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.lit.275 3 1))) ((bruijn ##.x.661 16 0) (close _V10_Dprint__literal__declaration_D244_k79) (bruijn ##.lit.275 3 1)) ((bruijn ##.k.742 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k79, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__literal__declaration_D244_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.723 6 0) (##string ##.string.1685) (bruijn ##.mangled.282 1 0) (##inline ##vcore.cdr (bruijn ##.lit.275 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1685.sym, VPOINTER_OTHER),
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dprint__literal__declaration_D244_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__literal__declaration_D244_k83) (##string ##.string.1686) (bruijn ##.mangled.282 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k83, self)})),
      VEncodePointer(&_V10_Dstring_D1686.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__declaration_D244_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.663 15 0) (close _V10_Dprint__literal__declaration_D244_k82) (bruijn ##.x.740 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k82, self)})),
      _var0);
}
static void _V10_Dprint__literal__declaration_D244_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.737 0 0) ((bruijn ##.x.660 17 0) (close _V10_Dprint__literal__declaration_D244_k81) (bruijn ##.lit.275 3 1)) ((bruijn ##.x.645 32 0) (bruijn ##.k.723 3 0) (##string ##.string.1687) (bruijn ##.lit.275 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k81, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
static void _V10_Dprint__literal__declaration_D244_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D244_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1647) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.lit.275 1 1)))) (if (bruijn ##.reg.1647 0 0) ((bruijn ##.x.663 12 0) (close _V10_Dprint__literal__declaration_D244_k71) (##inline ##vcore.car (bruijn ##.lit.275 1 1))) (basic-block 1 1 (##.reg.1650) ((##vcore.string? (##inline ##vcore.car (bruijn ##.lit.275 2 1)))) (if (bruijn ##.reg.1650 0 0) ((bruijn ##.x.663 13 0) (close _V10_Dprint__literal__declaration_D244_k76) (##inline ##vcore.cdr (bruijn ##.lit.275 2 1))) ((close _V10_Dprint__literal__declaration_D244_k78) (close _V10_Dprint__literal__declaration_D244_k80))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k71, self)})),
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k76, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__literal__declaration_D244_k78, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_k80, self)})));
}
    }
}
    }
}
static void _V10_Dprint__init_D284_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D284_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 9 0) (bruijn ##.k.748 2 0) (##string ##.string.1688) (bruijn ##.mangled.286 0 0) (bruijn ##.mangled.286 0 0) (bruijn ##.mangled.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 5,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D284_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D284_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.754 1 0) (bruijn ##.x.755 0 0) '##intrinsic)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__init_D284_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D284_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.lit.285 2 1))) ((bruijn ##.x.661 17 0) (close _V10_Dprint__init_D284_k86) (bruijn ##.lit.285 2 1)) ((bruijn ##.k.754 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D284_k86, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D284_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D284_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.748 4 0) (##string ##.string.1689) (bruijn ##.mangled.287 0 0) (bruijn ##.mangled.287 0 0) (bruijn ##.mangled.287 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 5,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1689.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D284_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D284_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.663 16 0) (close _V10_Dprint__init_D284_k89) (bruijn ##.x.752 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D284_k89, self)})),
      _var0);
}
static void _V10_Dprint__init_D284_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D284_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.751 0 0) ((bruijn ##.x.660 18 0) (close _V10_Dprint__init_D284_k88) (bruijn ##.lit.285 2 1)) ((bruijn ##.k.748 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D284_k88, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D284_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D284_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1653) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.lit.285 1 1)))) (if (bruijn ##.reg.1653 0 0) ((bruijn ##.x.663 14 0) (close _V10_Dprint__init_D284_k84) (##inline ##vcore.car (bruijn ##.lit.285 1 1))) ((close _V10_Dprint__init_D284_k85) (close _V10_Dprint__init_D284_k87))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D284_k84, self)})),
      VInlineCar2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__init_D284_k85, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D284_k87, self)})));
}
    }
}
static void _V10_Dprint__dllmain_D245_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D245_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 9 0) (bruijn ##.k.747 4 0) (##string ##.string.1690))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__dllmain_D245_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D245_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 31 0) (close _V10_Dprint__dllmain_D245_k92) (bruijn ##.print-init.284 2 0) (bruijn ##.literals.283 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D245_k92, self)})),
      statics->up->vars[0],
      statics->up->up->vars[1]);
}
static void _V10_Dprint__dllmain_D245_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D245_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 7 0) (close _V10_Dprint__dllmain_D245_k91) (##string ##.string.1691) (bruijn ##.x.760 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D245_k91, self)})),
      VEncodePointer(&_V10_Dstring_D1691.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__dllmain_D245_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D245_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dprint__init_D284_lambda13)) ((bruijn ##.gendllmain.226 4 0) (close _V10_Dprint__dllmain_D245_k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D284_lambda13, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D245_k90, self)})));
    }
}
static void _V10_Dcloses_Q_D246_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.874 0 0) (bruijn ##.k.870 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.875 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D246_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.292 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.292 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k96) (close _V10_Dcloses_Q_D246_lambda16) (bruijn ##.kk.2.289 3 1)) ((bruijn ##.k.870 2 0) #f)) ((bruijn ##.k.870 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k96, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda16, self)})),
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
static void _V10_Dcloses_Q_D246_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.871 0 0) ((close _V10_Dcloses_Q_D246_k95) (##inline ##vcore.cdr (bruijn ##.expr.288 3 1))) ((bruijn ##.k.870 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k95, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 2 1)) ((bruijn ##.x.659 17 0) (close _V10_Dcloses_Q_D246_k94) 'close (##inline ##vcore.car (bruijn ##.expr.288 2 1))) ((bruijn ##.k.870 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k94, self)})),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.866 0 0) (bruijn ##.k.864 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.867 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D246_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.865 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k100) (close _V10_Dcloses_Q_D246_lambda17) (bruijn ##.kk.2.289 3 1)) ((bruijn ##.k.864 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k100, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda17, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 3 1)) ((bruijn ##.x.659 18 0) (close _V10_Dcloses_Q_D246_k99) 'quote (##inline ##vcore.car (bruijn ##.expr.288 3 1))) ((bruijn ##.k.864 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k99, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.860 0 0) (bruijn ##.k.858 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.861 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D246_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.859 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k104) (close _V10_Dcloses_Q_D246_lambda18) (bruijn ##.kk.2.289 4 1)) ((bruijn ##.k.858 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k104, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda18, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 4 1)) ((bruijn ##.x.659 19 0) (close _V10_Dcloses_Q_D246_k103) 'bruijn (##inline ##vcore.car (bruijn ##.expr.288 4 1))) ((bruijn ##.k.858 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k103, self)})),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.854 0 0) (bruijn ##.k.852 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.855 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D246_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.853 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k108) (close _V10_Dcloses_Q_D246_lambda19) (bruijn ##.kk.2.289 5 1)) ((bruijn ##.k.852 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k108, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda19, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 5 1)) ((bruijn ##.x.659 20 0) (close _V10_Dcloses_Q_D246_k107) '##string (##inline ##vcore.car (bruijn ##.expr.288 5 1))) ((bruijn ##.k.852 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k107, self)})),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.848 0 0) (bruijn ##.k.846 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.849 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D246_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.847 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k112) (close _V10_Dcloses_Q_D246_lambda20) (bruijn ##.kk.2.289 6 1)) ((bruijn ##.k.846 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k112, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda20, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 6 1)) ((bruijn ##.x.659 21 0) (close _V10_Dcloses_Q_D246_k111) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.288 6 1))) ((bruijn ##.k.846 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k111, self)})),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.839 0 0) (bruijn ##.k.833 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcloses_Q_D246_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.842 0 0) ((bruijn ##.k.840 2 0) (bruijn ##.p.842 0 0)) ((bruijn ##.closes?.246 15 9) (bruijn ##.k.840 2 0) (##inline ##vcore.car (bruijn ##.expr.13.303 3 0))))
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
static void _V10_Dcloses_Q_D246_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.841 0 0) ((bruijn ##.k.840 1 0) (bruijn ##.p.841 0 0)) ((bruijn ##.closes?.246 14 9) (close _V10_Dcloses_Q_D246_k121) (##inline ##vcore.car (bruijn ##.expr.12.301 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k121, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D246_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.closes?.246 13 9) (close _V10_Dcloses_Q_D246_k120) (##inline ##vcore.car (bruijn ##.expr.11.299 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k120, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcloses_Q_D246_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.303 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.13.303 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k119) (close _V10_Dcloses_Q_D246_lambda21) (bruijn ##.kk.2.289 10 1)) ((bruijn ##.k.833 4 0) #f)) ((bruijn ##.k.833 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k119, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda21, self)})),
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
static void _V10_Dcloses_Q_D246_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.301 0 0)) ((close _V10_Dcloses_Q_D246_k118) (##inline ##vcore.cdr (bruijn ##.expr.12.301 0 0))) ((bruijn ##.k.833 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k118, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.299 0 0)) ((close _V10_Dcloses_Q_D246_k117) (##inline ##vcore.cdr (bruijn ##.expr.11.299 0 0))) ((bruijn ##.k.833 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k117, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.834 0 0) ((close _V10_Dcloses_Q_D246_k116) (##inline ##vcore.cdr (bruijn ##.expr.288 8 1))) ((bruijn ##.k.833 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k116, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 7 1)) ((bruijn ##.x.659 22 0) (close _V10_Dcloses_Q_D246_k115) 'if (##inline ##vcore.car (bruijn ##.expr.288 7 1))) ((bruijn ##.k.833 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k115, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.828 0 0) (bruijn ##.k.822 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcloses_Q_D246_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.829 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D246_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.310 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.17.310 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k128) (close _V10_Dcloses_Q_D246_lambda22) (bruijn ##.kk.2.289 11 1)) ((bruijn ##.k.822 4 0) #f)) ((bruijn ##.k.822 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k128, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda22, self)})),
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
static void _V10_Dcloses_Q_D246_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.308 0 0)) ((close _V10_Dcloses_Q_D246_k127) (##inline ##vcore.cdr (bruijn ##.expr.16.308 0 0))) ((bruijn ##.k.822 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k127, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.306 0 0)) ((close _V10_Dcloses_Q_D246_k126) (##inline ##vcore.cdr (bruijn ##.expr.15.306 0 0))) ((bruijn ##.k.822 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k126, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.823 0 0) ((close _V10_Dcloses_Q_D246_k125) (##inline ##vcore.cdr (bruijn ##.expr.288 9 1))) ((bruijn ##.k.822 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k125, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 8 1)) ((bruijn ##.x.659 23 0) (close _V10_Dcloses_Q_D246_k124) 'set! (##inline ##vcore.car (bruijn ##.expr.288 8 1))) ((bruijn ##.k.822 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k124, self)})),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.817 0 0) (bruijn ##.k.811 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcloses_Q_D246_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.818 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D246_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.317 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.21.317 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k135) (close _V10_Dcloses_Q_D246_lambda23) (bruijn ##.kk.2.289 12 1)) ((bruijn ##.k.811 4 0) #f)) ((bruijn ##.k.811 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k135, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda23, self)})),
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
static void _V10_Dcloses_Q_D246_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.315 0 0)) ((close _V10_Dcloses_Q_D246_k134) (##inline ##vcore.cdr (bruijn ##.expr.20.315 0 0))) ((bruijn ##.k.811 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k134, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.313 0 0)) ((close _V10_Dcloses_Q_D246_k133) (##inline ##vcore.cdr (bruijn ##.expr.19.313 0 0))) ((bruijn ##.k.811 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k133, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.812 0 0) ((close _V10_Dcloses_Q_D246_k132) (##inline ##vcore.cdr (bruijn ##.expr.288 10 1))) ((bruijn ##.k.811 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k132, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 9 1)) ((bruijn ##.x.659 24 0) (close _V10_Dcloses_Q_D246_k131) 'define (##inline ##vcore.car (bruijn ##.expr.288 9 1))) ((bruijn ##.k.811 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k131, self)})),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.807 0 0) (bruijn ##.k.804 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.closes?.246 14 9) (bruijn ##.k.808 0 0) (##inline ##vcore.cdr (bruijn ##.expr.23.320 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      _var0,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dcloses_Q_D246_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.320 0 0)) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k140) (close _V10_Dcloses_Q_D246_lambda24) (bruijn ##.kk.2.289 11 1)) ((bruijn ##.k.804 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k140, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda24, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.805 0 0) ((close _V10_Dcloses_Q_D246_k139) (##inline ##vcore.cdr (bruijn ##.expr.288 11 1))) ((bruijn ##.k.804 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k139, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 10 1)) ((bruijn ##.x.659 25 0) (close _V10_Dcloses_Q_D246_k138) '##inline (##inline ##vcore.car (bruijn ##.expr.288 10 1))) ((bruijn ##.k.804 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k138, self)})),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.800 0 0) (bruijn ##.k.798 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.801 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D246_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.799 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k144) (close _V10_Dcloses_Q_D246_lambda25) (bruijn ##.kk.2.289 11 1)) ((bruijn ##.k.798 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k144, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda25, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 11 1)) ((bruijn ##.x.659 26 0) (close _V10_Dcloses_Q_D246_k143) 'letrec (##inline ##vcore.car (bruijn ##.expr.288 11 1))) ((bruijn ##.k.798 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k143, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.794 0 0) (bruijn ##.k.792 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.795 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D246_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.793 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k148) (close _V10_Dcloses_Q_D246_lambda26) (bruijn ##.kk.2.289 12 1)) ((bruijn ##.k.792 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k148, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda26, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 12 1)) ((bruijn ##.x.659 27 0) (close _V10_Dcloses_Q_D246_k147) 'basic-block (##inline ##vcore.car (bruijn ##.expr.288 12 1))) ((bruijn ##.k.792 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k147, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.788 0 0) (bruijn ##.k.786 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcloses_Q_D246_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.closes?.246 15 9) (bruijn ##.k.789 0 0) (##inline ##vcore.car (bruijn ##.expr.288 14 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 9)), 2,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 1)));
}
static void _V10_Dcloses_Q_D246_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 13 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.288 13 1))) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k151) (close _V10_Dcloses_Q_D246_lambda27) (bruijn ##.kk.2.289 12 1)) ((bruijn ##.k.786 0 0) #f)) ((bruijn ##.k.786 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k151, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda27, self)})),
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
static void _V10_Dcloses_Q_D246_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.782 0 0) (bruijn ##.k.781 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcloses_Q_D246_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.784 0 0) ((bruijn ##.k.783 1 0) (bruijn ##.p.784 0 0)) ((bruijn ##.closes?.246 17 9) (bruijn ##.k.783 1 0) (##inline ##vcore.cdr (bruijn ##.expr.288 16 1))))
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
static void _V10_Dcloses_Q_D246_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.closes?.246 16 9) (close _V10_Dcloses_Q_D246_k155) (##inline ##vcore.car (bruijn ##.expr.288 15 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k155, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)));
}
static void _V10_Dcloses_Q_D246_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.288 14 1)) (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k154) (close _V10_Dcloses_Q_D246_lambda28) (bruijn ##.kk.2.289 13 1)) ((bruijn ##.k.781 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k154, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda28, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D246_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 46 0) (bruijn ##.k.777 0 0) (##string ##.string.1692) (bruijn ##.expr.288 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1692.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 1));
}
static void _V10_Dcloses_Q_D246_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.762 15 0) (close _V10_Dcloses_Q_D246_lambda29) (bruijn ##.kk.2.289 15 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 15-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda29, self)})),
      VGetArg(statics, 15-1, 1));
}
static void _V10_Dcloses_Q_D246_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.778 0 0) (close _V10_Dcloses_Q_D246_k158))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k158, self)})));
}
static void _V10_Dcloses_Q_D246_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.779 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D246_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dcloses_Q_D246_k157) (close _V10_Dcloses_Q_D246_lambda30) (bruijn ##.kk.2.289 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k157, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda30, self)})),
      VGetArg(statics, 13-1, 1));
}
static void _V10_Dcloses_Q_D246_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k153) (close _V10_Dcloses_Q_D246_k156))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k153, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k156, self)})));
}
static void _V10_Dcloses_Q_D246_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k150) (close _V10_Dcloses_Q_D246_k152))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k150, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k152, self)})));
}
static void _V10_Dcloses_Q_D246_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k146) (close _V10_Dcloses_Q_D246_k149))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k146, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k149, self)})));
}
static void _V10_Dcloses_Q_D246_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k142) (close _V10_Dcloses_Q_D246_k145))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k142, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k145, self)})));
}
static void _V10_Dcloses_Q_D246_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k137) (close _V10_Dcloses_Q_D246_k141))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k137, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k141, self)})));
}
static void _V10_Dcloses_Q_D246_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k130) (close _V10_Dcloses_Q_D246_k136))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k130, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k136, self)})));
}
static void _V10_Dcloses_Q_D246_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k123) (close _V10_Dcloses_Q_D246_k129))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k123, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k129, self)})));
}
static void _V10_Dcloses_Q_D246_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k114) (close _V10_Dcloses_Q_D246_k122))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k114, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k122, self)})));
}
static void _V10_Dcloses_Q_D246_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k110) (close _V10_Dcloses_Q_D246_k113))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k110, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k113, self)})));
}
static void _V10_Dcloses_Q_D246_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k106) (close _V10_Dcloses_Q_D246_k109))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k106, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k109, self)})));
}
static void _V10_Dcloses_Q_D246_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k102) (close _V10_Dcloses_Q_D246_k105))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k102, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k105, self)})));
}
static void _V10_Dcloses_Q_D246_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D246_k98) (close _V10_Dcloses_Q_D246_k101))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k98, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k101, self)})));
}
static void _V10_Dcloses_Q_D246_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dcloses_Q_D246_k93) (close _V10_Dcloses_Q_D246_k97))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D246_k93, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_k97, self)})));
}
static void _V10_Dcloses_Q_D246_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D246_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.761 0 0) (close _V10_Dcloses_Q_D246_lambda15))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda15, self)})));
}
static void _V10_Dprint__basic__expr_D247_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.name.333 1 0)) ((bruijn ##.x.645 31 0) (bruijn ##.k.886 0 0) (##string ##.string.1693) (bruijn ##.expr.331 2 1)) ((bruijn ##.k.886 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__basic__expr_D247_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 9 0) (bruijn ##.k.878 4 0) (##string ##.string.1694))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1694.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__expr_D247_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.248 6 11) (bruijn ##.k.881 1 0) (bruijn ##.x.334 1 1) (bruijn ##.args.332 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__basic__expr_D247_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 9 0) (close _V10_Dprint__basic__expr_D247_k164) (##string ##.string.1695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D247_k164, self)})),
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__expr_D247_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 31 0) (close _V10_Dprint__basic__expr_D247_k163) (close _V10_Dprint__basic__expr_D247_lambda32) (##inline ##vcore.cdr (bruijn ##.expr.331 3 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D247_k163, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D247_lambda32, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dprint__basic__expr_D247_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 7 0) (close _V10_Dprint__basic__expr_D247_k162) (##string ##.string.1696) (bruijn ##.name.333 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D247_k162, self)})),
      VEncodePointer(&_V10_Dstring_D1696.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
static void _V10_Dprint__basic__expr_D247_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__basic__expr_D247_k160) (close _V10_Dprint__basic__expr_D247_k161))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__basic__expr_D247_k160, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D247_k161, self)})));
}
static void _V10_Dprint__basic__expr_D247_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D247_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.668 6 0) (close _V10_Dprint__basic__expr_D247_k159) (##inline ##vcore.car (bruijn ##.expr.331 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D247_k159, self)})),
      VInlineCar2(runtime,
        _var1));
}
static void _V10_Dprint__builtin__apply_D337_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 9 0) (bruijn ##.k.894 1 0) (##string ##.string.1697) (bruijn ##.x.895 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__builtin__apply_D337_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 10 0) (bruijn ##.k.894 2 0) (##string ##.string.1698) (bruijn ##.x.896 1 0) (bruijn ##.x.897 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1698.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V10_Dprint__builtin__apply_D337_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.653 25 0) (close _V10_Dprint__builtin__apply_D337_k168) (bruijn ##.xs.345 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_k168, self)})),
      statics->up->vars[2]);
}
static void _V10_Dprint__builtin__apply_D337_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.229 5 2) ((bruijn ##.x.668 9 0) (close _V10_Dprint__builtin__apply_D337_k166) (bruijn ##.f.344 1 1)) ((bruijn ##.x.668 9 0) (close _V10_Dprint__builtin__apply_D337_k167) (bruijn ##.f.344 1 1)))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_k166, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_k167, self)})),
      statics->vars[1]);
}
}
static void _V10_Dprint__builtin__apply_D337_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 9 0) (bruijn ##.k.889 2 0) (##string ##.string.1699))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1699.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D337_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.248 6 11) (bruijn ##.k.892 1 0) (bruijn ##.x.347 1 1) (bruijn ##.args.336 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__builtin__apply_D337_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 9 0) (close _V10_Dprint__builtin__apply_D337_k171) (##string ##.string.1695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_k171, self)})),
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D337_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 31 0) (close _V10_Dprint__builtin__apply_D337_k170) (close _V10_Dprint__builtin__apply_D337_lambda35) (bruijn ##.xs.345 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_k170, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_lambda35, self)})),
      statics->vars[2]);
}
static void _V10_Dprint__builtin__apply_D337_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D337_lambda34, got ~D~N"
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
  // ((close _V10_Dprint__builtin__apply_D337_k165) (close _V10_Dprint__builtin__apply_D337_k169))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__builtin__apply_D337_k165, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_k169, self)})));
}
static void _V10_Dprint__closure__apply_D338_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 9 0) (bruijn ##.k.898 2 0) (##string ##.string.1699))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1699.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D338_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.248 6 11) (bruijn ##.k.901 1 0) (bruijn ##.x.356 1 1) (bruijn ##.args.336 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D338_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 9 0) (close _V10_Dprint__closure__apply_D338_k174) (##string ##.string.1695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k174, self)})),
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D338_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 31 0) (close _V10_Dprint__closure__apply_D338_k173) (close _V10_Dprint__closure__apply_D338_lambda37) (bruijn ##.xs.349 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k173, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_lambda37, self)})),
      statics->vars[2]);
}
static void _V10_Dprint__closure__apply_D338_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.916 0 0) (bruijn ##.k.912 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__closure__apply_D338_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 14 0) (bruijn ##.k.917 1 0) (##string ##.string.1700) (bruijn ##.fun.355 2 0) (bruijn ##.x.918 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dprint__closure__apply_D338_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.229 10 2) ((bruijn ##.x.669 13 0) (bruijn ##.k.917 0 0) (##string ##.string.1697) (bruijn ##.fun.355 1 0)) ((bruijn ##.x.653 29 0) (close _V10_Dprint__closure__apply_D338_k180) (bruijn ##.xs.349 6 2)))
if(VDecodeBool(
VGetArg(statics, 10-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k180, self)})),
      VGetArg(statics, 6-1, 2));
}
}
static void _V10_Dprint__closure__apply_D338_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.83.354 1 0))) (##vcore.call-with-values (close _V10_Dprint__closure__apply_D338_k179) (close _V10_Dprint__closure__apply_D338_lambda39) (bruijn ##.kk.80.351 4 1)) ((bruijn ##.k.912 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k179, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_lambda39, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D338_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.83.354 0 0)) ((close _V10_Dprint__closure__apply_D338_k178) (##inline ##vcore.car (bruijn ##.expr.83.354 0 0))) ((bruijn ##.k.912 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D338_k178, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D338_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.913 0 0) ((close _V10_Dprint__closure__apply_D338_k177) (##inline ##vcore.cdr (bruijn ##.f.348 3 1))) ((bruijn ##.k.912 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D338_k177, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D338_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.f.348 2 1)) ((bruijn ##.x.659 19 0) (close _V10_Dprint__closure__apply_D338_k176) 'close (##inline ##vcore.car (bruijn ##.f.348 2 1))) ((bruijn ##.k.912 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k176, self)})),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D338_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.905 2 0) (##string ##.string.1701))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1701.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D338_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 7 11) (close _V10_Dprint__closure__apply_D338_k183) (bruijn ##.f.348 4 1) (bruijn ##.args.336 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k183, self)})),
      statics->up->up->up->vars[1],
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dprint__closure__apply_D338_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.905 3 0) (##string ##.string.1703) (bruijn ##.x.910 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1703.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__closure__apply_D338_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.653 28 0) (close _V10_Dprint__closure__apply_D338_k186) (bruijn ##.xs.349 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k186, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D338_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 7 11) (close _V10_Dprint__closure__apply_D338_k185) (bruijn ##.f.348 4 1) (bruijn ##.args.336 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k185, self)})),
      statics->up->up->up->vars[1],
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dprint__closure__apply_D338_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.229 7 2) ((bruijn ##.x.665 14 0) (close _V10_Dprint__closure__apply_D338_k182) (##string ##.string.1702)) ((bruijn ##.x.665 14 0) (close _V10_Dprint__closure__apply_D338_k184) (##string ##.string.1704)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k182, self)})),
      VEncodePointer(&_V10_Dstring_D1702.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k184, self)})),
      VEncodePointer(&_V10_Dstring_D1704.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__closure__apply_D338_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.903 1 0) (close _V10_Dprint__closure__apply_D338_lambda40) (bruijn ##.kk.80.351 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_lambda40, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__closure__apply_D338_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__closure__apply_D338_k175) (close _V10_Dprint__closure__apply_D338_k181))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D338_k175, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k181, self)})));
}
static void _V10_Dprint__closure__apply_D338_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D338_lambda36, got ~D~N"
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
  // (##vcore.call/cc (close _V10_Dprint__closure__apply_D338_k172) (close _V10_Dprint__closure__apply_D338_lambda38))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_k172, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_lambda38, self)})));
}
static void _V10_Dprint__letrec_D339_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.934 1 0) (##string ##.string.1706))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1706.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D339_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.229 7 2) ((bruijn ##.x.669 10 0) (bruijn ##.k.934 0 0) (##string ##.string.1705) (bruijn ##.n.357 3 1)) ((bruijn ##.x.669 10 0) (close _V10_Dprint__letrec_D339_k190) (##string ##.string.1707) (bruijn ##.n.357 3 1)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1705.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k190, self)})),
      VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
static void _V10_Dprint__letrec_D339_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 37 0) (bruijn ##.k.921 9 0) (##string ##.string.1708))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1708.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D339_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 11 11) (close _V10_Dprint__letrec_D339_k197) (bruijn ##.body.359 8 3) (bruijn ##.args.361 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k197, self)})),
      VGetArg(statics, 8-1, 3),
      statics->up->vars[0]);
}
static void _V10_Dprint__letrec_D339_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 38 0) (bruijn ##.k.928 2 0) (##string ##.string.1709))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1709.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D339_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 12 11) (close _V10_Dprint__letrec_D339_k199) (bruijn ##.x.362 1 1) (bruijn ##.args.361 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k199, self)})),
      statics->vars[1],
      statics->up->up->vars[0]);
}
static void _V10_Dprint__letrec_D339_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__letrec_D339_k198) (##string ##.string.1710) (bruijn ##.i.363 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k198, self)})),
      VEncodePointer(&_V10_Dstring_D1710.sym, VPOINTER_OTHER),
      _var2);
}
static void _V10_Dprint__letrec_D339_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 37 0) (close _V10_Dprint__letrec_D339_k196) (close _V10_Dprint__letrec_D339_lambda42) (bruijn ##.xs.358 7 2) (bruijn ##.x.931 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k196, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_lambda42, self)})),
      VGetArg(statics, 7-1, 2),
      _var0);
}
static void _V10_Dprint__letrec_D339_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 27 0) (close _V10_Dprint__letrec_D339_k195) (bruijn ##.n.357 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k195, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dprint__letrec_D339_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.670 12 0) (bruijn ##.k.932 0 0) (##string ##.string.1711) (bruijn ##.i.364 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__letrec_D339_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.654 27 0) (close _V10_Dprint__letrec_D339_k194) (close _V10_Dprint__letrec_D339_lambda43) (bruijn ##.x.933 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k194, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_lambda43, self)})),
      _var0);
}
static void _V10_Dprint__letrec_D339_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 25 0) (close _V10_Dprint__letrec_D339_k193) (bruijn ##.n.357 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k193, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__letrec_D339_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__letrec_D339_k192) (##string ##.string.1712) (bruijn ##.n.357 3 1) (bruijn ##.n.357 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k192, self)})),
      VEncodePointer(&_V10_Dstring_D1712.sym, VPOINTER_OTHER),
      statics->up->up->vars[1],
      statics->up->up->vars[1]);
}
static void _V10_Dprint__letrec_D339_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__letrec_D339_k189) (close _V10_Dprint__letrec_D339_k191))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__letrec_D339_k189, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k191, self)})));
}
static void _V10_Dprint__letrec_D339_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 29 0) (close _V10_Dprint__letrec_D339_k188) (##string ##.string.1713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k188, self)})),
      VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D339_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D339_lambda41, got ~D~N"
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
  // ((bruijn ##.x.648 28 0) (close _V10_Dprint__letrec_D339_k187) (##string ##.string.1714))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_k187, self)})),
      VEncodePointer(&_V10_Dstring_D1714.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D340_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.949 1 0) (##string ##.string.1706))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1706.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D340_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.229 7 2) ((bruijn ##.x.669 10 0) (bruijn ##.k.949 0 0) (##string ##.string.1705) (bruijn ##.n.366 3 2)) ((bruijn ##.x.669 10 0) (close _V10_Dprint__basic__block_D340_k203) (##string ##.string.1707) (bruijn ##.n.366 3 2)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1705.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k203, self)})),
      VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
}
}
static void _V10_Dprint__basic__block_D340_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 37 0) (bruijn ##.k.936 9 0) (##string ##.string.1708))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1708.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D340_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 11 11) (close _V10_Dprint__basic__block_D340_k210) (bruijn ##.body.369 8 5) (bruijn ##.args.370 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k210, self)})),
      VGetArg(statics, 8-1, 5),
      statics->up->vars[0]);
}
static void _V10_Dprint__basic__block_D340_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 38 0) (bruijn ##.k.943 2 0) (##string ##.string.1709))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1709.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D340_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-basic-expr.247 12 10) (close _V10_Dprint__basic__block_D340_k212) (bruijn ##.x.371 1 1) (bruijn ##.args.370 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k212, self)})),
      statics->vars[1],
      statics->up->up->vars[0]);
}
static void _V10_Dprint__basic__block_D340_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__basic__block_D340_k211) (##string ##.string.1710) (bruijn ##.i.372 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k211, self)})),
      VEncodePointer(&_V10_Dstring_D1710.sym, VPOINTER_OTHER),
      _var2);
}
static void _V10_Dprint__basic__block_D340_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 37 0) (close _V10_Dprint__basic__block_D340_k209) (close _V10_Dprint__basic__block_D340_lambda45) (bruijn ##.vals.368 7 4) (bruijn ##.x.946 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k209, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_lambda45, self)})),
      VGetArg(statics, 7-1, 4),
      _var0);
}
static void _V10_Dprint__basic__block_D340_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 27 0) (close _V10_Dprint__basic__block_D340_k208) (bruijn ##.n.366 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k208, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dprint__basic__block_D340_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.670 12 0) (bruijn ##.k.947 0 0) (##string ##.string.1711) (bruijn ##.i.373 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__basic__block_D340_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.654 27 0) (close _V10_Dprint__basic__block_D340_k207) (close _V10_Dprint__basic__block_D340_lambda46) (bruijn ##.x.948 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k207, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_lambda46, self)})),
      _var0);
}
static void _V10_Dprint__basic__block_D340_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 25 0) (close _V10_Dprint__basic__block_D340_k206) (bruijn ##.n.366 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k206, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dprint__basic__block_D340_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__basic__block_D340_k205) (##string ##.string.1712) (bruijn ##.n.366 3 2) (bruijn ##.n.366 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k205, self)})),
      VEncodePointer(&_V10_Dstring_D1712.sym, VPOINTER_OTHER),
      statics->up->up->vars[2],
      statics->up->up->vars[2]);
}
static void _V10_Dprint__basic__block_D340_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__basic__block_D340_k202) (close _V10_Dprint__basic__block_D340_k204))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__basic__block_D340_k202, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k204, self)})));
}
static void _V10_Dprint__basic__block_D340_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 29 0) (close _V10_Dprint__basic__block_D340_k201) (##string ##.string.1713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k201, self)})),
      VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D340_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D340_lambda44, got ~D~N"
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
  // ((bruijn ##.x.648 28 0) (close _V10_Dprint__basic__block_D340_k200) (##string ##.string.1714))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_k200, self)})),
      VEncodePointer(&_V10_Dstring_D1714.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D341_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.229 5 2) ((bruijn ##.x.669 8 0) (bruijn ##.k.958 0 0) (##string ##.string.1715)) ((bruijn ##.x.669 8 0) (bruijn ##.k.958 0 0) (##string ##.string.1716)))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1715.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__define__global_D341_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.951 6 0) (##string ##.string.1717))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D341_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 8 11) (close _V10_Dprint__define__global_D341_k219) (bruijn ##.x.376 5 3) (bruijn ##.args.336 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D341_k219, self)})),
      VGetArg(statics, 5-1, 3),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dprint__define__global_D341_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 11 0) (close _V10_Dprint__define__global_D341_k218) (##string ##.string.1695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D341_k218, self)})),
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D341_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-literal.243 6 6) (close _V10_Dprint__define__global_D341_k217) (bruijn ##.y.375 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 6)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D341_k217, self)})),
      statics->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D341_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 9 0) (close _V10_Dprint__define__global_D341_k216) (##string ##.string.1695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D341_k216, self)})),
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D341_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 4 11) (close _V10_Dprint__define__global_D341_k215) (bruijn ##.k.374 1 1) (bruijn ##.args.336 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D341_k215, self)})),
      statics->vars[1],
      statics->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D341_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D341_lambda47, got ~D~N"
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
  // ((close _V10_Dprint__define__global_D341_k213) (close _V10_Dprint__define__global_D341_k214))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__define__global_D341_k213, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D341_k214, self)})));
}
static void _V10_Dprint__set_D342_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.981 0 0) (bruijn ##.k.975 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__set_D342_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.229 12 2) ((bruijn ##.x.669 15 0) (bruijn ##.k.987 0 0) (##string ##.string.1718)) ((bruijn ##.x.669 15 0) (bruijn ##.k.987 0 0) (##string ##.string.1719)))
if(VDecodeBool(
VGetArg(statics, 12-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1718.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1719.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__set_D342_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 18 0) (bruijn ##.k.982 4 0) (##string ##.string.1717))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D342_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 13 11) (close _V10_Dprint__set_D342_k230) (bruijn ##.x.380 10 3) (bruijn ##.args.336 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k230, self)})),
      VGetArg(statics, 10-1, 3),
      VGetArg(statics, 12-1, 2));
}
static void _V10_Dprint__set_D342_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__set_D342_k229) (##string ##.string.1720) (##inline ##vcore.car (bruijn ##.expr.88.387 4 0)) (##inline ##vcore.car (bruijn ##.expr.89.389 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k229, self)})),
      VEncodePointer(&_V10_Dstring_D1720.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dprint__set_D342_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 11 11) (close _V10_Dprint__set_D342_k228) (bruijn ##.k.378 8 1) (bruijn ##.args.336 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k228, self)})),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Dprint__set_D342_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__set_D342_k226) (close _V10_Dprint__set_D342_k227))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D342_k226, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k227, self)})));
}
static void _V10_Dprint__set_D342_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.389 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.89.389 0 0))) (##vcore.call-with-values (close _V10_Dprint__set_D342_k225) (close _V10_Dprint__set_D342_lambda50) (bruijn ##.kk.84.382 5 1)) ((bruijn ##.k.975 4 0) #f)) ((bruijn ##.k.975 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k225, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_lambda50, self)})),
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
static void _V10_Dprint__set_D342_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.387 0 0)) ((close _V10_Dprint__set_D342_k224) (##inline ##vcore.cdr (bruijn ##.expr.88.387 0 0))) ((bruijn ##.k.975 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D342_k224, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D342_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.385 0 0)) ((close _V10_Dprint__set_D342_k223) (##inline ##vcore.cdr (bruijn ##.expr.87.385 0 0))) ((bruijn ##.k.975 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D342_k223, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D342_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.976 0 0) ((close _V10_Dprint__set_D342_k222) (##inline ##vcore.cdr (bruijn ##.y.379 3 2))) ((bruijn ##.k.975 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D342_k222, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D342_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.y.379 2 2)) ((bruijn ##.x.659 19 0) (close _V10_Dprint__set_D342_k221) 'bruijn (##inline ##vcore.car (bruijn ##.y.379 2 2))) ((bruijn ##.k.975 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k221, self)})),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D342_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 36 0) (bruijn ##.k.963 0 0) (##string ##.string.1721) (bruijn ##.y.379 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1721.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__set_D342_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.960 3 0) (close _V10_Dprint__set_D342_lambda51) (bruijn ##.kk.84.382 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_lambda51, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dprint__set_D342_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.964 0 0) (close _V10_Dprint__set_D342_k233))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k233, self)})));
}
static void _V10_Dprint__set_D342_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.229 9 2) ((bruijn ##.x.669 12 0) (bruijn ##.k.973 0 0) (##string ##.string.1722)) ((bruijn ##.x.669 12 0) (bruijn ##.k.973 0 0) (##string ##.string.1723)))
if(VDecodeBool(
VGetArg(statics, 9-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1722.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1723.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__set_D342_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 17 0) (bruijn ##.k.965 7 0) (##string ##.string.1717))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D342_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 12 11) (close _V10_Dprint__set_D342_k240) (bruijn ##.x.380 9 3) (bruijn ##.args.336 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k240, self)})),
      VGetArg(statics, 9-1, 3),
      VGetArg(statics, 11-1, 2));
}
static void _V10_Dprint__set_D342_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__set_D342_k239) (##string ##.string.1695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k239, self)})),
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D342_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-literal.243 10 6) (close _V10_Dprint__set_D342_k238) (bruijn ##.y.379 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k238, self)})),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dprint__set_D342_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 13 0) (close _V10_Dprint__set_D342_k237) (##string ##.string.1695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k237, self)})),
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D342_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 8 11) (close _V10_Dprint__set_D342_k236) (bruijn ##.k.378 5 1) (bruijn ##.args.336 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k236, self)})),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dprint__set_D342_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1654) ((##vcore.symbol? (bruijn ##.y.379 4 2))) (if (bruijn ##.reg.1654 0 0) ((close _V10_Dprint__set_D342_k234) (close _V10_Dprint__set_D342_k235)) ((bruijn ##.x.645 35 0) (bruijn ##.k.965 1 0) (##string ##.string.1724))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D342_k234, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k235, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1724.sym, VPOINTER_OTHER));
}
    }
}
static void _V10_Dprint__set_D342_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dprint__set_D342_k232) (close _V10_Dprint__set_D342_lambda52) (bruijn ##.kk.84.382 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k232, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_lambda52, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__set_D342_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__set_D342_k220) (close _V10_Dprint__set_D342_k231))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D342_k220, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_k231, self)})));
}
static void _V10_Dprint__set_D342_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D342_lambda48, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.959 0 0) (close _V10_Dprint__set_D342_lambda49))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_lambda49, self)})));
}
static void _V10_Dprint__inline_D343_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.inline.394 1 0)) ((bruijn ##.x.645 33 0) (bruijn ##.k.1003 0 0) (##string ##.string.1725) (bruijn ##.f.392 2 1)) ((bruijn ##.k.1003 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1725.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D343_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.248 10 11) (bruijn ##.k.997 1 0) (bruijn ##.x.395 1 1) (bruijn ##.args.336 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dprint__inline_D343_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 13 0) (close _V10_Dprint__inline_D343_k247) (##string ##.string.1726))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_k247, self)})),
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D343_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 35 0) (bruijn ##.k.995 1 0) (close _V10_Dprint__inline_D343_lambda54) (##inline ##vcore.cdr (bruijn ##.xs.393 5 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_lambda54, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
}
static void _V10_Dprint__inline_D343_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.393 4 2))) ((bruijn ##.print-expr.248 7 11) (close _V10_Dprint__inline_D343_k246) (##inline ##vcore.car (bruijn ##.xs.393 4 2)) (bruijn ##.args.336 6 2)) ((bruijn ##.k.995 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        statics->up->up->up->vars[2])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_k246, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D343_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.990 4 0) (##string ##.string.1694))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1694.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D343_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D343_k245) (close _V10_Dprint__inline_D343_k248))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D343_k245, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_k248, self)})));
}
static void _V10_Dprint__inline_D343_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 9 0) (close _V10_Dprint__inline_D343_k244) (##string ##.string.1727) (bruijn ##.inline.394 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_k244, self)})),
      VEncodePointer(&_V10_Dstring_D1727.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
static void _V10_Dprint__inline_D343_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D343_k242) (close _V10_Dprint__inline_D343_k243))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D343_k242, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_k243, self)})));
}
static void _V10_Dprint__inline_D343_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D343_lambda53, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.656 20 0) (close _V10_Dprint__inline_D343_k241) (bruijn ##.f.392 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_k241, self)})),
      _var1);
}
static void _V10_Dprint__expr_D248_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1204 0 0) (bruijn ##.k.1199 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.665 15 0) (bruijn ##.k.1205 0 0) (##string ##.string.1728))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D248_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.399 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.31.399 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.399 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k252) (close _V10_Dprint__expr_D248_lambda56) (bruijn ##.kk.28.396 3 1)) ((bruijn ##.k.1199 2 0) #f)) ((bruijn ##.k.1199 2 0) #f)) ((bruijn ##.k.1199 2 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k252, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda56, self)})),
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
static void _V10_Dprint__expr_D248_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1200 0 0) ((close _V10_Dprint__expr_D248_k251) (##inline ##vcore.cdr (bruijn ##.expr.335 4 1))) ((bruijn ##.k.1199 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k251, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 3 1)) ((bruijn ##.x.659 18 0) (close _V10_Dprint__expr_D248_k250) 'quote (##inline ##vcore.car (bruijn ##.expr.335 3 1))) ((bruijn ##.k.1199 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k250, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1192 0 0) (bruijn ##.k.1184 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__expr_D248_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal-string.241 11 4) (bruijn ##.k.1193 0 0) (##inline ##vcore.car (bruijn ##.expr.35.403 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.403 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.403 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.401 3 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k260) (close _V10_Dprint__expr_D248_lambda57) (bruijn ##.kk.28.396 7 1)) ((bruijn ##.k.1184 5 0) #f)) ((bruijn ##.k.1184 5 0) #f)) ((bruijn ##.k.1184 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k260, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda57, self)})),
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
static void _V10_Dprint__expr_D248_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1188 0 0) ((close _V10_Dprint__expr_D248_k259) (##inline ##vcore.cdr (bruijn ##.expr.34.402 1 0))) ((bruijn ##.k.1184 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k259, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.402 0 0)) ((bruijn ##.x.659 22 0) (close _V10_Dprint__expr_D248_k258) '##string (##inline ##vcore.car (bruijn ##.expr.34.402 0 0))) ((bruijn ##.k.1184 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k258, self)})),
      _V10string,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.401 0 0)) ((close _V10_Dprint__expr_D248_k257) (##inline ##vcore.car (bruijn ##.expr.33.401 0 0))) ((bruijn ##.k.1184 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k257, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1185 0 0) ((close _V10_Dprint__expr_D248_k256) (##inline ##vcore.cdr (bruijn ##.expr.335 5 1))) ((bruijn ##.k.1184 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k256, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 4 1)) ((bruijn ##.x.659 19 0) (close _V10_Dprint__expr_D248_k255) 'quote (##inline ##vcore.car (bruijn ##.expr.335 4 1))) ((bruijn ##.k.1184 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k255, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1179 0 0) (bruijn ##.k.1175 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal.243 9 6) (bruijn ##.k.1180 0 0) (##inline ##vcore.car (bruijn ##.expr.37.406 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 6)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.406 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.406 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k265) (close _V10_Dprint__expr_D248_lambda58) (bruijn ##.kk.28.396 5 1)) ((bruijn ##.k.1175 2 0) #f)) ((bruijn ##.k.1175 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k265, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda58, self)})),
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
static void _V10_Dprint__expr_D248_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1176 0 0) ((close _V10_Dprint__expr_D248_k264) (##inline ##vcore.cdr (bruijn ##.expr.335 6 1))) ((bruijn ##.k.1175 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k264, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 5 1)) ((bruijn ##.x.659 20 0) (close _V10_Dprint__expr_D248_k263) 'quote (##inline ##vcore.car (bruijn ##.expr.335 5 1))) ((bruijn ##.k.1175 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k263, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1170 0 0) (bruijn ##.k.1166 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 14 0) (bruijn ##.k.1171 0 0) (##string ##.string.1729) (##inline ##vcore.car (bruijn ##.expr.39.409 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1729.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.409 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.409 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k270) (close _V10_Dprint__expr_D248_lambda59) (bruijn ##.kk.28.396 6 1)) ((bruijn ##.k.1166 2 0) #f)) ((bruijn ##.k.1166 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k270, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda59, self)})),
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
static void _V10_Dprint__expr_D248_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1167 0 0) ((close _V10_Dprint__expr_D248_k269) (##inline ##vcore.cdr (bruijn ##.expr.335 7 1))) ((bruijn ##.k.1166 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k269, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 6 1)) ((bruijn ##.x.659 21 0) (close _V10_Dprint__expr_D248_k268) 'close (##inline ##vcore.car (bruijn ##.expr.335 6 1))) ((bruijn ##.k.1166 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k268, self)})),
      _V0close,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1155 0 0) (bruijn ##.k.1149 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__expr_D248_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.665 25 0) (bruijn ##.k.1156 2 0) (bruijn ##.x.1158 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      statics->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D248_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1162 0 0) ((bruijn ##.x.669 24 0) (bruijn ##.k.1156 5 0) (##string ##.string.1733) (bruijn ##.right.417 6 0)) ((bruijn ##.x.669 24 0) (bruijn ##.k.1156 5 0) (##string ##.string.1734) (bruijn ##.up.415 8 0) (bruijn ##.right.417 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Dprint__expr_D248_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1161 0 0) ((bruijn ##.x.669 23 0) (bruijn ##.k.1156 4 0) (##string ##.string.1732) (bruijn ##.right.417 5 0)) (##vcore.= (close _V10_Dprint__expr_D248_k285) (bruijn ##.up.415 7 0) 4))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k285, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeInt(4l));
}
}
static void _V10_Dprint__expr_D248_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1160 0 0) ((bruijn ##.x.669 22 0) (bruijn ##.k.1156 3 0) (##string ##.string.1731) (bruijn ##.right.417 4 0)) (##vcore.= (close _V10_Dprint__expr_D248_k284) (bruijn ##.up.415 6 0) 3))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k284, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeInt(3l));
}
}
static void _V10_Dprint__expr_D248_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1159 0 0) ((bruijn ##.x.669 21 0) (bruijn ##.k.1156 2 0) (##string ##.string.1730) (bruijn ##.right.417 3 0)) (##vcore.= (close _V10_Dprint__expr_D248_k283) (bruijn ##.up.415 5 0) 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1730.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k283, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeInt(2l));
}
}
static void _V10_Dprint__expr_D248_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1157 0 0) ((bruijn ##.x.657 32 0) (close _V10_Dprint__expr_D248_k281) (bruijn ##.args.336 15 2) (bruijn ##.right.417 2 0)) (##vcore.= (close _V10_Dprint__expr_D248_k282) (bruijn ##.up.415 4 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k281, self)})),
      VGetArg(statics, 15-1, 2),
      statics->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k282, self)})),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
}
}
static void _V10_Dprint__expr_D248_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.= (close _V10_Dprint__expr_D248_k280) (bruijn ##.up.415 3 0) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k280, self)})),
      statics->up->up->vars[0],
      VEncodeInt(0l));
}
static void _V10_Dprint__expr_D248_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.43.416 1 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k279) (close _V10_Dprint__expr_D248_lambda60) (bruijn ##.kk.28.396 11 1)) ((bruijn ##.k.1149 6 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k279, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda60, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.416 0 0)) ((close _V10_Dprint__expr_D248_k278) (##inline ##vcore.car (bruijn ##.expr.43.416 0 0))) ((bruijn ##.k.1149 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k278, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k277) (##inline ##vcore.cdr (bruijn ##.expr.42.414 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k277, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.414 0 0)) ((close _V10_Dprint__expr_D248_k276) (##inline ##vcore.car (bruijn ##.expr.42.414 0 0))) ((bruijn ##.k.1149 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k276, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.412 0 0)) ((close _V10_Dprint__expr_D248_k275) (##inline ##vcore.cdr (bruijn ##.expr.41.412 0 0))) ((bruijn ##.k.1149 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k275, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1150 0 0) ((close _V10_Dprint__expr_D248_k274) (##inline ##vcore.cdr (bruijn ##.expr.335 8 1))) ((bruijn ##.k.1149 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k274, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 7 1)) ((bruijn ##.x.659 22 0) (close _V10_Dprint__expr_D248_k273) 'bruijn (##inline ##vcore.car (bruijn ##.expr.335 7 1))) ((bruijn ##.k.1149 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k273, self)})),
      _V0bruijn,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1138 0 0) (bruijn ##.k.1132 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D248_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 45 0) (bruijn ##.k.1139 6 0) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D248_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 19 11) (close _V10_Dprint__expr_D248_k298) (##inline ##vcore.car (bruijn ##.expr.47.423 6 0)) (bruijn ##.args.336 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k298, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      VGetArg(statics, 18-1, 2));
}
static void _V10_Dprint__expr_D248_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 43 0) (close _V10_Dprint__expr_D248_k297) (##string ##.string.1736))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k297, self)})),
      VEncodePointer(&_V10_Dstring_D1736.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D248_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 17 11) (close _V10_Dprint__expr_D248_k296) (##inline ##vcore.car (bruijn ##.expr.46.421 5 0)) (bruijn ##.args.336 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k296, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
      VGetArg(statics, 16-1, 2));
}
static void _V10_Dprint__expr_D248_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 41 0) (close _V10_Dprint__expr_D248_k295) (##string ##.string.1737))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k295, self)})),
      VEncodePointer(&_V10_Dstring_D1737.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D248_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 15 11) (close _V10_Dprint__expr_D248_k294) (##inline ##vcore.car (bruijn ##.expr.45.419 4 0)) (bruijn ##.args.336 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k294, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VGetArg(statics, 14-1, 2));
}
static void _V10_Dprint__expr_D248_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 39 0) (close _V10_Dprint__expr_D248_k293) (##string ##.string.1738))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k293, self)})),
      VEncodePointer(&_V10_Dstring_D1738.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D248_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.423 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.423 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k292) (close _V10_Dprint__expr_D248_lambda61) (bruijn ##.kk.28.396 10 1)) ((bruijn ##.k.1132 4 0) #f)) ((bruijn ##.k.1132 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k292, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda61, self)})),
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
static void _V10_Dprint__expr_D248_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.421 0 0)) ((close _V10_Dprint__expr_D248_k291) (##inline ##vcore.cdr (bruijn ##.expr.46.421 0 0))) ((bruijn ##.k.1132 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k291, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.419 0 0)) ((close _V10_Dprint__expr_D248_k290) (##inline ##vcore.cdr (bruijn ##.expr.45.419 0 0))) ((bruijn ##.k.1132 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k290, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1133 0 0) ((close _V10_Dprint__expr_D248_k289) (##inline ##vcore.cdr (bruijn ##.expr.335 9 1))) ((bruijn ##.k.1132 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k289, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 8 1)) ((bruijn ##.x.659 23 0) (close _V10_Dprint__expr_D248_k288) 'if (##inline ##vcore.car (bruijn ##.expr.335 8 1))) ((bruijn ##.k.1132 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k288, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1127 0 0) (bruijn ##.k.1121 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D248_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-set.342 13 5) (bruijn ##.k.1128 0 0) (##inline ##vcore.car (bruijn ##.expr.49.426 3 0)) (##inline ##vcore.car (bruijn ##.expr.50.428 2 0)) (##inline ##vcore.car (bruijn ##.expr.51.430 1 0)) #f)
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
static void _V10_Dprint__expr_D248_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.430 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.51.430 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k305) (close _V10_Dprint__expr_D248_lambda62) (bruijn ##.kk.28.396 11 1)) ((bruijn ##.k.1121 4 0) #f)) ((bruijn ##.k.1121 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k305, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda62, self)})),
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
static void _V10_Dprint__expr_D248_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.428 0 0)) ((close _V10_Dprint__expr_D248_k304) (##inline ##vcore.cdr (bruijn ##.expr.50.428 0 0))) ((bruijn ##.k.1121 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k304, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.426 0 0)) ((close _V10_Dprint__expr_D248_k303) (##inline ##vcore.cdr (bruijn ##.expr.49.426 0 0))) ((bruijn ##.k.1121 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k303, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1122 0 0) ((close _V10_Dprint__expr_D248_k302) (##inline ##vcore.cdr (bruijn ##.expr.335 10 1))) ((bruijn ##.k.1121 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k302, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 9 1)) ((bruijn ##.x.659 24 0) (close _V10_Dprint__expr_D248_k301) 'set! (##inline ##vcore.car (bruijn ##.expr.335 9 1))) ((bruijn ##.k.1121 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k301, self)})),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1116 0 0) (bruijn ##.k.1110 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D248_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-define-global.341 14 4) (bruijn ##.k.1117 0 0) (##inline ##vcore.car (bruijn ##.expr.53.433 3 0)) (##inline ##vcore.car (bruijn ##.expr.54.435 2 0)) (##inline ##vcore.car (bruijn ##.expr.55.437 1 0)) #f)
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
static void _V10_Dprint__expr_D248_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.437 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.55.437 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k312) (close _V10_Dprint__expr_D248_lambda63) (bruijn ##.kk.28.396 12 1)) ((bruijn ##.k.1110 4 0) #f)) ((bruijn ##.k.1110 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k312, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda63, self)})),
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
static void _V10_Dprint__expr_D248_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.435 0 0)) ((close _V10_Dprint__expr_D248_k311) (##inline ##vcore.cdr (bruijn ##.expr.54.435 0 0))) ((bruijn ##.k.1110 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k311, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.433 0 0)) ((close _V10_Dprint__expr_D248_k310) (##inline ##vcore.cdr (bruijn ##.expr.53.433 0 0))) ((bruijn ##.k.1110 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k310, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1111 0 0) ((close _V10_Dprint__expr_D248_k309) (##inline ##vcore.cdr (bruijn ##.expr.335 11 1))) ((bruijn ##.k.1110 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k309, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 10 1)) ((bruijn ##.x.659 25 0) (close _V10_Dprint__expr_D248_k308) 'define (##inline ##vcore.car (bruijn ##.expr.335 10 1))) ((bruijn ##.k.1110 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k308, self)})),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1106 0 0) (bruijn ##.k.1103 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-inline.343 13 6) (bruijn ##.k.1107 0 0) (##inline ##vcore.car (bruijn ##.expr.57.440 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.57.440 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 3,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.440 0 0)) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k317) (close _V10_Dprint__expr_D248_lambda64) (bruijn ##.kk.28.396 11 1)) ((bruijn ##.k.1103 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k317, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda64, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1104 0 0) ((close _V10_Dprint__expr_D248_k316) (##inline ##vcore.cdr (bruijn ##.expr.335 12 1))) ((bruijn ##.k.1103 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k316, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 11 1)) ((bruijn ##.x.659 26 0) (close _V10_Dprint__expr_D248_k315) '##inline (##inline ##vcore.car (bruijn ##.expr.335 11 1))) ((bruijn ##.k.1103 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k315, self)})),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1098 0 0) (bruijn ##.k.1094 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal-string.241 16 4) (bruijn ##.k.1099 0 0) (##inline ##vcore.car (bruijn ##.expr.59.444 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.444 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.59.444 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k322) (close _V10_Dprint__expr_D248_lambda65) (bruijn ##.kk.28.396 12 1)) ((bruijn ##.k.1094 2 0) #f)) ((bruijn ##.k.1094 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k322, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda65, self)})),
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
static void _V10_Dprint__expr_D248_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1095 0 0) ((close _V10_Dprint__expr_D248_k321) (##inline ##vcore.cdr (bruijn ##.expr.335 13 1))) ((bruijn ##.k.1094 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k321, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 12 1)) ((bruijn ##.x.659 27 0) (close _V10_Dprint__expr_D248_k320) '##string (##inline ##vcore.car (bruijn ##.expr.335 12 1))) ((bruijn ##.k.1094 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k320, self)})),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1089 0 0) (bruijn ##.k.1085 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-intrinsic.242 17 5) (bruijn ##.k.1090 0 0) (##inline ##vcore.car (bruijn ##.expr.61.447 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 5)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.447 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.61.447 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k327) (close _V10_Dprint__expr_D248_lambda66) (bruijn ##.kk.28.396 13 1)) ((bruijn ##.k.1085 2 0) #f)) ((bruijn ##.k.1085 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k327, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda66, self)})),
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
static void _V10_Dprint__expr_D248_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1086 0 0) ((close _V10_Dprint__expr_D248_k326) (##inline ##vcore.cdr (bruijn ##.expr.335 14 1))) ((bruijn ##.k.1085 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k326, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 13 1)) ((bruijn ##.x.659 28 0) (close _V10_Dprint__expr_D248_k325) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.335 13 1))) ((bruijn ##.k.1085 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k325, self)})),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1080 0 0) (bruijn ##.k.1076 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 22 0) (bruijn ##.k.1081 0 0) (##string ##.string.1739) (##inline ##vcore.car (bruijn ##.expr.63.450 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1739.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D248_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.450 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.63.450 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k332) (close _V10_Dprint__expr_D248_lambda67) (bruijn ##.kk.28.396 14 1)) ((bruijn ##.k.1076 2 0) #f)) ((bruijn ##.k.1076 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k332, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda67, self)})),
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
static void _V10_Dprint__expr_D248_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1077 0 0) ((close _V10_Dprint__expr_D248_k331) (##inline ##vcore.cdr (bruijn ##.expr.335 15 1))) ((bruijn ##.k.1076 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k331, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 14 1)) ((bruijn ##.x.659 29 0) (close _V10_Dprint__expr_D248_k330) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.335 14 1))) ((bruijn ##.k.1076 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k330, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1071 0 0) (bruijn ##.k.1065 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D248_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-letrec.339 19 2) (bruijn ##.k.1072 0 0) (##inline ##vcore.car (bruijn ##.expr.65.453 3 0)) (##inline ##vcore.car (bruijn ##.expr.66.455 2 0)) (##inline ##vcore.car (bruijn ##.expr.67.457 1 0)) (bruijn ##.args.336 20 2))
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
static void _V10_Dprint__expr_D248_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.457 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.457 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k339) (close _V10_Dprint__expr_D248_lambda68) (bruijn ##.kk.28.396 17 1)) ((bruijn ##.k.1065 4 0) #f)) ((bruijn ##.k.1065 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k339, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda68, self)})),
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
static void _V10_Dprint__expr_D248_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.455 0 0)) ((close _V10_Dprint__expr_D248_k338) (##inline ##vcore.cdr (bruijn ##.expr.66.455 0 0))) ((bruijn ##.k.1065 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k338, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.453 0 0)) ((close _V10_Dprint__expr_D248_k337) (##inline ##vcore.cdr (bruijn ##.expr.65.453 0 0))) ((bruijn ##.k.1065 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k337, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1066 0 0) ((close _V10_Dprint__expr_D248_k336) (##inline ##vcore.cdr (bruijn ##.expr.335 16 1))) ((bruijn ##.k.1065 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k336, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 15 1)) ((bruijn ##.x.659 30 0) (close _V10_Dprint__expr_D248_k335) 'letrec (##inline ##vcore.car (bruijn ##.expr.335 15 1))) ((bruijn ##.k.1065 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k335, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1060 0 0) (bruijn ##.k.1052 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__expr_D248_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-basic-block.340 22 3) (bruijn ##.k.1061 0 0) (##inline ##vcore.car (bruijn ##.expr.69.460 5 0)) (##inline ##vcore.car (bruijn ##.expr.70.462 4 0)) (##inline ##vcore.car (bruijn ##.expr.71.464 3 0)) (##inline ##vcore.car (bruijn ##.expr.72.466 2 0)) (##inline ##vcore.car (bruijn ##.expr.73.468 1 0)))
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
static void _V10_Dprint__expr_D248_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.468 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.73.468 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k348) (close _V10_Dprint__expr_D248_lambda69) (bruijn ##.kk.28.396 20 1)) ((bruijn ##.k.1052 6 0) #f)) ((bruijn ##.k.1052 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k348, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda69, self)})),
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
static void _V10_Dprint__expr_D248_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.466 0 0)) ((close _V10_Dprint__expr_D248_k347) (##inline ##vcore.cdr (bruijn ##.expr.72.466 0 0))) ((bruijn ##.k.1052 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k347, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.464 0 0)) ((close _V10_Dprint__expr_D248_k346) (##inline ##vcore.cdr (bruijn ##.expr.71.464 0 0))) ((bruijn ##.k.1052 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k346, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.462 0 0)) ((close _V10_Dprint__expr_D248_k345) (##inline ##vcore.cdr (bruijn ##.expr.70.462 0 0))) ((bruijn ##.k.1052 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k345, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.460 0 0)) ((close _V10_Dprint__expr_D248_k344) (##inline ##vcore.cdr (bruijn ##.expr.69.460 0 0))) ((bruijn ##.k.1052 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k344, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1053 0 0) ((close _V10_Dprint__expr_D248_k343) (##inline ##vcore.cdr (bruijn ##.expr.335 17 1))) ((bruijn ##.k.1052 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k343, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 16 1)) ((bruijn ##.x.659 31 0) (close _V10_Dprint__expr_D248_k342) 'basic-block (##inline ##vcore.car (bruijn ##.expr.335 16 1))) ((bruijn ##.k.1052 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 16-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k342, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D474_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.77.473 4 1) (bruijn ##.k.1038 1 0) (bruijn ##.expr.79.475 2 1) (bruijn ##.x.1039 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D474_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.79.475 1 1))) ((bruijn ##.x.649 48 0) (close _V10_Dloop_D474_k353) (bruijn ##.xs.76.476 1 2)) ((bruijn ##.k.1038 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D474_k353, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D474_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.77.473 7 1) (bruijn ##.k.1032 2 0) (bruijn ##.expr.79.475 5 1) (bruijn ##.x.1034 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D474_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.649 51 0) (close _V10_Dloop_D474_k356) (bruijn ##.xs.76.476 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D474_k356, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D474_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.78.477 0 1) (close _V10_Dloop_D474_k355) (##inline ##vcore.cdr (bruijn ##.expr.79.475 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.79.475 3 1)) (bruijn ##.xs.76.476 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D474_k355, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D474_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1031 0 0) (close _V10_Dloop_D474_lambda74))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D474_lambda74, self)})));
}
static void _V10_Dloop_D474_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1029 1 0) (close _V10_Dloop_D474_lambda73) (bruijn ##.loop.474 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D474_lambda73, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D474_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D474_lambda72, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D474_k352) (close _V10_Dloop_D474_k354))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D474_k352, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D474_k354, self)})));
}
static void _V10_Dprint__expr_D248_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D474_lambda72)) ((bruijn ##.loop.474 0 0) (bruijn ##.k.1028 1 0) (##inline ##vcore.cdr (bruijn ##.expr.335 21 1)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D474_lambda72, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 21-1, 1)),
      VNULL);
    }
}
static void _V10_Dprint__expr_D248_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1027 0 0) (close _V10_Dprint__expr_D248_lambda71))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda71, self)})));
}
static void _V10_Dprint__expr_D248_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1043 0 0) (bruijn ##.k.1041 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dprint__expr_D248_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.f.471 4 0)) (##vcore.eqv? (bruijn ##.k.1049 0 0) (##inline ##vcore.car (bruijn ##.f.471 4 0)) '##intrinsic) ((bruijn ##.k.1049 0 0) #f))
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
static void _V10_Dprint__expr_D248_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-builtin-apply.337 22 0) (bruijn ##.k.1044 3 0) (bruijn ##.x.1047 0 0) (bruijn ##.xs.480 4 2) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[2],
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D248_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1046 0 0) ((bruijn ##.x.658 38 0) (close _V10_Dprint__expr_D248_k361) (bruijn ##.f.471 4 0)) ((bruijn ##.print-closure-apply.338 21 1) (bruijn ##.k.1044 2 0) (bruijn ##.f.471 4 0) (bruijn ##.xs.480 3 2) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k361, self)})),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[0],
      statics->up->up->vars[2],
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1045 0 0) ((bruijn ##.print-builtin-apply.337 20 0) (bruijn ##.k.1044 1 0) (bruijn ##.f.471 3 0) (bruijn ##.xs.480 2 2) #f) ((close _V10_Dprint__expr_D248_k359) (close _V10_Dprint__expr_D248_k360)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      statics->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[2],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k359, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k360, self)})));
}
}
static void _V10_Dprint__expr_D248_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.668 26 0) (close _V10_Dprint__expr_D248_k358) (bruijn ##.f.471 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k358, self)})),
      statics->up->vars[0]);
}
static void _V10_Dprint__expr_D248_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda75, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.479 0 1)) (##vcore.call-with-values (close _V10_Dprint__expr_D248_k357) (close _V10_Dprint__expr_D248_lambda76) (bruijn ##.kk.28.396 17 1)) ((bruijn ##.k.1041 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k357, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda76, self)})),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1026 1 0) (close _V10_Dprint__expr_D248_lambda70) (close _V10_Dprint__expr_D248_lambda75))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda70, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda75, self)})));
}
static void _V10_Dprint__expr_D248_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.335 17 1)) ((close _V10_Dprint__expr_D248_k351) (##inline ##vcore.car (bruijn ##.expr.335 17 1))) ((bruijn ##.k.1026 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 17-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k351, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D248_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 49 0) (bruijn ##.k.1021 0 0) (##string ##.string.1740) (bruijn ##.expr.335 20 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1740.sym, VPOINTER_OTHER),
      VGetArg(statics, 20-1, 1));
}
static void _V10_Dprint__expr_D248_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1004 17 0) (close _V10_Dprint__expr_D248_lambda77) (bruijn ##.kk.28.396 17 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 17-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda77, self)})),
      VGetArg(statics, 17-1, 1));
}
static void _V10_Dprint__expr_D248_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1022 0 0) (close _V10_Dprint__expr_D248_k364))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k364, self)})));
}
static void _V10_Dprint__expr_D248_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1655) ((##vcore.symbol? (bruijn ##.expr.335 19 1))) (if (bruijn ##.reg.1655 0 0) ((bruijn ##.print-global.237 20 0) (bruijn ##.k.1023 1 0) (bruijn ##.expr.335 19 1)) ((bruijn ##.print-literal.243 20 6) (bruijn ##.k.1023 1 0) (bruijn ##.expr.335 19 1))))
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
static void _V10_Dprint__expr_D248_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dprint__expr_D248_k363) (close _V10_Dprint__expr_D248_lambda78) (bruijn ##.kk.28.396 15 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k363, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda78, self)})),
      VGetArg(statics, 15-1, 1));
}
static void _V10_Dprint__expr_D248_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k350) (close _V10_Dprint__expr_D248_k362))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k350, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k362, self)})));
}
static void _V10_Dprint__expr_D248_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k341) (close _V10_Dprint__expr_D248_k349))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k341, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k349, self)})));
}
static void _V10_Dprint__expr_D248_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k334) (close _V10_Dprint__expr_D248_k340))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k334, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k340, self)})));
}
static void _V10_Dprint__expr_D248_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k329) (close _V10_Dprint__expr_D248_k333))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k329, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k333, self)})));
}
static void _V10_Dprint__expr_D248_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k324) (close _V10_Dprint__expr_D248_k328))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k324, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k328, self)})));
}
static void _V10_Dprint__expr_D248_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k319) (close _V10_Dprint__expr_D248_k323))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k319, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k323, self)})));
}
static void _V10_Dprint__expr_D248_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k314) (close _V10_Dprint__expr_D248_k318))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k314, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k318, self)})));
}
static void _V10_Dprint__expr_D248_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k307) (close _V10_Dprint__expr_D248_k313))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k307, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k313, self)})));
}
static void _V10_Dprint__expr_D248_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k300) (close _V10_Dprint__expr_D248_k306))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k300, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k306, self)})));
}
static void _V10_Dprint__expr_D248_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k287) (close _V10_Dprint__expr_D248_k299))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k287, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k299, self)})));
}
static void _V10_Dprint__expr_D248_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k272) (close _V10_Dprint__expr_D248_k286))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k272, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k286, self)})));
}
static void _V10_Dprint__expr_D248_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k267) (close _V10_Dprint__expr_D248_k271))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k267, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k271, self)})));
}
static void _V10_Dprint__expr_D248_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k262) (close _V10_Dprint__expr_D248_k266))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k262, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k266, self)})));
}
static void _V10_Dprint__expr_D248_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D248_k254) (close _V10_Dprint__expr_D248_k261))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k254, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k261, self)})));
}
static void _V10_Dprint__expr_D248_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__expr_D248_k249) (close _V10_Dprint__expr_D248_k253))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D248_k249, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_k253, self)})));
}
static void _V10_Dprint__expr_D248_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D248_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 7 ((close _V10_Dprint__builtin__apply_D337_lambda34) (close _V10_Dprint__closure__apply_D338_lambda36) (close _V10_Dprint__letrec_D339_lambda41) (close _V10_Dprint__basic__block_D340_lambda44) (close _V10_Dprint__define__global_D341_lambda47) (close _V10_Dprint__set_D342_lambda48) (close _V10_Dprint__inline_D343_lambda53)) (##vcore.call/cc (bruijn ##.k.888 1 0) (close _V10_Dprint__expr_D248_lambda55)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D337_lambda34, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D338_lambda36, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D339_lambda41, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D340_lambda44, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D341_lambda47, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D342_lambda48, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D343_lambda53, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda55, self)})));
    }
}
static void _V10_Dgen__args_D488_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D488_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.670 8 0) (bruijn ##.k.1211 0 0) (##string ##.string.1741) (bruijn ##.e.490 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1741.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dgen__args_D488_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D488_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.654 23 0) (bruijn ##.k.1210 1 0) (close _V10_Dgen__args_D488_lambda81) (bruijn ##.x.1212 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D488_lambda81, self)})),
      _var0);
}
static void _V10_Dgen__args_D488_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D488_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.655 21 0) (close _V10_Dgen__args_D488_k365) (bruijn ##.num.489 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D488_k365, self)})),
      _var1);
}
static void _V10_Dprint__fun__single_D249_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.needs-used?.487 3 6) ((bruijn ##.x.669 8 0) (bruijn ##.k.1270 0 0) (##string ##.string.1742)) ((bruijn ##.k.1270 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[6])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1742.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D249_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.485 5 4) ((bruijn ##.k.1264 0 0) (##string ##.string.1743)) ((bruijn ##.k.1264 0 0) (##string ##.string.1744)))
if(VDecodeBool(
VGetArg(statics, 5-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1743.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__fun__single_D249_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1259 3 0) (##string ##.string.1745))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1745.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1262 0 0) (##string ##.string.1746) (bruijn ##.arg.492 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1746.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__fun__single_D249_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 34 0) (close _V10_Dprint__fun__single_D249_k373) (close _V10_Dprint__fun__single_D249_lambda82) (bruijn ##.args.491 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k373, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_lambda82, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__single_D249_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__fun__single_D249_k372) (##string ##.string.1747) (bruijn ##.x.1263 0 0) (bruijn ##.name.482 5 1) (bruijn ##.name.482 5 1) (bruijn ##.num.484 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 6,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k372, self)})),
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 3));
}
static void _V10_Dprint__fun__single_D249_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.485 7 4) ((bruijn ##.x.669 12 0) (bruijn ##.k.1268 0 0) (##string ##.string.1748)) ((bruijn ##.k.1268 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 7-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1748.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D249_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1259 3 0) (##string ##.string.1749))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1749.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k376) (close _V10_Dprint__fun__single_D249_k377))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k376, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k377, self)})));
}
static void _V10_Dprint__fun__single_D249_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.1269 0 0) (##string ##.string.1750) (bruijn ##.arg.493 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1750.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__fun__single_D249_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 33 0) (close _V10_Dprint__fun__single_D249_k375) (close _V10_Dprint__fun__single_D249_lambda83) (bruijn ##.args.491 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k375, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_lambda83, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dprint__fun__single_D249_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.229 6 2) ((close _V10_Dprint__fun__single_D249_k370) (close _V10_Dprint__fun__single_D249_k371)) ((bruijn ##.x.669 9 0) (close _V10_Dprint__fun__single_D249_k374) (##string ##.string.1751) (bruijn ##.name.482 4 1)))
if(VDecodeBool(
VGetArg(statics, 6-1, 2))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k370, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k371, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k374, self)})),
      VEncodePointer(&_V10_Dstring_D1751.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
}
static void _V10_Dprint__fun__single_D249_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.1257 1 0) (##string ##.string.1752))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1752.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.230 7 3) ((bruijn ##.x.669 10 0) (close _V10_Dprint__fun__single_D249_k380) (##string ##.string.1753) (bruijn ##.name.482 5 1)) ((bruijn ##.k.1257 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 7-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k380, self)})),
      VEncodePointer(&_V10_Dstring_D1753.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D249_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.purec?.229 8 2)) ((bruijn ##.k.1256 0 0) (bruijn ##.check-args?.483 6 2)) ((bruijn ##.k.1256 0 0) #f))
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
static void _V10_Dprint__fun__single_D249_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 16 0) (bruijn ##.k.1246 4 0) (##string ##.string.1754))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1754.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__single_D249_k388) (##string ##.string.1755))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k388, self)})),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__single_D249_k387) (##string ##.string.1756) (bruijn ##.num.484 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k387, self)})),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dprint__fun__single_D249_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 13 0) (close _V10_Dprint__fun__single_D249_k386) (##string ##.string.1757) (bruijn ##.name.482 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k386, self)})),
      VEncodePointer(&_V10_Dstring_D1757.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dprint__fun__single_D249_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 16 0) (bruijn ##.k.1246 4 0) (##string ##.string.1754))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1754.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__single_D249_k392) (##string ##.string.1755))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k392, self)})),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__single_D249_k391) (##string ##.string.1759) (bruijn ##.num.484 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k391, self)})),
      VEncodePointer(&_V10_Dstring_D1759.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dprint__fun__single_D249_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 13 0) (close _V10_Dprint__fun__single_D249_k390) (##string ##.string.1757) (bruijn ##.name.482 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k390, self)})),
      VEncodePointer(&_V10_Dstring_D1757.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dprint__fun__single_D249_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1245 1 0) (if (bruijn ##.variadic?.485 7 4) ((bruijn ##.x.669 12 0) (close _V10_Dprint__fun__single_D249_k385) (##string ##.string.1758) (bruijn ##.num.484 7 3)) ((bruijn ##.x.669 12 0) (close _V10_Dprint__fun__single_D249_k389) (##string ##.string.1760) (bruijn ##.num.484 7 3))) ((bruijn ##.k.1246 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
if(VDecodeBool(
VGetArg(statics, 7-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k385, self)})),
      VEncodePointer(&_V10_Dstring_D1758.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k389, self)})),
      VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 3));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D249_k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 15 0) (bruijn ##.k.1237 2 0) (##string ##.string.1761) (bruijn ##.num.484 10 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1761.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 3));
}
static void _V10_Dprint__fun__single_D249_k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__single_D249_k396) (##string ##.string.1762) (bruijn ##.num.484 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k396, self)})),
      VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dprint__fun__single_D249_k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1242 1 0) ((bruijn ##.k.1243 0 0) (##string ##.string.1764)) (basic-block 1 1 (##.reg.1658) ((##vcore.- (bruijn ##.num.484 12 3) 1)) ((bruijn ##.x.657 29 0) (bruijn ##.k.1243 1 0) (bruijn ##.args.491 10 0) (bruijn ##.reg.1658 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1764.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 12-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      statics->vars[0],
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
}
static void _V10_Dprint__fun__single_D249_k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 16 0) (bruijn ##.k.1237 3 0) (##string ##.string.1765) (bruijn ##.num.484 11 3) (bruijn ##.x.1241 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 3),
      _var0);
}
static void _V10_Dprint__fun__single_D249_k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k399) (close _V10_Dprint__fun__single_D249_k400))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k399, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k400, self)})));
}
static void _V10_Dprint__fun__single_D249_k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.= (close _V10_Dprint__fun__single_D249_k398) (bruijn ##.num.484 9 3) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k398, self)})),
      VGetArg(statics, 9-1, 3),
      VEncodeInt(0l));
}
static void _V10_Dprint__fun__single_D249_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.485 8 4) (if (bruijn ##.purec?.229 10 2) ((bruijn ##.x.669 13 0) (close _V10_Dprint__fun__single_D249_k395) (##string ##.string.1763)) ((bruijn ##.x.669 13 0) (close _V10_Dprint__fun__single_D249_k397) (##string ##.string.1763))) ((bruijn ##.k.1237 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 4))) {
if(VDecodeBool(
VGetArg(statics, 10-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k395, self)})),
      VEncodePointer(&_V10_Dstring_D1763.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k397, self)})),
      VEncodePointer(&_V10_Dstring_D1763.sym, VPOINTER_OTHER));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D249_k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.purec?.229 11 2)) ((bruijn ##.closes?.246 10 9) (bruijn ##.k.1236 0 0) (bruijn ##.body.486 9 5)) ((bruijn ##.k.1236 0 0) #f))
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
static void _V10_Dprint__fun__single_D249_k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.485 11 4) (basic-block 1 1 (##.reg.1657) ((##vcore.+ (bruijn ##.num.484 12 3) 1)) ((bruijn ##.k.1234 1 0) (bruijn ##.reg.1657 0 0))) ((bruijn ##.k.1234 0 0) (bruijn ##.num.484 11 3)))
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
static void _V10_Dprint__fun__single_D249_k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.485 14 4) (basic-block 1 1 (##.reg.1656) ((##vcore.+ (bruijn ##.num.484 15 3) 1)) ((bruijn ##.k.1232 1 0) (bruijn ##.reg.1656 0 0))) ((bruijn ##.k.1232 0 0) (bruijn ##.num.484 14 3)))
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
static void _V10_Dprint__fun__single_D249_k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.485 17 4) ((bruijn ##.x.669 22 0) (bruijn ##.k.1225 7 0) (##string ##.string.1766) (bruijn ##.num.484 17 3)) ((bruijn ##.k.1225 7 0) #f))
if(VDecodeBool(
VGetArg(statics, 17-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1766.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D249_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_lambda84, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.669 22 0) (bruijn ##.k.1230 0 0) (##string ##.string.1767) (bruijn ##.i.495 0 1) (bruijn ##.arg.496 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1767.sym, VPOINTER_OTHER),
      _var1,
      _var2);
}
static void _V10_Dprint__fun__single_D249_k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 44 0) (close _V10_Dprint__fun__single_D249_k413) (close _V10_Dprint__fun__single_D249_lambda84) (bruijn ##.x.1231 0 0) (bruijn ##.args.491 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k413, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_lambda84, self)})),
      _var0,
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dprint__fun__single_D249_k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 34 0) (close _V10_Dprint__fun__single_D249_k412) (bruijn ##.num.484 15 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k412, self)})),
      VGetArg(statics, 15-1, 3));
}
static void _V10_Dprint__fun__single_D249_k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 19 0) (close _V10_Dprint__fun__single_D249_k411) (##string ##.string.1768) (bruijn ##.nargs.494 0 0) (bruijn ##.nargs.494 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k411, self)})),
      VEncodePointer(&_V10_Dstring_D1768.sym, VPOINTER_OTHER),
      _var0,
      _var0);
}
static void _V10_Dprint__fun__single_D249_k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k409) (close _V10_Dprint__fun__single_D249_k410))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k409, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k410, self)})));
}
static void _V10_Dprint__fun__single_D249_k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 17 0) (close _V10_Dprint__fun__single_D249_k408) (##string ##.string.1769))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k408, self)})),
      VEncodePointer(&_V10_Dstring_D1769.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__fun__single_D249_k407) (##string ##.string.1770) (bruijn ##.x.1233 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k407, self)})),
      VEncodePointer(&_V10_Dstring_D1770.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__fun__single_D249_k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1224 1 0) ((close _V10_Dprint__fun__single_D249_k405) (close _V10_Dprint__fun__single_D249_k406)) ((bruijn ##.k.1225 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k405, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k406, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D249_k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.485 12 4) ((bruijn ##.x.652 34 0) (bruijn ##.k.1222 0 0) (bruijn ##.args.491 10 0) (##inline ##vcore.qcons '(##string ##.string.1771) '())) ((bruijn ##.k.1222 0 0) (bruijn ##.args.491 10 0)))
if(VDecodeBool(
VGetArg(statics, 12-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VGetArg(statics, 10-1, 0),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1771.sym, VPOINTER_OTHER),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
}
static void _V10_Dprint__fun__single_D249_k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 18 0) (bruijn ##.k.1209 13 0) (##string ##.string.1690))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      VGetArg(statics, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D249_k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 13 11) (close _V10_Dprint__fun__single_D249_k418) (bruijn ##.body.486 12 5) (bruijn ##.x.1221 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k418, self)})),
      VGetArg(statics, 12-1, 5),
      _var0);
}
static void _V10_Dprint__fun__single_D249_k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k416) (close _V10_Dprint__fun__single_D249_k417))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k416, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k417, self)})));
}
static void _V10_Dprint__fun__single_D249_k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__single_D249_k415) (##string ##.string.1772) (bruijn ##.body.486 10 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k415, self)})),
      VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 5));
}
static void _V10_Dprint__fun__single_D249_k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k404) (close _V10_Dprint__fun__single_D249_k414))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k404, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k414, self)})));
}
static void _V10_Dprint__fun__single_D249_k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k402) (close _V10_Dprint__fun__single_D249_k403))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k402, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k403, self)})));
}
static void _V10_Dprint__fun__single_D249_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k394) (close _V10_Dprint__fun__single_D249_k401))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k394, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k401, self)})));
}
static void _V10_Dprint__fun__single_D249_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k384) (close _V10_Dprint__fun__single_D249_k393))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k384, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k393, self)})));
}
static void _V10_Dprint__fun__single_D249_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k382) (close _V10_Dprint__fun__single_D249_k383))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k382, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k383, self)})));
}
static void _V10_Dprint__fun__single_D249_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k379) (close _V10_Dprint__fun__single_D249_k381))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k379, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k381, self)})));
}
static void _V10_Dprint__fun__single_D249_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k369) (close _V10_Dprint__fun__single_D249_k378))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k369, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k378, self)})));
}
static void _V10_Dprint__fun__single_D249_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D249_k367) (close _V10_Dprint__fun__single_D249_k368))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D249_k367, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k368, self)})));
}
static void _V10_Dprint__fun__single_D249_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D249_lambda79, got ~D~N"
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
  // (letrec 1 ((close _V10_Dgen__args_D488_lambda80)) ((bruijn ##.gen-args.488 0 0) (close _V10_Dprint__fun__single_D249_k366) (bruijn ##.num.484 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D488_lambda80, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_k366, self)})),
      statics->vars[3]);
    }
}
static void _V10_Dprint__fun__case_D250_k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.229 8 2) ((bruijn ##.x.669 11 0) (bruijn ##.k.1422 0 0) (##string ##.string.1773) (bruijn ##.name.498 5 0) (bruijn ##.name.498 5 0)) ((bruijn ##.x.669 11 0) (bruijn ##.k.1422 0 0) (##string ##.string.1774) (bruijn ##.name.498 5 0)))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1773.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
}
static void _V10_Dprint__fun__case_D250_k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 23 0) (bruijn ##.k.1271 18 0) (##string ##.string.1690))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      VGetArg(statics, 18-1, 0),
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 22 0) (close _V10_Dprint__fun__case_D250_k437) (##string ##.string.1775))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k437, self)})),
      VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1312 0 0) (bruijn ##.k.1303 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D250_k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 32 0) (bruijn ##.k.1313 1 0) (##string ##.string.1776) (##inline ##vcore.car (bruijn ##.e.538 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
}
static void _V10_Dprint__fun__case_D250_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 31 0) (close _V10_Dprint__fun__case_D250_k446) (##string ##.string.1777) (##inline ##vcore.car (bruijn ##.expr.121.545 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k446, self)})),
      VEncodePointer(&_V10_Dstring_D1777.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D250_k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.548 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.123.548 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.544 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k445) (close _V10_Dprint__fun__case_D250_lambda88) (bruijn ##.kk.116.539 7 1)) ((bruijn ##.k.1303 6 0) #f)) ((bruijn ##.k.1303 6 0) #f)) ((bruijn ##.k.1303 6 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k445, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda88, self)})),
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
static void _V10_Dprint__fun__case_D250_k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1308 0 0) ((close _V10_Dprint__fun__case_D250_k444) (##inline ##vcore.cdr (bruijn ##.expr.122.547 1 0))) ((bruijn ##.k.1303 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k444, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.547 0 0)) ((bruijn ##.x.659 38 0) (close _V10_Dprint__fun__case_D250_k443) '+ (##inline ##vcore.car (bruijn ##.expr.122.547 0 0))) ((bruijn ##.k.1303 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k443, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.545 0 0)) ((close _V10_Dprint__fun__case_D250_k442) (##inline ##vcore.cdr (bruijn ##.expr.121.545 0 0))) ((bruijn ##.k.1303 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k442, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.544 0 0)) ((close _V10_Dprint__fun__case_D250_k441) (##inline ##vcore.car (bruijn ##.expr.120.544 0 0))) ((bruijn ##.k.1303 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k441, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.543 0 0)) ((close _V10_Dprint__fun__case_D250_k440) (##inline ##vcore.cdr (bruijn ##.expr.119.543 0 0))) ((bruijn ##.k.1303 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k440, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.538 2 1)) ((close _V10_Dprint__fun__case_D250_k439) (##inline ##vcore.cdr (bruijn ##.e.538 2 1))) ((bruijn ##.k.1303 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k439, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1297 0 0) (bruijn ##.k.1290 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D250_k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 31 0) (bruijn ##.k.1298 1 0) (##string ##.string.1776) (##inline ##vcore.car (bruijn ##.e.538 9 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
}
static void _V10_Dprint__fun__case_D250_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 30 0) (close _V10_Dprint__fun__case_D250_k454) (##string ##.string.1778) (##inline ##vcore.car (bruijn ##.expr.127.553 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k454, self)})),
      VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dprint__fun__case_D250_k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.555 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.128.555 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.126.552 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k453) (close _V10_Dprint__fun__case_D250_lambda89) (bruijn ##.kk.116.539 6 1)) ((bruijn ##.k.1290 4 0) #f)) ((bruijn ##.k.1290 4 0) #f)) ((bruijn ##.k.1290 4 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k453, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda89, self)})),
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
static void _V10_Dprint__fun__case_D250_k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.553 0 0)) ((close _V10_Dprint__fun__case_D250_k452) (##inline ##vcore.cdr (bruijn ##.expr.127.553 0 0))) ((bruijn ##.k.1290 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k452, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.552 0 0)) ((close _V10_Dprint__fun__case_D250_k451) (##inline ##vcore.car (bruijn ##.expr.126.552 0 0))) ((bruijn ##.k.1290 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k451, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.551 0 0)) ((close _V10_Dprint__fun__case_D250_k450) (##inline ##vcore.cdr (bruijn ##.expr.125.551 0 0))) ((bruijn ##.k.1290 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k450, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.538 3 1)) ((close _V10_Dprint__fun__case_D250_k449) (##inline ##vcore.cdr (bruijn ##.e.538 3 1))) ((bruijn ##.k.1290 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k449, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.651 43 0) (bruijn ##.k.1286 2 0) (##string ##.string.1779))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D250_k448) (close _V10_Dprint__fun__case_D250_k455))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k448, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k455, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D250_k438) (close _V10_Dprint__fun__case_D250_k447))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k438, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k447, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1285 0 0) (close _V10_Dprint__fun__case_D250_lambda87))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda87, self)})));
}
static void _V10_Dprint__fun__case_D250_k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 44 0) (close _V10_Dprint__fun__case_D250_k436) (close _V10_Dprint__fun__case_D250_lambda86) (bruijn ##.cases.500 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k436, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda86, self)})),
      VGetArg(statics, 11-1, 0));
}
static void _V10_Dprint__fun__case_D250_k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 20 0) (close _V10_Dprint__fun__case_D250_k435) (##string ##.string.1780))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k435, self)})),
      VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 19 0) (close _V10_Dprint__fun__case_D250_k434) (##string ##.string.1781))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k434, self)})),
      VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 18 0) (close _V10_Dprint__fun__case_D250_k433) (##string ##.string.1782) (bruijn ##.name.498 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k433, self)})),
      VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dprint__fun__case_D250_k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 26 0) (bruijn ##.k.1271 21 0) (##string ##.string.1699))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      VGetArg(statics, 21-1, 0),
      VEncodePointer(&_V10_Dstring_D1699.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 25 0) (close _V10_Dprint__fun__case_D250_k464) (##string ##.string.1784) (bruijn ##.name.498 19 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k464, self)})),
      VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER),
      VGetArg(statics, 19-1, 0));
}
static void _V10_Dprint__fun__case_D250_k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1354 0 0) (bruijn ##.k.1345 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D250_k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 35 0) (bruijn ##.k.1355 1 0) (##string ##.string.1785) (##inline ##vcore.car (bruijn ##.e.556 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1785.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
}
static void _V10_Dprint__fun__case_D250_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 34 0) (close _V10_Dprint__fun__case_D250_k473) (##string ##.string.1786) (##inline ##vcore.car (bruijn ##.expr.134.563 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k473, self)})),
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D250_k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.566 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.136.566 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.133.562 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k472) (close _V10_Dprint__fun__case_D250_lambda92) (bruijn ##.kk.129.557 7 1)) ((bruijn ##.k.1345 6 0) #f)) ((bruijn ##.k.1345 6 0) #f)) ((bruijn ##.k.1345 6 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k472, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda92, self)})),
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
static void _V10_Dprint__fun__case_D250_k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1350 0 0) ((close _V10_Dprint__fun__case_D250_k471) (##inline ##vcore.cdr (bruijn ##.expr.135.565 1 0))) ((bruijn ##.k.1345 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k471, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.565 0 0)) ((bruijn ##.x.659 41 0) (close _V10_Dprint__fun__case_D250_k470) '+ (##inline ##vcore.car (bruijn ##.expr.135.565 0 0))) ((bruijn ##.k.1345 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k470, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.563 0 0)) ((close _V10_Dprint__fun__case_D250_k469) (##inline ##vcore.cdr (bruijn ##.expr.134.563 0 0))) ((bruijn ##.k.1345 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k469, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.562 0 0)) ((close _V10_Dprint__fun__case_D250_k468) (##inline ##vcore.car (bruijn ##.expr.133.562 0 0))) ((bruijn ##.k.1345 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k468, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.132.561 0 0)) ((close _V10_Dprint__fun__case_D250_k467) (##inline ##vcore.cdr (bruijn ##.expr.132.561 0 0))) ((bruijn ##.k.1345 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k467, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.556 2 1)) ((close _V10_Dprint__fun__case_D250_k466) (##inline ##vcore.cdr (bruijn ##.e.556 2 1))) ((bruijn ##.k.1345 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k466, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1339 0 0) (bruijn ##.k.1332 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D250_k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 34 0) (bruijn ##.k.1340 1 0) (##string ##.string.1787) (##inline ##vcore.car (bruijn ##.e.556 9 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1787.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
}
static void _V10_Dprint__fun__case_D250_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 33 0) (close _V10_Dprint__fun__case_D250_k481) (##string ##.string.1786) (##inline ##vcore.car (bruijn ##.expr.140.571 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k481, self)})),
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dprint__fun__case_D250_k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.573 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.573 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.139.570 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k480) (close _V10_Dprint__fun__case_D250_lambda93) (bruijn ##.kk.129.557 6 1)) ((bruijn ##.k.1332 4 0) #f)) ((bruijn ##.k.1332 4 0) #f)) ((bruijn ##.k.1332 4 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k480, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda93, self)})),
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
static void _V10_Dprint__fun__case_D250_k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.571 0 0)) ((close _V10_Dprint__fun__case_D250_k479) (##inline ##vcore.cdr (bruijn ##.expr.140.571 0 0))) ((bruijn ##.k.1332 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k479, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.570 0 0)) ((close _V10_Dprint__fun__case_D250_k478) (##inline ##vcore.car (bruijn ##.expr.139.570 0 0))) ((bruijn ##.k.1332 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k478, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.569 0 0)) ((close _V10_Dprint__fun__case_D250_k477) (##inline ##vcore.cdr (bruijn ##.expr.138.569 0 0))) ((bruijn ##.k.1332 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k477, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.556 3 1)) ((close _V10_Dprint__fun__case_D250_k476) (##inline ##vcore.cdr (bruijn ##.e.556 3 1))) ((bruijn ##.k.1332 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k476, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.651 46 0) (bruijn ##.k.1328 2 0) (##string ##.string.1779))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D250_k475) (close _V10_Dprint__fun__case_D250_k482))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k475, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k482, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D250_k465) (close _V10_Dprint__fun__case_D250_k474))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k465, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k474, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1327 0 0) (close _V10_Dprint__fun__case_D250_lambda91))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda91, self)})));
}
static void _V10_Dprint__fun__case_D250_k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 47 0) (close _V10_Dprint__fun__case_D250_k463) (close _V10_Dprint__fun__case_D250_lambda90) (bruijn ##.cases.500 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k463, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda90, self)})),
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dprint__fun__case_D250_k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 23 0) (close _V10_Dprint__fun__case_D250_k462) (##string ##.string.1788) (bruijn ##.name.498 17 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k462, self)})),
      VEncodePointer(&_V10_Dstring_D1788.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 0));
}
static void _V10_Dprint__fun__case_D250_k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 22 0) (close _V10_Dprint__fun__case_D250_k461) (##string ##.string.1789))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k461, self)})),
      VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 21 0) (close _V10_Dprint__fun__case_D250_k460) (##string ##.string.1790) (bruijn ##.name.498 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k460, self)})),
      VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 0));
}
static void _V10_Dprint__fun__case_D250_k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 20 0) (close _V10_Dprint__fun__case_D250_k459) (##string ##.string.1791))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k459, self)})),
      VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 19 0) (close _V10_Dprint__fun__case_D250_k458) (##string ##.string.1792))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k458, self)})),
      VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 18 0) (close _V10_Dprint__fun__case_D250_k457) (##string ##.string.1793))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k457, self)})),
      VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.229 14 2) ((bruijn ##.x.669 17 0) (close _V10_Dprint__fun__case_D250_k432) (##string ##.string.1783) (bruijn ##.name.498 11 0) (bruijn ##.name.498 11 0)) ((bruijn ##.x.669 17 0) (close _V10_Dprint__fun__case_D250_k456) (##string ##.string.1794) (bruijn ##.name.498 11 0)))
if(VDecodeBool(
VGetArg(statics, 14-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k432, self)})),
      VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k456, self)})),
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
}
}
static void _V10_Dprint__fun__case_D250_k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1386 0 0) (bruijn ##.k.1377 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D250_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.249 22 12) (bruijn ##.k.1387 0 0) (##inline ##vcore.car (bruijn ##.e.518 9 1)) #f (##inline ##vcore.car (bruijn ##.expr.108.525 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.110.528 1 0)) #t)
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
static void _V10_Dprint__fun__case_D250_k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.528 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.110.528 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.107.524 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k490) (close _V10_Dprint__fun__case_D250_lambda96) (bruijn ##.kk.103.519 7 1)) ((bruijn ##.k.1377 6 0) #f)) ((bruijn ##.k.1377 6 0) #f)) ((bruijn ##.k.1377 6 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k490, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda96, self)})),
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
static void _V10_Dprint__fun__case_D250_k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1382 0 0) ((close _V10_Dprint__fun__case_D250_k489) (##inline ##vcore.cdr (bruijn ##.expr.109.527 1 0))) ((bruijn ##.k.1377 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k489, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.527 0 0)) ((bruijn ##.x.659 33 0) (close _V10_Dprint__fun__case_D250_k488) '+ (##inline ##vcore.car (bruijn ##.expr.109.527 0 0))) ((bruijn ##.k.1377 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k488, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.525 0 0)) ((close _V10_Dprint__fun__case_D250_k487) (##inline ##vcore.cdr (bruijn ##.expr.108.525 0 0))) ((bruijn ##.k.1377 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k487, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.524 0 0)) ((close _V10_Dprint__fun__case_D250_k486) (##inline ##vcore.car (bruijn ##.expr.107.524 0 0))) ((bruijn ##.k.1377 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k486, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.523 0 0)) ((close _V10_Dprint__fun__case_D250_k485) (##inline ##vcore.cdr (bruijn ##.expr.106.523 0 0))) ((bruijn ##.k.1377 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k485, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.518 2 1)) ((close _V10_Dprint__fun__case_D250_k484) (##inline ##vcore.cdr (bruijn ##.e.518 2 1))) ((bruijn ##.k.1377 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k484, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1372 0 0) (bruijn ##.k.1365 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D250_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.249 21 12) (bruijn ##.k.1373 0 0) (##inline ##vcore.car (bruijn ##.e.518 8 1)) #f (##inline ##vcore.car (bruijn ##.expr.114.534 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.115.536 1 0)) #t)
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
static void _V10_Dprint__fun__case_D250_k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.536 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.115.536 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.113.533 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k497) (close _V10_Dprint__fun__case_D250_lambda97) (bruijn ##.kk.103.519 6 1)) ((bruijn ##.k.1365 4 0) #f)) ((bruijn ##.k.1365 4 0) #f)) ((bruijn ##.k.1365 4 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k497, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda97, self)})),
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
static void _V10_Dprint__fun__case_D250_k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.534 0 0)) ((close _V10_Dprint__fun__case_D250_k496) (##inline ##vcore.cdr (bruijn ##.expr.114.534 0 0))) ((bruijn ##.k.1365 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k496, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.533 0 0)) ((close _V10_Dprint__fun__case_D250_k495) (##inline ##vcore.car (bruijn ##.expr.113.533 0 0))) ((bruijn ##.k.1365 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k495, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.532 0 0)) ((close _V10_Dprint__fun__case_D250_k494) (##inline ##vcore.cdr (bruijn ##.expr.112.532 0 0))) ((bruijn ##.k.1365 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k494, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.518 3 1)) ((close _V10_Dprint__fun__case_D250_k493) (##inline ##vcore.cdr (bruijn ##.e.518 3 1))) ((bruijn ##.k.1365 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k493, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.651 38 0) (bruijn ##.k.1361 2 0) (##string ##.string.1779))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D250_k492) (close _V10_Dprint__fun__case_D250_k498))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k492, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k498, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D250_k483) (close _V10_Dprint__fun__case_D250_k491))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k483, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k491, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1360 0 0) (close _V10_Dprint__fun__case_D250_lambda95))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda95, self)})));
}
static void _V10_Dprint__fun__case_D250_k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 39 0) (close _V10_Dprint__fun__case_D250_k431) (close _V10_Dprint__fun__case_D250_lambda94) (bruijn ##.cases.500 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k431, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda94, self)})),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__fun__case_D250_k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__case_D250_k430) (##string ##.string.1690))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k430, self)})),
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__case_D250_k429) (##string ##.string.1795))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k429, self)})),
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1417 0 0) (bruijn ##.k.1408 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D250_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 23 0) (bruijn ##.k.1418 0 0) (##string ##.string.1796) (##inline ##vcore.car (bruijn ##.expr.95.508 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D250_k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.511 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.97.511 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.94.507 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k506) (close _V10_Dprint__fun__case_D250_lambda100) (bruijn ##.kk.90.502 7 1)) ((bruijn ##.k.1408 6 0) #f)) ((bruijn ##.k.1408 6 0) #f)) ((bruijn ##.k.1408 6 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k506, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda100, self)})),
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
static void _V10_Dprint__fun__case_D250_k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1413 0 0) ((close _V10_Dprint__fun__case_D250_k505) (##inline ##vcore.cdr (bruijn ##.expr.96.510 1 0))) ((bruijn ##.k.1408 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k505, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.510 0 0)) ((bruijn ##.x.659 30 0) (close _V10_Dprint__fun__case_D250_k504) '+ (##inline ##vcore.car (bruijn ##.expr.96.510 0 0))) ((bruijn ##.k.1408 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k504, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.508 0 0)) ((close _V10_Dprint__fun__case_D250_k503) (##inline ##vcore.cdr (bruijn ##.expr.95.508 0 0))) ((bruijn ##.k.1408 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k503, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.507 0 0)) ((close _V10_Dprint__fun__case_D250_k502) (##inline ##vcore.car (bruijn ##.expr.94.507 0 0))) ((bruijn ##.k.1408 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k502, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.93.506 0 0)) ((close _V10_Dprint__fun__case_D250_k501) (##inline ##vcore.cdr (bruijn ##.expr.93.506 0 0))) ((bruijn ##.k.1408 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k501, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.501 2 1)) ((close _V10_Dprint__fun__case_D250_k500) (##inline ##vcore.cdr (bruijn ##.e.501 2 1))) ((bruijn ##.k.1408 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k500, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1403 0 0) (bruijn ##.k.1396 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D250_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 22 0) (bruijn ##.k.1404 0 0) (##string ##.string.1797) (##inline ##vcore.car (bruijn ##.expr.101.515 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dprint__fun__case_D250_k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.517 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.102.517 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.100.514 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D250_k513) (close _V10_Dprint__fun__case_D250_lambda101) (bruijn ##.kk.90.502 6 1)) ((bruijn ##.k.1396 4 0) #f)) ((bruijn ##.k.1396 4 0) #f)) ((bruijn ##.k.1396 4 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k513, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda101, self)})),
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
static void _V10_Dprint__fun__case_D250_k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.515 0 0)) ((close _V10_Dprint__fun__case_D250_k512) (##inline ##vcore.cdr (bruijn ##.expr.101.515 0 0))) ((bruijn ##.k.1396 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k512, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.514 0 0)) ((close _V10_Dprint__fun__case_D250_k511) (##inline ##vcore.car (bruijn ##.expr.100.514 0 0))) ((bruijn ##.k.1396 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k511, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.513 0 0)) ((close _V10_Dprint__fun__case_D250_k510) (##inline ##vcore.cdr (bruijn ##.expr.99.513 0 0))) ((bruijn ##.k.1396 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k510, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.501 3 1)) ((close _V10_Dprint__fun__case_D250_k509) (##inline ##vcore.cdr (bruijn ##.e.501 3 1))) ((bruijn ##.k.1396 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k509, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D250_k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.651 35 0) (bruijn ##.k.1392 2 0) (##string ##.string.1779))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D250_k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D250_k508) (close _V10_Dprint__fun__case_D250_k514))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k508, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k514, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D250_k499) (close _V10_Dprint__fun__case_D250_k507))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k499, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k507, self)})));
}
static void _V10_Dprint__fun__case_D250_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1391 0 0) (close _V10_Dprint__fun__case_D250_lambda99))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda99, self)})));
}
static void _V10_Dprint__fun__case_D250_k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 36 0) (close _V10_Dprint__fun__case_D250_k428) (close _V10_Dprint__fun__case_D250_lambda98) (bruijn ##.cases.500 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k428, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda98, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D250_k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 12 0) (close _V10_Dprint__fun__case_D250_k427) (##string ##.string.1798) (bruijn ##.name.498 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k427, self)})),
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__fun__case_D250_k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 11 0) (close _V10_Dprint__fun__case_D250_k426) (##string ##.string.1799) (bruijn ##.fun.497 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k426, self)})),
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dprint__fun__case_D250_k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D250_k424) (close _V10_Dprint__fun__case_D250_k425))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k424, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k425, self)})));
}
static void _V10_Dprint__fun__case_D250_k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1423 1 0) (##inline ##vcore.cons (bruijn ##.x.1424 0 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (bruijn ##.e.575 1 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        statics->vars[2],
        VNULL))));
}
static void _V10_Dprint__fun__case_D250_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda102, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.670 9 0) (close _V10_Dprint__fun__case_D250_k515) (##string ##.string.1800) (bruijn ##.i.574 0 1) (bruijn ##.name.498 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k515, self)})),
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER),
      _var1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D250_k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.654 24 0) (close _V10_Dprint__fun__case_D250_k423) (close _V10_Dprint__fun__case_D250_lambda102) (bruijn ##.x.1427 0 0) (bruijn ##.cases.499 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k423, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda102, self)})),
      _var0,
      statics->up->vars[0]);
}
static void _V10_Dprint__fun__case_D250_k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 22 0) (close _V10_Dprint__fun__case_D250_k422) (bruijn ##.x.1428 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k422, self)})),
      _var0);
}
static void _V10_Dprint__fun__case_D250_k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.653 23 0) (close _V10_Dprint__fun__case_D250_k421) (bruijn ##.cases.499 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k421, self)})),
      _var0);
}
static void _V10_Dprint__fun__case_D250_k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.650 25 0) (close _V10_Dprint__fun__case_D250_k420) (bruijn ##.fun.497 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_k420, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__fun__case_D250_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D250_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D250_k419) (##inline ##vcore.car (bruijn ##.fun.497 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D250_k419, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var1));
}
static void _V10_Dprint__fun_D251_k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1457 0 0) (bruijn ##.k.1450 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun_D251_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.249 8 12) (bruijn ##.k.1458 0 0) (##inline ##vcore.car (bruijn ##.fun.576 7 1)) (##inline ##vcore.car (bruijn ##.expr.145.581 4 0)) (##inline ##vcore.car (bruijn ##.expr.147.584 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.148.586 1 0)) #f)
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
static void _V10_Dprint__fun_D251_k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.586 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.148.586 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.583 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun_D251_k521) (close _V10_Dprint__fun_D251_lambda105) (bruijn ##.kk.142.577 5 1)) ((bruijn ##.k.1450 4 0) #f)) ((bruijn ##.k.1450 4 0) #f)) ((bruijn ##.k.1450 4 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_k521, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_lambda105, self)})),
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
static void _V10_Dprint__fun_D251_k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.147.584 0 0)) ((close _V10_Dprint__fun_D251_k520) (##inline ##vcore.cdr (bruijn ##.expr.147.584 0 0))) ((bruijn ##.k.1450 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k520, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.583 0 0)) ((close _V10_Dprint__fun_D251_k519) (##inline ##vcore.car (bruijn ##.expr.146.583 0 0))) ((bruijn ##.k.1450 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k519, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.581 0 0)) ((close _V10_Dprint__fun_D251_k518) (##inline ##vcore.cdr (bruijn ##.expr.145.581 0 0))) ((bruijn ##.k.1450 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k518, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.576 2 1)) ((close _V10_Dprint__fun_D251_k517) (##inline ##vcore.cdr (bruijn ##.fun.576 2 1))) ((bruijn ##.k.1450 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k517, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1444 0 0) (bruijn ##.k.1435 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun_D251_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.249 11 12) (bruijn ##.k.1445 0 0) (##inline ##vcore.car (bruijn ##.fun.576 10 1)) (##inline ##vcore.car (bruijn ##.expr.150.590 6 0)) (##inline ##vcore.car (bruijn ##.expr.152.593 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.154.596 1 0)) #f)
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
static void _V10_Dprint__fun_D251_k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.596 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.596 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.151.592 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun_D251_k530) (close _V10_Dprint__fun_D251_lambda106) (bruijn ##.kk.142.577 8 1)) ((bruijn ##.k.1435 6 0) #f)) ((bruijn ##.k.1435 6 0) #f)) ((bruijn ##.k.1435 6 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_k530, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_lambda106, self)})),
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
static void _V10_Dprint__fun_D251_k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1440 0 0) ((close _V10_Dprint__fun_D251_k529) (##inline ##vcore.cdr (bruijn ##.expr.153.595 1 0))) ((bruijn ##.k.1435 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k529, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.595 0 0)) ((bruijn ##.x.659 22 0) (close _V10_Dprint__fun_D251_k528) '+ (##inline ##vcore.car (bruijn ##.expr.153.595 0 0))) ((bruijn ##.k.1435 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_k528, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.593 0 0)) ((close _V10_Dprint__fun_D251_k527) (##inline ##vcore.cdr (bruijn ##.expr.152.593 0 0))) ((bruijn ##.k.1435 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k527, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.592 0 0)) ((close _V10_Dprint__fun_D251_k526) (##inline ##vcore.car (bruijn ##.expr.151.592 0 0))) ((bruijn ##.k.1435 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k526, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.590 0 0)) ((close _V10_Dprint__fun_D251_k525) (##inline ##vcore.cdr (bruijn ##.expr.150.590 0 0))) ((bruijn ##.k.1435 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k525, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.576 3 1)) ((close _V10_Dprint__fun_D251_k524) (##inline ##vcore.cdr (bruijn ##.fun.576 3 1))) ((bruijn ##.k.1435 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k524, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D251_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-case.250 5 13) (bruijn ##.k.1433 0 0) (bruijn ##.fun.576 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 2,
      _var0,
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__fun_D251_k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1430 2 0) (close _V10_Dprint__fun_D251_lambda107) (bruijn ##.kk.142.577 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_lambda107, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__fun_D251_k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun_D251_k523) (close _V10_Dprint__fun_D251_k531))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k523, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_k531, self)})));
}
static void _V10_Dprint__fun_D251_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun_D251_k516) (close _V10_Dprint__fun_D251_k522))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D251_k516, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_k522, self)})));
}
static void _V10_Dprint__fun_D251_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D251_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1429 0 0) (close _V10_Dprint__fun_D251_lambda104))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_lambda104, self)})));
}
static void _V10_Dprint__toplevel_D252_k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D252_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 29 0) (bruijn ##.k.1461 3 0) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D252_k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D252_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 3 11) (close _V10_Dprint__toplevel_D252_k534) (##inline ##vcore.cons (bruijn ##.expr.599 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1801) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[11]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D252_k534, self)})),
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
        VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER),
        VNULL));
}
static void _V10_Dprint__toplevel_D252_k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D252_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 27 0) (close _V10_Dprint__toplevel_D252_k533) (##string ##.string.1802))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D252_k533, self)})),
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D252_k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D252_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 29 0) (bruijn ##.k.1461 3 0) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D252_k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D252_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.248 3 11) (close _V10_Dprint__toplevel_D252_k537) (##inline ##vcore.cons (bruijn ##.expr.599 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1801) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[11]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D252_k537, self)})),
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
        VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER),
        VNULL));
}
static void _V10_Dprint__toplevel_D252_k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D252_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 27 0) (close _V10_Dprint__toplevel_D252_k536) (##string ##.string.1804))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D252_k536, self)})),
      VEncodePointer(&_V10_Dstring_D1804.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D252_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D252_lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.purec?.229 2 2) ((bruijn ##.x.669 5 0) (close _V10_Dprint__toplevel_D252_k532) (##string ##.string.1803) (bruijn ##.i.598 0 1) (bruijn ##.i.598 0 1)) ((bruijn ##.x.669 5 0) (close _V10_Dprint__toplevel_D252_k535) (##string ##.string.1805) (bruijn ##.i.598 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D252_k532, self)})),
      VEncodePointer(&_V10_Dstring_D1803.sym, VPOINTER_OTHER),
      _var1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D252_k535, self)})),
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER),
      _var1);
}
}
static void _V10_Dprint__foreign__declare_D253_k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1502 0 0) (bruijn ##.k.1498 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__foreign__declare_D253_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 31 0) (bruijn ##.k.1503 0 0) (##inline ##vcore.car (bruijn ##.expr.158.604 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__foreign__declare_D253_k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.604 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.158.604 0 0))) (##vcore.call-with-values (close _V10_Dprint__foreign__declare_D253_k541) (close _V10_Dprint__foreign__declare_D253_lambda111) (bruijn ##.kk.155.601 3 1)) ((bruijn ##.k.1498 2 0) #f)) ((bruijn ##.k.1498 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_k541, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_lambda111, self)})),
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
static void _V10_Dprint__foreign__declare_D253_k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1499 0 0) ((close _V10_Dprint__foreign__declare_D253_k540) (##inline ##vcore.cdr (bruijn ##.declare.600 3 1))) ((bruijn ##.k.1498 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D253_k540, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D253_k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.600 2 1)) ((bruijn ##.x.659 17 0) (close _V10_Dprint__foreign__declare_D253_k539) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.600 2 1))) ((bruijn ##.k.1498 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_k539, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D253_k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1493 0 0) (bruijn ##.k.1488 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__foreign__declare_D253_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1494 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__foreign__declare_D253_k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161.609 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.161.609 0 0))) (##vcore.call-with-values (close _V10_Dprint__foreign__declare_D253_k547) (close _V10_Dprint__foreign__declare_D253_lambda112) (bruijn ##.kk.155.601 5 1)) ((bruijn ##.k.1488 3 0) #f)) ((bruijn ##.k.1488 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_k547, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_lambda112, self)})),
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
static void _V10_Dprint__foreign__declare_D253_k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.607 0 0)) ((close _V10_Dprint__foreign__declare_D253_k546) (##inline ##vcore.cdr (bruijn ##.expr.160.607 0 0))) ((bruijn ##.k.1488 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D253_k546, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D253_k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1489 0 0) ((close _V10_Dprint__foreign__declare_D253_k545) (##inline ##vcore.cdr (bruijn ##.declare.600 4 1))) ((bruijn ##.k.1488 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D253_k545, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D253_k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.600 3 1)) ((bruijn ##.x.659 18 0) (close _V10_Dprint__foreign__declare_D253_k544) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.600 3 1))) ((bruijn ##.k.1488 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_k544, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D253_lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 33 0) (bruijn ##.k.1486 0 0) (##string ##.string.1806) (bruijn ##.declare.600 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1806.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__foreign__declare_D253_k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1483 2 0) (close _V10_Dprint__foreign__declare_D253_lambda113) (bruijn ##.kk.155.601 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_lambda113, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__foreign__declare_D253_k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__declare_D253_k543) (close _V10_Dprint__foreign__declare_D253_k548))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D253_k543, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_k548, self)})));
}
static void _V10_Dprint__foreign__declare_D253_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__foreign__declare_D253_k538) (close _V10_Dprint__foreign__declare_D253_k542))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D253_k538, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_k542, self)})));
}
static void _V10_Dprint__foreign__declare_D253_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D253_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1482 0 0) (close _V10_Dprint__foreign__declare_D253_lambda110))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_lambda110, self)})));
}
static void _V10_Dprint__declare_D254_k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1526 0 0) (bruijn ##.k.1522 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__declare_D254_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1527 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__declare_D254_k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165.615 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.165.615 0 0))) (##vcore.call-with-values (close _V10_Dprint__declare_D254_k552) (close _V10_Dprint__declare_D254_lambda116) (bruijn ##.kk.162.612 3 1)) ((bruijn ##.k.1522 2 0) #f)) ((bruijn ##.k.1522 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_k552, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_lambda116, self)})),
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
static void _V10_Dprint__declare_D254_k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1523 0 0) ((close _V10_Dprint__declare_D254_k551) (##inline ##vcore.cdr (bruijn ##.declare.611 3 1))) ((bruijn ##.k.1522 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D254_k551, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D254_k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.611 2 1)) ((bruijn ##.x.659 17 0) (close _V10_Dprint__declare_D254_k550) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.611 2 1))) ((bruijn ##.k.1522 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_k550, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D254_k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1517 0 0) (bruijn ##.k.1512 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__declare_D254_lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_lambda117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1518 0 0) (##string ##.string.1807) (##inline ##vcore.car (bruijn ##.expr.167.618 2 0)) (##inline ##vcore.car (bruijn ##.expr.168.620 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__declare_D254_k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.168.620 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.168.620 0 0))) (##vcore.call-with-values (close _V10_Dprint__declare_D254_k558) (close _V10_Dprint__declare_D254_lambda117) (bruijn ##.kk.162.612 5 1)) ((bruijn ##.k.1512 3 0) #f)) ((bruijn ##.k.1512 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_k558, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_lambda117, self)})),
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
static void _V10_Dprint__declare_D254_k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.167.618 0 0)) ((close _V10_Dprint__declare_D254_k557) (##inline ##vcore.cdr (bruijn ##.expr.167.618 0 0))) ((bruijn ##.k.1512 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D254_k557, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D254_k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1513 0 0) ((close _V10_Dprint__declare_D254_k556) (##inline ##vcore.cdr (bruijn ##.declare.611 4 1))) ((bruijn ##.k.1512 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D254_k556, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D254_k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.611 3 1)) ((bruijn ##.x.659 18 0) (close _V10_Dprint__declare_D254_k555) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.611 3 1))) ((bruijn ##.k.1512 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_k555, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D254_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 33 0) (bruijn ##.k.1510 0 0) (##string ##.string.1808) (bruijn ##.declare.611 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__declare_D254_k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1507 2 0) (close _V10_Dprint__declare_D254_lambda118) (bruijn ##.kk.162.612 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_lambda118, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__declare_D254_k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__declare_D254_k554) (close _V10_Dprint__declare_D254_k559))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D254_k554, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_k559, self)})));
}
static void _V10_Dprint__declare_D254_lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__declare_D254_k549) (close _V10_Dprint__declare_D254_k553))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D254_k549, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_k553, self)})));
}
static void _V10_Dprint__declare_D254_lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D254_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1506 0 0) (close _V10_Dprint__declare_D254_lambda115))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_lambda115, self)})));
}
static void _V10_Dprint__declaretable_D255_k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 7 0) (bruijn ##.k.1530 2 0) (##string ##.string.1690))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__declaretable_D255_k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1553 0 0) (bruijn ##.k.1549 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__declaretable_D255_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1554 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__declaretable_D255_k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.627 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.172.627 0 0))) (##vcore.call-with-values (close _V10_Dprint__declaretable_D255_k565) (close _V10_Dprint__declaretable_D255_lambda122) (bruijn ##.kk.169.624 3 1)) ((bruijn ##.k.1549 2 0) #f)) ((bruijn ##.k.1549 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k565, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_lambda122, self)})),
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
static void _V10_Dprint__declaretable_D255_k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1550 0 0) ((close _V10_Dprint__declaretable_D255_k564) (##inline ##vcore.cdr (bruijn ##.declare.623 3 1))) ((bruijn ##.k.1549 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D255_k564, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D255_k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.623 2 1)) ((bruijn ##.x.659 19 0) (close _V10_Dprint__declaretable_D255_k563) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.623 2 1))) ((bruijn ##.k.1549 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k563, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D255_k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1544 0 0) (bruijn ##.k.1539 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__declaretable_D255_lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 15 0) (bruijn ##.k.1545 0 0) (##string ##.string.1809) (bruijn ##.f.631 2 0) (bruijn ##.f.631 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->up->vars[0]);
}
static void _V10_Dprint__declaretable_D255_k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.175.632 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.175.632 0 0))) (##vcore.call-with-values (close _V10_Dprint__declaretable_D255_k572) (close _V10_Dprint__declaretable_D255_lambda123) (bruijn ##.kk.169.624 6 1)) ((bruijn ##.k.1539 4 0) #f)) ((bruijn ##.k.1539 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k572, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_lambda123, self)})),
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
static void _V10_Dprint__declaretable_D255_k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__declaretable_D255_k571) (##inline ##vcore.cdr (bruijn ##.expr.174.630 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D255_k571, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__declaretable_D255_k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.174.630 0 0)) ((close _V10_Dprint__declaretable_D255_k570) (##inline ##vcore.car (bruijn ##.expr.174.630 0 0))) ((bruijn ##.k.1539 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D255_k570, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D255_k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1540 0 0) ((close _V10_Dprint__declaretable_D255_k569) (##inline ##vcore.cdr (bruijn ##.declare.623 4 1))) ((bruijn ##.k.1539 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D255_k569, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D255_k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.623 3 1)) ((bruijn ##.x.659 20 0) (close _V10_Dprint__declaretable_D255_k568) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.623 3 1))) ((bruijn ##.k.1539 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k568, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D255_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 35 0) (bruijn ##.k.1537 0 0) (##string ##.string.1810) (bruijn ##.declare.623 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1810.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__declaretable_D255_k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1534 2 0) (close _V10_Dprint__declaretable_D255_lambda124) (bruijn ##.kk.169.624 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_lambda124, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__declaretable_D255_k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__declaretable_D255_k567) (close _V10_Dprint__declaretable_D255_k573))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D255_k567, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k573, self)})));
}
static void _V10_Dprint__declaretable_D255_lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__declaretable_D255_k562) (close _V10_Dprint__declaretable_D255_k566))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D255_k562, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k566, self)})));
}
static void _V10_Dprint__declaretable_D255_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1533 0 0) (close _V10_Dprint__declaretable_D255_lambda121))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_lambda121, self)})));
}
static void _V10_Dprint__declaretable_D255_k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 29 0) (close _V10_Dprint__declaretable_D255_k561) (close _V10_Dprint__declaretable_D255_lambda120) (bruijn ##.declares.622 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k561, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_lambda120, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__declaretable_D255_lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D255_lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 5 0) (close _V10_Dprint__declaretable_D255_k560) (##string ##.string.1811))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_k560, self)})),
      VEncodePointer(&_V10_Dstring_D1811.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D256_k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.1557 8 0) (##string ##.string.1812))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D1812.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D256_k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 12 0) (close _V10_Dprint__toplevels_D256_k581) (##string ##.string.1813))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k581, self)})),
      VEncodePointer(&_V10_Dstring_D1813.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D256_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1562 0 0) (##string ##.string.1814) (bruijn ##.i.637 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1814.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__toplevels_D256_k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 34 0) (close _V10_Dprint__toplevels_D256_k580) (close _V10_Dprint__toplevels_D256_lambda126) (bruijn ##.x.1563 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k580, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_lambda126, self)})),
      _var0);
}
static void _V10_Dprint__toplevels_D256_k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 24 0) (close _V10_Dprint__toplevels_D256_k579) (bruijn ##.x.1564 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k579, self)})),
      _var0);
}
static void _V10_Dprint__toplevels_D256_k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.653 25 0) (close _V10_Dprint__toplevels_D256_k578) (bruijn ##.toplevels.634 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k578, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__toplevels_D256_k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 8 0) (close _V10_Dprint__toplevels_D256_k577) (##string ##.string.1815))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k577, self)})),
      VEncodePointer(&_V10_Dstring_D1815.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D256_lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_lambda127, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.print-toplevel.252 4 15) (bruijn ##.k.1565 0 0) (bruijn ##.x.176.635 0 1) (bruijn ##.x.177.636 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[15]), 3,
      _var0,
      _var1,
      _var2);
}
static void _V10_Dprint__toplevels_D256_k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 30 0) (close _V10_Dprint__toplevels_D256_k576) (close _V10_Dprint__toplevels_D256_lambda127) (bruijn ##.x.1566 0 0) (bruijn ##.toplevels.634 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k576, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_lambda127, self)})),
      _var0,
      statics->up->vars[1]);
}
static void _V10_Dprint__toplevels_D256_k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.655 20 0) (close _V10_Dprint__toplevels_D256_k575) (bruijn ##.x.1567 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k575, self)})),
      _var0);
}
static void _V10_Dprint__toplevels_D256_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D256_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.653 21 0) (close _V10_Dprint__toplevels_D256_k574) (bruijn ##.toplevels.634 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_k574, self)})),
      _var1);
}
static void _V10_Dprint__main__standard_D257_k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 52 0) (bruijn ##.k.1568 26 0) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 51 0) (close _V10_Dprint__main__standard_D257_k607) (##string ##.string.1816))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k607, self)})),
      VEncodePointer(&_V10_Dstring_D1816.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 50 0) (close _V10_Dprint__main__standard_D257_k606) (##string ##.string.1817))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k606, self)})),
      VEncodePointer(&_V10_Dstring_D1817.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 49 0) (close _V10_Dprint__main__standard_D257_k605) (##string ##.string.1818))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k605, self)})),
      VEncodePointer(&_V10_Dstring_D1818.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 52 0) (bruijn ##.k.1568 26 0) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 51 0) (close _V10_Dprint__main__standard_D257_k611) (##string ##.string.1820))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k611, self)})),
      VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 50 0) (close _V10_Dprint__main__standard_D257_k610) (##string ##.string.1821))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k610, self)})),
      VEncodePointer(&_V10_Dstring_D1821.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 52 0) (bruijn ##.k.1568 26 0) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 51 0) (close _V10_Dprint__main__standard_D257_k614) (##string ##.string.1820))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k614, self)})),
      VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 50 0) (close _V10_Dprint__main__standard_D257_k613) (##string ##.string.1817))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k613, self)})),
      VEncodePointer(&_V10_Dstring_D1817.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1595 0 0) ((bruijn ##.x.648 49 0) (close _V10_Dprint__main__standard_D257_k609) (##string ##.string.1822)) ((bruijn ##.x.648 49 0) (close _V10_Dprint__main__standard_D257_k612) (##string ##.string.1818)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k609, self)})),
      VEncodePointer(&_V10_Dstring_D1822.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k612, self)})),
      VEncodePointer(&_V10_Dstring_D1818.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__main__standard_D257_k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1590 0 0) ((bruijn ##.x.648 48 0) (close _V10_Dprint__main__standard_D257_k604) (##string ##.string.1819)) ((bruijn ##.x.659 37 0) (close _V10_Dprint__main__standard_D257_k608) (bruijn ##.main.638 22 1) (##string ##.string.1823)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k604, self)})),
      VEncodePointer(&_V10_Dstring_D1819.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k608, self)})),
      VGetArg(statics, 22-1, 1),
      VEncodePointer(&_V10_Dstring_D1823.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__main__standard_D257_k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1589 0 0) ((bruijn ##.k.1568 21 0) #f) ((bruijn ##.x.659 36 0) (close _V10_Dprint__main__standard_D257_k603) (bruijn ##.main.638 21 1) (##string ##.string.1824)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k603, self)})),
      VGetArg(statics, 21-1, 1),
      VEncodePointer(&_V10_Dstring_D1824.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__main__standard_D257_k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.659 35 0) (close _V10_Dprint__main__standard_D257_k602) (bruijn ##.main.638 20 1) (##string ##.string.1825))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k602, self)})),
      VGetArg(statics, 20-1, 1),
      VEncodePointer(&_V10_Dstring_D1825.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 45 0) (close _V10_Dprint__main__standard_D257_k601) (##string ##.string.1744))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k601, self)})),
      VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 44 0) (close _V10_Dprint__main__standard_D257_k600) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k600, self)})),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 43 0) (close _V10_Dprint__main__standard_D257_k599) (##string ##.string.1826))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k599, self)})),
      VEncodePointer(&_V10_Dstring_D1826.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 42 0) (close _V10_Dprint__main__standard_D257_k598) (##string ##.string.1827))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k598, self)})),
      VEncodePointer(&_V10_Dstring_D1827.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 41 0) (close _V10_Dprint__main__standard_D257_k597) (##string ##.string.1828))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k597, self)})),
      VEncodePointer(&_V10_Dstring_D1828.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 40 0) (close _V10_Dprint__main__standard_D257_k596) (##string ##.string.1829))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k596, self)})),
      VEncodePointer(&_V10_Dstring_D1829.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 39 0) (close _V10_Dprint__main__standard_D257_k595) (##string ##.string.1830))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k595, self)})),
      VEncodePointer(&_V10_Dstring_D1830.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 38 0) (close _V10_Dprint__main__standard_D257_k594) (##string ##.string.1831))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k594, self)})),
      VEncodePointer(&_V10_Dstring_D1831.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 37 0) (close _V10_Dprint__main__standard_D257_k593) (##string ##.string.1832))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k593, self)})),
      VEncodePointer(&_V10_Dstring_D1832.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 36 0) (close _V10_Dprint__main__standard_D257_k592) (##string ##.string.1833))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k592, self)})),
      VEncodePointer(&_V10_Dstring_D1833.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 35 0) (close _V10_Dprint__main__standard_D257_k591) (##string ##.string.1834))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k591, self)})),
      VEncodePointer(&_V10_Dstring_D1834.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 34 0) (close _V10_Dprint__main__standard_D257_k590) (##string ##.string.1835))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k590, self)})),
      VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 33 0) (close _V10_Dprint__main__standard_D257_k589) (##string ##.string.1836))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k589, self)})),
      VEncodePointer(&_V10_Dstring_D1836.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 32 0) (close _V10_Dprint__main__standard_D257_k588) (##string ##.string.1837))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k588, self)})),
      VEncodePointer(&_V10_Dstring_D1837.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 31 0) (close _V10_Dprint__main__standard_D257_k587) (##string ##.string.1838))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k587, self)})),
      VEncodePointer(&_V10_Dstring_D1838.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 30 0) (close _V10_Dprint__main__standard_D257_k586) (##string ##.string.1839))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k586, self)})),
      VEncodePointer(&_V10_Dstring_D1839.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 29 0) (close _V10_Dprint__main__standard_D257_k585) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k585, self)})),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 28 0) (close _V10_Dprint__main__standard_D257_k584) (##string ##.string.1841))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k584, self)})),
      VEncodePointer(&_V10_Dstring_D1841.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 27 0) (close _V10_Dprint__main__standard_D257_k583) (##string ##.string.1842))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k583, self)})),
      VEncodePointer(&_V10_Dstring_D1842.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D257_lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D257_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.648 26 0) (close _V10_Dprint__main__standard_D257_k582) (##string ##.string.1843))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_k582, self)})),
      VEncodePointer(&_V10_Dstring_D1843.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D227_k627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.229 14 2) ((bruijn ##.print-declaretable.255 13 18) (bruijn ##.k.1622 0 0) (bruijn ##.declares.235 14 8)) ((bruijn ##.k.1622 0 0) #f))
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
static void _V10_Dprintout2_D227_k629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.231 15 4) ((bruijn ##.k.1621 0 0) (bruijn ##.x.1602 13 0)) ((bruijn ##.k.1621 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 15-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D227_k631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1619 1 0) ((bruijn ##.x.645 43 0) (bruijn ##.k.1620 0 0) (##string ##.string.1844) (bruijn ##.toplevels.236 16 9)) ((bruijn ##.k.1620 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER),
      VGetArg(statics, 16-1, 9));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D227_k634(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-main-standard.257 17 20) (bruijn ##.k.1617 1 0) (bruijn ##.main.228 18 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 20)), 2,
      statics->vars[0],
      VGetArg(statics, 18-1, 1));
}
static void _V10_Dprintout2_D227_k633(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.1602 15 0) ((bruijn ##.print-toplevels.256 16 19) (close _V10_Dprintout2_D227_k634) (bruijn ##.toplevels.236 17 9)) ((bruijn ##.k.1617 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 15-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 19)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k634, self)})),
      VGetArg(statics, 17-1, 9));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D227_k635(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.671 17 0) (bruijn ##.x.1602 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VGetArg(statics, 15-1, 0));
}
static void _V10_Dprintout2_D227_k632(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D227_k633) (close _V10_Dprintout2_D227_k635))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D227_k633, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k635, self)})));
}
static void _V10_Dprintout2_D227_k630(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D227_k631) (close _V10_Dprintout2_D227_k632))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D227_k631, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k632, self)})));
}
static void _V10_Dprintout2_D227_k628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D227_k629) (close _V10_Dprintout2_D227_k630))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D227_k629, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k630, self)})));
}
static void _V10_Dprintout2_D227_k626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D227_k627) (close _V10_Dprintout2_D227_k628))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D227_k627, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k628, self)})));
}
static void _V10_Dprintout2_D227_k625(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 38 0) (close _V10_Dprintout2_D227_k626) (bruijn ##.print-declare.254 11 17) (bruijn ##.declares.235 12 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k626, self)})),
      VGetArg(statics, 11-1, 17),
      VGetArg(statics, 12-1, 8));
}
static void _V10_Dprintout2_D227_k624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 37 0) (close _V10_Dprintout2_D227_k625) (bruijn ##.print-fun.251 10 14) (bruijn ##.x.1603 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k625, self)})),
      VGetArg(statics, 10-1, 14),
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dprintout2_D227_lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.647 36 0) (bruijn ##.k.1623 0 0) (bruijn ##.purec?.229 11 2) (bruijn ##.e.641 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      _var0,
      VGetArg(statics, 11-1, 2),
      _var1);
}
static void _V10_Dprintout2_D227_k623(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 36 0) (close _V10_Dprintout2_D227_k624) (close _V10_Dprintout2_D227_lambda129) (bruijn ##.foreign-functions.233 10 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k624, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_lambda129, self)})),
      VGetArg(statics, 10-1, 6));
}
static void _V10_Dprintout2_D227_k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 35 0) (close _V10_Dprintout2_D227_k623) (bruijn ##.print-foreign-declare.253 8 16) (bruijn ##.declares.235 9 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k623, self)})),
      VGetArg(statics, 8-1, 16),
      VGetArg(statics, 9-1, 8));
}
static void _V10_Dprintout2_D227_k621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-dllmain.245 7 8) (close _V10_Dprintout2_D227_k622) (bruijn ##.literal-table.232 8 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k622, self)})),
      VGetArg(statics, 8-1, 5));
}
static void _V10_Dprintout2_D227_k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 33 0) (close _V10_Dprintout2_D227_k621) (bruijn ##.print-literal-declaration.244 6 7) (bruijn ##.literal-table.232 7 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k621, self)})),
      VGetArg(statics, 6-1, 7),
      VGetArg(statics, 7-1, 5));
}
static void _V10_Dprintout2_D227_k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 30 0) (close _V10_Dprintout2_D227_k620) (##string ##.string.1845))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k620, self)})),
      VEncodePointer(&_V10_Dstring_D1845.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D227_k618(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 29 0) (close _V10_Dprintout2_D227_k619) (##string ##.string.1846))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k619, self)})),
      VEncodePointer(&_V10_Dstring_D1846.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D227_k617(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 28 0) (close _V10_Dprintout2_D227_k618) (##string ##.string.1847))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k618, self)})),
      VEncodePointer(&_V10_Dstring_D1847.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D227_k616(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 27 0) (close _V10_Dprintout2_D227_k617) (##string ##.string.1848))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k617, self)})),
      VEncodePointer(&_V10_Dstring_D1848.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D227_k615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.649 25 0) (close _V10_Dprintout2_D227_k616) (bruijn ##.functions.234 2 7))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_k616, self)})),
      statics->up->vars[7]);
}
static void _V10_Dprintout2_D227_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 if(argc != 10) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D227_lambda2, got ~D~N"
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
  // (letrec 21 ((close _V10_Dprint__global_D237_lambda3) (close _V10_Descape__octal__char_D238_lambda4) (close _V10_Descape__string_D239_lambda5) (close _V10_Descape__char_D240_lambda7) (close _V10_Dprint__literal__string_D241_lambda8) (close _V10_Dprint__intrinsic_D242_lambda9) (close _V10_Dprint__literal_D243_lambda10) (close _V10_Dprint__literal__declaration_D244_lambda11) (close _V10_Dprint__dllmain_D245_lambda12) (close _V10_Dcloses_Q_D246_lambda14) (close _V10_Dprint__basic__expr_D247_lambda31) (close _V10_Dprint__expr_D248_lambda33) (close _V10_Dprint__fun__single_D249_lambda79) (close _V10_Dprint__fun__case_D250_lambda85) (close _V10_Dprint__fun_D251_lambda103) (close _V10_Dprint__toplevel_D252_lambda108) (close _V10_Dprint__foreign__declare_D253_lambda109) (close _V10_Dprint__declare_D254_lambda114) (close _V10_Dprint__declaretable_D255_lambda119) (close _V10_Dprint__toplevels_D256_lambda125) (close _V10_Dprint__main__standard_D257_lambda128)) ((close _V10_Dprintout2_D227_k615) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.toplevels.236 1 9)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[21]; } container;
    self = &container.self;
    VInitEnv(self, 21, 21, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D237_lambda3, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__octal__char_D238_lambda4, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D239_lambda5, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D240_lambda7, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D241_lambda8, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D242_lambda9, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D243_lambda10, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D244_lambda11, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D245_lambda12, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D246_lambda14, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D247_lambda31, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D248_lambda33, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D249_lambda79, self)}));
    self->vars[13] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D250_lambda85, self)}));
    self->vars[14] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D251_lambda103, self)}));
    self->vars[15] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D252_lambda108, self)}));
    self->vars[16] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D253_lambda109, self)}));
    self->vars[17] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D254_lambda114, self)}));
    self->vars[18] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D255_lambda119, self)}));
    self->vars[19] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D256_lambda125, self)}));
    self->vars[20] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D257_lambda128, self)}));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D227_k615, .env = self }, }, 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        statics->vars[9])));
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_k637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.644 38 0) (##inline ##vcore.cons (##inline ##vcore.cons 'printout2 (bruijn ##.printout2.227 3 1)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printout2,
        statics->up->up->vars[1]),
        VNULL));
}
static void _V0vanity_V0compiler_V0transpile_V20_k636(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k637) (bruijn ##.gendllmain.226 2 0) (bruijn ##.x.1627 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k637, self)})),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0transpile_V20_k638(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.670 5 0) (bruijn ##.k.1628 2 0) (##string ##.string.1849) (bruijn ##.x.642 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1849.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1659) ((##vcore.+ (bruijn ##.x.642 2 0) 1)) (set! (close _V0vanity_V0compiler_V0transpile_V20_k638) (bruijn ##.x.642 2 0) (bruijn ##.reg.1659 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k638, self)})),
      VEncodeInt(2l), VEncodeInt(0l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k636) (close _V0vanity_V0compiler_V0transpile_V20_lambda131))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_k636, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda131, self)})));
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
  // (letrec 2 (#f (close _V10_Dprintout2_D227_lambda2)) ((close _V0vanity_V0compiler_V0transpile_V20_lambda130) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D227_lambda2, self)}));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda130, .env = self }, }, 1,
      VEncodeInt(0l));
    }
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
  // ((bruijn ##..vcore.import.178 25 0) (close _V0vanity_V0compiler_V0transpile_V20_k34) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, self)})),
      _V0sprintf);
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
  // ((bruijn ##..vcore.import.178 24 0) (close _V0vanity_V0compiler_V0transpile_V20_k33) 'printf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, self)})),
      _V0printf);
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
  // ((bruijn ##..vcore.import.178 23 0) (close _V0vanity_V0compiler_V0transpile_V20_k32) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, self)})),
      _V0lookup__intrinsic__name);
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
  // ((bruijn ##..vcore.import.178 22 0) (close _V0vanity_V0compiler_V0transpile_V20_k31) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, self)})),
      _V0close__port);
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
  // ((bruijn ##..vcore.import.178 21 0) (close _V0vanity_V0compiler_V0transpile_V20_k30) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, self)})),
      _V0get__output__string);
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
  // ((bruijn ##..vcore.import.178 20 0) (close _V0vanity_V0compiler_V0transpile_V20_k29) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, self)})),
      _V0display);
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
  // ((bruijn ##..vcore.import.178 19 0) (close _V0vanity_V0compiler_V0transpile_V20_k28) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, self)})),
      _V0open__output__string);
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
  // ((bruijn ##..vcore.import.178 18 0) (close _V0vanity_V0compiler_V0transpile_V20_k27) 'mangle-symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, self)})),
      _V0mangle__symbol);
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
  // ((bruijn ##..vcore.import.178 17 0) (close _V0vanity_V0compiler_V0transpile_V20_k26) 'number?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, self)})),
      _V0number_Q);
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
  // ((bruijn ##..vcore.import.178 16 0) (close _V0vanity_V0compiler_V0transpile_V20_k25) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, self)})),
      _V0caar);
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
  // ((bruijn ##..vcore.import.178 15 0) (close _V0vanity_V0compiler_V0transpile_V20_k24) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, self)})),
      _V0cadar);
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
  // ((bruijn ##..vcore.import.178 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k23) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, self)})),
      _V0equal_Q);
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
  // ((bruijn ##..vcore.import.178 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k22) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, self)})),
      _V0cadr);
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
  // ((bruijn ##..vcore.import.178 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k21) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, self)})),
      _V0list__ref);
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
  // ((bruijn ##..vcore.import.178 11 0) (close _V0vanity_V0compiler_V0transpile_V20_k20) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, self)})),
      _V0lookup__inline__name);
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
  // ((bruijn ##..vcore.import.178 10 0) (close _V0vanity_V0compiler_V0transpile_V20_k19) 'iota)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, self)})),
      _V0iota);
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
  // ((bruijn ##..vcore.import.178 9 0) (close _V0vanity_V0compiler_V0transpile_V20_k18) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, self)})),
      _V0map);
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
  // ((bruijn ##..vcore.import.178 8 0) (close _V0vanity_V0compiler_V0transpile_V20_k17) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, self)})),
      _V0length);
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
  // ((bruijn ##..vcore.import.178 7 0) (close _V0vanity_V0compiler_V0transpile_V20_k16) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, self)})),
      _V0append);
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
  // ((bruijn ##..vcore.import.178 6 0) (close _V0vanity_V0compiler_V0transpile_V20_k15) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, self)})),
      _V0error);
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
  // ((bruijn ##..vcore.import.178 5 0) (close _V0vanity_V0compiler_V0transpile_V20_k14) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, self)})),
      _V0cddr);
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
  // ((bruijn ##..vcore.import.178 4 0) (close _V0vanity_V0compiler_V0transpile_V20_k13) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, self)})),
      _V0reverse);
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
  // ((bruijn ##..vcore.import.178 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k12) 'displayln)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, self)})),
      _V0displayln);
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
  // ((bruijn ##..vcore.import.178 2 0) (close _V0vanity_V0compiler_V0transpile_V20_k11) 'print-foreign-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, self)})),
      _V0print__foreign__function);
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
  // ((bruijn ##..vcore.import.178 1 0) (close _V0vanity_V0compiler_V0transpile_V20_k10) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, self)})),
      _V0for__each);
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
  // ((bruijn ##..vcore.import.178 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k9) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, self)})),
      _V0compiler__error);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_k8) (##string ##.string.1850) (bruijn ##.x.1631 6 0) (bruijn ##.x.1632 5 0) (bruijn ##.x.1633 4 0) (bruijn ##.x.1634 3 0) (bruijn ##.x.1635 2 0) (bruijn ##.x.1636 1 0) (bruijn ##.x.1637 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, self)})),
      VEncodePointer(&_V10_Dstring_D1850.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k7) (##string ##.string.1851))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, self)})),
      VEncodePointer(&_V10_Dstring_D1851.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k6) (##string ##.string.1852))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, self)})),
      VEncodePointer(&_V10_Dstring_D1852.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k5) (##string ##.string.1853))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, self)})),
      VEncodePointer(&_V10_Dstring_D1853.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k4) (##string ##.string.1854))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D1854.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k3) (##string ##.string.1855))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D1855.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k2) (##string ##.string.1856))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D1856.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k1) (##string ##.string.1857))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D1857.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1;
