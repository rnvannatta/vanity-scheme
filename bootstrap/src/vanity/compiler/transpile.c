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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2023 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2022 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2021 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2020 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2019 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2018 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2017 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2016 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0mangle__qualified__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0mangle__qualified__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "mangle-qualified-function" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
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
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D2015 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDllMain~A" };
VWEAK VWORD _V0printout2;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0printout2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "printout2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2014 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2013 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2012 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2011 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D2010 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2009 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdlib.h>" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D2008 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "int VanityCurToplevel;" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2007 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VRuntime * VanityRuntime;" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D2006 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "int VanityStatus;" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D2005 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "void VanityMainLoop() {" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2004 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "  if(VanityStatus == VEXITED)" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D2003 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "    return;" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D2002 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "  bool dotoplevel = VanityCurToplevel < VanityToplevelCount;" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D2001 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "  VClosure * thunk = dotoplevel \? &VanityToplevels[VanityCurToplevel]" };
static struct { VBlob sym; char bytes[84]; } _V10_Dstring_D2000 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 84 }, "                                : (VClosure[]){VMakeClosure2((VFunc)VExit2, NULL)};" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1999 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "  VanityStatus = VExecute(VanityRuntime, thunk);" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  if(VanityStatus == VEXITED) {" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "    int ret = VDecodeExitCode(VGetExitCode(VanityRuntime));" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1996 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "    VDestroyRuntime(VanityRuntime);" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1995 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "    VReallyExit(ret);" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1994 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "  }" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1993 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  if(VanityStatus == VFINISHED)" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1992 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "    VanityCurToplevel++;" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1991 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "none" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1990 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "emscripten-loop" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1989 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "winmain" };
static struct { VBlob sym; char bytes[93]; } _V10_Dstring_D1988 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 93 }, "int __stdcall WinMain(void* hInstance, void* hPrevInstance, char* lpCmdLine, int nShowCmd) {" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1987 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "  VInitRuntime2(&VanityRuntime, __argc, __argv);" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1986 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "  while(1) VanityMainLoop();" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1985 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "#include <emscripten/emscripten.h>" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1984 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "int main(int argc, char ** argv) {" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1983 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  VInitRuntime2(&VanityRuntime, argc, argv);" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1982 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "  emscripten_set_main_loop(VanityMainLoop, 0, 1);" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1981 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "VClosure VanityToplevels[] = {~N" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D1980 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "  { .base.tag = VCLOSURE, .func = (VFunc)toplevel~A~N, .env = NULL }," };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1979 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "};~N" };
static struct { VBlob sym; char bytes[78]; } _V10_Dstring_D1978 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 78 }, "int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;~N" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D1977 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "__attribute__((constructor)) static void VRegisterAllDeclares() {~N" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1976 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-declaretable: unknown form" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1975 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "  VRegisterSym(\"~A\", &~A);~N" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1974 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "print-declare: unknown form" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1973 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1972 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-foreign-declare: unknown form" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D1971 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "print-qualified-declaration: unknown form" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1970 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _var~A" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1969 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "V_DECLARE_FUNC(~A" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1968 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "V_DECLARE_FUNC_MIN(~A" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1967 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1966 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VEnv * self = NULL;" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1965 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "static V_BEGIN_FUNC(toplevel~A, \"toplevel~A\", 1, _k)~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1964 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "    self = NULL;" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1963 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_k" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1962 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1961 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1960 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, " VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1959 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1958 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1957 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1956 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "void ~A(VRuntime * runtime, VEnv * statics, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1955 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1954 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1953 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "#ifdef __linux__~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1952 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "\".type ~A, @function\\n\"~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1951 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#endif~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1950 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1949 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "\"    je ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1948 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    cmp \" ARGC_REG \", ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1947 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1946 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1945 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "\".globl ~A\\n\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1944 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "V_BEGIN_FUNC_MIN(~A, \"~A\", 0)~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1943 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  if(0)~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1942 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "    /*dummy*/;~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1941 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1940 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  else if(argc == ~A)~N" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1939 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  else if(argc >= ~A)~N" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1938 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "    ~A(runtime, statics, argc, self);~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1937 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  else~N" };
static struct { VBlob sym; char bytes[54]; } _V10_Dstring_D1936 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "    _V20CaseError_~A(runtime, statics, argc, self);~N" };
static struct { VBlob sym; char bytes[106]; } _V10_Dstring_D1935 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 106 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * statics, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D1934 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "__attribute__((used)) static V_BEGIN_FUNC_MIN(_V20CaseError_~A, \"_V20CaseError_~A\", 0)~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1933 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1932 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1931 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "  struct { VEnv self; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1930 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "  VEnv * self = &container.self;~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1929 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "  VInitEnv(self, ~A, ~A, statics);~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1928 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "  self->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1927 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  self->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1926 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1925 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "argc" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1924 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[48]; } _V10_Dstring_D1923 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 48 }, " V_GATHER_VARARGS_PUREC(&_varargs, ~A, argc);~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1922 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, " self->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1921 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1920 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1919 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1918 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1917 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1916 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1915 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1914 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1913 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, " VRecordCall2(runtime, &dbg);~N" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1912 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "void ~A(VRuntime * runtime, VEnv * statics, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1911 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1910 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1909 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ", ..." };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1908 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "V_BEGIN_FUNC~A(~A, \"~A\", ~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1907 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1906 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ")~N" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1905 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1904 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_MIN" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1903 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "static " };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1902 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1901 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V50" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1900 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1899 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-expr: malformed expression" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[83]; } _V10_Dstring_D1898 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 83 }, "(VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)~A, NULL)))))" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1897 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1896 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1895 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "} else {" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1894 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "}" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1893 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "VGetArg(statics, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1892 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "statics->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1891 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "statics->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1890 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "statics->up->vars[~A]" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1889 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "statics->vars[~A]" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D1888 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "(VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)~A, self))))" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1887 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1886 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "~A(runtime,~N        " };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1885 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1884 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1883 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1882 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D1881 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "    V_BOUNCE_FUNC(VSetGlobalVar2, NULL, runtime,~N      " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1880 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1879 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[116]; } _V10_Dstring_D1878 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 116 }, "    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,~N      " };
static struct { VBlob sym; char bytes[123]; } _V10_Dstring_D1877 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 123 }, "    V_BOUNCE((VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self))))), runtime,~N      " };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1876 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[66]; } _V10_Dstring_D1875 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 66 }, "    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1874 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "    V_BOUNCE_FUNC(VDefineGlobalVar2, NULL, runtime,~N      " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1873 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    {" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1872 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "    VEnv * statics = self;" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1871 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "    VInitEnv(self, ~A, ~A, statics);~N" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1870 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "self->vars[~A]" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1869 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "    self->vars[~A] = " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1868 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ";" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1867 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    }" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1866 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "    struct { VEnv self; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1865 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "    self = &container.self;~N" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1864 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    self = VAlloca(runtime, sizeof(VEnv)+sizeof(VWORD[~A]));~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1863 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "  {~N" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1862 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "    VClosure * _closure = " };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1861 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VDecodeClosure(" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1860 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)~A, self))" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1859 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "    VWORD _arg~A = ~N      " };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1858 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ";~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1857 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "  }~N" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1856 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "    if(VStackOverflow(runtime)){~N" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1855 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "      VGarbageCollect2Closure(runtime, _closure, ~A" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1854 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "    } else {~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1853 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "       ~A(runtime, _closure->env, ~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1852 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "    }~N" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1851 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "    V_BOUNCE_FUNC(~A, _closure->env, runtime" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1850 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1849 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1848 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "), ~A" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1847 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "    V_BOUNCE(" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1846 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ", runtime" };
static struct { VBlob sym; char bytes[99]; } _V10_Dstring_D1845 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 99 }, "    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)~A, self)), ~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1844 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ");~N" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1843 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "    VCallFuncWithGC(runtime, (VFunc)~A, ~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1842 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "    V_BOUNCE_FUNC((VFunc)~A, self, runtime" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_VBasic_~A(runtime, NULL" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1840 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1839 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1838 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "basic expression that isn't an intrinsic call" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1837 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "closes\?: unknown form" };
VWEAK VWORD _V10qualified__call;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10qualified__call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##qualified-call" };
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
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1836 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static __attribute__((constructor)) void ~A() {~N" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1835 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "}~N" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D1834 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1833 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1832 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VWEAK VWORD _V40~A;" };
static struct { VBlob sym; char bytes[102]; } _V10_Dstring_D1830 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 102 }, "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)~A, NULL };~N" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[139]; } _V10_Dstring_D1829 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 139 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1828 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VWEAK VWORD ~A;" };
static struct { VBlob sym; char bytes[123]; } _V10_Dstring_D1827 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 123 }, "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1825 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1824 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VNULLPTR" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VVOID" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V40~A" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\t" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "\\177" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\a" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "\\0~A~A" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "VLookupGlobalVarFast2(runtime, \"~A\")" };
static struct { VBlob sym; char bytes[82]; } _V10_Dstring_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 82 }, "(VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)~A,NULL)))))" };
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
  _V0mangle__qualified__function = VEncodePointer(VLookupConstant("_V0mangle__qualified__function", &_VW_V0mangle__qualified__function), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
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
  _V10qualified__call = VEncodePointer(VLookupConstant("_V10qualified__call", &_VW_V10qualified__call), VPOINTER_OTHER);
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
V_DECLARE_FUNC(_V50_V10_Dx_D1768, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0transpile_V0printout2, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10);
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.builtin.274 0 0) ((bruijn ##.x.721 6 0) (bruijn ##.k.724 1 0) (##string ##.string.1805) (bruijn ##.builtin.274 0 0)) ((bruijn ##.x.721 6 0) (bruijn ##.k.724 1 0) (##string ##.string.1806) (bruijn ##.sym.273 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1806.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.720 6 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251_V0k36) (bruijn ##.sym.273 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251_V0k36, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.722 8 0) (bruijn ##.k.725 4 0) (##string ##.string.1807) (bruijn ##.x.727 1 0) (bruijn ##.x.728 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 4,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.remainder (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k39) (bruijn ##.reg.1779 2 0) 8)
    VCallFuncWithGC(runtime, (VFunc)VRem2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k39, self)))),
      statics->up->vars[0],
      VEncodeInt(8l));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.726 0 0) (##vcore.quotient (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k38) (bruijn ##.reg.1779 1 0) 8) ((bruijn ##.k.725 2 0) (bruijn ##.c.275 2 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VQuot2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k38, self)))),
      statics->vars[0],
      VEncodeInt(8l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1779) ((##vcore.char-integer (bruijn ##.c.275 1 1))) (##vcore.< (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k37) (bruijn ##.reg.1779 0 0) 32))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252_V0k37, self)))),
      self->vars[0],
      VEncodeInt(32l));
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.749 1 0) ((bruijn ##.k.750 0 0) (bruijn ##.p.749 1 0)) (##vcore.eqv? (bruijn ##.k.750 0 0) (bruijn ##.reg.1781 10 0) '#\\))
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.717 26 0) (bruijn ##.k.739 9 0) (bruijn ##.reg.1781 11 0) (bruijn ##.x.731 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.717 26 0) (bruijn ##.k.739 9 0) (bruijn ##.x.748 0 0) (bruijn ##.x.731 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      _var0,
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.746 0 0) ((bruijn ##.x.717 25 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k53) #\\ (bruijn ##.x.731 14 0)) (##qualified-call (vanity compiler transpile printout2 ##.escape-octal-char.252) (bruijn ##.escape-octal-char.252 17 1) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k54) (bruijn ##.reg.1781 10 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k53, self)))),
      VEncodeChar('\\'),
      VGetArg(statics, 14-1, 0));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k54, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 0);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k51) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k52))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k52, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.745 0 0) ((bruijn ##.x.717 23 0) (bruijn ##.k.739 6 0) (##string ##.string.1814) (bruijn ##.x.731 12 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k50) (bruijn ##.reg.1781 8 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1814.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k50, self)))),
      VGetArg(statics, 8-1, 0),
      VEncodeChar('"'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.744 0 0) ((bruijn ##.x.717 22 0) (bruijn ##.k.739 5 0) (##string ##.string.1813) (bruijn ##.x.731 11 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k49) (bruijn ##.reg.1781 7 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1813.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k49, self)))),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('?'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.743 0 0) ((bruijn ##.x.717 21 0) (bruijn ##.k.739 4 0) (##string ##.string.1812) (bruijn ##.x.731 10 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k48) (bruijn ##.reg.1781 6 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1812.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k48, self)))),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('\r'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.742 0 0) ((bruijn ##.x.717 20 0) (bruijn ##.k.739 3 0) (##string ##.string.1811) (bruijn ##.x.731 9 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k47) (bruijn ##.reg.1781 5 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1811.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k47, self)))),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('\n'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.741 0 0) ((bruijn ##.x.717 19 0) (bruijn ##.k.739 2 0) (##string ##.string.1810) (bruijn ##.x.731 8 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k46) (bruijn ##.reg.1781 4 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1810.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k46, self)))),
      statics->up->up->up->vars[0],
      VEncodeChar('\t'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.740 0 0) ((bruijn ##.x.717 18 0) (bruijn ##.k.739 1 0) (##string ##.string.1809) (bruijn ##.x.731 7 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k45) (bruijn ##.reg.1781 3 0) '#\delete))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k45, self)))),
      statics->up->up->vars[0],
      VEncodeChar('\177'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.738 1 0) ((bruijn ##.x.717 17 0) (bruijn ##.k.739 0 0) (##string ##.string.1808) (bruijn ##.x.731 6 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k44) (bruijn ##.reg.1781 2 0) '#\backspace))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k44, self)))),
      statics->up->vars[0],
      VEncodeChar('\b'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1782) ((##vcore.+ (bruijn ##.i.281 5 1) 1)) (##qualified-call (vanity compiler transpile printout2 ##.escape-string.253 ##.loop.280) (bruijn ##.loop.280 6 0) (bruijn ##.k.734 5 0) (bruijn ##.reg.1782 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k43) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k55))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k55, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.735 0 0) (basic-block 1 1 (##.reg.1781) ((##vcore.string-ref (bruijn ##.s.277 6 1) (bruijn ##.i.281 2 1))) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k42) (bruijn ##.reg.1781 0 0) '#\alarm)) ((bruijn ##.k.734 1 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k42, self)))),
      self->vars[0],
      VEncodeChar('\a'));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k41) (bruijn ##.i.281 0 1) (bruijn ##.reg.1780 3 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280_V0k41, self)))),
      _var1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.729 6 0) (bruijn ##.ret.284 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.719 12 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k58) (bruijn ##.x.731 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k58, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.718 12 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k57) (bruijn ##.x.731 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k57, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280")) (##qualified-call (vanity compiler transpile printout2 ##.escape-string.253 ##.loop.280) (bruijn ##.loop.280 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k56) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k56, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V10_Dloop_D280(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1780) ((##vcore.string-length (bruijn ##.s.277 1 1))) ((bruijn ##.x.716 11 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k40)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253_V0k40, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.759 0 0) ((bruijn ##.k.751 8 0) (##string ##.string.1816)) (##qualified-call (vanity compiler transpile printout2 ##.escape-octal-char.252) (bruijn ##.escape-octal-char.252 9 1) (bruijn ##.k.751 8 0) (bruijn ##.c.285 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1816.sym, VPOINTER_OTHER));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 1));
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.758 0 0) ((bruijn ##.k.751 7 0) (##string ##.string.1815)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k66) (bruijn ##.c.285 7 1) '#\'))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1815.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k66, self)))),
      VGetArg(statics, 7-1, 1),
      VEncodeChar('\''));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.757 0 0) ((bruijn ##.k.751 6 0) (##string ##.string.1813)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k65) (bruijn ##.c.285 6 1) '#\\))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1813.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k65, self)))),
      VGetArg(statics, 6-1, 1),
      VEncodeChar('\\'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.756 0 0) ((bruijn ##.k.751 5 0) (##string ##.string.1812)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k64) (bruijn ##.c.285 5 1) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1812.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k64, self)))),
      VGetArg(statics, 5-1, 1),
      VEncodeChar('\r'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.755 0 0) ((bruijn ##.k.751 4 0) (##string ##.string.1811)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k63) (bruijn ##.c.285 4 1) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1811.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k63, self)))),
      statics->up->up->up->vars[1],
      VEncodeChar('\n'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.754 0 0) ((bruijn ##.k.751 3 0) (##string ##.string.1810)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k62) (bruijn ##.c.285 3 1) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1810.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k62, self)))),
      statics->up->up->vars[1],
      VEncodeChar('\t'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.753 0 0) ((bruijn ##.k.751 2 0) (##string ##.string.1809)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k61) (bruijn ##.c.285 2 1) '#\delete))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k61, self)))),
      statics->up->vars[1],
      VEncodeChar('\177'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.752 0 0) ((bruijn ##.k.751 1 0) (##string ##.string.1808)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k60) (bruijn ##.c.285 1 1) '#\backspace))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k60, self)))),
      statics->vars[1],
      VEncodeChar('\b'));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k59) (bruijn ##.c.285 0 1) '#\alarm)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254_V0k59, self)))),
      _var1,
      VEncodeChar('\a'));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 6 0) (bruijn ##.k.760 1 0) (##string ##.string.1817) (bruijn ##.x.761 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1817.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.715 11 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255_V0k67) (bruijn ##.x.287 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255_V0k67, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 6 0) (bruijn ##.k.762 1 0) (##string ##.string.1818) (bruijn ##.x.763 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1818.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.715 11 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256_V0k68) (bruijn ##.x.288 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256_V0k68, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 11 0) (bruijn ##.k.764 6 0) (##string ##.string.1823) (bruijn ##.x.770 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1823.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.717 16 0) (bruijn ##.k.764 7 0) (bruijn ##.x.774 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.766 0 0) ((bruijn ##.x.721 7 0) (bruijn ##.k.764 2 0) (##string ##.string.1820) (bruijn ##.x.289 2 1)) (basic-block 1 1 (##.reg.1784) ((##vcore.void? (bruijn ##.x.289 3 1))) (if (bruijn ##.reg.1784 0 0) ((bruijn ##.x.721 8 0) (bruijn ##.k.764 3 0) (##string ##.string.1821)) (basic-block 1 1 (##.reg.1785) ((##vcore.nullptr? (bruijn ##.x.289 4 1))) (if (bruijn ##.reg.1785 0 0) ((bruijn ##.x.721 9 0) (bruijn ##.k.764 4 0) (##string ##.string.1822)) (basic-block 1 1 (##.reg.1786) ((##vcore.char? (bruijn ##.x.289 5 1))) (if (bruijn ##.reg.1786 0 0) (##qualified-call (vanity compiler transpile printout2 ##.escape-char.254) (bruijn ##.escape-char.254 6 3) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k70) (bruijn ##.x.289 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.289 5 1) #t) ((bruijn ##.x.721 10 0) (bruijn ##.k.764 5 0) (##string ##.string.1824)) (if (##inline ##vcore.eq? (bruijn ##.x.289 5 1) #f) ((bruijn ##.x.721 10 0) (bruijn ##.k.764 5 0) (##string ##.string.1825)) (basic-block 1 1 (##.reg.1787) ((##vcore.symbol? (bruijn ##.x.289 6 1))) (if (bruijn ##.reg.1787 0 0) ((bruijn ##.x.715 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k71) (bruijn ##.x.289 6 1)) ((bruijn ##.x.696 36 0) (bruijn ##.k.764 6 0) (##string ##.string.1826) (bruijn ##.x.289 6 1)))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER),
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
      VEncodePointer(&_V10_Dstring_D1821.sym, VPOINTER_OTHER));
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
      VEncodePointer(&_V10_Dstring_D1822.sym, VPOINTER_OTHER));
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k70, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(true)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1824.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1825.sym, VPOINTER_OTHER));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k71, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1826.sym, VPOINTER_OTHER),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1783) ((##vcore.int? (bruijn ##.x.289 1 1))) (if (bruijn ##.reg.1783 0 0) ((bruijn ##.x.721 6 0) (bruijn ##.k.764 1 0) (##string ##.string.1819) (bruijn ##.x.289 1 1)) ((bruijn ##.x.714 13 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k69) (bruijn ##.x.289 1 1))))
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
      VEncodePointer(&_V10_Dstring_D1819.sym, VPOINTER_OTHER),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257_V0k69, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 12 0) (bruijn ##.k.775 7 0) (##string ##.string.1827) (bruijn ##.reg.1790 1 1) (bruijn ##.mangled.291 5 0) (bruijn ##.reg.1790 1 1) (bruijn ##.escaped.292 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 6,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1827.sym, VPOINTER_OTHER),
      statics->vars[1],
      VGetArg(statics, 5-1, 0),
      statics->vars[1],
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.1789 ##.reg.1790) ((##vcore.string-length (bruijn ##.x.779 1 0)) (##vcore.+ (bruijn ##.reg.1789 0 0) 1)) ((bruijn ##.x.721 11 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k76) (##string ##.string.1828) (bruijn ##.mangled.291 4 0)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k76, self)))),
      VEncodePointer(&_V10_Dstring_D1828.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k75) (##inline ##vcore.car (bruijn ##.lit.290 4 1)))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k75, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.escape-string.253) (bruijn ##.escape-string.253 4 2) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k74) (bruijn ##.x.781 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k74, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k73) (##inline ##vcore.car (bruijn ##.lit.290 2 1)))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k73, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.1792 ##.reg.1793) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.lit.290 5 1))) (##vcore.+ (bruijn ##.reg.1792 0 0) 1)) ((bruijn ##.x.721 10 0) (bruijn ##.k.775 5 0) (##string ##.string.1829) (bruijn ##.reg.1793 0 1) (bruijn ##.mangled.294 2 0) (bruijn ##.reg.1793 0 1) (bruijn ##.escaped.295 1 0)))
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
      VEncodePointer(&_V10_Dstring_D1829.sym, VPOINTER_OTHER),
      self->vars[1],
      statics->up->vars[0],
      self->vars[1],
      statics->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.escape-string.253) (bruijn ##.escape-string.253 4 2) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k78) (##inline ##vcore.car (bruijn ##.lit.290 3 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k78, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.794 1 0) (bruijn ##.x.795 0 0) '##intrinsic)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V10intrinsic);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.lit.290 3 1))) ((bruijn ##.x.713 16 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k80) (bruijn ##.lit.290 3 1)) ((bruijn ##.k.794 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k80, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 11 0) (bruijn ##.k.775 6 0) (##string ##.string.1830) (bruijn ##.mangled.297 1 0) (##inline ##vcore.cdr (bruijn ##.lit.290 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1830.sym, VPOINTER_OTHER),
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 10 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k84) (##string ##.string.1831) (bruijn ##.mangled.297 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k84, self)))),
      VEncodePointer(&_V10_Dstring_D1831.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.715 15 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k83) (bruijn ##.x.792 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k83, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.789 0 0) ((bruijn ##.x.712 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k82) (bruijn ##.lit.290 3 1)) ((bruijn ##.x.696 33 0) (bruijn ##.k.775 3 0) (##string ##.string.1832) (bruijn ##.lit.290 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k82, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1832.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1788) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.lit.290 1 1)))) (if (bruijn ##.reg.1788 0 0) ((bruijn ##.x.715 12 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k72) (##inline ##vcore.car (bruijn ##.lit.290 1 1))) (basic-block 1 1 (##.reg.1791) ((##vcore.string? (##inline ##vcore.car (bruijn ##.lit.290 2 1)))) (if (bruijn ##.reg.1791 0 0) ((bruijn ##.x.715 13 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k77) (##inline ##vcore.cdr (bruijn ##.lit.290 2 1))) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k79) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k81))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k72, self)))),
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k77, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258_V0k81, self)))));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 9 0) (bruijn ##.k.800 2 0) (##string ##.string.1833) (bruijn ##.mangled.301 0 0) (bruijn ##.mangled.301 0 0) (bruijn ##.mangled.301 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 5,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1833.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.806 1 0) (bruijn ##.x.807 0 0) '##intrinsic)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V10intrinsic);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.lit.300 2 1))) ((bruijn ##.x.713 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k87) (bruijn ##.lit.300 2 1)) ((bruijn ##.k.806 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k87, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 11 0) (bruijn ##.k.800 4 0) (##string ##.string.1834) (bruijn ##.mangled.302 0 0) (bruijn ##.mangled.302 0 0) (bruijn ##.mangled.302 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 5,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1834.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.715 16 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k90) (bruijn ##.x.804 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k90, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.803 0 0) ((bruijn ##.x.712 18 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k89) (bruijn ##.lit.300 2 1)) ((bruijn ##.k.800 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k89, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1794) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.lit.300 1 1)))) (if (bruijn ##.reg.1794 0 0) ((bruijn ##.x.715 14 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k85) (##inline ##vcore.car (bruijn ##.lit.300 1 1))) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k86) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k88))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k85, self)))),
      VInlineCar2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299_V0k88, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 9 0) (bruijn ##.k.799 4 0) (##string ##.string.1835))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k93) (bruijn ##.print-init.299 2 0) (bruijn ##.literals.298 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k93, self)))),
      statics->up->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 7 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k92) (##string ##.string.1836) (bruijn ##.x.812 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k92, self)))),
      VEncodePointer(&_V10_Dstring_D1836.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299")) ((bruijn ##.gendllmain.239 4 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k91)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V10_Dprint__init_D299, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259_V0k91, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.936 0 0) (bruijn ##.k.932 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.937 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.307 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.307 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k97) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda3) (bruijn ##.kk.2.304 3 1)) ((bruijn ##.k.932 2 0) #f)) ((bruijn ##.k.932 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k97, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda3, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.933 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k96) (##inline ##vcore.cdr (bruijn ##.expr.303 3 1))) ((bruijn ##.k.932 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k96, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 2 1)) ((bruijn ##.x.711 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k95) 'close (##inline ##vcore.car (bruijn ##.expr.303 2 1))) ((bruijn ##.k.932 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k95, self)))),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.928 0 0) (bruijn ##.k.926 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.929 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.927 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k101) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda4) (bruijn ##.kk.2.304 3 1)) ((bruijn ##.k.926 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda4, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 3 1)) ((bruijn ##.x.711 18 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k100) 'quote (##inline ##vcore.car (bruijn ##.expr.303 3 1))) ((bruijn ##.k.926 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k100, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.922 0 0) (bruijn ##.k.920 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.923 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.921 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k105) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda5) (bruijn ##.kk.2.304 4 1)) ((bruijn ##.k.920 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k105, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda5, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 4 1)) ((bruijn ##.x.711 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k104) 'bruijn (##inline ##vcore.car (bruijn ##.expr.303 4 1))) ((bruijn ##.k.920 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k104, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.916 0 0) (bruijn ##.k.914 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.917 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.915 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k109) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda6) (bruijn ##.kk.2.304 5 1)) ((bruijn ##.k.914 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k109, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda6, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 5 1)) ((bruijn ##.x.711 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k108) '##string (##inline ##vcore.car (bruijn ##.expr.303 5 1))) ((bruijn ##.k.914 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k108, self)))),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.910 0 0) (bruijn ##.k.908 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.911 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.909 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k113) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda7) (bruijn ##.kk.2.304 6 1)) ((bruijn ##.k.908 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k113, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda7, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 6 1)) ((bruijn ##.x.711 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k112) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.303 6 1))) ((bruijn ##.k.908 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k112, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.901 0 0) (bruijn ##.k.895 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.904 0 0) ((bruijn ##.k.902 2 0) (bruijn ##.p.904 0 0)) (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 15 9) (bruijn ##.k.902 2 0) (##inline ##vcore.car (bruijn ##.expr.13.318 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 9));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.903 0 0) ((bruijn ##.k.902 1 0) (bruijn ##.p.903 0 0)) (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 14 9) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k122) (##inline ##vcore.car (bruijn ##.expr.12.316 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k122, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 13 9) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k121) (##inline ##vcore.car (bruijn ##.expr.11.314 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k121, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.318 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.13.318 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k120) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda8) (bruijn ##.kk.2.304 10 1)) ((bruijn ##.k.895 4 0) #f)) ((bruijn ##.k.895 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k120, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda8, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.316 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k119) (##inline ##vcore.cdr (bruijn ##.expr.12.316 0 0))) ((bruijn ##.k.895 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k119, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.314 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k118) (##inline ##vcore.cdr (bruijn ##.expr.11.314 0 0))) ((bruijn ##.k.895 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k118, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.896 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k117) (##inline ##vcore.cdr (bruijn ##.expr.303 8 1))) ((bruijn ##.k.895 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k117, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 7 1)) ((bruijn ##.x.711 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k116) 'if (##inline ##vcore.car (bruijn ##.expr.303 7 1))) ((bruijn ##.k.895 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k116, self)))),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.890 0 0) (bruijn ##.k.884 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.891 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.325 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.17.325 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k129) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda9) (bruijn ##.kk.2.304 11 1)) ((bruijn ##.k.884 4 0) #f)) ((bruijn ##.k.884 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k129, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda9, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.323 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k128) (##inline ##vcore.cdr (bruijn ##.expr.16.323 0 0))) ((bruijn ##.k.884 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k128, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.321 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k127) (##inline ##vcore.cdr (bruijn ##.expr.15.321 0 0))) ((bruijn ##.k.884 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k127, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.885 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k126) (##inline ##vcore.cdr (bruijn ##.expr.303 9 1))) ((bruijn ##.k.884 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k126, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 8 1)) ((bruijn ##.x.711 23 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k125) 'set! (##inline ##vcore.car (bruijn ##.expr.303 8 1))) ((bruijn ##.k.884 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k125, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.879 0 0) (bruijn ##.k.873 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.880 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.332 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.21.332 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k136) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda10) (bruijn ##.kk.2.304 12 1)) ((bruijn ##.k.873 4 0) #f)) ((bruijn ##.k.873 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k136, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda10, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.330 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k135) (##inline ##vcore.cdr (bruijn ##.expr.20.330 0 0))) ((bruijn ##.k.873 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k135, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.328 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k134) (##inline ##vcore.cdr (bruijn ##.expr.19.328 0 0))) ((bruijn ##.k.873 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k134, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.874 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k133) (##inline ##vcore.cdr (bruijn ##.expr.303 10 1))) ((bruijn ##.k.873 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k133, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 9 1)) ((bruijn ##.x.711 24 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k132) 'define (##inline ##vcore.car (bruijn ##.expr.303 9 1))) ((bruijn ##.k.873 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k132, self)))),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.869 0 0) (bruijn ##.k.866 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 14 9) (bruijn ##.k.870 0 0) (##inline ##vcore.cdr (bruijn ##.expr.23.335 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.335 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k141) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda11) (bruijn ##.kk.2.304 11 1)) ((bruijn ##.k.866 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k141, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda11, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.867 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k140) (##inline ##vcore.cdr (bruijn ##.expr.303 11 1))) ((bruijn ##.k.866 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k140, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 10 1)) ((bruijn ##.x.711 25 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k139) '##inline (##inline ##vcore.car (bruijn ##.expr.303 10 1))) ((bruijn ##.k.866 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k139, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.862 0 0) (bruijn ##.k.860 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.863 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.861 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k145) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda12) (bruijn ##.kk.2.304 11 1)) ((bruijn ##.k.860 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k145, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda12, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 11 1)) ((bruijn ##.x.711 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k144) 'letrec (##inline ##vcore.car (bruijn ##.expr.303 11 1))) ((bruijn ##.k.860 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k144, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.856 0 0) (bruijn ##.k.854 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.857 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.855 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k149) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda13) (bruijn ##.kk.2.304 12 1)) ((bruijn ##.k.854 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k149, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda13, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 12 1)) ((bruijn ##.x.711 27 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k148) 'basic-block (##inline ##vcore.car (bruijn ##.expr.303 12 1))) ((bruijn ##.k.854 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k148, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.849 0 0) (bruijn ##.k.845 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.851 0 0) ((bruijn ##.k.850 1 0) (bruijn ##.p.851 0 0)) (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 19 9) (bruijn ##.k.850 1 0) (##inline ##vcore.cdr (bruijn ##.expr.28.342 2 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 9));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 18 9) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k156) (##inline ##vcore.car (bruijn ##.expr.28.342 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k156, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.342 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k155) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda14) (bruijn ##.kk.2.304 15 1)) ((bruijn ##.k.845 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k155, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda14, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.341 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k154) (##inline ##vcore.cdr (bruijn ##.expr.27.341 0 0))) ((bruijn ##.k.845 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k154, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.846 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k153) (##inline ##vcore.cdr (bruijn ##.expr.303 14 1))) ((bruijn ##.k.845 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k153, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 13 1)) ((bruijn ##.x.711 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k152) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.303 13 1))) ((bruijn ##.k.845 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k152, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.841 0 0) (bruijn ##.k.839 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 16 9) (bruijn ##.k.842 0 0) (##inline ##vcore.car (bruijn ##.expr.303 15 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 14 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.303 14 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k159) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda15) (bruijn ##.kk.2.304 13 1)) ((bruijn ##.k.839 0 0) #f)) ((bruijn ##.k.839 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k159, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda15, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.835 0 0) (bruijn ##.k.834 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.837 0 0) ((bruijn ##.k.836 1 0) (bruijn ##.p.837 0 0)) (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 18 9) (bruijn ##.k.836 1 0) (##inline ##vcore.cdr (bruijn ##.expr.303 17 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 9));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 17 9) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k163) (##inline ##vcore.car (bruijn ##.expr.303 16 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k163, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 16-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303 15 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k162) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda16) (bruijn ##.kk.2.304 14 1)) ((bruijn ##.k.834 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k162, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda16, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 48 0) (bruijn ##.k.830 0 0) (##string ##.string.1837) (bruijn ##.expr.303 18 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1837.sym, VPOINTER_OTHER),
      VGetArg(statics, 18-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.814 16 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda17) (bruijn ##.kk.2.304 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 16-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda17, self)))),
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.831 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k166))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k166, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.832 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k165) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda18) (bruijn ##.kk.2.304 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k165, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda18, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k161) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k164))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k164, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k158) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k160))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k160, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k151) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k157))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k151, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k157, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k147) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k150, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k143) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k146))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k146, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k138) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k142))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k138, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k142, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k131) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k137))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k137, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k124) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k130))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k130, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k115) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k123))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k115, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k123, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k111) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k114))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k111, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k114, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k107) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k110))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k110, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k103) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k106))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k106, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k99) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k102, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k94) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k98))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k94, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0k98, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.813 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260_V0lambda2, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.name.353 1 0)) ((bruijn ##.x.696 32 0) (bruijn ##.k.948 0 0) (##string ##.string.1838) (bruijn ##.expr.351 2 1)) ((bruijn ##.k.948 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1838.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 9 0) (bruijn ##.k.940 4 0) (##string ##.string.1839))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1839.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 6 11) (bruijn ##.k.943 1 0) (bruijn ##.x.354 1 1) (bruijn ##.args.352 5 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 11));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.721 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k172) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k172, self)))),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k171) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0lambda19) (##inline ##vcore.cdr (bruijn ##.expr.351 3 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k171, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0lambda19, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 7 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k170) (##string ##.string.1841) (bruijn ##.name.353 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k170, self)))),
      VEncodePointer(&_V10_Dstring_D1841.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k168) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k169))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k169, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.720 6 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k167) (##inline ##vcore.car (bruijn ##.expr.351 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261_V0k167, self)))),
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 9 0) (bruijn ##.k.956 1 0) (##string ##.string.1842) (bruijn ##.x.957 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1842.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 10 0) (bruijn ##.k.956 2 0) (##string ##.string.1843) (bruijn ##.x.958 1 0) (bruijn ##.x.959 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1843.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k176) (bruijn ##.xs.366 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k176, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 5 2) ((bruijn ##.x.720 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k174) (bruijn ##.f.365 1 1)) ((bruijn ##.x.720 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k175) (bruijn ##.f.365 1 1)))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k174, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k175, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 9 0) (bruijn ##.k.951 2 0) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 6 11) (bruijn ##.k.954 1 0) (bruijn ##.x.368 1 1) (bruijn ##.args.356 5 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 11));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.721 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k179) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k179, self)))),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k178) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0lambda20) (bruijn ##.xs.366 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0lambda20, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k173) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k177))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k173, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357_V0k177, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 9 0) (bruijn ##.k.960 2 0) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 6 11) (bruijn ##.k.963 1 0) (bruijn ##.x.377 1 1) (bruijn ##.args.356 5 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 11));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.721 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k182) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k182, self)))),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k181) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda21) (bruijn ##.xs.370 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k181, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda21, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.978 0 0) (bruijn ##.k.974 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 14 0) (bruijn ##.k.979 1 0) (##string ##.string.1845) (bruijn ##.fun.376 2 0) (bruijn ##.x.980 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1845.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 10 2) ((bruijn ##.x.721 13 0) (bruijn ##.k.979 0 0) (##string ##.string.1842) (bruijn ##.fun.376 1 0)) ((bruijn ##.x.704 30 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k188) (bruijn ##.xs.370 6 2)))
if(VDecodeBool(
VGetArg(statics, 10-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1842.sym, VPOINTER_OTHER),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k188, self)))),
      VGetArg(statics, 6-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.84.375 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k187) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda23) (bruijn ##.kk.81.372 4 1)) ((bruijn ##.k.974 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k187, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda23, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.375 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k186) (##inline ##vcore.car (bruijn ##.expr.84.375 0 0))) ((bruijn ##.k.974 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k186, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.975 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k185) (##inline ##vcore.cdr (bruijn ##.f.369 3 1))) ((bruijn ##.k.974 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k185, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.f.369 2 1)) ((bruijn ##.x.711 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k184) 'close (##inline ##vcore.car (bruijn ##.f.369 2 1))) ((bruijn ##.k.974 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k184, self)))),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 12 0) (bruijn ##.k.967 2 0) (##string ##.string.1846))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1846.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 7 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k191) (bruijn ##.f.369 4 1) (bruijn ##.args.356 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k191, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 13 0) (bruijn ##.k.967 3 0) (##string ##.string.1848) (bruijn ##.x.972 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1848.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k194) (bruijn ##.xs.370 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k194, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 7 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k193) (bruijn ##.f.369 4 1) (bruijn ##.args.356 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k193, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 7 2) ((bruijn ##.x.717 14 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k190) (##string ##.string.1847)) ((bruijn ##.x.717 14 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k192) (##string ##.string.1849)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k190, self)))),
      VEncodePointer(&_V10_Dstring_D1847.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k192, self)))),
      VEncodePointer(&_V10_Dstring_D1849.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.965 1 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda24) (bruijn ##.kk.81.372 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda24, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k183) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k189))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k189, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358, got ~D~N"
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
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k180) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda22))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0k180, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358_V0lambda22, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 19 0) (bruijn ##.k.992 3 0) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.721 19 0) (bruijn ##.k.995 0 0) (##string ##.string.1850) (bruijn ##.i.391 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1850.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 42 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k206) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda25) (bruijn ##.x.996 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k206, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda25, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k205) (bruijn ##.x.987 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k205, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 26 0) (bruijn ##.k.992 10 0) (##string ##.string.1852))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D1852.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 25 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k216) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k216, self)))),
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.721 25 0) (bruijn ##.k.1005 0 0) (##string ##.string.1850) (bruijn ##.i.393 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1850.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 48 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k215) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda26) (bruijn ##.x.1006 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k215, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda26, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 38 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k214) (bruijn ##.x.987 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k214, self)))),
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k213) (##string ##.string.1853) (bruijn ##.x.986 13 0) (bruijn ##.x.987 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k213, self)))),
      VEncodePointer(&_V10_Dstring_D1853.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k212) (##string ##.string.1854))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k212, self)))),
      VEncodePointer(&_V10_Dstring_D1854.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k211) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k211, self)))),
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.721 20 0) (bruijn ##.k.1007 0 0) (##string ##.string.1850) (bruijn ##.i.392 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1850.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 43 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k210) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda27) (bruijn ##.x.1008 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k210, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda27, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 33 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k209) (bruijn ##.x.987 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k209, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k208) (##string ##.string.1855) (bruijn ##.x.987 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k208, self)))),
      VEncodePointer(&_V10_Dstring_D1855.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 13 2) ((bruijn ##.x.721 16 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k204) (##string ##.string.1851) (bruijn ##.x.986 7 0)) ((bruijn ##.x.721 16 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k207) (##string ##.string.1856)))
if(VDecodeBool(
VGetArg(statics, 13-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k204, self)))),
      VEncodePointer(&_V10_Dstring_D1851.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k207, self)))),
      VEncodePointer(&_V10_Dstring_D1856.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 16 0) (bruijn ##.k.983 9 0) (##string ##.string.1857))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1857.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k203) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k217))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k203, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k217, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 17 0) (bruijn ##.k.1009 2 0) (##string ##.string.1858))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1858.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 12 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k219) (bruijn ##.x.389 1 1) (bruijn ##.args.356 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k219, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.721 15 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k218) (##string ##.string.1859) (bruijn ##.i.390 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k218, self)))),
      VEncodePointer(&_V10_Dstring_D1859.sym, VPOINTER_OTHER),
      _var2);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 38 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k202) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda28) (bruijn ##.xs.380 7 3) (bruijn ##.x.1012 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k202, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda28, self)))),
      VGetArg(statics, 7-1, 3),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k201) (bruijn ##.x.987 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k201, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 12 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k200) (##string ##.string.1858))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k200, self)))),
      VEncodePointer(&_V10_Dstring_D1858.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1023 0 0) (bruijn ##.k.1019 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 16 0) (bruijn ##.k.1024 0 0) (##string ##.string.1860) (bruijn ##.x.986 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1860.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.387 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.387 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k223) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda30) (bruijn ##.kk.85.384 3 1)) ((bruijn ##.k.1019 2 0) #f)) ((bruijn ##.k.1019 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k223, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda30, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1020 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k222) (##inline ##vcore.cdr (bruijn ##.f.379 7 2))) ((bruijn ##.k.1019 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k222, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.f.379 6 2)) ((bruijn ##.x.711 23 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k221) 'close (##inline ##vcore.car (bruijn ##.f.379 6 2))) ((bruijn ##.k.1019 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k221, self)))),
      _V0close,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 16 0) (bruijn ##.k.1015 2 0) (##string ##.string.1839))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1839.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 11 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k226) (bruijn ##.f.379 8 2) (bruijn ##.args.356 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k226, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 14 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k225) (##string ##.string.1861))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k225, self)))),
      VEncodePointer(&_V10_Dstring_D1861.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1013 1 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda31) (bruijn ##.kk.85.384 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda31, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k220) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k224))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k220, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k224, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k199) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k199, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0lambda29, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 10 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k198) (##string ##.string.1862))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k198, self)))),
      VEncodePointer(&_V10_Dstring_D1862.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k197) (bruijn ##.xs.380 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k197, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.705 24 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k196) (bruijn ##.name.378 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k196, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359, got ~D~N"
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
  // ((bruijn ##.x.721 7 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k195) (##string ##.string.1863))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359_V0k195, self)))),
      VEncodePointer(&_V10_Dstring_D1863.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 11 0) (bruijn ##.k.1040 1 0) (##string ##.string.1865))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1865.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 7 2) ((bruijn ##.x.721 10 0) (bruijn ##.k.1040 0 0) (##string ##.string.1864) (bruijn ##.n.394 3 1)) ((bruijn ##.x.721 10 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k230) (##string ##.string.1866) (bruijn ##.n.394 3 1)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1864.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k230, self)))),
      VEncodePointer(&_V10_Dstring_D1866.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 38 0) (bruijn ##.k.1027 9 0) (##string ##.string.1867))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1867.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 11 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k237) (bruijn ##.body.396 8 3) (bruijn ##.args.398 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k237, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 39 0) (bruijn ##.k.1034 2 0) (##string ##.string.1868))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1868.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 12 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k239) (bruijn ##.x.399 1 1) (bruijn ##.args.398 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k239, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.721 15 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k238) (##string ##.string.1869) (bruijn ##.i.400 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k238, self)))),
      VEncodePointer(&_V10_Dstring_D1869.sym, VPOINTER_OTHER),
      _var2);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 38 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k236) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda32) (bruijn ##.xs.395 7 2) (bruijn ##.x.1037 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k236, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda32, self)))),
      VGetArg(statics, 7-1, 2),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k235) (bruijn ##.n.394 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k235, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.722 12 0) (bruijn ##.k.1038 0 0) (##string ##.string.1870) (bruijn ##.i.401 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1870.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.707 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k234) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda33) (bruijn ##.x.1039 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k234, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0lambda33, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k233) (bruijn ##.n.394 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k233, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 10 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k232) (##string ##.string.1871) (bruijn ##.n.394 3 1) (bruijn ##.n.394 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k232, self)))),
      VEncodePointer(&_V10_Dstring_D1871.sym, VPOINTER_OTHER),
      statics->up->up->vars[1],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k229) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k231))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k229, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k231, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 30 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k228) (##string ##.string.1872))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k228, self)))),
      VEncodePointer(&_V10_Dstring_D1872.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360, got ~D~N"
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
  // ((bruijn ##.x.699 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k227) (##string ##.string.1873))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360_V0k227, self)))),
      VEncodePointer(&_V10_Dstring_D1873.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 11 0) (bruijn ##.k.1055 1 0) (##string ##.string.1865))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1865.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 7 2) ((bruijn ##.x.721 10 0) (bruijn ##.k.1055 0 0) (##string ##.string.1864) (bruijn ##.n.403 3 2)) ((bruijn ##.x.721 10 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k243) (##string ##.string.1866) (bruijn ##.n.403 3 2)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1864.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k243, self)))),
      VEncodePointer(&_V10_Dstring_D1866.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 38 0) (bruijn ##.k.1042 9 0) (##string ##.string.1867))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1867.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 11 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k250) (bruijn ##.body.406 8 5) (bruijn ##.args.407 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k250, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 5);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 39 0) (bruijn ##.k.1049 2 0) (##string ##.string.1868))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1868.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-basic-expr.261) (bruijn ##.print-basic-expr.261 12 10) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k252) (bruijn ##.x.408 1 1) (bruijn ##.args.407 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k252, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.721 15 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k251) (##string ##.string.1869) (bruijn ##.i.409 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k251, self)))),
      VEncodePointer(&_V10_Dstring_D1869.sym, VPOINTER_OTHER),
      _var2);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 38 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k249) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda34) (bruijn ##.vals.405 7 4) (bruijn ##.x.1052 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k249, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda34, self)))),
      VGetArg(statics, 7-1, 4),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k248) (bruijn ##.n.403 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k248, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.722 12 0) (bruijn ##.k.1053 0 0) (##string ##.string.1870) (bruijn ##.i.410 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1870.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.707 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k247) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda35) (bruijn ##.x.1054 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k247, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0lambda35, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k246) (bruijn ##.n.403 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k246, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 10 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k245) (##string ##.string.1871) (bruijn ##.n.403 3 2) (bruijn ##.n.403 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k245, self)))),
      VEncodePointer(&_V10_Dstring_D1871.sym, VPOINTER_OTHER),
      statics->up->up->vars[2],
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k242) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k244))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k242, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k244, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 30 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k241) (##string ##.string.1872))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k241, self)))),
      VEncodePointer(&_V10_Dstring_D1872.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361, got ~D~N"
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
  // ((bruijn ##.x.699 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k240) (##string ##.string.1873))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361_V0k240, self)))),
      VEncodePointer(&_V10_Dstring_D1873.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.242 5 2) ((bruijn ##.x.721 8 0) (bruijn ##.k.1064 0 0) (##string ##.string.1874)) ((bruijn ##.x.721 8 0) (bruijn ##.k.1064 0 0) (##string ##.string.1875)))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1874.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1875.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 13 0) (bruijn ##.k.1057 6 0) (##string ##.string.1876))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1876.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 8 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k259) (bruijn ##.x.413 5 3) (bruijn ##.args.356 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k259, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 3);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 11 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k258) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k258, self)))),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-literal.257) (bruijn ##.print-literal.257 6 6) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k257) (bruijn ##.y.412 3 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 6));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k257, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k256) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k256, self)))),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 4 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k255) (bruijn ##.k.411 1 1) (bruijn ##.args.356 3 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[11]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k255, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k253) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k254))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k253, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362_V0k254, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1087 0 0) (bruijn ##.k.1081 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.242 12 2) ((bruijn ##.x.721 15 0) (bruijn ##.k.1093 0 0) (##string ##.string.1877)) ((bruijn ##.x.721 15 0) (bruijn ##.k.1093 0 0) (##string ##.string.1878)))
if(VDecodeBool(
VGetArg(statics, 12-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1877.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1878.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 18 0) (bruijn ##.k.1088 4 0) (##string ##.string.1876))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1876.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 13 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k270) (bruijn ##.x.417 10 3) (bruijn ##.args.356 12 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k270, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 3);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 16 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k269) (##string ##.string.1879) (##inline ##vcore.car (bruijn ##.expr.93.424 4 0)) (##inline ##vcore.car (bruijn ##.expr.94.426 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k269, self)))),
      VEncodePointer(&_V10_Dstring_D1879.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 11 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k268) (bruijn ##.k.415 8 1) (bruijn ##.args.356 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k268, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k266) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k267))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k266, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k267, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.426 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.94.426 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k265) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda37) (bruijn ##.kk.89.419 5 1)) ((bruijn ##.k.1081 4 0) #f)) ((bruijn ##.k.1081 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k265, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda37, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.93.424 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k264) (##inline ##vcore.cdr (bruijn ##.expr.93.424 0 0))) ((bruijn ##.k.1081 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k264, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.422 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k263) (##inline ##vcore.cdr (bruijn ##.expr.92.422 0 0))) ((bruijn ##.k.1081 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k263, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1082 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k262) (##inline ##vcore.cdr (bruijn ##.y.416 3 2))) ((bruijn ##.k.1081 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k262, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.y.416 2 2)) ((bruijn ##.x.711 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k261) 'bruijn (##inline ##vcore.car (bruijn ##.y.416 2 2))) ((bruijn ##.k.1081 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k261, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 37 0) (bruijn ##.k.1069 0 0) (##string ##.string.1880) (bruijn ##.y.416 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1880.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1066 3 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda38) (bruijn ##.kk.89.419 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda38, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1070 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k273))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k273, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.242 9 2) ((bruijn ##.x.721 12 0) (bruijn ##.k.1079 0 0) (##string ##.string.1881)) ((bruijn ##.x.721 12 0) (bruijn ##.k.1079 0 0) (##string ##.string.1882)))
if(VDecodeBool(
VGetArg(statics, 9-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1881.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1882.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 17 0) (bruijn ##.k.1071 7 0) (##string ##.string.1876))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1876.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 12 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k280) (bruijn ##.x.417 9 3) (bruijn ##.args.356 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k280, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 3);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 15 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k279) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k279, self)))),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-literal.257) (bruijn ##.print-literal.257 10 6) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k278) (bruijn ##.y.416 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 6));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k278, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 13 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k277) (##string ##.string.1840))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k277, self)))),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 8 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k276) (bruijn ##.k.415 5 1) (bruijn ##.args.356 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k276, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1795) ((##vcore.symbol? (bruijn ##.y.416 4 2))) (if (bruijn ##.reg.1795 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k274) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k275)) ((bruijn ##.x.696 36 0) (bruijn ##.k.1071 1 0) (##string ##.string.1883))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k274, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k275, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1883.sym, VPOINTER_OTHER));
}
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k272) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda39) (bruijn ##.kk.89.419 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k272, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda39, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k260) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k271))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k260, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0k271, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.1065 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363_V0lambda36, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.inline.431 1 0)) ((bruijn ##.x.696 34 0) (bruijn ##.k.1109 0 0) (##string ##.string.1884) (bruijn ##.f.429 2 1)) ((bruijn ##.k.1109 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1884.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 10 11) (bruijn ##.k.1103 1 0) (bruijn ##.x.432 1 1) (bruijn ##.args.356 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 11));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.721 13 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k287) (##string ##.string.1885))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k287, self)))),
      VEncodePointer(&_V10_Dstring_D1885.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 36 0) (bruijn ##.k.1101 1 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0lambda40) (##inline ##vcore.cdr (bruijn ##.xs.430 5 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0lambda40, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.430 4 2))) (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 7 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k286) (##inline ##vcore.car (bruijn ##.xs.430 4 2)) (bruijn ##.args.356 6 2)) ((bruijn ##.k.1101 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        statics->up->up->up->vars[2])))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k286, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 11 0) (bruijn ##.k.1096 4 0) (##string ##.string.1839))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1839.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k285) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k288))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k285, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k288, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k284) (##string ##.string.1886) (bruijn ##.inline.431 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k284, self)))),
      VEncodePointer(&_V10_Dstring_D1886.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k282) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k283))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k282, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k283, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.708 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k281) (bruijn ##.f.429 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364_V0k281, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1303 0 0) (bruijn ##.k.1298 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.717 15 0) (bruijn ##.k.1304 0 0) (##string ##.string.1887))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1887.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.436 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.34.436 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.34.436 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k292) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda42) (bruijn ##.kk.31.433 3 1)) ((bruijn ##.k.1298 2 0) #f)) ((bruijn ##.k.1298 2 0) #f)) ((bruijn ##.k.1298 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k292, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda42, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1299 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k291) (##inline ##vcore.cdr (bruijn ##.expr.355 4 1))) ((bruijn ##.k.1298 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k291, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 3 1)) ((bruijn ##.x.711 18 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k290) 'quote (##inline ##vcore.car (bruijn ##.expr.355 3 1))) ((bruijn ##.k.1298 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k290, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1291 0 0) (bruijn ##.k.1283 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-literal-string.255) (bruijn ##.print-literal-string.255 11 4) (bruijn ##.k.1292 0 0) (##inline ##vcore.car (bruijn ##.expr.38.440 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 4));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.440 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.440 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.438 3 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k300) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda43) (bruijn ##.kk.31.433 7 1)) ((bruijn ##.k.1283 5 0) #f)) ((bruijn ##.k.1283 5 0) #f)) ((bruijn ##.k.1283 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k300, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda43, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1287 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k299) (##inline ##vcore.cdr (bruijn ##.expr.37.439 1 0))) ((bruijn ##.k.1283 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k299, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.439 0 0)) ((bruijn ##.x.711 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k298) '##string (##inline ##vcore.car (bruijn ##.expr.37.439 0 0))) ((bruijn ##.k.1283 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k298, self)))),
      _V10string,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.438 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k297) (##inline ##vcore.car (bruijn ##.expr.36.438 0 0))) ((bruijn ##.k.1283 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k297, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1284 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k296) (##inline ##vcore.cdr (bruijn ##.expr.355 5 1))) ((bruijn ##.k.1283 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k296, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 4 1)) ((bruijn ##.x.711 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k295) 'quote (##inline ##vcore.car (bruijn ##.expr.355 4 1))) ((bruijn ##.k.1283 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k295, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1278 0 0) (bruijn ##.k.1274 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-literal.257) (bruijn ##.print-literal.257 9 6) (bruijn ##.k.1279 0 0) (##inline ##vcore.car (bruijn ##.expr.40.443 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 6));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.443 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.443 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k305) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda44) (bruijn ##.kk.31.433 5 1)) ((bruijn ##.k.1274 2 0) #f)) ((bruijn ##.k.1274 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k305, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda44, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1275 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k304) (##inline ##vcore.cdr (bruijn ##.expr.355 6 1))) ((bruijn ##.k.1274 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k304, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 5 1)) ((bruijn ##.x.711 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k303) 'quote (##inline ##vcore.car (bruijn ##.expr.355 5 1))) ((bruijn ##.k.1274 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k303, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1269 0 0) (bruijn ##.k.1265 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 14 0) (bruijn ##.k.1270 0 0) (##string ##.string.1888) (##inline ##vcore.car (bruijn ##.expr.42.446 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1888.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.446 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.446 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k310) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda45) (bruijn ##.kk.31.433 6 1)) ((bruijn ##.k.1265 2 0) #f)) ((bruijn ##.k.1265 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k310, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda45, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1266 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k309) (##inline ##vcore.cdr (bruijn ##.expr.355 7 1))) ((bruijn ##.k.1265 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k309, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 6 1)) ((bruijn ##.x.711 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k308) 'close (##inline ##vcore.car (bruijn ##.expr.355 6 1))) ((bruijn ##.k.1265 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k308, self)))),
      _V0close,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1254 0 0) (bruijn ##.k.1248 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.717 25 0) (bruijn ##.k.1255 2 0) (bruijn ##.x.1257 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1261 0 0) ((bruijn ##.x.721 24 0) (bruijn ##.k.1255 5 0) (##string ##.string.1892) (bruijn ##.right.454 6 0)) ((bruijn ##.x.721 24 0) (bruijn ##.k.1255 5 0) (##string ##.string.1893) (bruijn ##.up.452 8 0) (bruijn ##.right.454 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1892.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1893.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1260 0 0) ((bruijn ##.x.721 23 0) (bruijn ##.k.1255 4 0) (##string ##.string.1891) (bruijn ##.right.454 5 0)) (##vcore.= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k325) (bruijn ##.up.452 7 0) 4))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1891.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k325, self)))),
      VGetArg(statics, 7-1, 0),
      VEncodeInt(4l));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1259 0 0) ((bruijn ##.x.721 22 0) (bruijn ##.k.1255 3 0) (##string ##.string.1890) (bruijn ##.right.454 4 0)) (##vcore.= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k324) (bruijn ##.up.452 6 0) 3))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1890.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k324, self)))),
      VGetArg(statics, 6-1, 0),
      VEncodeInt(3l));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1258 0 0) ((bruijn ##.x.721 21 0) (bruijn ##.k.1255 2 0) (##string ##.string.1889) (bruijn ##.right.454 3 0)) (##vcore.= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k323) (bruijn ##.up.452 5 0) 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1889.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k323, self)))),
      VGetArg(statics, 5-1, 0),
      VEncodeInt(2l));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1256 0 0) ((bruijn ##.x.709 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k321) (bruijn ##.args.356 15 2) (bruijn ##.right.454 2 0)) (##vcore.= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k322) (bruijn ##.up.452 4 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k321, self)))),
      VGetArg(statics, 15-1, 2),
      statics->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k322, self)))),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k320) (bruijn ##.up.452 3 0) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k320, self)))),
      statics->up->up->vars[0],
      VEncodeInt(0l));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.46.453 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k319) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda46) (bruijn ##.kk.31.433 11 1)) ((bruijn ##.k.1248 6 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k319, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda46, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.453 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k318) (##inline ##vcore.car (bruijn ##.expr.46.453 0 0))) ((bruijn ##.k.1248 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k318, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k317) (##inline ##vcore.cdr (bruijn ##.expr.45.451 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k317, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.451 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k316) (##inline ##vcore.car (bruijn ##.expr.45.451 0 0))) ((bruijn ##.k.1248 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k316, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.449 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k315) (##inline ##vcore.cdr (bruijn ##.expr.44.449 0 0))) ((bruijn ##.k.1248 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k315, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1249 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k314) (##inline ##vcore.cdr (bruijn ##.expr.355 8 1))) ((bruijn ##.k.1248 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k314, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 7 1)) ((bruijn ##.x.711 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k313) 'bruijn (##inline ##vcore.car (bruijn ##.expr.355 7 1))) ((bruijn ##.k.1248 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k313, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1237 0 0) (bruijn ##.k.1231 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 46 0) (bruijn ##.k.1238 6 0) (##string ##.string.1894))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1894.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 19 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k338) (##inline ##vcore.car (bruijn ##.expr.50.460 6 0)) (bruijn ##.args.356 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k338, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0));
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 44 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k337) (##string ##.string.1895))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k337, self)))),
      VEncodePointer(&_V10_Dstring_D1895.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 17 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k336) (##inline ##vcore.car (bruijn ##.expr.49.458 5 0)) (bruijn ##.args.356 16 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k336, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0));
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 42 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k335) (##string ##.string.1896))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k335, self)))),
      VEncodePointer(&_V10_Dstring_D1896.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 15 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k334) (##inline ##vcore.car (bruijn ##.expr.48.456 4 0)) (bruijn ##.args.356 14 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k334, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 40 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k333) (##string ##.string.1897))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k333, self)))),
      VEncodePointer(&_V10_Dstring_D1897.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.460 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.460 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k332) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda47) (bruijn ##.kk.31.433 10 1)) ((bruijn ##.k.1231 4 0) #f)) ((bruijn ##.k.1231 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k332, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda47, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.458 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k331) (##inline ##vcore.cdr (bruijn ##.expr.49.458 0 0))) ((bruijn ##.k.1231 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k331, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.456 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k330) (##inline ##vcore.cdr (bruijn ##.expr.48.456 0 0))) ((bruijn ##.k.1231 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k330, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1232 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k329) (##inline ##vcore.cdr (bruijn ##.expr.355 9 1))) ((bruijn ##.k.1231 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k329, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 8 1)) ((bruijn ##.x.711 23 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k328) 'if (##inline ##vcore.car (bruijn ##.expr.355 8 1))) ((bruijn ##.k.1231 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k328, self)))),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1226 0 0) (bruijn ##.k.1220 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-set.363) (bruijn ##.print-set.363 13 6) (bruijn ##.k.1227 0 0) (##inline ##vcore.car (bruijn ##.expr.52.463 3 0)) (##inline ##vcore.car (bruijn ##.expr.53.465 2 0)) (##inline ##vcore.car (bruijn ##.expr.54.467 1 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 6));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg4 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.467 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.54.467 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k345) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda48) (bruijn ##.kk.31.433 11 1)) ((bruijn ##.k.1220 4 0) #f)) ((bruijn ##.k.1220 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k345, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda48, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.465 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k344) (##inline ##vcore.cdr (bruijn ##.expr.53.465 0 0))) ((bruijn ##.k.1220 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k344, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.463 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k343) (##inline ##vcore.cdr (bruijn ##.expr.52.463 0 0))) ((bruijn ##.k.1220 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k343, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1221 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k342) (##inline ##vcore.cdr (bruijn ##.expr.355 10 1))) ((bruijn ##.k.1220 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k342, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 9 1)) ((bruijn ##.x.711 24 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k341) 'set! (##inline ##vcore.car (bruijn ##.expr.355 9 1))) ((bruijn ##.k.1220 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k341, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1215 0 0) (bruijn ##.k.1209 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-define-global.362) (bruijn ##.print-define-global.362 14 5) (bruijn ##.k.1216 0 0) (##inline ##vcore.car (bruijn ##.expr.56.470 3 0)) (##inline ##vcore.car (bruijn ##.expr.57.472 2 0)) (##inline ##vcore.car (bruijn ##.expr.58.474 1 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 5));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg4 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.474 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.58.474 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k352) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda49) (bruijn ##.kk.31.433 12 1)) ((bruijn ##.k.1209 4 0) #f)) ((bruijn ##.k.1209 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k352, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda49, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.472 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k351) (##inline ##vcore.cdr (bruijn ##.expr.57.472 0 0))) ((bruijn ##.k.1209 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k351, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.470 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k350) (##inline ##vcore.cdr (bruijn ##.expr.56.470 0 0))) ((bruijn ##.k.1209 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k350, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1210 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k349) (##inline ##vcore.cdr (bruijn ##.expr.355 11 1))) ((bruijn ##.k.1209 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k349, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 10 1)) ((bruijn ##.x.711 25 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k348) 'define (##inline ##vcore.car (bruijn ##.expr.355 10 1))) ((bruijn ##.k.1209 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k348, self)))),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1205 0 0) (bruijn ##.k.1202 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-inline.364) (bruijn ##.print-inline.364 13 7) (bruijn ##.k.1206 0 0) (##inline ##vcore.car (bruijn ##.expr.60.477 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.60.477 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 7));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.477 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k357) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda50) (bruijn ##.kk.31.433 11 1)) ((bruijn ##.k.1202 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k357, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda50, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1203 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k356) (##inline ##vcore.cdr (bruijn ##.expr.355 12 1))) ((bruijn ##.k.1202 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k356, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 11 1)) ((bruijn ##.x.711 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k355) '##inline (##inline ##vcore.car (bruijn ##.expr.355 11 1))) ((bruijn ##.k.1202 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k355, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1197 0 0) (bruijn ##.k.1193 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-literal-string.255) (bruijn ##.print-literal-string.255 16 4) (bruijn ##.k.1198 0 0) (##inline ##vcore.car (bruijn ##.expr.62.481 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 4));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.481 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.481 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k362) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda51) (bruijn ##.kk.31.433 12 1)) ((bruijn ##.k.1193 2 0) #f)) ((bruijn ##.k.1193 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k362, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda51, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1194 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k361) (##inline ##vcore.cdr (bruijn ##.expr.355 13 1))) ((bruijn ##.k.1193 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k361, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 12 1)) ((bruijn ##.x.711 27 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k360) '##string (##inline ##vcore.car (bruijn ##.expr.355 12 1))) ((bruijn ##.k.1193 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k360, self)))),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1188 0 0) (bruijn ##.k.1184 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-intrinsic.256) (bruijn ##.print-intrinsic.256 17 5) (bruijn ##.k.1189 0 0) (##inline ##vcore.car (bruijn ##.expr.64.484 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 5));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.484 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.64.484 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k367) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda52) (bruijn ##.kk.31.433 13 1)) ((bruijn ##.k.1184 2 0) #f)) ((bruijn ##.k.1184 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k367, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda52, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1185 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k366) (##inline ##vcore.cdr (bruijn ##.expr.355 14 1))) ((bruijn ##.k.1184 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k366, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 13 1)) ((bruijn ##.x.711 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k365) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.355 13 1))) ((bruijn ##.k.1184 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k365, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1179 0 0) (bruijn ##.k.1175 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 22 0) (bruijn ##.k.1180 0 0) (##string ##.string.1898) (##inline ##vcore.car (bruijn ##.expr.66.487 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1898.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.487 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.66.487 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k372) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda53) (bruijn ##.kk.31.433 14 1)) ((bruijn ##.k.1175 2 0) #f)) ((bruijn ##.k.1175 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k372, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda53, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1176 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k371) (##inline ##vcore.cdr (bruijn ##.expr.355 15 1))) ((bruijn ##.k.1175 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k371, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 14 1)) ((bruijn ##.x.711 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k370) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.355 14 1))) ((bruijn ##.k.1175 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k370, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1170 0 0) (bruijn ##.k.1164 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-letrec.360) (bruijn ##.print-letrec.360 19 3) (bruijn ##.k.1171 0 0) (##inline ##vcore.car (bruijn ##.expr.68.490 3 0)) (##inline ##vcore.car (bruijn ##.expr.69.492 2 0)) (##inline ##vcore.car (bruijn ##.expr.70.494 1 0)) (bruijn ##.args.356 20 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 3));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg4 = 
      VGetArg(statics, 20-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.494 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.70.494 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k379) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda54) (bruijn ##.kk.31.433 17 1)) ((bruijn ##.k.1164 4 0) #f)) ((bruijn ##.k.1164 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k379, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda54, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.492 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k378) (##inline ##vcore.cdr (bruijn ##.expr.69.492 0 0))) ((bruijn ##.k.1164 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k378, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.490 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k377) (##inline ##vcore.cdr (bruijn ##.expr.68.490 0 0))) ((bruijn ##.k.1164 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k377, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1165 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k376) (##inline ##vcore.cdr (bruijn ##.expr.355 16 1))) ((bruijn ##.k.1164 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k376, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 15 1)) ((bruijn ##.x.711 30 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k375) 'letrec (##inline ##vcore.car (bruijn ##.expr.355 15 1))) ((bruijn ##.k.1164 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k375, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1159 0 0) (bruijn ##.k.1151 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-basic-block.361) (bruijn ##.print-basic-block.361 22 4) (bruijn ##.k.1160 0 0) (##inline ##vcore.car (bruijn ##.expr.72.497 5 0)) (##inline ##vcore.car (bruijn ##.expr.73.499 4 0)) (##inline ##vcore.car (bruijn ##.expr.74.501 3 0)) (##inline ##vcore.car (bruijn ##.expr.75.503 2 0)) (##inline ##vcore.car (bruijn ##.expr.76.505 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 4));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg4 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg5 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.505 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.76.505 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k388) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda55) (bruijn ##.kk.31.433 20 1)) ((bruijn ##.k.1151 6 0) #f)) ((bruijn ##.k.1151 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k388, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda55, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.503 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k387) (##inline ##vcore.cdr (bruijn ##.expr.75.503 0 0))) ((bruijn ##.k.1151 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k387, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.501 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k386) (##inline ##vcore.cdr (bruijn ##.expr.74.501 0 0))) ((bruijn ##.k.1151 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k386, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.499 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k385) (##inline ##vcore.cdr (bruijn ##.expr.73.499 0 0))) ((bruijn ##.k.1151 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k385, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.497 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k384) (##inline ##vcore.cdr (bruijn ##.expr.72.497 0 0))) ((bruijn ##.k.1151 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k384, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1152 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k383) (##inline ##vcore.cdr (bruijn ##.expr.355 17 1))) ((bruijn ##.k.1151 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k383, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 16 1)) ((bruijn ##.x.711 31 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k382) 'basic-block (##inline ##vcore.car (bruijn ##.expr.355 16 1))) ((bruijn ##.k.1151 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 16-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k382, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1147 0 0) (bruijn ##.k.1143 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-qualified-apply.359) (bruijn ##.print-qualified-apply.359 20 2) (bruijn ##.k.1148 0 0) (##inline ##vcore.car (bruijn ##.expr.78.508 2 0)) (##inline ##vcore.car (bruijn ##.expr.79.510 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.79.510 1 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 2));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->vars[0]);
    VWORD _arg4 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.510 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k394) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda56) (bruijn ##.kk.31.433 18 1)) ((bruijn ##.k.1143 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k394, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda56, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.78.508 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k393) (##inline ##vcore.cdr (bruijn ##.expr.78.508 0 0))) ((bruijn ##.k.1143 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k393, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1144 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k392) (##inline ##vcore.cdr (bruijn ##.expr.355 18 1))) ((bruijn ##.k.1143 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k392, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 18-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 17 1)) ((bruijn ##.x.711 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k391) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.355 17 1))) ((bruijn ##.k.1143 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 17-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k391, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1134 0 0) (bruijn ##.k.1133 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.f.514 4 0)) (##vcore.eqv? (bruijn ##.k.1140 0 0) (##inline ##vcore.car (bruijn ##.f.514 4 0)) '##intrinsic) ((bruijn ##.k.1140 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-builtin-apply.357) (bruijn ##.print-builtin-apply.357 23 0) (bruijn ##.k.1135 3 0) (bruijn ##.x.1138 0 0) (bruijn ##.xs.515 4 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 0));
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1137 0 0) ((bruijn ##.x.710 39 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k403) (bruijn ##.f.514 4 0)) (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-closure-apply.358) (bruijn ##.print-closure-apply.358 22 1) (bruijn ##.k.1135 2 0) (bruijn ##.f.514 4 0) (bruijn ##.xs.515 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k403, self)))),
      statics->up->up->up->vars[0]);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 1));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1136 0 0) (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262 ##.print-builtin-apply.357) (bruijn ##.print-builtin-apply.357 21 0) (bruijn ##.k.1135 1 0) (bruijn ##.f.514 3 0) (bruijn ##.xs.515 2 0) #f) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k401) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k402)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k401, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k402, self)))));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.720 27 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k400) (bruijn ##.f.514 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k400, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k399) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda57) (bruijn ##.kk.31.433 18 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k399, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda57, self)))),
      VGetArg(statics, 18-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k398) (##inline ##vcore.cdr (bruijn ##.expr.355 19 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k398, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 1)));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.355 18 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k397) (##inline ##vcore.car (bruijn ##.expr.355 18 1))) ((bruijn ##.k.1133 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 18-1, 1)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k397, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 18-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 51 0) (bruijn ##.k.1128 0 0) (##string ##.string.1899) (bruijn ##.expr.355 21 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1899.sym, VPOINTER_OTHER),
      VGetArg(statics, 21-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1110 18 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda58) (bruijn ##.kk.31.433 18 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 18-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda58, self)))),
      VGetArg(statics, 18-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1129 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k406))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k406, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1796) ((##vcore.symbol? (bruijn ##.expr.355 20 1))) (if (bruijn ##.reg.1796 0 0) (##qualified-call (vanity compiler transpile printout2 ##.print-global.251) (bruijn ##.print-global.251 21 0) (bruijn ##.k.1130 1 0) (bruijn ##.expr.355 20 1)) (##qualified-call (vanity compiler transpile printout2 ##.print-literal.257) (bruijn ##.print-literal.257 21 6) (bruijn ##.k.1130 1 0) (bruijn ##.expr.355 20 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 6));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k405) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda59) (bruijn ##.kk.31.433 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k405, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda59, self)))),
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k396) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k404))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k396, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k404, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k390) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k395))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k390, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k395, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k381) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k389))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k381, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k389, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k374) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k380))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k374, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k380, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k369) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k373))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k369, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k373, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k364) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k368))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k364, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k368, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k359) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k363))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k359, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k363, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k354) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k358))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k354, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k358, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k347) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k353))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k347, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k353, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k340) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k346))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k340, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k346, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k327) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k339))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k327, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k339, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k312) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k326))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k312, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k326, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k307) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k311))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k307, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k311, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k302) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k306))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k302, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k306, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k294) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k301))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k294, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k301, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k289) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k293))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k289, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0k293, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 8 ((close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364")) (##vcore.call/cc (bruijn ##.k.950 1 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda41)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__builtin__apply_D357, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__closure__apply_D358, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__qualified__apply_D359, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__letrec_D360, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__basic__block_D361, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__define__global_D362, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__set_D363, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V10_Dprint__inline_D364, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262_V0lambda41, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.722 8 0) (bruijn ##.k.1310 0 0) (##string ##.string.1900) (bruijn ##.e.526 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1900.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.707 22 0) (bruijn ##.k.1309 1 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0lambda60) (bruijn ##.x.1311 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0lambda60, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.706 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0k407) (bruijn ##.num.525 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523_V0k407, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1797 1 0) ((bruijn ##.k.1380 0 0) (bruijn ##.name.517 3 1)) (##vcore.symbol->string (bruijn ##.k.1380 0 0) (bruijn ##.name.517 3 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      _var0,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.711 22 0) (bruijn ##.k.1376 1 0) (bruijn ##.x.1377 0 0) (##string ##.string.1901))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1901.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1375 1 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k412) (bruijn ##.str.527 3 0) 0 4) ((bruijn ##.k.1376 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k412, self)))),
      statics->up->up->vars[0],
      VEncodeInt(0l),
      VEncodeInt(4l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.needs-used?.522 9 6) ((bruijn ##.x.721 14 0) (bruijn ##.k.1372 0 0) (##string ##.string.1902)) ((bruijn ##.k.1372 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 9-1, 6))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1902.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.is-static.524 9 1) ((bruijn ##.x.721 15 0) (bruijn ##.k.1371 0 0) (##string ##.string.1903)) ((bruijn ##.k.1371 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 9-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1903.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.520 12 4) ((bruijn ##.k.1365 0 0) (##string ##.string.1904)) ((bruijn ##.k.1365 0 0) (##string ##.string.1905)))
if(VDecodeBool(
VGetArg(statics, 12-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1904.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1905.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 19 0) (bruijn ##.k.1360 3 0) (##string ##.string.1906))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1906.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.721 19 0) (bruijn ##.k.1363 0 0) (##string ##.string.1907) (bruijn ##.arg.529 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1907.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 42 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k424) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda61) (bruijn ##.args.528 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k424, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda61, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k423) (##string ##.string.1908) (bruijn ##.x.1364 0 0) (bruijn ##.name.517 12 1) (bruijn ##.name.517 12 1) (bruijn ##.num.519 12 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k423, self)))),
      VEncodePointer(&_V10_Dstring_D1908.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(statics, 12-1, 1),
      VGetArg(statics, 12-1, 1),
      VGetArg(statics, 12-1, 3));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.520 14 4) ((bruijn ##.x.721 19 0) (bruijn ##.k.1369 0 0) (##string ##.string.1909)) ((bruijn ##.k.1369 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 14-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1909.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 19 0) (bruijn ##.k.1360 3 0) (##string ##.string.1910))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1910.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k427) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k428))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k427, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k428, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.721 18 0) (bruijn ##.k.1370 0 0) (##string ##.string.1911) (bruijn ##.arg.530 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1911.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 41 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k426) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda62) (bruijn ##.args.528 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k426, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda62, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 13 2) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k421) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k422)) ((bruijn ##.x.721 16 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k425) (##string ##.string.1912) (bruijn ##.name.517 11 1)))
if(VDecodeBool(
VGetArg(statics, 13-1, 2))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k421, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k422, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k425, self)))),
      VEncodePointer(&_V10_Dstring_D1912.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 18 0) (bruijn ##.k.1358 1 0) (##string ##.string.1913))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1913.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.243 14 3) ((bruijn ##.x.721 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k431) (##string ##.string.1914) (bruijn ##.name.517 12 1)) ((bruijn ##.k.1358 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 14-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k431, self)))),
      VEncodePointer(&_V10_Dstring_D1914.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.purec?.242 15 2)) ((bruijn ##.k.1357 0 0) (bruijn ##.check-args?.518 13 2)) ((bruijn ##.k.1357 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 15-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 23 0) (bruijn ##.k.1347 4 0) (##string ##.string.1915))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1915.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k439) (##string ##.string.1916))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k439, self)))),
      VEncodePointer(&_V10_Dstring_D1916.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k438) (##string ##.string.1917) (bruijn ##.num.519 16 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k438, self)))),
      VEncodePointer(&_V10_Dstring_D1917.sym, VPOINTER_OTHER),
      VGetArg(statics, 16-1, 3));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k437) (##string ##.string.1918) (bruijn ##.name.517 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k437, self)))),
      VEncodePointer(&_V10_Dstring_D1918.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 23 0) (bruijn ##.k.1347 4 0) (##string ##.string.1915))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1915.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k443) (##string ##.string.1916))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k443, self)))),
      VEncodePointer(&_V10_Dstring_D1916.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k442) (##string ##.string.1920) (bruijn ##.num.519 16 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k442, self)))),
      VEncodePointer(&_V10_Dstring_D1920.sym, VPOINTER_OTHER),
      VGetArg(statics, 16-1, 3));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k441) (##string ##.string.1918) (bruijn ##.name.517 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k441, self)))),
      VEncodePointer(&_V10_Dstring_D1918.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1346 1 0) (if (bruijn ##.variadic?.520 14 4) ((bruijn ##.x.721 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k436) (##string ##.string.1919) (bruijn ##.num.519 14 3)) ((bruijn ##.x.721 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k440) (##string ##.string.1921) (bruijn ##.num.519 14 3))) ((bruijn ##.k.1347 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
if(VDecodeBool(
VGetArg(statics, 14-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k436, self)))),
      VEncodePointer(&_V10_Dstring_D1919.sym, VPOINTER_OTHER),
      VGetArg(statics, 14-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k440, self)))),
      VEncodePointer(&_V10_Dstring_D1921.sym, VPOINTER_OTHER),
      VGetArg(statics, 14-1, 3));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 22 0) (bruijn ##.k.1338 2 0) (##string ##.string.1922) (bruijn ##.num.519 17 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1922.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 3));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k447) (##string ##.string.1923) (bruijn ##.num.519 16 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k447, self)))),
      VEncodePointer(&_V10_Dstring_D1923.sym, VPOINTER_OTHER),
      VGetArg(statics, 16-1, 3));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1343 1 0) ((bruijn ##.k.1344 0 0) (##string ##.string.1925)) (basic-block 1 1 (##.reg.1801) ((##vcore.- (bruijn ##.num.519 19 3) 1)) ((bruijn ##.x.709 36 0) (bruijn ##.k.1344 1 0) (bruijn ##.args.528 11 0) (bruijn ##.reg.1801 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1925.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 19-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      statics->vars[0],
      VGetArg(statics, 11-1, 0),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 23 0) (bruijn ##.k.1338 3 0) (##string ##.string.1926) (bruijn ##.num.519 18 3) (bruijn ##.x.1342 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1926.sym, VPOINTER_OTHER),
      VGetArg(statics, 18-1, 3),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k450) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k451))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k450, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k451, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k449) (bruijn ##.num.519 16 3) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k449, self)))),
      VGetArg(statics, 16-1, 3),
      VEncodeInt(0l));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.520 15 4) (if (bruijn ##.purec?.242 17 2) ((bruijn ##.x.721 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k446) (##string ##.string.1924)) ((bruijn ##.x.721 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k448) (##string ##.string.1924))) ((bruijn ##.k.1338 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 15-1, 4))) {
if(VDecodeBool(
VGetArg(statics, 17-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k446, self)))),
      VEncodePointer(&_V10_Dstring_D1924.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k448, self)))),
      VEncodePointer(&_V10_Dstring_D1924.sym, VPOINTER_OTHER));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.purec?.242 18 2)) (##qualified-call (vanity compiler transpile printout2 ##.closes?.260) (bruijn ##.closes?.260 17 9) (bruijn ##.k.1337 0 0) (bruijn ##.body.521 16 5)) ((bruijn ##.k.1337 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 18-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 5);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.520 18 4) (basic-block 1 1 (##.reg.1800) ((##vcore.+ (bruijn ##.num.519 19 3) 1)) ((bruijn ##.k.1335 1 0) (bruijn ##.reg.1800 0 0))) ((bruijn ##.k.1335 0 0) (bruijn ##.num.519 18 3)))
if(VDecodeBool(
VGetArg(statics, 18-1, 4))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 19-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 18-1, 3));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.520 21 4) (basic-block 1 1 (##.reg.1799) ((##vcore.+ (bruijn ##.num.519 22 3) 1)) ((bruijn ##.k.1333 1 0) (bruijn ##.reg.1799 0 0))) ((bruijn ##.k.1333 0 0) (bruijn ##.num.519 21 3)))
if(VDecodeBool(
VGetArg(statics, 21-1, 4))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 22-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 21-1, 3));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.520 24 4) ((bruijn ##.x.721 29 0) (bruijn ##.k.1326 7 0) (##string ##.string.1927) (bruijn ##.num.519 24 3)) ((bruijn ##.k.1326 7 0) #f))
if(VDecodeBool(
VGetArg(statics, 24-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1927.sym, VPOINTER_OTHER),
      VGetArg(statics, 24-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.721 29 0) (bruijn ##.k.1331 0 0) (##string ##.string.1928) (bruijn ##.i.532 0 1) (bruijn ##.arg.533 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1928.sym, VPOINTER_OTHER),
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 52 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k464) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda63) (bruijn ##.x.1332 0 0) (bruijn ##.args.528 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k464, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0lambda63, self)))),
      _var0,
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 42 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k463) (bruijn ##.num.519 22 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k463, self)))),
      VGetArg(statics, 22-1, 3));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k462) (##string ##.string.1929) (bruijn ##.nargs.531 0 0) (bruijn ##.nargs.531 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k462, self)))),
      VEncodePointer(&_V10_Dstring_D1929.sym, VPOINTER_OTHER),
      _var0,
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k460) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k461))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k460, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k461, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 24 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k459) (##string ##.string.1930))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k459, self)))),
      VEncodePointer(&_V10_Dstring_D1930.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 23 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k458) (##string ##.string.1931) (bruijn ##.x.1334 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k458, self)))),
      VEncodePointer(&_V10_Dstring_D1931.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1325 1 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k456) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k457)) ((bruijn ##.k.1326 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k456, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k457, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.520 19 4) ((bruijn ##.x.703 42 0) (bruijn ##.k.1323 0 0) (bruijn ##.args.528 11 0) (##inline ##vcore.qcons '(##string ##.string.1932) '())) ((bruijn ##.k.1323 0 0) (bruijn ##.args.528 11 0)))
if(VDecodeBool(
VGetArg(statics, 19-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      _var0,
      VGetArg(statics, 11-1, 0),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1932.sym, VPOINTER_OTHER),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 25 0) (bruijn ##.k.1308 20 0) (##string ##.string.1835))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      VGetArg(statics, 20-1, 0),
      VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 20 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k469) (bruijn ##.body.521 19 5) (bruijn ##.x.1322 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k469, self))));
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 5);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k467) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k468))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k467, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k468, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k466) (##string ##.string.1933) (bruijn ##.body.521 17 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k466, self)))),
      VEncodePointer(&_V10_Dstring_D1933.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 5));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k455) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k465))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k455, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k465, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k453) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k454))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k453, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k454, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k445) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k452))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k445, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k452, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k435) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k444))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k435, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k444, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k433) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k434))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k433, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k434, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k430) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k432))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k430, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k432, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k420) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k429))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k420, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k429, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k418) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k419))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k418, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k419, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k416) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k417))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k416, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k417, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-fun-single.263 ##.gen-args.523) (bruijn ##.gen-args.523 6 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k415) (bruijn ##.num.519 7 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k415, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k414) (bruijn ##.is-static.524 5 1) (##inline ##vcore.not (bruijn ##.x.1374 0 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k414, self)))),
      VEncodeInt(5l), VEncodeInt(1l),
      VInlineNot2(runtime,
        _var0)
    );
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k411) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k413))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k411, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k413, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1798) ((##vcore.string-length (bruijn ##.str.527 1 0))) (##vcore.>= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k410) (bruijn ##.reg.1798 0 0) 4))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCmpGe, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k410, self)))),
      self->vars[0],
      VEncodeInt(4l));
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263, got ~D~N"
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
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523") #f) (basic-block 1 1 (##.reg.1797) ((##vcore.string? (bruijn ##.name.517 2 1))) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k408) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k409))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V10_Dgen__args_D523, self))));
    self->vars[1] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k408, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263_V0k409, self)))));
    }
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1802 1 0) ((bruijn ##.k.1544 0 0) (bruijn ##.name.535 7 0)) (##vcore.symbol->string (bruijn ##.k.1544 0 0) (bruijn ##.name.535 7 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      _var0,
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.711 27 0) (bruijn ##.k.1540 1 0) (bruijn ##.x.1541 0 0) (##string ##.string.1901))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1901.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1539 1 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k479) (bruijn ##.str.539 3 0) 0 4) ((bruijn ##.k.1540 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k479, self)))),
      statics->up->up->vars[0],
      VEncodeInt(0l),
      VEncodeInt(4l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.242 15 2) ((bruijn ##.x.721 18 0) (bruijn ##.k.1536 0 0) (##string ##.string.1934) (bruijn ##.name.535 12 0) (bruijn ##.name.535 12 0)) ((bruijn ##.x.721 18 0) (bruijn ##.k.1536 0 0) (##string ##.string.1935) (bruijn ##.name.535 12 0)))
if(VDecodeBool(
VGetArg(statics, 15-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1934.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1935.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 30 0) (bruijn ##.k.1381 25 0) (##string ##.string.1835))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      VGetArg(statics, 25-1, 0),
      VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k495) (##string ##.string.1936) (bruijn ##.name.535 23 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k495, self)))),
      VEncodePointer(&_V10_Dstring_D1936.sym, VPOINTER_OTHER),
      VGetArg(statics, 23-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k494) (##string ##.string.1937))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k494, self)))),
      VEncodePointer(&_V10_Dstring_D1937.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1423 0 0) (bruijn ##.k.1414 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 38 0) (bruijn ##.k.1424 1 0) (##string ##.string.1938) (##inline ##vcore.car (bruijn ##.e.577 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1938.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 37 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k504) (##string ##.string.1939) (##inline ##vcore.car (bruijn ##.expr.126.584 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k504, self)))),
      VEncodePointer(&_V10_Dstring_D1939.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.587 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.128.587 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.125.583 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k503) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda66) (bruijn ##.kk.121.578 7 1)) ((bruijn ##.k.1414 6 0) #f)) ((bruijn ##.k.1414 6 0) #f)) ((bruijn ##.k.1414 6 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k503, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda66, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1419 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k502) (##inline ##vcore.cdr (bruijn ##.expr.127.586 1 0))) ((bruijn ##.k.1414 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k502, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.586 0 0)) ((bruijn ##.x.711 44 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k501) '+ (##inline ##vcore.car (bruijn ##.expr.127.586 0 0))) ((bruijn ##.k.1414 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k501, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.584 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k500) (##inline ##vcore.cdr (bruijn ##.expr.126.584 0 0))) ((bruijn ##.k.1414 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k500, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.583 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k499) (##inline ##vcore.car (bruijn ##.expr.125.583 0 0))) ((bruijn ##.k.1414 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k499, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.582 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k498) (##inline ##vcore.cdr (bruijn ##.expr.124.582 0 0))) ((bruijn ##.k.1414 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k498, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.577 2 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k497) (##inline ##vcore.cdr (bruijn ##.e.577 2 1))) ((bruijn ##.k.1414 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k497, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1408 0 0) (bruijn ##.k.1401 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 37 0) (bruijn ##.k.1409 1 0) (##string ##.string.1938) (##inline ##vcore.car (bruijn ##.e.577 9 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1938.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 36 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k512) (##string ##.string.1940) (##inline ##vcore.car (bruijn ##.expr.132.592 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k512, self)))),
      VEncodePointer(&_V10_Dstring_D1940.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.594 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.133.594 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.591 2 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k511) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda67) (bruijn ##.kk.121.578 6 1)) ((bruijn ##.k.1401 4 0) #f)) ((bruijn ##.k.1401 4 0) #f)) ((bruijn ##.k.1401 4 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k511, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda67, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.132.592 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k510) (##inline ##vcore.cdr (bruijn ##.expr.132.592 0 0))) ((bruijn ##.k.1401 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k510, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.591 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k509) (##inline ##vcore.car (bruijn ##.expr.131.591 0 0))) ((bruijn ##.k.1401 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k509, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.590 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k508) (##inline ##vcore.cdr (bruijn ##.expr.130.590 0 0))) ((bruijn ##.k.1401 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k508, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.577 3 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k507) (##inline ##vcore.cdr (bruijn ##.e.577 3 1))) ((bruijn ##.k.1401 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k507, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.702 50 0) (bruijn ##.k.1397 2 0) (##string ##.string.1941))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1941.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k506) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k513))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k506, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k513, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k496) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k505))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k496, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k505, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1396 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda65))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda65, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 51 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k493) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda64) (bruijn ##.cases.537 17 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k493, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda64, self)))),
      VGetArg(statics, 17-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k492) (##string ##.string.1942))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k492, self)))),
      VEncodePointer(&_V10_Dstring_D1942.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 25 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k491) (##string ##.string.1943))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k491, self)))),
      VEncodePointer(&_V10_Dstring_D1943.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.is-static.538 20 0)) ((bruijn ##.x.721 31 0) (bruijn ##.k.1473 0 0) (##string ##.string.1945) (bruijn ##.name.535 25 0)) ((bruijn ##.k.1473 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 20-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1945.sym, VPOINTER_OTHER),
      VGetArg(statics, 25-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 34 0) (bruijn ##.k.1381 29 0) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      VGetArg(statics, 29-1, 0),
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 33 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k524) (##string ##.string.1946) (bruijn ##.name.535 27 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k524, self)))),
      VEncodePointer(&_V10_Dstring_D1946.sym, VPOINTER_OTHER),
      VGetArg(statics, 27-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1466 0 0) (bruijn ##.k.1457 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 43 0) (bruijn ##.k.1467 1 0) (##string ##.string.1947) (##inline ##vcore.car (bruijn ##.e.595 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1947.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 42 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k533) (##string ##.string.1948) (##inline ##vcore.car (bruijn ##.expr.139.602 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k533, self)))),
      VEncodePointer(&_V10_Dstring_D1948.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.605 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.605 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.601 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k532) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda70) (bruijn ##.kk.134.596 7 1)) ((bruijn ##.k.1457 6 0) #f)) ((bruijn ##.k.1457 6 0) #f)) ((bruijn ##.k.1457 6 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k532, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda70, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1462 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k531) (##inline ##vcore.cdr (bruijn ##.expr.140.604 1 0))) ((bruijn ##.k.1457 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k531, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.604 0 0)) ((bruijn ##.x.711 49 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k530) '+ (##inline ##vcore.car (bruijn ##.expr.140.604 0 0))) ((bruijn ##.k.1457 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k530, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.602 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k529) (##inline ##vcore.cdr (bruijn ##.expr.139.602 0 0))) ((bruijn ##.k.1457 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k529, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.601 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k528) (##inline ##vcore.car (bruijn ##.expr.138.601 0 0))) ((bruijn ##.k.1457 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k528, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.600 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k527) (##inline ##vcore.cdr (bruijn ##.expr.137.600 0 0))) ((bruijn ##.k.1457 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k527, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.595 2 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k526) (##inline ##vcore.cdr (bruijn ##.e.595 2 1))) ((bruijn ##.k.1457 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k526, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1451 0 0) (bruijn ##.k.1444 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 42 0) (bruijn ##.k.1452 1 0) (##string ##.string.1949) (##inline ##vcore.car (bruijn ##.e.595 9 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1949.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 41 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k541) (##string ##.string.1948) (##inline ##vcore.car (bruijn ##.expr.145.610 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k541, self)))),
      VEncodePointer(&_V10_Dstring_D1948.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.612 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.612 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.144.609 2 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k540) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda71) (bruijn ##.kk.134.596 6 1)) ((bruijn ##.k.1444 4 0) #f)) ((bruijn ##.k.1444 4 0) #f)) ((bruijn ##.k.1444 4 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k540, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda71, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.610 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k539) (##inline ##vcore.cdr (bruijn ##.expr.145.610 0 0))) ((bruijn ##.k.1444 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k539, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.609 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k538) (##inline ##vcore.car (bruijn ##.expr.144.609 0 0))) ((bruijn ##.k.1444 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k538, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.143.608 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k537) (##inline ##vcore.cdr (bruijn ##.expr.143.608 0 0))) ((bruijn ##.k.1444 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k537, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.595 3 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k536) (##inline ##vcore.cdr (bruijn ##.e.595 3 1))) ((bruijn ##.k.1444 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k536, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.702 55 0) (bruijn ##.k.1440 2 0) (##string ##.string.1941))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1941.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k535) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k542))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k535, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k542, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k525) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k534))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k525, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k534, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1439 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda69))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda69, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 56 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k523) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda68) (bruijn ##.cases.537 22 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k523, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda68, self)))),
      VGetArg(statics, 22-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 31 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k522) (##string ##.string.1950) (bruijn ##.name.535 25 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k522, self)))),
      VEncodePointer(&_V10_Dstring_D1950.sym, VPOINTER_OTHER),
      VGetArg(statics, 25-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k520) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k521))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k520, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k521, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k519) (##string ##.string.1951))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k519, self)))),
      VEncodePointer(&_V10_Dstring_D1951.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k518) (##string ##.string.1952) (bruijn ##.name.535 22 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k518, self)))),
      VEncodePointer(&_V10_Dstring_D1952.sym, VPOINTER_OTHER),
      VGetArg(statics, 22-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 27 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k517) (##string ##.string.1953))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k517, self)))),
      VEncodePointer(&_V10_Dstring_D1953.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k516) (##string ##.string.1954))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k516, self)))),
      VEncodePointer(&_V10_Dstring_D1954.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 25 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k515) (##string ##.string.1955))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k515, self)))),
      VEncodePointer(&_V10_Dstring_D1955.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.242 21 2) ((bruijn ##.x.721 24 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k490) (##string ##.string.1944) (bruijn ##.name.535 18 0) (bruijn ##.name.535 18 0)) ((bruijn ##.x.721 24 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k514) (##string ##.string.1956) (bruijn ##.name.535 18 0)))
if(VDecodeBool(
VGetArg(statics, 21-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k490, self)))),
      VEncodePointer(&_V10_Dstring_D1944.sym, VPOINTER_OTHER),
      VGetArg(statics, 18-1, 0),
      VGetArg(statics, 18-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k514, self)))),
      VEncodePointer(&_V10_Dstring_D1956.sym, VPOINTER_OTHER),
      VGetArg(statics, 18-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1500 0 0) (bruijn ##.k.1491 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-fun-single.263) (bruijn ##.print-fun-single.263 29 12) (bruijn ##.k.1501 0 0) (##inline ##vcore.car (bruijn ##.e.557 9 1)) #f (##inline ##vcore.car (bruijn ##.expr.113.564 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.115.567 1 0)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 29-1, 12));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg4 = 
      VEncodeBool(true);
    VWORD _arg5 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg6 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.567 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.115.567 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.112.563 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k550) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda74) (bruijn ##.kk.108.558 7 1)) ((bruijn ##.k.1491 6 0) #f)) ((bruijn ##.k.1491 6 0) #f)) ((bruijn ##.k.1491 6 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k550, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda74, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1496 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k549) (##inline ##vcore.cdr (bruijn ##.expr.114.566 1 0))) ((bruijn ##.k.1491 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k549, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.566 0 0)) ((bruijn ##.x.711 40 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k548) '+ (##inline ##vcore.car (bruijn ##.expr.114.566 0 0))) ((bruijn ##.k.1491 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k548, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.564 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k547) (##inline ##vcore.cdr (bruijn ##.expr.113.564 0 0))) ((bruijn ##.k.1491 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k547, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.563 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k546) (##inline ##vcore.car (bruijn ##.expr.112.563 0 0))) ((bruijn ##.k.1491 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k546, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.562 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k545) (##inline ##vcore.cdr (bruijn ##.expr.111.562 0 0))) ((bruijn ##.k.1491 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k545, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.557 2 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k544) (##inline ##vcore.cdr (bruijn ##.e.557 2 1))) ((bruijn ##.k.1491 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k544, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1486 0 0) (bruijn ##.k.1479 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-fun-single.263) (bruijn ##.print-fun-single.263 28 12) (bruijn ##.k.1487 0 0) (##inline ##vcore.car (bruijn ##.e.557 8 1)) #f (##inline ##vcore.car (bruijn ##.expr.119.573 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.120.575 1 0)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 28-1, 12));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg4 = 
      VEncodeBool(false);
    VWORD _arg5 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg6 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.575 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.575 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.572 2 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k557) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda75) (bruijn ##.kk.108.558 6 1)) ((bruijn ##.k.1479 4 0) #f)) ((bruijn ##.k.1479 4 0) #f)) ((bruijn ##.k.1479 4 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k557, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda75, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.573 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k556) (##inline ##vcore.cdr (bruijn ##.expr.119.573 0 0))) ((bruijn ##.k.1479 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k556, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.572 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k555) (##inline ##vcore.car (bruijn ##.expr.118.572 0 0))) ((bruijn ##.k.1479 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k555, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.571 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k554) (##inline ##vcore.cdr (bruijn ##.expr.117.571 0 0))) ((bruijn ##.k.1479 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k554, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.557 3 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k553) (##inline ##vcore.cdr (bruijn ##.e.557 3 1))) ((bruijn ##.k.1479 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k553, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.702 46 0) (bruijn ##.k.1475 2 0) (##string ##.string.1941))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1941.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k552) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k558))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k552, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k558, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k543) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k551))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k543, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k551, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1474 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda73))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda73, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 47 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k489) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda72) (bruijn ##.cases.537 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k489, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda72, self)))),
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k488) (##string ##.string.1835))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k488, self)))),
      VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k487) (##string ##.string.1957))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k487, self)))),
      VEncodePointer(&_V10_Dstring_D1957.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1531 0 0) (bruijn ##.k.1522 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 30 0) (bruijn ##.k.1532 0 0) (##string ##.string.1958) (##inline ##vcore.car (bruijn ##.expr.100.547 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1958.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.550 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.102.550 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.99.546 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k566) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda78) (bruijn ##.kk.95.541 7 1)) ((bruijn ##.k.1522 6 0) #f)) ((bruijn ##.k.1522 6 0) #f)) ((bruijn ##.k.1522 6 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k566, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda78, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1527 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k565) (##inline ##vcore.cdr (bruijn ##.expr.101.549 1 0))) ((bruijn ##.k.1522 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k565, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.549 0 0)) ((bruijn ##.x.711 37 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k564) '+ (##inline ##vcore.car (bruijn ##.expr.101.549 0 0))) ((bruijn ##.k.1522 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k564, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.547 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k563) (##inline ##vcore.cdr (bruijn ##.expr.100.547 0 0))) ((bruijn ##.k.1522 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k563, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.546 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k562) (##inline ##vcore.car (bruijn ##.expr.99.546 0 0))) ((bruijn ##.k.1522 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k562, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.545 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k561) (##inline ##vcore.cdr (bruijn ##.expr.98.545 0 0))) ((bruijn ##.k.1522 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k561, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.540 2 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k560) (##inline ##vcore.cdr (bruijn ##.e.540 2 1))) ((bruijn ##.k.1522 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k560, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1517 0 0) (bruijn ##.k.1510 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 29 0) (bruijn ##.k.1518 0 0) (##string ##.string.1959) (##inline ##vcore.car (bruijn ##.expr.106.554 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1959.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.556 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.107.556 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.105.553 2 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k573) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda79) (bruijn ##.kk.95.541 6 1)) ((bruijn ##.k.1510 4 0) #f)) ((bruijn ##.k.1510 4 0) #f)) ((bruijn ##.k.1510 4 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k573, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda79, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.554 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k572) (##inline ##vcore.cdr (bruijn ##.expr.106.554 0 0))) ((bruijn ##.k.1510 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k572, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.105.553 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k571) (##inline ##vcore.car (bruijn ##.expr.105.553 0 0))) ((bruijn ##.k.1510 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k571, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.552 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k570) (##inline ##vcore.cdr (bruijn ##.expr.104.552 0 0))) ((bruijn ##.k.1510 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k570, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.540 3 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k569) (##inline ##vcore.cdr (bruijn ##.e.540 3 1))) ((bruijn ##.k.1510 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k569, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.702 43 0) (bruijn ##.k.1506 2 0) (##string ##.string.1941))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1941.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k568) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k574))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k568, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k574, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k559) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k567))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k559, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k567, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1505 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda77))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda77, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 44 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k486) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda76) (bruijn ##.cases.537 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k486, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda76, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k485) (##string ##.string.1960) (bruijn ##.name.535 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k485, self)))),
      VEncodePointer(&_V10_Dstring_D1960.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 18 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k484) (##string ##.string.1961) (bruijn ##.fun.534 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k484, self)))),
      VEncodePointer(&_V10_Dstring_D1961.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k482) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k483))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k482, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k483, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k481) (bruijn ##.is-static.538 5 0) (##inline ##vcore.not (bruijn ##.x.1538 0 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k481, self)))),
      VEncodeInt(5l), VEncodeInt(0l),
      VInlineNot2(runtime,
        _var0)
    );
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k478) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k480))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k478, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k480, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1803) ((##vcore.string-length (bruijn ##.str.539 1 0))) (##vcore.>= (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k477) (bruijn ##.reg.1803 0 0) 4))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCmpGe, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k477, self)))),
      self->vars[0],
      VEncodeInt(4l));
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 (#f) (basic-block 1 1 (##.reg.1802) ((##vcore.string? (bruijn ##.name.535 6 0))) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k475) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k476))))
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
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k475, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k476, self)))));
    }
    }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1545 1 0) (##inline ##vcore.cons (bruijn ##.x.1546 0 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (bruijn ##.e.614 1 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        statics->vars[2],
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda80, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.722 9 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k575) (##string ##.string.1962) (bruijn ##.i.613 0 1) (bruijn ##.name.535 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k575, self)))),
      VEncodePointer(&_V10_Dstring_D1962.sym, VPOINTER_OTHER),
      _var1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.707 23 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k474) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda80) (bruijn ##.x.1549 0 0) (bruijn ##.cases.536 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k474, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0lambda80, self)))),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 23 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k473) (bruijn ##.x.1550 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k473, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 24 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k472) (bruijn ##.cases.536 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k472, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.701 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k471) (bruijn ##.fun.534 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k471, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k470) (##inline ##vcore.car (bruijn ##.fun.534 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264_V0k470, self)), 1,
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1579 0 0) (bruijn ##.k.1572 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-fun-single.263) (bruijn ##.print-fun-single.263 8 12) (bruijn ##.k.1580 0 0) (##inline ##vcore.car (bruijn ##.fun.615 7 1)) (##inline ##vcore.car (bruijn ##.expr.150.620 4 0)) (##inline ##vcore.car (bruijn ##.expr.152.623 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.153.625 1 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 12));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg4 = 
      VEncodeBool(false);
    VWORD _arg5 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.625 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.153.625 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.151.622 2 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k581) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda82) (bruijn ##.kk.147.616 5 1)) ((bruijn ##.k.1572 4 0) #f)) ((bruijn ##.k.1572 4 0) #f)) ((bruijn ##.k.1572 4 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k581, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda82, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.623 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k580) (##inline ##vcore.cdr (bruijn ##.expr.152.623 0 0))) ((bruijn ##.k.1572 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k580, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.622 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k579) (##inline ##vcore.car (bruijn ##.expr.151.622 0 0))) ((bruijn ##.k.1572 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k579, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.620 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k578) (##inline ##vcore.cdr (bruijn ##.expr.150.620 0 0))) ((bruijn ##.k.1572 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k578, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.615 2 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k577) (##inline ##vcore.cdr (bruijn ##.fun.615 2 1))) ((bruijn ##.k.1572 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k577, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1566 0 0) (bruijn ##.k.1557 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-fun-single.263) (bruijn ##.print-fun-single.263 11 12) (bruijn ##.k.1567 0 0) (##inline ##vcore.car (bruijn ##.fun.615 10 1)) (##inline ##vcore.car (bruijn ##.expr.155.629 6 0)) (##inline ##vcore.car (bruijn ##.expr.157.632 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.159.635 1 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 12));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0));
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg4 = 
      VEncodeBool(true);
    VWORD _arg5 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.635 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.159.635 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.631 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k590) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda83) (bruijn ##.kk.147.616 8 1)) ((bruijn ##.k.1557 6 0) #f)) ((bruijn ##.k.1557 6 0) #f)) ((bruijn ##.k.1557 6 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k590, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda83, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1562 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k589) (##inline ##vcore.cdr (bruijn ##.expr.158.634 1 0))) ((bruijn ##.k.1557 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k589, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.634 0 0)) ((bruijn ##.x.711 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k588) '+ (##inline ##vcore.car (bruijn ##.expr.158.634 0 0))) ((bruijn ##.k.1557 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k588, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.157.632 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k587) (##inline ##vcore.cdr (bruijn ##.expr.157.632 0 0))) ((bruijn ##.k.1557 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k587, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.631 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k586) (##inline ##vcore.car (bruijn ##.expr.156.631 0 0))) ((bruijn ##.k.1557 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k586, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.155.629 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k585) (##inline ##vcore.cdr (bruijn ##.expr.155.629 0 0))) ((bruijn ##.k.1557 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k585, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.615 3 1)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k584) (##inline ##vcore.cdr (bruijn ##.fun.615 3 1))) ((bruijn ##.k.1557 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k584, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-fun-case.264) (bruijn ##.print-fun-case.264 5 13) (bruijn ##.k.1555 0 0) (bruijn ##.fun.615 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 13));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1552 2 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda84) (bruijn ##.kk.147.616 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda84, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k583) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k591))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k583, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k591, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k576) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k582))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k576, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0k582, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1551 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda81))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265_V0lambda81, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 30 0) (bruijn ##.k.1583 3 0) (##string ##.string.1894))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1894.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 3 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k594) (##inline ##vcore.cons (bruijn ##.expr.638 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1963) '()))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[11]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k594, self))));
    VWORD _arg1 = 
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
        VNULL));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1963.sym, VPOINTER_OTHER),
        VNULL);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k593) (##string ##.string.1964))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k593, self)))),
      VEncodePointer(&_V10_Dstring_D1964.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 30 0) (bruijn ##.k.1583 3 0) (##string ##.string.1894))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1894.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-expr.262) (bruijn ##.print-expr.262 3 11) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k597) (##inline ##vcore.cons (bruijn ##.expr.638 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1963) '()))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[11]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k597, self))));
    VWORD _arg1 = 
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
        VNULL));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1963.sym, VPOINTER_OTHER),
        VNULL);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k596) (##string ##.string.1966))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k596, self)))),
      VEncodePointer(&_V10_Dstring_D1966.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.purec?.242 2 2) ((bruijn ##.x.721 5 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k592) (##string ##.string.1965) (bruijn ##.i.637 0 1) (bruijn ##.i.637 0 1)) ((bruijn ##.x.721 5 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k595) (##string ##.string.1967) (bruijn ##.i.637 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k592, self)))),
      VEncodePointer(&_V10_Dstring_D1965.sym, VPOINTER_OTHER),
      _var1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266_V0k595, self)))),
      VEncodePointer(&_V10_Dstring_D1967.sym, VPOINTER_OTHER),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1613 0 0) (bruijn ##.k.1609 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.car (bruijn ##.expr.164.647 2 0)) ((bruijn ##.x.721 12 0) (bruijn ##.k.1619 0 0) (##string ##.string.1968) (bruijn ##.lamb.644 4 0)) ((bruijn ##.x.721 12 0) (bruijn ##.k.1619 0 0) (##string ##.string.1969) (bruijn ##.lamb.644 4 0)))
if(VDecodeBool(
VInlineCar2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1968.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1969.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 14 0) (bruijn ##.k.1614 3 0) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.721 14 0) (bruijn ##.k.1617 0 0) (##string ##.string.1970) (bruijn ##.i.649 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1970.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 37 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k606) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda87) (bruijn ##.x.1618 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k606, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda87, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 27 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k605) (##inline ##vcore.car (bruijn ##.expr.163.645 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k605, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k603) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k604))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k603, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k604, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.647 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.647 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k602) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda86) (bruijn ##.kk.160.641 4 1)) ((bruijn ##.k.1609 3 0) #f)) ((bruijn ##.k.1609 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k602, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda86, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.163.645 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k601) (##inline ##vcore.cdr (bruijn ##.expr.163.645 0 0))) ((bruijn ##.k.1609 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k601, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k600) (##inline ##vcore.cdr (bruijn ##.decl.640 3 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k600, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.640 2 2)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k599) (##inline ##vcore.car (bruijn ##.decl.640 2 2))) ((bruijn ##.k.1609 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k599, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 33 0) (bruijn ##.k.1607 0 0) (##string ##.string.1971) (bruijn ##.decl.640 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1971.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1605 1 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda88) (bruijn ##.kk.160.641 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda88, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k598) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k607))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k598, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0k607, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1604 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda85))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267_V0lambda85, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1641 0 0) (bruijn ##.k.1637 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 32 0) (bruijn ##.k.1642 0 0) (##inline ##vcore.car (bruijn ##.expr.168.654 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.168.654 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.168.654 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k611) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda90) (bruijn ##.kk.165.651 3 1)) ((bruijn ##.k.1637 2 0) #f)) ((bruijn ##.k.1637 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k611, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda90, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1638 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k610) (##inline ##vcore.cdr (bruijn ##.declare.650 3 1))) ((bruijn ##.k.1637 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k610, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.650 2 1)) ((bruijn ##.x.711 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k609) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.650 2 1))) ((bruijn ##.k.1637 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k609, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k617(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1632 0 0) (bruijn ##.k.1627 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1633 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k616(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.659 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.171.659 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k617) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda91) (bruijn ##.kk.165.651 5 1)) ((bruijn ##.k.1627 3 0) #f)) ((bruijn ##.k.1627 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k617, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda91, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.657 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k616) (##inline ##vcore.cdr (bruijn ##.expr.170.657 0 0))) ((bruijn ##.k.1627 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k616, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1628 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k615) (##inline ##vcore.cdr (bruijn ##.declare.650 4 1))) ((bruijn ##.k.1627 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k615, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.650 3 1)) ((bruijn ##.x.711 18 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k614) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.650 3 1))) ((bruijn ##.k.1627 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k614, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 34 0) (bruijn ##.k.1625 0 0) (##string ##.string.1972) (bruijn ##.declare.650 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1972.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k618(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1622 2 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda92) (bruijn ##.kk.165.651 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda92, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k613) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k618))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k613, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k618, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k608) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k612))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k608, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0k612, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1621 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda89))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268_V0lambda89, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1665 0 0) (bruijn ##.k.1661 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1666 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.175.665 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.175.665 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k622) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda94) (bruijn ##.kk.172.662 3 1)) ((bruijn ##.k.1661 2 0) #f)) ((bruijn ##.k.1661 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k622, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda94, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1662 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k621) (##inline ##vcore.cdr (bruijn ##.declare.661 3 1))) ((bruijn ##.k.1661 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k621, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.661 2 1)) ((bruijn ##.x.711 17 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k620) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.661 2 1))) ((bruijn ##.k.1661 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k620, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1656 0 0) (bruijn ##.k.1651 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 12 0) (bruijn ##.k.1657 0 0) (##string ##.string.1973) (##inline ##vcore.car (bruijn ##.expr.177.668 2 0)) (##inline ##vcore.car (bruijn ##.expr.178.670 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1973.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.178.670 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.178.670 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k628) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda95) (bruijn ##.kk.172.662 5 1)) ((bruijn ##.k.1651 3 0) #f)) ((bruijn ##.k.1651 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k628, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda95, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.177.668 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k627) (##inline ##vcore.cdr (bruijn ##.expr.177.668 0 0))) ((bruijn ##.k.1651 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k627, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k625(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1652 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k626) (##inline ##vcore.cdr (bruijn ##.declare.661 4 1))) ((bruijn ##.k.1651 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k626, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.661 3 1)) ((bruijn ##.x.711 18 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k625) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.661 3 1))) ((bruijn ##.k.1651 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k625, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 34 0) (bruijn ##.k.1649 0 0) (##string ##.string.1974) (bruijn ##.declare.661 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1974.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1646 2 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda96) (bruijn ##.kk.172.662 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda96, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k623(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k624) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k629))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k624, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k629, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k619) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k623))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k619, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0k623, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1645 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda93))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269_V0lambda93, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 7 0) (bruijn ##.k.1669 2 0) (##string ##.string.1835))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k635(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1692 0 0) (bruijn ##.k.1688 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1693 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k634(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.182.677 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.182.677 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k635) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda99) (bruijn ##.kk.179.674 3 1)) ((bruijn ##.k.1688 2 0) #f)) ((bruijn ##.k.1688 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k635, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda99, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k633(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1689 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k634) (##inline ##vcore.cdr (bruijn ##.declare.673 3 1))) ((bruijn ##.k.1688 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k634, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k632(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.673 2 1)) ((bruijn ##.x.711 19 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k633) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.673 2 1))) ((bruijn ##.k.1688 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k633, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k642(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1683 0 0) (bruijn ##.k.1678 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 15 0) (bruijn ##.k.1684 0 0) (##string ##.string.1975) (bruijn ##.f.681 2 0) (bruijn ##.f.681 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1975.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k641(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.185.682 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.185.682 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k642) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda100) (bruijn ##.kk.179.674 6 1)) ((bruijn ##.k.1678 4 0) #f)) ((bruijn ##.k.1678 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k642, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda100, self)))),
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
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k640(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k641) (##inline ##vcore.cdr (bruijn ##.expr.184.680 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k641, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k639(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.184.680 0 0)) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k640) (##inline ##vcore.car (bruijn ##.expr.184.680 0 0))) ((bruijn ##.k.1678 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k640, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k638(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1679 0 0) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k639) (##inline ##vcore.cdr (bruijn ##.declare.673 4 1))) ((bruijn ##.k.1678 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k639, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.673 3 1)) ((bruijn ##.x.711 20 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k638) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.673 3 1))) ((bruijn ##.k.1678 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k638, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 36 0) (bruijn ##.k.1676 0 0) (##string ##.string.1976) (bruijn ##.declare.673 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1976.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k643(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1673 2 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda101) (bruijn ##.kk.179.674 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda101, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k636(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k637) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k643))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k637, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k643, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k632) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k636))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k632, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k636, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1672 0 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda98))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda98, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k630(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 30 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k631) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda97) (bruijn ##.declares.672 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k631, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0lambda97, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.721 5 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k630) (##string ##.string.1977))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270_V0k630, self)))),
      VEncodePointer(&_V10_Dstring_D1977.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k651(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.721 13 0) (bruijn ##.k.1696 8 0) (##string ##.string.1978))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D1978.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k650(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 12 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k651) (##string ##.string.1979))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k651, self)))),
      VEncodePointer(&_V10_Dstring_D1979.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.721 12 0) (bruijn ##.k.1701 0 0) (##string ##.string.1980) (bruijn ##.i.687 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1980.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k649(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 35 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k650) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda102) (bruijn ##.x.1702 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k650, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda102, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k648(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 25 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k649) (bruijn ##.x.1703 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k649, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k647(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k648) (bruijn ##.toplevels.684 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k648, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k646(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.721 8 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k647) (##string ##.string.1981))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k647, self)))),
      VEncodePointer(&_V10_Dstring_D1981.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-toplevel.266) (bruijn ##.print-toplevel.266 4 15) (bruijn ##.k.1704 0 0) (bruijn ##.x.186.685 0 1) (bruijn ##.x.187.686 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[15]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k645(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 31 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k646) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda103) (bruijn ##.x.1705 0 0) (bruijn ##.toplevels.684 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k646, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0lambda103, self)))),
      _var0,
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k644(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 21 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k645) (bruijn ##.x.1706 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k645, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.704 22 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k644) (bruijn ##.toplevels.684 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271_V0k644, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k677(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 53 0) (bruijn ##.k.1707 26 0) (##string ##.string.1894))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1894.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k676(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 52 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k677) (##string ##.string.1982))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k677, self)))),
      VEncodePointer(&_V10_Dstring_D1982.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k675(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 51 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k676) (##string ##.string.1983))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k676, self)))),
      VEncodePointer(&_V10_Dstring_D1983.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k674(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 50 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k675) (##string ##.string.1984))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k675, self)))),
      VEncodePointer(&_V10_Dstring_D1984.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k681(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 53 0) (bruijn ##.k.1707 26 0) (##string ##.string.1894))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1894.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k680(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 52 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k681) (##string ##.string.1986))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k681, self)))),
      VEncodePointer(&_V10_Dstring_D1986.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k679(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 51 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k680) (##string ##.string.1987))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k680, self)))),
      VEncodePointer(&_V10_Dstring_D1987.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k684(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 53 0) (bruijn ##.k.1707 26 0) (##string ##.string.1894))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1894.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k683(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 52 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k684) (##string ##.string.1986))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k684, self)))),
      VEncodePointer(&_V10_Dstring_D1986.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k682(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 51 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k683) (##string ##.string.1983))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k683, self)))),
      VEncodePointer(&_V10_Dstring_D1983.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k678(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1734 0 0) ((bruijn ##.x.699 50 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k679) (##string ##.string.1988)) ((bruijn ##.x.699 50 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k682) (##string ##.string.1984)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k679, self)))),
      VEncodePointer(&_V10_Dstring_D1988.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k682, self)))),
      VEncodePointer(&_V10_Dstring_D1984.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k673(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1729 0 0) ((bruijn ##.x.699 49 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k674) (##string ##.string.1985)) ((bruijn ##.x.711 37 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k678) (bruijn ##.main.688 22 1) (##string ##.string.1989)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k674, self)))),
      VEncodePointer(&_V10_Dstring_D1985.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k678, self)))),
      VGetArg(statics, 22-1, 1),
      VEncodePointer(&_V10_Dstring_D1989.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k672(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1728 0 0) ((bruijn ##.k.1707 21 0) #f) ((bruijn ##.x.711 36 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k673) (bruijn ##.main.688 21 1) (##string ##.string.1990)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k673, self)))),
      VGetArg(statics, 21-1, 1),
      VEncodePointer(&_V10_Dstring_D1990.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k671(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.711 35 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k672) (bruijn ##.main.688 20 1) (##string ##.string.1991))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k672, self)))),
      VGetArg(statics, 20-1, 1),
      VEncodePointer(&_V10_Dstring_D1991.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k670(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 46 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k671) (##string ##.string.1905))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k671, self)))),
      VEncodePointer(&_V10_Dstring_D1905.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k669(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 45 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k670) (##string ##.string.1894))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k670, self)))),
      VEncodePointer(&_V10_Dstring_D1894.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k668(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 44 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k669) (##string ##.string.1992))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k669, self)))),
      VEncodePointer(&_V10_Dstring_D1992.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k667(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 43 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k668) (##string ##.string.1993))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k668, self)))),
      VEncodePointer(&_V10_Dstring_D1993.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k666(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 42 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k667) (##string ##.string.1994))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k667, self)))),
      VEncodePointer(&_V10_Dstring_D1994.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k665(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 41 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k666) (##string ##.string.1995))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k666, self)))),
      VEncodePointer(&_V10_Dstring_D1995.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k664(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 40 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k665) (##string ##.string.1996))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k665, self)))),
      VEncodePointer(&_V10_Dstring_D1996.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k663(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 39 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k664) (##string ##.string.1997))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k664, self)))),
      VEncodePointer(&_V10_Dstring_D1997.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k662(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 38 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k663) (##string ##.string.1998))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k663, self)))),
      VEncodePointer(&_V10_Dstring_D1998.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k661(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 37 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k662) (##string ##.string.1999))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k662, self)))),
      VEncodePointer(&_V10_Dstring_D1999.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k660(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 36 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k661) (##string ##.string.2000))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k661, self)))),
      VEncodePointer(&_V10_Dstring_D2000.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k659(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 35 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k660) (##string ##.string.2001))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k660, self)))),
      VEncodePointer(&_V10_Dstring_D2001.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k658(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 34 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k659) (##string ##.string.2002))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k659, self)))),
      VEncodePointer(&_V10_Dstring_D2002.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k657(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 33 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k658) (##string ##.string.2003))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k658, self)))),
      VEncodePointer(&_V10_Dstring_D2003.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k656(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 32 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k657) (##string ##.string.2004))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k657, self)))),
      VEncodePointer(&_V10_Dstring_D2004.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k655(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 31 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k656) (##string ##.string.2005))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k656, self)))),
      VEncodePointer(&_V10_Dstring_D2005.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k654(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 30 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k655) (##string ##.string.2006))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k655, self)))),
      VEncodePointer(&_V10_Dstring_D2006.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k653(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k654) (##string ##.string.2007))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k654, self)))),
      VEncodePointer(&_V10_Dstring_D2007.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k652(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k653) (##string ##.string.2008))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k653, self)))),
      VEncodePointer(&_V10_Dstring_D2008.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.699 27 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k652) (##string ##.string.2009))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272_V0k652, self)))),
      VEncodePointer(&_V10_Dstring_D2009.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k698(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.242 15 2) (##qualified-call (vanity compiler transpile printout2 ##.print-declaretable.270) (bruijn ##.print-declaretable.270 14 19) (bruijn ##.k.1762 0 0) (bruijn ##.declares.249 15 9)) ((bruijn ##.k.1762 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 15-1, 2))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 19));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 9);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k700(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.244 16 4) ((bruijn ##.k.1761 0 0) (bruijn ##.x.1741 14 0)) ((bruijn ##.k.1761 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 16-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 14-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k702(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1759 1 0) ((bruijn ##.x.696 45 0) (bruijn ##.k.1760 0 0) (##string ##.string.2010) (bruijn ##.toplevels.250 17 10)) ((bruijn ##.k.1760 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2010.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 10));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k705(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k705, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-main-standard.272) (bruijn ##.print-main-standard.272 18 21) (bruijn ##.k.1757 1 0) (bruijn ##.main.241 19 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 21));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k704(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.1741 16 0) (##qualified-call (vanity compiler transpile printout2 ##.print-toplevels.271) (bruijn ##.print-toplevels.271 17 20) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k705) (bruijn ##.toplevels.250 18 10)) ((bruijn ##.k.1757 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 16-1, 0))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 20));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k705, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 10);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k706(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k706, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.723 18 0) (bruijn ##.x.1741 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VGetArg(statics, 16-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k703(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k704) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k706))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k704, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k706, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k701(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k702) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k703))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k702, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k703, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k699(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k700) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k701))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k700, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k701, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k697(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k698) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k699))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k698, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k699, self)))));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k696(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 40 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k697) (bruijn ##.print-declare.269 12 18) (bruijn ##.declares.249 13 9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k697, self)))),
      VGetArg(statics, 12-1, 18),
      VGetArg(statics, 13-1, 9));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k695(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 39 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k696) (bruijn ##.print-fun.265 11 14) (bruijn ##.x.1742 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k696, self)))),
      VGetArg(statics, 11-1, 14),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.698 38 0) (bruijn ##.k.1763 0 0) (bruijn ##.purec?.242 12 2) (bruijn ##.e.692 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      _var0,
      VGetArg(statics, 12-1, 2),
      _var1);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k694(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 38 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k695) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda104) (bruijn ##.foreign-functions.246 11 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k695, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda104, self)))),
      VGetArg(statics, 11-1, 6));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler transpile printout2 ##.print-qualified-declaration.267) (bruijn ##.print-qualified-declaration.267 10 16) (bruijn ##.k.1764 0 0) (bruijn ##.purec?.242 11 2) (bruijn ##.e.691 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 16));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k693(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 37 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k694) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda105) (bruijn ##.qualified-functions.248 10 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k694, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0lambda105, self)))),
      VGetArg(statics, 10-1, 8));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k692(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 36 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k693) (bruijn ##.print-foreign-declare.268 8 17) (bruijn ##.declares.249 9 9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k693, self)))),
      VGetArg(statics, 8-1, 17),
      VGetArg(statics, 9-1, 9));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k691(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler transpile printout2 ##.print-dllmain.259) (bruijn ##.print-dllmain.259 7 8) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k692) (bruijn ##.literal-table.245 8 5))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k692, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 5);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k690(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 34 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k691) (bruijn ##.print-literal-declaration.258 6 7) (bruijn ##.literal-table.245 7 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k691, self)))),
      VGetArg(statics, 6-1, 7),
      VGetArg(statics, 7-1, 5));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k689(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 31 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k690) (##string ##.string.2011))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k690, self)))),
      VEncodePointer(&_V10_Dstring_D2011.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k688(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 30 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k689) (##string ##.string.2012))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k689, self)))),
      VEncodePointer(&_V10_Dstring_D2012.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k687(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 29 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k688) (##string ##.string.2013))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k688, self)))),
      VEncodePointer(&_V10_Dstring_D2013.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k686(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.699 28 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k687) (##string ##.string.2014))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k687, self)))),
      VEncodePointer(&_V10_Dstring_D2014.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k685(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.700 26 0) (close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k686) (bruijn ##.functions.247 2 7))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k686, self)))),
      statics->up->vars[7]);
}
void _V50_V0vanity_V0compiler_V0transpile_V0printout2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0transpile_V0printout2, got ~D~N"
  "-- expected 11~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[11]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 11, 11, statics);
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
  self->vars[10] = _var10;
  // (letrec 22 ((close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271") (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272")) ((close _V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k685) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.toplevels.250 1 10)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[22]; } container;
    self = &container.self;
    VInitEnv(self, 22, 22, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__global_D251, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__octal__char_D252, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__string_D253, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Descape__char_D254, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__string_D255, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__intrinsic_D256, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal_D257, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__literal__declaration_D258, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__dllmain_D259, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dcloses_Q_D260, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__basic__expr_D261, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__expr_D262, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__single_D263, self))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun__case_D264, self))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__fun_D265, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevel_D266, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__qualified__declaration_D267, self))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__foreign__declare_D268, self))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declare_D269, self))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__declaretable_D270, self))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__toplevels_D271, self))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V10_Dprint__main__standard_D272, self))));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2_V0k685, self)), 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        statics->vars[10])));
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k708(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k708, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.695 39 0) (##inline ##vcore.cons (##inline ##vcore.cons 'printout2 (bruijn ##.printout2.240 3 1)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printout2,
        statics->up->up->vars[1]),
        VNULL));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k707(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k707, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_V0k708) (bruijn ##.gendllmain.239 2 0) (bruijn ##.x.1768 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k708, self)))),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V10_Dx_D1768_V0k709(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dx_D1768_V0k709, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.722 5 0) (bruijn ##.k.1769 2 0) (##string ##.string.2015) (bruijn ##.x.693 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2015.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V10_Dx_D1768(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dx_D1768, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1804) ((##vcore.+ (bruijn ##.x.693 2 0) 1)) (set! (close _V50_V10_Dx_D1768_V0k709) (bruijn ##.x.693 2 0) (bruijn ##.reg.1804 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dx_D1768_V0k709, self)))),
      VEncodeInt(2l), VEncodeInt(0l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_V0k707) (close "_V50_V10_Dx_D1768"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k707, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dx_D1768, self)))));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 (#f (close "_V50_V0vanity_V0compiler_V0transpile_V0printout2")) ((close _V0vanity_V0compiler_V0transpile_V20_V0lambda106) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0transpile_V0printout2, self))));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0lambda106, self)), 1,
      VEncodeInt(0l));
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 26 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k35) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k35, self)))),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 25 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k34) 'printf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k34, self)))),
      _V0printf);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 24 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k33) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k33, self)))),
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 23 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k32) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k32, self)))),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 22 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k31) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k31, self)))),
      _V0get__output__string);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 21 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k30) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k30, self)))),
      _V0display);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 20 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k29) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k29, self)))),
      _V0open__output__string);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 19 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k28) 'mangle-symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k28, self)))),
      _V0mangle__symbol);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 18 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k27) 'number?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k27, self)))),
      _V0number_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 17 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k26) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k26, self)))),
      _V0caar);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 16 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k25) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k25, self)))),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 15 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k24) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k24, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 14 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k23) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k23, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 13 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k22) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k22, self)))),
      _V0list__ref);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 12 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k21) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k21, self)))),
      _V0lookup__inline__name);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 11 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k20) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k20, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 10 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k19) 'iota)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k19, self)))),
      _V0iota);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 9 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k18) 'mangle-qualified-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k18, self)))),
      _V0mangle__qualified__function);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 8 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k17) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k17, self)))),
      _V0length);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 7 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k16) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k16, self)))),
      _V0append);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 6 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k15) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k15, self)))),
      _V0error);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 5 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k14) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k14, self)))),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 4 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k13) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k13, self)))),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 3 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k12) 'displayln)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k12, self)))),
      _V0displayln);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 2 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k11) 'print-foreign-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k11, self)))),
      _V0print__foreign__function);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 1 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k10) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k10, self)))),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.188 0 0) (close _V0vanity_V0compiler_V0transpile_V20_V0k9) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k9, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_V0k8) (##string ##.string.2016) (bruijn ##.x.1772 6 0) (bruijn ##.x.1773 5 0) (bruijn ##.x.1774 4 0) (bruijn ##.x.1775 3 0) (bruijn ##.x.1776 2 0) (bruijn ##.x.1777 1 0) (bruijn ##.x.1778 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D2016.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_V0k7) (##string ##.string.2017))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D2017.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_V0k6) (##string ##.string.2018))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D2018.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_V0k5) (##string ##.string.2019))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D2019.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_V0k4) (##string ##.string.2020))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D2020.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_V0k3) (##string ##.string.2021))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D2021.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_V0k2) (##string ##.string.2022))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D2022.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_V0k1) (##string ##.string.2023))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D2023.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_V0lambda1;
