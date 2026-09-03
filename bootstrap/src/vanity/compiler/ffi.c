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

V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0compiler_V0ffi;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2907 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2906 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2905 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2904 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2903 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0mangle__foreign__closure;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0mangle__foreign__closure = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "mangle-foreign-closure" };
VWEAK VWORD _V0mangle__foreign__basic;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0mangle__foreign__basic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "mangle-foreign-basic" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0mangle__foreign;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-foreign" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D2902 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "static-array" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D2901 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "array" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D2900 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D2899 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "variadic C functions are unsupported (they cannot be implemented on wasm)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D2898 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "variadic-function" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D2897 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2896 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
static VPair _V10_Dpair_D2895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2891 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "void" };
VWEAK VWORD _V0static__array;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0static__array = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "static-array" };
VWEAK VWORD _V0array;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0array = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "array" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D2890 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
static VPair _V10_Dpair_D2889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D2885 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D2884 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D2883 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
static VPair _V10_Dpair_D2882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D2877 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D2876 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2875 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2874 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D2873 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2872 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D2871 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D2870 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "Unsupported type for C extern variable" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2869 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "Unsupported C extern declaration" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D2868 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "Not a simple extern variable declaration" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2867 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D2866 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2865 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
VWEAK VWORD _V0typedef;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0typedef = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "typedef" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D2864 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D2863 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D2862 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2861 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "extern" };
VWEAK VWORD _V0extern__variable;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0extern__variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "extern-variable" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2860 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D2859 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D2858 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2857 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D2856 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2855 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2854 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2853 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A/../" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D2852 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2851 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "include/vscheme/stdc" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D2850 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "\"\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"\"" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2849 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2848 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2847 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D2846 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D2845 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2844 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2843 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V30~A" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D2842 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "_V30~A_shim_basic" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D2841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D2840 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "_V30~A_closure" };
static VPair _V10_Dpair_D2839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D2826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static VPair _V10_Dpair_D2825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D2823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static VPair _V10_Dpair_D2822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D2816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static VPair _V10_Dpair_D2815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D2814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static VPair _V10_Dpair_D2813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D2812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static VPair _V10_Dpair_D2811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D2809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
static VPair _V10_Dpair_D2808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2796 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2795 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2793 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeVWORD2" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static VPair _V10_Dpair_D2790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D2788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeNumber2" };
static VPair _V10_Dpair_D2787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unsigned__long__long;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0unsigned__long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "unsigned-long-long" };
static VPair _V10_Dpair_D2786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0long__long;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "long-long" };
static VPair _V10_Dpair_D2785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unsigned__long;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-long" };
static VPair _V10_Dpair_D2784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0long;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "long" };
static VPair _V10_Dpair_D2783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unsigned__int;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0unsigned__int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "unsigned-int" };
static VPair _V10_Dpair_D2782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D2781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeInt2" };
static VPair _V10_Dpair_D2780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D2779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeUnsignedShort2" };
static VPair _V10_Dpair_D2778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeShort2" };
static VPair _V10_Dpair_D2776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D2775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedChar2" };
static VPair _V10_Dpair_D2774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VCheckedDecodeSignedChar2" };
static VPair _V10_Dpair_D2772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeChar2" };
static VPair _V10_Dpair_D2770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeBool2" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
static VPair _V10_Dpair_D2768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0signed__char;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0signed__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "signed-char" };
VWEAK VWORD _V0unsigned__char;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-char" };
VWEAK VWORD _V0short;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "short" };
VWEAK VWORD _V0unsigned__short;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0unsigned__short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "unsigned-short" };
VWEAK VWORD _V0int;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "int" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
static VPair _V10_Dpair_D2767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeS8Ptr" };
static VPair _V10_Dpair_D2765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeU8Ptr" };
static VPair _V10_Dpair_D2763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS16Ptr" };
static VPair _V10_Dpair_D2761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeU16Ptr" };
static VPair _V10_Dpair_D2759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS32Ptr" };
static VPair _V10_Dpair_D2757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF64Ptr" };
static VPair _V10_Dpair_D2755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF32Ptr" };
static VPair _V10_Dpair_D2753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D2752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeVoidPtr2" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static VPair _V10_Dpair_D2751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D2750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstVoidPtr2" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
VWEAK VWORD _V0char;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "char" };
static VPair _V10_Dpair_D2749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D2748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstCString2" };
static VPair _V10_Dpair_D2747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D2746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeCString2" };
static VPair _V10_Dpair_D2745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2742 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2741 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2740 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2739 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2738 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2737 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0s8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s8-pointer" };
VWEAK VWORD _V0u8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0u8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "u8-pointer" };
VWEAK VWORD _V0s16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s16-pointer" };
VWEAK VWORD _V0u16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0u16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "u16-pointer" };
VWEAK VWORD _V0s32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s32-pointer" };
VWEAK VWORD _V0f64__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f64__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f64-pointer" };
VWEAK VWORD _V0f32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f32-pointer" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D2736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "Min" };
static VPair _V10_Dpair_D2735 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2734 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0static__pointer;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0static__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "static-pointer" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D2733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D2731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "static VWORD ~A(VRuntime * runtime, VEnv * statics" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "));~N}~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D2729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, ");~N  return VVOID;~N}~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D2728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "  return ~A(~A(" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D2727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "  ~A(" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "  V_BOUNCE(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  V_BOUNCE(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D2724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D2723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D2721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "static void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D2720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D2719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "  V_ARG_CHECK3(runtime, \"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D2718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D2717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "static V_BEGIN_FUNC(_V30~A_shim, \"_V30~A_shim\", ~A, _k " };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D2715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A(runtime, _arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "~A(runtime, _arg~A, ~A, \"~A\")" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D2711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D2710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "static V_BEGIN_FUNC_RANGE(~A, \"~A\", 1, ~A, _k, _arg0)~N" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D2709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "  V_BOUNCE(_k, runtime, ~A(~A));~N" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D2708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "V_END_FUNC~N" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "#define ~A(runtime, statics, ...) \\~N" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D2706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  ({ VRuntime * _basic_runtime = runtime; \\~N" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D2705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "     VWORD _basic_args[] = { VVOID __VA_OPT__(,) __VA_ARGS__ }; \\~N" };
static struct { VBlob sym; char bytes[78]; } _V10_Dstring_D2704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 78 }, "     enum { _basic_argc = sizeof _basic_args / sizeof *_basic_args - 1 }; \\~N" };
static struct { VBlob sym; char bytes[96]; } _V10_Dstring_D2703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 96 }, "static VClosure ~A = { .base.tag = VCLOSURE, .base.flags = VFLAG_STATIC, .func = (VFunc)~A };~N" };
static struct { VBlob sym; char bytes[78]; } _V10_Dstring_D2702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 78 }, "     _Static_assert(_basic_argc <= 1, \"~A: expected at most 1 argument\"); \\~N" };
static struct { VBlob sym; char bytes[88]; } _V10_Dstring_D2701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 88 }, "     _basic_argc \? (~A = ~A(_basic_runtime, _basic_args[_basic_argc], \"~A\"), VVOID) \\~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D2700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "                 : ~A(~A); })~N" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D2699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "     _Static_assert(_basic_argc == 0, \"~A: is const, expected 0 arguments\"); \\~N" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D2698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "     (void)_basic_runtime; (void)_basic_args; \\~N" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D2697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "     ~A(~A); })~N" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "  if(argc == 2) {~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "    ~A = ~A(runtime, _arg0, \"~A\");~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D2694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "    V_BOUNCE(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D2693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "  }~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "VCheckedDecodeForeignPointer2" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
VWEAK VWORD _V0const;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0const = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "const" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D539, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D538, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__file, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.782 0 0) (bruijn ##.%k.771 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1894 1 0) (basic-block 2 2 (##.%x.1901 ##.%r.1902) ((##vcore.car (bruijn ##.type.1886 9 0)) (##vcore.eq? (bruijn ##.%x.1901 0 0) 'const)) ((bruijn ##.%k.798 1 0) (bruijn ##.%r.1902 0 1))) ((bruijn ##.%k.798 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 0));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0const);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.const?.292 1 0) ((bruijn ##.cadr.220 24 7) (bruijn ##.%k.796 0 0) (bruijn ##.type.1886 9 0)) ((bruijn ##.%k.796 0 0) (bruijn ##.type.1886 9 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 7)), 2,
      _var0,
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1897 1 0) (basic-block 2 2 (##.%x.1899 ##.%r.1900) ((##vcore.car (bruijn ##.base-type.293 6 0)) (##vcore.eq? (bruijn ##.%x.1899 0 0) 'pointer)) ((bruijn ##.%k.793 1 0) (bruijn ##.%r.1900 0 1))) ((bruijn ##.%k.793 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0pointer);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1898) ((##vcore.cdr (bruijn ##.%x.791 1 0))) ((bruijn ##.%k.789 4 0) (bruijn ##.%r.1898 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.790 0 0) ((bruijn ##.%k.789 2 0) (##string ##.string.2692)) (##qualified-call (vanity compiler ffi get-foreign-decoder) #t (bruijn ##.get-foreign-decoder.253 28 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21) (bruijn ##.base-type.293 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D2692.sym, VPOINTER_OTHER));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.const?.292 4 0) ((bruijn ##.%k.789 0 0) #f) (basic-block 1 1 (##.%p.1897) ((##vcore.pair? (bruijn ##.base-type.293 4 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20))))
if(VDecodeBool(
statics->up->up->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.const?.292 5 0) ((bruijn ##.%k.788 0 0) 1) ((bruijn ##.%k.788 0 0) 2))
if(VDecodeBool(
VGetArg(statics, 5-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 30 5) (bruijn ##.%k.786 0 0) (##string ##.string.2693))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D2693.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 30 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k30) (##string ##.string.2694))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k30, self)))),
      VEncodePointer(&_V10_Dstring_D2694.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 30 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k29) (##string ##.string.2695) (bruijn ##.name.1891 13 0) (bruijn ##.decoder.295 3 0) (bruijn ##.name.1891 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k29, self)))),
      VEncodePointer(&_V10_Dstring_D2695.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0),
      statics->up->up->vars[0],
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1896 1 0) ((bruijn ##.printf.218 30 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28) (##string ##.string.2696)) ((bruijn ##.%k.786 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28, self)))),
      VEncodePointer(&_V10_Dstring_D2696.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k40(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 30 5) (bruijn ##.%k.784 0 0) (##string ##.string.2697) (bruijn ##.encoder.1895 4 0) (bruijn ##.name.1891 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 4,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D2697.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0],
      VGetArg(statics, 13-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 30 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k40) (##string ##.string.2698))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k40, self)))),
      VEncodePointer(&_V10_Dstring_D2698.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 30 5) (bruijn ##.%k.784 0 0) (##string ##.string.2700) (bruijn ##.encoder.1895 4 0) (bruijn ##.name.1891 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 4,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D2700.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0],
      VGetArg(statics, 13-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 30 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42) (##string ##.string.2701) (bruijn ##.name.1891 13 0) (bruijn ##.decoder.295 3 0) (bruijn ##.name.1891 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42, self)))),
      VEncodePointer(&_V10_Dstring_D2701.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0),
      statics->up->up->vars[0],
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.const?.292 7 0) ((bruijn ##.printf.218 30 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k39) (##string ##.string.2699) (bruijn ##.name.1891 13 0)) ((bruijn ##.printf.218 30 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41) (##string ##.string.2702) (bruijn ##.name.1891 13 0)))
if(VDecodeBool(
VGetArg(statics, 7-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k39, self)))),
      VEncodePointer(&_V10_Dstring_D2699.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41, self)))),
      VEncodePointer(&_V10_Dstring_D2702.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k43(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (bruijn ##.%k.783 11 0) (##string ##.string.2703) (bruijn ##.closure.291 8 0) (bruijn ##.mangled.289 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 4,
      VGetArg(statics, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D2703.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 10-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k38) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k43))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k43, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37) (##string ##.string.2704))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37, self)))),
      VEncodePointer(&_V10_Dstring_D2704.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36) (##string ##.string.2705))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36, self)))),
      VEncodePointer(&_V10_Dstring_D2705.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k35) (##string ##.string.2706))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k35, self)))),
      VEncodePointer(&_V10_Dstring_D2706.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34) (##string ##.string.2707) (bruijn ##.basic.290 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34, self)))),
      VEncodePointer(&_V10_Dstring_D2707.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k33) (##string ##.string.2708))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k33, self)))),
      VEncodePointer(&_V10_Dstring_D2708.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k32) (##string ##.string.2709) (bruijn ##.encoder.1895 3 0) (bruijn ##.name.1891 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k32, self)))),
      VEncodePointer(&_V10_Dstring_D2709.sym, VPOINTER_OTHER),
      statics->up->up->vars[0],
      VGetArg(statics, 12-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1896) ((##vcore.not (bruijn ##.const?.292 6 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k31)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k31, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.printf.218 28 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k26) (##string ##.string.2710) (bruijn ##.mangled.289 9 0) (bruijn ##.name.1891 11 0) (bruijn ##.%x.787 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 5)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k26, self)))),
      VEncodePointer(&_V10_Dstring_D2710.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 11-1, 0),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k25))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k25, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.printf.218 27 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23) (##string ##.string.2711) (bruijn ##.decl.1878 17 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23, self)))),
      VEncodePointer(&_V10_Dstring_D2711.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.encoder.1895) ((##vcore.cdr (bruijn ##.%x.795 1 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k18) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k18, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.254 23 2) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k17) (bruijn ##.base-type.293 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k17, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k15) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k16))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k16, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1894) ((##vcore.pair? (bruijn ##.type.1886 7 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k14)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k14, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-closure) #t (bruijn ##.mangle-foreign-closure.255 19 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12) (bruijn ##.name.1891 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-basic) #t (bruijn ##.mangle-foreign-basic.257 18 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11) (bruijn ##.name.1891 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-function) #t (bruijn ##.mangle-foreign-function.256 17 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10) (bruijn ##.name.1891 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.777 0 0) (basic-block 2 2 (##.expr.198.1884 ##.%p.1885) ((##vcore.cdr (bruijn ##.expr.197.1881 3 0)) (##vcore.pair? (bruijn ##.expr.198.1884 0 0))) (if (bruijn ##.%p.1885 0 1) (basic-block 3 3 (##.type.1886 ##.%x.1887 ##.%p.1888) ((##vcore.car (bruijn ##.expr.198.1884 1 0)) (##vcore.cdr (bruijn ##.expr.198.1884 1 0)) (##vcore.null? (bruijn ##.%x.1887 0 1))) (if (bruijn ##.%p.1888 0 2) (basic-block 2 2 (##.expr.199.1889 ##.%p.1890) ((##vcore.cdr (bruijn ##.expr.196.1879 6 1)) (##vcore.pair? (bruijn ##.expr.199.1889 0 0))) (if (bruijn ##.%p.1890 0 1) (basic-block 3 3 (##.name.1891 ##.%x.1892 ##.%p.1893) ((##vcore.car (bruijn ##.expr.199.1889 1 0)) (##vcore.cdr (bruijn ##.expr.199.1889 1 0)) (##vcore.null? (bruijn ##.%x.1892 0 1))) (if (bruijn ##.%p.1893 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4) (bruijn ##.kk.191.276 14 1)) ((bruijn ##.%k.771 12 0) #f))) ((bruijn ##.%k.771 11 0) #f))) ((bruijn ##.%k.771 10 0) #f))) ((bruijn ##.%k.771 9 0) #f))) ((bruijn ##.%k.771 8 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.772 0 0) (basic-block 2 2 (##.expr.194.1873 ##.%p.1874) ((##vcore.cdr (bruijn ##.expr.275 6 2)) (##vcore.pair? (bruijn ##.expr.194.1873 0 0))) (if (bruijn ##.%p.1874 0 1) (basic-block 3 3 (##.lang.1875 ##.expr.195.1876 ##.%p.1877) ((##vcore.car (bruijn ##.expr.194.1873 1 0)) (##vcore.cdr (bruijn ##.expr.194.1873 1 0)) (##vcore.pair? (bruijn ##.expr.195.1876 0 1))) (if (bruijn ##.%p.1877 0 2) (basic-block 3 3 (##.decl.1878 ##.expr.196.1879 ##.%p.1880) ((##vcore.car (bruijn ##.expr.195.1876 1 1)) (##vcore.cdr (bruijn ##.expr.195.1876 1 1)) (##vcore.pair? (bruijn ##.expr.196.1879 0 1))) (if (bruijn ##.%p.1880 0 2) (basic-block 2 2 (##.expr.197.1881 ##.%p.1882) ((##vcore.car (bruijn ##.expr.196.1879 1 1)) (##vcore.pair? (bruijn ##.expr.197.1881 0 0))) (if (bruijn ##.%p.1882 0 1) (basic-block 1 1 (##.%x.1883) ((##vcore.car (bruijn ##.expr.197.1881 1 0))) ((bruijn ##.equal?.214 12 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8) 'extern (bruijn ##.%x.1883 0 0))) ((bruijn ##.%k.771 6 0) #f))) ((bruijn ##.%k.771 5 0) #f))) ((bruijn ##.%k.771 4 0) #f))) ((bruijn ##.%k.771 3 0) #f))) ((bruijn ##.%k.771 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8, self)))),
      _V0extern,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1826 1 0) (basic-block 1 1 (##.%x.1872) ((##vcore.car (bruijn ##.expr.275 4 2))) ((bruijn ##.equal?.214 6 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7) '##foreign.function (bruijn ##.%x.1872 0 0))) ((bruijn ##.%k.771 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.703 0 0) (bruijn ##.%k.696 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.715 0 0) (bruijn ##.%k.714 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.218 29 5) (bruijn ##.%k.716 0 0) (##string ##.string.2712) (bruijn ##.decoder.1845 1 0) (bruijn ##.argname.320 6 2) (bruijn ##.min-len.1846 1 1) (bruijn ##.name.1840 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 6,
      _var0,
      VEncodePointer(&_V10_Dstring_D2712.sym, VPOINTER_OTHER),
      statics->vars[0],
      VGetArg(statics, 6-1, 2),
      statics->vars[1],
      VGetArg(statics, 16-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1844 1 1) (basic-block 2 2 (##.decoder.1845 ##.min-len.1846) ((##vcore.car (bruijn ##.input.211.1843 2 0)) (##vcore.cdr (bruijn ##.input.211.1843 2 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k55) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda8) (bruijn ##.kk.210.321 4 1))) ((bruijn ##.%k.714 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k55, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda8, self)))),
      statics->up->up->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.213 27 0) (bruijn ##.%k.710 3 0) (##string ##.string.2713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2713.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.711 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k58))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k58, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.218 27 5) (bruijn ##.%k.712 0 0) (##string ##.string.2714) (bruijn ##.input.211.1843 1 0) (bruijn ##.argname.320 4 2) (bruijn ##.name.1840 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 5)), 5,
      _var0,
      VEncodePointer(&_V10_Dstring_D2714.sym, VPOINTER_OTHER),
      statics->vars[0],
      statics->up->up->up->vars[2],
      VGetArg(statics, 14-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k56(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k57) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda9) (bruijn ##.kk.210.321 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda9, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.input.211.1843 ##.%p.1844) ((##vcore.cdr (bruijn ##.%x.717 1 0)) (##vcore.pair? (bruijn ##.input.211.1843 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k54) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k54, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k56, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) #t (bruijn ##.get-foreign-decoder.253 23 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k53) (bruijn ##.arg.319 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0k53, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.709 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318_V0lambda7, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k63(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 25 5) (bruijn ##.%k.745 2 0) (##string ##.string.2715))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 5)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2715.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.218 26 5) (bruijn ##.%k.746 0 0) (##string ##.string.2716) (bruijn ##.e.327 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 5)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2716.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.217 25 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k63) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10) (bruijn ##.names.708 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k63, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1863) ((##vcore.+ 1 (bruijn ##.%x.748 1 0))) ((bruijn ##.printf.218 25 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62) (##string ##.string.2717) (bruijn ##.name.1840 12 0) (bruijn ##.name.1840 12 0) (bruijn ##.%x.1863 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 5)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62, self)))),
      VEncodePointer(&_V10_Dstring_D2717.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 12-1, 0),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 29 5) (bruijn ##.%k.745 6 0) (##string ##.string.2715))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D2715.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.218 30 5) (bruijn ##.%k.749 0 0) (##string ##.string.2716) (bruijn ##.e.329 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2716.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k71(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.217 29 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k72) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11) (bruijn ##.names.708 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k72, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1866) ((##vcore.+ 1 (bruijn ##.%x.752 1 0))) ((bruijn ##.printf.218 29 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k71) (##string ##.string.2718) (bruijn ##.mangled.705 12 0) (bruijn ##.%x.1865 2 0) (bruijn ##.%x.1866 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k71, self)))),
      VEncodePointer(&_V10_Dstring_D2718.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0),
      statics->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1865) ((##vcore.+ 1 (bruijn ##.%x.753 1 0))) ((bruijn ##.length.216 27 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k70) (bruijn ##.args.313 13 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k70, self)))),
      VGetArg(statics, 13-1, 1));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k68(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.length.216 25 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k69) (bruijn ##.args.313 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k69, self)))),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1864) ((##vcore.+ 1 (bruijn ##.%x.755 1 0))) ((bruijn ##.printf.218 25 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k68) (##string ##.string.2719) (bruijn ##.mangled.705 8 0) (bruijn ##.%x.1864 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 5)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k68, self)))),
      VEncodePointer(&_V10_Dstring_D2719.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.length.216 23 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k67) (bruijn ##.args.313 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k67, self)))),
      VGetArg(statics, 9-1, 1));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 23 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k66) (##string ##.string.2715))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k66, self)))),
      VEncodePointer(&_V10_Dstring_D2715.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.218 24 5) (bruijn ##.%k.756 0 0) (##string ##.string.2720) (bruijn ##.e.328 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 5)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2720.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.217 23 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k65) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12) (bruijn ##.names.708 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.274 21 1) ((bruijn ##.length.216 23 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k61) (bruijn ##.args.313 9 1)) ((bruijn ##.printf.218 23 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k64) (##string ##.string.2721) (bruijn ##.name.1840 10 0)))
if(VDecodeBool(
VGetArg(statics, 21-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k61, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k64, self)))),
      VEncodePointer(&_V10_Dstring_D2721.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1862) ((##vcore.cdr (bruijn ##.%x.744 1 0))) ((bruijn ##.printf.218 26 5) (bruijn ##.%k.742 2 0) (##string ##.string.2723) (bruijn ##.%x.1862 0 0) (bruijn ##.name.1840 13 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 5)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2723.sym, VPOINTER_OTHER),
      self->vars[0],
      VGetArg(statics, 13-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1847 1 0) ((bruijn ##.printf.218 24 5) (bruijn ##.%k.742 0 0) (##string ##.string.2722) (bruijn ##.name.1840 11 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.254 23 2) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k75) (bruijn ##.ret.1837 12 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 5)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2722.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k75, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k79(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.318) #f (bruijn ##.print-arg.318 6 0) (bruijn ##.%k.736 0 0) (bruijn ##.arg.330 0 1) (bruijn ##.argname.331 0 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.printf.218 28 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k79) (##string ##.string.2724))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k79, self)))),
      VEncodePointer(&_V10_Dstring_D2724.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k78(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1860 ##.%x.1861) ((##vcore.cdr (bruijn ##.args.313 13 1)) (##vcore.cdr (bruijn ##.names.708 6 0))) ((bruijn ##.for-each.217 27 4) (bruijn ##.%k.735 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13) (bruijn ##.%x.1860 0 0) (bruijn ##.%x.1861 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 4)), 4,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1848 1 0) (basic-block 2 2 (##.%x.1858 ##.%x.1859) ((##vcore.car (bruijn ##.args.313 12 1)) (##vcore.car (bruijn ##.names.708 5 0))) (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.318) #f (bruijn ##.print-arg.318 4 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k78) (bruijn ##.%x.1858 0 0) (bruijn ##.%x.1859 0 1))) ((bruijn ##.%k.735 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k78, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1849 1 0) ((bruijn ##.printf.218 26 5) (bruijn ##.%k.733 0 0) (##string ##.string.2725)) ((bruijn ##.printf.218 26 5) (bruijn ##.%k.733 0 0) (##string ##.string.2726)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 5)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2725.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 5)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2726.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1857) ((##vcore.cdr (bruijn ##.%x.730 1 0))) ((bruijn ##.printf.218 29 5) (bruijn ##.%k.728 2 0) (##string ##.string.2728) (bruijn ##.%x.1857 0 0) (bruijn ##.name.1840 16 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2728.sym, VPOINTER_OTHER),
      self->vars[0],
      VGetArg(statics, 16-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1850 1 0) ((bruijn ##.printf.218 27 5) (bruijn ##.%k.728 0 0) (##string ##.string.2727) (bruijn ##.name.1840 14 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.254 26 2) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k89) (bruijn ##.ret.1837 15 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 5)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2727.sym, VPOINTER_OTHER),
      VGetArg(statics, 14-1, 0));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k89, self))));
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k93(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.318) #f (bruijn ##.print-arg.318 9 0) (bruijn ##.%k.722 0 0) (bruijn ##.arg.333 0 1) (bruijn ##.argname.334 0 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.printf.218 31 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k93) (##string ##.string.2724))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k93, self)))),
      VEncodePointer(&_V10_Dstring_D2724.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1855 ##.%x.1856) ((##vcore.cdr (bruijn ##.args.313 16 1)) (##vcore.cdr (bruijn ##.names.708 9 0))) ((bruijn ##.for-each.217 30 4) (bruijn ##.%k.721 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14) (bruijn ##.%x.1855 0 0) (bruijn ##.%x.1856 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 4)), 4,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1851 1 0) (basic-block 2 2 (##.%x.1853 ##.%x.1854) ((##vcore.car (bruijn ##.args.313 15 1)) (##vcore.car (bruijn ##.names.708 8 0))) (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.318) #f (bruijn ##.print-arg.318 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k92) (bruijn ##.%x.1853 0 0) (bruijn ##.%x.1854 0 1))) ((bruijn ##.%k.721 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k92, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1852 1 0) ((bruijn ##.printf.218 29 5) (bruijn ##.%k.719 0 0) (##string ##.string.2729)) ((bruijn ##.printf.218 29 5) (bruijn ##.%k.719 0 0) (##string ##.string.2730)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2729.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 5)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2730.sym, VPOINTER_OTHER));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 28 5) (bruijn ##.%k.704 12 0) (##string ##.string.2703) (bruijn ##.closure.707 9 0) (bruijn ##.mangled.705 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 5)), 4,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D2703.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 11-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1852) ((##vcore.eq? (bruijn ##.ret.1837 16 0) 'void)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k95) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k96)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 16-1, 0),
      _V0void);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k96, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1851) ((##vcore.pair? (bruijn ##.args.313 13 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k91) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k94)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k94, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1850) ((##vcore.eq? (bruijn ##.ret.1837 14 0) 'void)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k88) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      _V0void);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k90, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k86(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 25 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k87) (##string ##.string.2715))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k87, self)))),
      VEncodePointer(&_V10_Dstring_D2715.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.218 26 5) (bruijn ##.%k.731 0 0) (##string ##.string.2720) (bruijn ##.e.332 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 5)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2720.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k85(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.217 25 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k86) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15) (bruijn ##.names.708 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k86, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15, self)))),
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 25 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k85) (##string ##.string.2731) (bruijn ##.basic.706 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k85, self)))),
      VEncodePointer(&_V10_Dstring_D2731.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 25 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k84) (##string ##.string.2732))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k84, self)))),
      VEncodePointer(&_V10_Dstring_D2732.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k81(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1849) ((##vcore.eq? (bruijn ##.ret.1837 13 0) 'void)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k82) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k83)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      _V0void);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k83, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k80(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.218 24 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k81) (##string ##.string.2733))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k81, self)))),
      VEncodePointer(&_V10_Dstring_D2733.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k76(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1848) ((##vcore.pair? (bruijn ##.args.313 10 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k77) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k77, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k80, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1847) ((##vcore.eq? (bruijn ##.ret.1837 11 0) 'void)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k74) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k76)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      _V0void);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k76, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k59(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k60) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k73))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k60, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k73, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318")) ((bruijn ##.printf.218 22 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k59) (##string ##.string.2711) (bruijn ##.decl.1834 11 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D318, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k59, self)))),
      VEncodePointer(&_V10_Dstring_D2711.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iota.215 20 2) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k52) (bruijn ##.%x.757 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k52, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.216 19 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k51) (bruijn ##.args.313 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k51, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-closure) #t (bruijn ##.mangle-foreign-closure.255 17 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k50) (bruijn ##.name.1840 5 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k50, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-basic) #t (bruijn ##.mangle-foreign-basic.257 16 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49) (bruijn ##.name.1840 4 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-function) #t (bruijn ##.mangle-foreign-function.256 15 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k48) (bruijn ##.name.1840 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k48, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1842) ((##vcore.null? (bruijn ##.tail-expr.312 1 0))) (if (bruijn ##.%p.1842 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k47) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6) (bruijn ##.kk.191.276 12 1)) ((bruijn ##.%k.696 9 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.207.306 5 1) (bruijn ##.%k.766 1 0) (bruijn ##.expr.209.308 3 1) (bruijn ##.%x.767 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1868 1 1) ((bruijn ##.reverse.219 18 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k98) (bruijn ##.args.206.309 2 2)) ((bruijn ##.%k.766 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k98, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.207.306 7 1) (bruijn ##.%k.761 2 0) (bruijn ##.expr.209.308 5 1) (bruijn ##.%x.762 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.219 20 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k101) (bruijn ##.args.206.309 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k101, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.args.1869 ##.%x.1870 ##.%x.1871) ((##vcore.car (bruijn ##.expr.209.308 4 1)) (##vcore.cdr (bruijn ##.expr.209.308 4 1)) (##vcore.cons (bruijn ##.args.1869 0 0) (bruijn ##.args.206.309 4 2))) ((bruijn ##.kk.208.310 1 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k100) (bruijn ##.%x.1870 0 1) (bruijn ##.%x.1871 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k100, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.760 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda18, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k99(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.759 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda17) (bruijn ##.loop.307 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0lambda17, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1867 ##.%p.1868) ((##vcore.pair? (bruijn ##.expr.209.308 1 1)) (##vcore.not (bruijn ##.%x.1867 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k97) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k99)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307_V0k99, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307")) (##qualified-call (vanity compiler ffi print-foreign-function ##.loop.307) #f (bruijn ##.loop.307 0 0) (bruijn ##.%k.758 1 0) (bruijn ##.expr.205.1841 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D307(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.697 0 0) (basic-block 2 2 (##.expr.201.1829 ##.%p.1830) ((##vcore.cdr (bruijn ##.expr.275 7 2)) (##vcore.pair? (bruijn ##.expr.201.1829 0 0))) (if (bruijn ##.%p.1830 0 1) (basic-block 3 3 (##.lang.1831 ##.expr.202.1832 ##.%p.1833) ((##vcore.car (bruijn ##.expr.201.1829 1 0)) (##vcore.cdr (bruijn ##.expr.201.1829 1 0)) (##vcore.pair? (bruijn ##.expr.202.1832 0 1))) (if (bruijn ##.%p.1833 0 2) (basic-block 3 3 (##.decl.1834 ##.expr.203.1835 ##.%p.1836) ((##vcore.car (bruijn ##.expr.202.1832 1 1)) (##vcore.cdr (bruijn ##.expr.202.1832 1 1)) (##vcore.pair? (bruijn ##.expr.203.1835 0 1))) (if (bruijn ##.%p.1836 0 2) (basic-block 3 3 (##.ret.1837 ##.expr.204.1838 ##.%p.1839) ((##vcore.car (bruijn ##.expr.203.1835 1 1)) (##vcore.cdr (bruijn ##.expr.203.1835 1 1)) (##vcore.pair? (bruijn ##.expr.204.1838 0 1))) (if (bruijn ##.%p.1839 0 2) (basic-block 2 2 (##.name.1840 ##.expr.205.1841) ((##vcore.car (bruijn ##.expr.204.1838 1 1)) (##vcore.cdr (bruijn ##.expr.204.1838 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16))) ((bruijn ##.%k.696 6 0) #f))) ((bruijn ##.%k.696 5 0) #f))) ((bruijn ##.%k.696 4 0) #f))) ((bruijn ##.%k.696 3 0) #f))) ((bruijn ##.%k.696 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1827 1 0) (basic-block 1 1 (##.%x.1828) ((##vcore.car (bruijn ##.expr.275 5 2))) ((bruijn ##.equal?.214 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k46) '##foreign.function (bruijn ##.%x.1828 0 0))) ((bruijn ##.%k.696 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k46, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.213 5 0) (bruijn ##.%k.694 2 0) (##string ##.string.2713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2713.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1827) ((##vcore.pair? (bruijn ##.expr.275 3 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k45) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k102)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k102, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1826) ((##vcore.pair? (bruijn ##.expr.275 2 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44, self)))));
    }
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
  // (##vcore.call/cc (bruijn ##.%k.693 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1903 1 0) (basic-block 1 1 (##.%x.1974) ((##vcore.car (bruijn ##.type.335 3 1))) ((bruijn ##.memv.222 5 9) (bruijn ##.%k.956 1 0) (bruijn ##.%x.1974 0 0) '(##pair ##.pair.2735))) ((bruijn ##.%k.956 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D2735, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1909 ##.%r.1910) ((##vcore.cons (bruijn ##.%x.812 1 0) (bruijn ##.n.807 8 0)) (##vcore.cons (bruijn ##.%x.1907 2 0) (bruijn ##.%x.1909 0 0))) ((bruijn ##.%k.804 12 0) (bruijn ##.%r.1910 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 0));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.809 0 0) (basic-block 2 2 (##.%x.1907 ##.%x.1908) ((##vcore.car (bruijn ##.base.808 3 0)) (##vcore.cdr (bruijn ##.base.808 3 0))) ((bruijn ##.string-append.223 12 10) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110) (bruijn ##.%x.1908 0 1) (##string ##.string.2736))) ((bruijn ##.%k.804 9 0) (bruijn ##.base.808 2 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110, self)))),
      self->vars[1],
      VEncodePointer(&_V10_Dstring_D2736.sym, VPOINTER_OTHER));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1906) ((##vcore.car (bruijn ##.base.808 1 0))) ((bruijn ##.memv.222 10 9) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109) (bruijn ##.%x.1906 0 0) '(##pair ##.pair.2745)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D2745, VPOINTER_PAIR));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) #t (bruijn ##.get-foreign-decoder.253 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108) (bruijn ##.%x.815 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.224 7 11) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k107) 'pointer (bruijn ##.%x.816 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k107, self)))),
      _V0pointer,
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.225 6 12) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106) (bruijn ##.type.335 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.952 0 0) (bruijn ##.%k.951 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.953 0 0) '(##pair ##.pair.2747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2747, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.950 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20) (bruijn ##.kk.171.338 3 1)) ((bruijn ##.%k.951 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.945 0 0) (bruijn ##.%k.940 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.946 0 0) '(##pair ##.pair.2749))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2749, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.943 0 0) (basic-block 2 2 (##.%x.1972 ##.%p.1973) ((##vcore.cdr (bruijn ##.expr.174.1969 3 0)) (##vcore.null? (bruijn ##.%x.1972 0 0))) (if (bruijn ##.%p.1973 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21) (bruijn ##.kk.171.338 10 1)) ((bruijn ##.%k.940 6 0) #f))) ((bruijn ##.%k.940 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.941 0 0) (basic-block 2 2 (##.expr.174.1969 ##.%p.1970) ((##vcore.cdr (bruijn ##.input.172.339 6 0)) (##vcore.pair? (bruijn ##.expr.174.1969 0 0))) (if (bruijn ##.%p.1970 0 1) (basic-block 1 1 (##.%x.1971) ((##vcore.car (bruijn ##.expr.174.1969 1 0))) ((bruijn ##.equal?.214 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118) 'char (bruijn ##.%x.1971 0 0))) ((bruijn ##.%k.940 3 0) #f))) ((bruijn ##.%k.940 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118, self)))),
      _V0char,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1911 1 0) (basic-block 1 1 (##.%x.1968) ((##vcore.car (bruijn ##.input.172.339 4 0))) ((bruijn ##.equal?.214 11 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117) 'const (bruijn ##.%x.1968 0 0))) ((bruijn ##.%k.940 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.934 0 0) (bruijn ##.%k.929 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.935 0 0) '(##pair ##.pair.2751))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2751, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.932 0 0) (basic-block 2 2 (##.%x.1966 ##.%p.1967) ((##vcore.cdr (bruijn ##.expr.176.1963 3 0)) (##vcore.null? (bruijn ##.%x.1966 0 0))) (if (bruijn ##.%p.1967 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22) (bruijn ##.kk.171.338 11 1)) ((bruijn ##.%k.929 6 0) #f))) ((bruijn ##.%k.929 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.930 0 0) (basic-block 2 2 (##.expr.176.1963 ##.%p.1964) ((##vcore.cdr (bruijn ##.input.172.339 7 0)) (##vcore.pair? (bruijn ##.expr.176.1963 0 0))) (if (bruijn ##.%p.1964 0 1) (basic-block 1 1 (##.%x.1965) ((##vcore.car (bruijn ##.expr.176.1963 1 0))) ((bruijn ##.equal?.214 15 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123) 'void (bruijn ##.%x.1965 0 0))) ((bruijn ##.%k.929 3 0) #f))) ((bruijn ##.%k.929 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123, self)))),
      _V0void,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1912 1 0) (basic-block 1 1 (##.%x.1962) ((##vcore.car (bruijn ##.input.172.339 5 0))) ((bruijn ##.equal?.214 12 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122) 'const (bruijn ##.%x.1962 0 0))) ((bruijn ##.%k.929 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.926 0 0) (bruijn ##.%k.925 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.927 0 0) '(##pair ##.pair.2753))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2753, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.924 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23) (bruijn ##.kk.171.338 6 1)) ((bruijn ##.%k.925 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.922 0 0) (bruijn ##.%k.921 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.923 0 0) '(##pair ##.pair.2755))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2755, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.920 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24) (bruijn ##.kk.171.338 7 1)) ((bruijn ##.%k.921 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.918 0 0) (bruijn ##.%k.917 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.919 0 0) '(##pair ##.pair.2757))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2757, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.916 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25) (bruijn ##.kk.171.338 8 1)) ((bruijn ##.%k.917 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.914 0 0) (bruijn ##.%k.913 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.915 0 0) '(##pair ##.pair.2759))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2759, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.912 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26) (bruijn ##.kk.171.338 9 1)) ((bruijn ##.%k.913 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.910 0 0) (bruijn ##.%k.909 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.911 0 0) '(##pair ##.pair.2761))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2761, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.908 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27) (bruijn ##.kk.171.338 10 1)) ((bruijn ##.%k.909 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.906 0 0) (bruijn ##.%k.905 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.907 0 0) '(##pair ##.pair.2763))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2763, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.904 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28) (bruijn ##.kk.171.338 11 1)) ((bruijn ##.%k.905 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.902 0 0) (bruijn ##.%k.901 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.903 0 0) '(##pair ##.pair.2765))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2765, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.900 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29) (bruijn ##.kk.171.338 12 1)) ((bruijn ##.%k.901 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.898 0 0) (bruijn ##.%k.897 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.899 0 0) '(##pair ##.pair.2767))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2767, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.896 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30) (bruijn ##.kk.171.338 13 1)) ((bruijn ##.%k.897 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.891 0 0) (bruijn ##.%k.886 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.892 0 0) '(##pair ##.pair.2755))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2755, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.889 0 0) (basic-block 2 2 (##.%x.1960 ##.%p.1961) ((##vcore.cdr (bruijn ##.expr.178.1957 3 0)) (##vcore.null? (bruijn ##.%x.1960 0 0))) (if (bruijn ##.%p.1961 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k161) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31) (bruijn ##.kk.171.338 20 1)) ((bruijn ##.%k.886 6 0) #f))) ((bruijn ##.%k.886 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k161, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.887 0 0) (basic-block 2 2 (##.expr.178.1957 ##.%p.1958) ((##vcore.cdr (bruijn ##.input.172.339 16 0)) (##vcore.pair? (bruijn ##.expr.178.1957 0 0))) (if (bruijn ##.%p.1958 0 1) (basic-block 1 1 (##.%x.1959) ((##vcore.car (bruijn ##.expr.178.1957 1 0))) ((bruijn ##.equal?.214 24 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k160) 'float (bruijn ##.%x.1959 0 0))) ((bruijn ##.%k.886 3 0) #f))) ((bruijn ##.%k.886 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k160, self)))),
      _V0float,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1913 1 0) (basic-block 1 1 (##.%x.1956) ((##vcore.car (bruijn ##.input.172.339 14 0))) ((bruijn ##.equal?.214 21 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k159) 'const (bruijn ##.%x.1956 0 0))) ((bruijn ##.%k.886 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k159, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.880 0 0) (bruijn ##.%k.875 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.881 0 0) '(##pair ##.pair.2757))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2757, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.878 0 0) (basic-block 2 2 (##.%x.1954 ##.%p.1955) ((##vcore.cdr (bruijn ##.expr.180.1951 3 0)) (##vcore.null? (bruijn ##.%x.1954 0 0))) (if (bruijn ##.%p.1955 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k166) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32) (bruijn ##.kk.171.338 21 1)) ((bruijn ##.%k.875 6 0) #f))) ((bruijn ##.%k.875 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k166, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.876 0 0) (basic-block 2 2 (##.expr.180.1951 ##.%p.1952) ((##vcore.cdr (bruijn ##.input.172.339 17 0)) (##vcore.pair? (bruijn ##.expr.180.1951 0 0))) (if (bruijn ##.%p.1952 0 1) (basic-block 1 1 (##.%x.1953) ((##vcore.car (bruijn ##.expr.180.1951 1 0))) ((bruijn ##.equal?.214 25 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k165) 'double (bruijn ##.%x.1953 0 0))) ((bruijn ##.%k.875 3 0) #f))) ((bruijn ##.%k.875 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k165, self)))),
      _V0double,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1914 1 0) (basic-block 1 1 (##.%x.1950) ((##vcore.car (bruijn ##.input.172.339 15 0))) ((bruijn ##.equal?.214 22 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k164) 'const (bruijn ##.%x.1950 0 0))) ((bruijn ##.%k.875 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k164, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.869 0 0) (bruijn ##.%k.864 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.870 0 0) '(##pair ##.pair.2759))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2759, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.867 0 0) (basic-block 2 2 (##.%x.1948 ##.%p.1949) ((##vcore.cdr (bruijn ##.expr.182.1945 3 0)) (##vcore.null? (bruijn ##.%x.1948 0 0))) (if (bruijn ##.%p.1949 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k171) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33) (bruijn ##.kk.171.338 22 1)) ((bruijn ##.%k.864 6 0) #f))) ((bruijn ##.%k.864 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k171, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.865 0 0) (basic-block 2 2 (##.expr.182.1945 ##.%p.1946) ((##vcore.cdr (bruijn ##.input.172.339 18 0)) (##vcore.pair? (bruijn ##.expr.182.1945 0 0))) (if (bruijn ##.%p.1946 0 1) (basic-block 1 1 (##.%x.1947) ((##vcore.car (bruijn ##.expr.182.1945 1 0))) ((bruijn ##.equal?.214 26 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k170) 'int (bruijn ##.%x.1947 0 0))) ((bruijn ##.%k.864 3 0) #f))) ((bruijn ##.%k.864 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k170, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1915 1 0) (basic-block 1 1 (##.%x.1944) ((##vcore.car (bruijn ##.input.172.339 16 0))) ((bruijn ##.equal?.214 23 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k169) 'const (bruijn ##.%x.1944 0 0))) ((bruijn ##.%k.864 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k169, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.858 0 0) (bruijn ##.%k.853 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.859 0 0) '(##pair ##.pair.2761))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2761, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.856 0 0) (basic-block 2 2 (##.%x.1942 ##.%p.1943) ((##vcore.cdr (bruijn ##.expr.184.1939 3 0)) (##vcore.null? (bruijn ##.%x.1942 0 0))) (if (bruijn ##.%p.1943 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k176) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34) (bruijn ##.kk.171.338 23 1)) ((bruijn ##.%k.853 6 0) #f))) ((bruijn ##.%k.853 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k176, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34, self)))),
      VGetArg(statics, 23-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.854 0 0) (basic-block 2 2 (##.expr.184.1939 ##.%p.1940) ((##vcore.cdr (bruijn ##.input.172.339 19 0)) (##vcore.pair? (bruijn ##.expr.184.1939 0 0))) (if (bruijn ##.%p.1940 0 1) (basic-block 1 1 (##.%x.1941) ((##vcore.car (bruijn ##.expr.184.1939 1 0))) ((bruijn ##.equal?.214 27 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k175) 'unsigned-short (bruijn ##.%x.1941 0 0))) ((bruijn ##.%k.853 3 0) #f))) ((bruijn ##.%k.853 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 19-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k175, self)))),
      _V0unsigned__short,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1916 1 0) (basic-block 1 1 (##.%x.1938) ((##vcore.car (bruijn ##.input.172.339 17 0))) ((bruijn ##.equal?.214 24 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k174) 'const (bruijn ##.%x.1938 0 0))) ((bruijn ##.%k.853 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k174, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.847 0 0) (bruijn ##.%k.842 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.848 0 0) '(##pair ##.pair.2763))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2763, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.845 0 0) (basic-block 2 2 (##.%x.1936 ##.%p.1937) ((##vcore.cdr (bruijn ##.expr.186.1933 3 0)) (##vcore.null? (bruijn ##.%x.1936 0 0))) (if (bruijn ##.%p.1937 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k181) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35) (bruijn ##.kk.171.338 24 1)) ((bruijn ##.%k.842 6 0) #f))) ((bruijn ##.%k.842 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k181, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35, self)))),
      VGetArg(statics, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.843 0 0) (basic-block 2 2 (##.expr.186.1933 ##.%p.1934) ((##vcore.cdr (bruijn ##.input.172.339 20 0)) (##vcore.pair? (bruijn ##.expr.186.1933 0 0))) (if (bruijn ##.%p.1934 0 1) (basic-block 1 1 (##.%x.1935) ((##vcore.car (bruijn ##.expr.186.1933 1 0))) ((bruijn ##.equal?.214 28 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k180) 'short (bruijn ##.%x.1935 0 0))) ((bruijn ##.%k.842 3 0) #f))) ((bruijn ##.%k.842 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 20-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k180, self)))),
      _V0short,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1917 1 0) (basic-block 1 1 (##.%x.1932) ((##vcore.car (bruijn ##.input.172.339 18 0))) ((bruijn ##.equal?.214 25 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k179) 'const (bruijn ##.%x.1932 0 0))) ((bruijn ##.%k.842 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k179, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.836 0 0) (bruijn ##.%k.831 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.837 0 0) '(##pair ##.pair.2765))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2765, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.834 0 0) (basic-block 2 2 (##.%x.1930 ##.%p.1931) ((##vcore.cdr (bruijn ##.expr.188.1927 3 0)) (##vcore.null? (bruijn ##.%x.1930 0 0))) (if (bruijn ##.%p.1931 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k186) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36) (bruijn ##.kk.171.338 25 1)) ((bruijn ##.%k.831 6 0) #f))) ((bruijn ##.%k.831 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k186, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36, self)))),
      VGetArg(statics, 25-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.832 0 0) (basic-block 2 2 (##.expr.188.1927 ##.%p.1928) ((##vcore.cdr (bruijn ##.input.172.339 21 0)) (##vcore.pair? (bruijn ##.expr.188.1927 0 0))) (if (bruijn ##.%p.1928 0 1) (basic-block 1 1 (##.%x.1929) ((##vcore.car (bruijn ##.expr.188.1927 1 0))) ((bruijn ##.equal?.214 29 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k185) 'unsigned-char (bruijn ##.%x.1929 0 0))) ((bruijn ##.%k.831 3 0) #f))) ((bruijn ##.%k.831 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k185, self)))),
      _V0unsigned__char,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1918 1 0) (basic-block 1 1 (##.%x.1926) ((##vcore.car (bruijn ##.input.172.339 19 0))) ((bruijn ##.equal?.214 26 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k184) 'const (bruijn ##.%x.1926 0 0))) ((bruijn ##.%k.831 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k184, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.825 0 0) (bruijn ##.%k.820 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.826 0 0) '(##pair ##.pair.2767))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2767, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.823 0 0) (basic-block 2 2 (##.%x.1924 ##.%p.1925) ((##vcore.cdr (bruijn ##.expr.190.1921 3 0)) (##vcore.null? (bruijn ##.%x.1924 0 0))) (if (bruijn ##.%p.1925 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k191) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda37) (bruijn ##.kk.171.338 26 1)) ((bruijn ##.%k.820 6 0) #f))) ((bruijn ##.%k.820 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k191, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda37, self)))),
      VGetArg(statics, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.821 0 0) (basic-block 2 2 (##.expr.190.1921 ##.%p.1922) ((##vcore.cdr (bruijn ##.input.172.339 22 0)) (##vcore.pair? (bruijn ##.expr.190.1921 0 0))) (if (bruijn ##.%p.1922 0 1) (basic-block 1 1 (##.%x.1923) ((##vcore.car (bruijn ##.expr.190.1921 1 0))) ((bruijn ##.equal?.214 30 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k190) 'signed-char (bruijn ##.%x.1923 0 0))) ((bruijn ##.%k.820 3 0) #f))) ((bruijn ##.%k.820 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 22-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k190, self)))),
      _V0signed__char,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1919 1 0) (basic-block 1 1 (##.%x.1920) ((##vcore.car (bruijn ##.input.172.339 20 0))) ((bruijn ##.equal?.214 27 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k189) 'const (bruijn ##.%x.1920 0 0))) ((bruijn ##.%k.820 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 20-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k189, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.818 0 0) '(##pair ##.pair.2768))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2768, VPOINTER_PAIR));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k192(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.817 19 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda38) (bruijn ##.kk.171.338 19 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 19-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda38, self)))),
      VGetArg(statics, 19-1, 1));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k187(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1919) ((##vcore.pair? (bruijn ##.input.172.339 18 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k188) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k192)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 18-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k192, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1918) ((##vcore.pair? (bruijn ##.input.172.339 17 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k183) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k187)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k187, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k177(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1917) ((##vcore.pair? (bruijn ##.input.172.339 16 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k178) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k182)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k178, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k182, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k172(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1916) ((##vcore.pair? (bruijn ##.input.172.339 15 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k173) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k177)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k173, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k177, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1915) ((##vcore.pair? (bruijn ##.input.172.339 14 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k168) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k172)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k172, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k162(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1914) ((##vcore.pair? (bruijn ##.input.172.339 13 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k163) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k167)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k167, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k157(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1913) ((##vcore.pair? (bruijn ##.input.172.339 12 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k158) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k162)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k162, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k157))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k157, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 17 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154) 'signed-char (bruijn ##.input.172.339 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154, self)))),
      _V0signed__char,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k151) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k151, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 16 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150) 'unsigned-char (bruijn ##.input.172.339 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150, self)))),
      _V0unsigned__char,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 15 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146) 'short (bruijn ##.input.172.339 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146, self)))),
      _V0short,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k145))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k145, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142) 'unsigned-short (bruijn ##.input.172.339 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142, self)))),
      _V0unsigned__short,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k139) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k139, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 13 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138) 'int (bruijn ##.input.172.339 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138, self)))),
      _V0int,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 12 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134) 'double (bruijn ##.input.172.339 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134, self)))),
      _V0double,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k133))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k133, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 11 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130) 'float (bruijn ##.input.172.339 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130, self)))),
      _V0float,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k127) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.214 10 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126) 'void (bruijn ##.input.172.339 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126, self)))),
      _V0void,
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1912) ((##vcore.pair? (bruijn ##.input.172.339 3 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k121) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1911) ((##vcore.pair? (bruijn ##.input.172.339 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k113) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k115))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k115, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.214 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112) 'char (bruijn ##.input.172.339 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112, self)))),
      _V0char,
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.220 6 7) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k111) (bruijn ##.type.335 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k111, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.805 0 0) (basic-block 2 2 (##.%x.1904 ##.%p.1905) ((##vcore.car (bruijn ##.type.335 3 1)) (##vcore.eq? (bruijn ##.%x.1904 0 0) 'static-pointer)) (if (bruijn ##.%p.1905 0 1) ((bruijn ##.cadr.220 5 7) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105) (bruijn ##.type.335 3 1)) (##vcore.call/cc (bruijn ##.%k.804 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19)))) ((bruijn ##.assv.221 4 8) (bruijn ##.%k.804 2 0) (bruijn ##.type.335 2 1) '(##pair ##.pair.2808)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0static__pointer);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105, self)))),
      statics->up->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19, self)))));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VEncodePointer(&_V10_Dpair_D2808, VPOINTER_PAIR));
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
  // (basic-block 1 1 (##.%p.1903) ((##vcore.pair? (bruijn ##.type.335 1 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k103) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1975 1 0) (basic-block 2 2 (##.%x.1976 ##.%r.1977) ((##vcore.car (bruijn ##.type.358 3 1)) (##vcore.eq? (bruijn ##.%x.1976 0 0) 'pointer)) ((bruijn ##.%k.961 1 0) (bruijn ##.%r.1977 0 1))) ((bruijn ##.%k.961 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0pointer);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.959 0 0) ((bruijn ##.%k.958 2 0) '(##pair ##.pair.2810)) ((bruijn ##.assv.221 4 8) (bruijn ##.%k.958 2 0) (bruijn ##.type.358 2 1) '(##pair ##.pair.2839)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dpair_D2810, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VEncodePointer(&_V10_Dpair_D2839, VPOINTER_PAIR));
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
  // (basic-block 1 1 (##.%p.1975) ((##vcore.pair? (bruijn ##.type.358 1 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k193) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k194)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k194, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.226 2 13) (bruijn ##.%k.963 0 0) (##string ##.string.2840) (bruijn ##.name.359 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2840.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.226 2 13) (bruijn ##.%k.964 0 0) (##string ##.string.2841) (bruijn ##.name.360 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2841.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.226 2 13) (bruijn ##.%k.965 0 0) (##string ##.string.2842) (bruijn ##.name.361 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2842.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.226 2 13) (bruijn ##.%k.966 0 0) (##string ##.string.2843) (bruijn ##.name.362 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2843.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.977 0 0) (bruijn ##.%k.972 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1988 1 0) ((bruijn ##.compiler-error.227 16 14) (bruijn ##.%k.989 0 0) (##string ##.string.2844) (bruijn ##.expr.363 14 1)) ((bruijn ##.%k.989 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2844.sym, VPOINTER_OTHER),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1990 1 1) ((bruijn ##.compiler-error.227 17 14) (bruijn ##.%k.986 0 0) (##string ##.string.2845) (bruijn ##.expr.363 15 1)) ((bruijn ##.%k.986 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2845.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1993) ((##vcore.cons (bruijn ##.%x.1992 3 1) (bruijn ##.%x.980 1 0))) ((bruijn ##.%k.978 12 0) (bruijn ##.%r.1993 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.264 22 12) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k211) (bruijn ##.%x.981 0 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k211, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1991 ##.%x.1992) ((##vcore.cons (bruijn ##.%x.983 1 0) '()) (##vcore.cons '##foreign.declare (bruijn ##.%x.1991 0 0))) (##qualified-call (vanity compiler ffi unwrap-declares) #t (bruijn ##.unwrap-declares.265 21 13) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k210) (bruijn ##.parse.376 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10foreign_Ddeclare,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k210, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k208(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.sprintf.226 20 13) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k209) (##string ##.string.2846) (bruijn ##.file.1985 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k209, self)))),
      VEncodePointer(&_V10_Dstring_D2846.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.228 20 15) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k208) (bruijn ##.fd.375 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k208, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-header-c.366 15 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k207) (bruijn ##.fd.375 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k207, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.open-input-process (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k206) (bruijn ##.cmd.374 0 0))
    VCallFuncWithGC(runtime, (VFunc)VOpenInputProcess2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k206, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi make-preprocess-command) #t (bruijn ##.make-preprocess-command.260 16 8) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k205) (bruijn ##.%x.984 0 0) (bruijn ##.architecture.365 15 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k205, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k203(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi find-file) #t (bruijn ##.find-file.262 15 10) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k204) (bruijn ##.file.1985 4 0) (bruijn ##.paths.364 14 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k204, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__file(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1989 ##.%p.1990) ((##vcore.string? (bruijn ##.file.1985 4 0)) (##vcore.not (bruijn ##.%x.1989 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k202) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k203)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k203, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1988) ((##vcore.not (bruijn ##.%x.990 1 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k200) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k201)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k200, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k201, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.214 13 1) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k199) (bruijn ##.lang.1982 2 0) (##string ##.string.2847))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k199, self)))),
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2847.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.973 0 0) (basic-block 2 2 (##.expr.169.1980 ##.%p.1981) ((##vcore.cdr (bruijn ##.expr.363 8 1)) (##vcore.pair? (bruijn ##.expr.169.1980 0 0))) (if (bruijn ##.%p.1981 0 1) (basic-block 3 3 (##.lang.1982 ##.expr.170.1983 ##.%p.1984) ((##vcore.car (bruijn ##.expr.169.1980 1 0)) (##vcore.cdr (bruijn ##.expr.169.1980 1 0)) (##vcore.pair? (bruijn ##.expr.170.1983 0 1))) (if (bruijn ##.%p.1984 0 2) (basic-block 3 3 (##.file.1985 ##.%x.1986 ##.%p.1987) ((##vcore.car (bruijn ##.expr.170.1983 1 1)) (##vcore.cdr (bruijn ##.expr.170.1983 1 1)) (##vcore.null? (bruijn ##.%x.1986 0 1))) (if (bruijn ##.%p.1987 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k198) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda40) (bruijn ##.kk.166.367 7 1)) ((bruijn ##.%k.972 5 0) #f))) ((bruijn ##.%k.972 4 0) #f))) ((bruijn ##.%k.972 3 0) #f))) ((bruijn ##.%k.972 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k198, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda40, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1978 1 0) (basic-block 1 1 (##.%x.1979) ((##vcore.car (bruijn ##.expr.363 6 1))) ((bruijn ##.equal?.214 8 1) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k197) '##foreign.import (bruijn ##.%x.1979 0 0))) ((bruijn ##.%k.972 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k197, self)))),
      _V10foreign_Dimport,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.227 7 14) (bruijn ##.%k.970 0 0) (##string ##.string.2848) (bruijn ##.expr.363 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2848.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k212(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.969 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda41) (bruijn ##.kk.166.367 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda41, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1978) ((##vcore.pair? (bruijn ##.expr.363 4 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k196) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k212)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k196, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k212, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.968 1 0)) (##vcore.call/cc (bruijn ##.%k.967 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39, self)))));
    }
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k195) (##string ##.string.2849))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k195, self)))),
      VEncodePointer(&_V10_Dstring_D2849.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.226 4 13) (bruijn ##.%k.993 2 0) (##string ##.string.2850) (bruijn ##.gcc-path.229 4 16) (bruijn ##.file.377 2 1) (bruijn ##.%x.995 0 0) (##string ##.string.2851) (bruijn ##.architecture.378 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[13]), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2850.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[16],
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D2851.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.226 4 13) (bruijn ##.%k.993 2 0) (##string ##.string.2852) (bruijn ##.gcc-path.229 4 16) (bruijn ##.file.377 2 1) (bruijn ##.%x.996 0 0) (##string ##.string.2851) (bruijn ##.architecture.378 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[13]), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2852.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[16],
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D2851.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
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
  // (basic-block 1 1 (##.%p.1994) ((##vcore.eq? (bruijn ##.platform.230 3 17) 'windows)) (if (bruijn ##.%p.1994 0 0) (##qualified-call (vanity compiler ffi get-install-root) #t (bruijn ##.get-install-root.261 2 9) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k213)) (##qualified-call (vanity compiler ffi get-install-root) #t (bruijn ##.get-install-root.261 2 9) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k214))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[17],
      _V0windows);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k213, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, _V60_V0vanity_V0compiler_V0ffi)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__install__root(runtime, _closure_env, 1, _arg0);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k214, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, _V60_V0vanity_V0compiler_V0ffi)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__install__root(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.226 4 13) (bruijn ##.%k.997 2 0) (##string ##.string.2853) (bruijn ##.%x.998 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[13]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2853.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.999 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k216))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k216, self)))));
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
  // (if (bruijn ##.install-root.231 2 18) ((bruijn ##.%k.997 0 0) (bruijn ##.install-root.231 2 18)) (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k215) (##string ##.string.2854)))
if(VDecodeBool(
statics->up->vars[18])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[18]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k215, self)))),
      VEncodePointer(&_V10_Dstring_D2854.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1002 0 0) ((bruijn ##.%k.1000 4 0) (bruijn ##.path.381 1 0)) (basic-block 1 1 (##.%x.1997) ((##vcore.cdr (bruijn ##.paths.380 5 2))) (##qualified-call (vanity compiler ffi find-file) #t (bruijn ##.find-file.262 6 10) (bruijn ##.%k.1000 5 0) (bruijn ##.file.379 5 1) (bruijn ##.%x.1997 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__file(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.file-exists?.232 5 19) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k218) (bruijn ##.path.381 0 0) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k218, self)))),
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
  // (basic-block 1 1 (##.%p.1995) ((##vcore.null? (bruijn ##.paths.380 1 2))) (if (bruijn ##.%p.1995 0 0) ((bruijn ##.compiler-error.227 3 14) (bruijn ##.%k.1000 1 0) (##string ##.string.2855) (bruijn ##.file.379 1 1)) (basic-block 1 1 (##.%x.1996) ((##vcore.car (bruijn ##.paths.380 2 2))) ((bruijn ##.sprintf.226 4 13) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k217) (##string ##.string.2856) (bruijn ##.%x.1996 0 0) (bruijn ##.file.379 2 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2855.sym, VPOINTER_OTHER),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[13]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k217, self)))),
      VEncodePointer(&_V10_Dstring_D2856.sym, VPOINTER_OTHER),
      self->vars[0],
      statics->up->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2013 1 1) (basic-block 2 2 (##.%x.2031 ##.%r.2032) ((##vcore.car (bruijn ##.parse.385 6 1)) (##vcore.blob=? (##string ##.string.2857) (bruijn ##.%x.2031 0 0))) ((bruijn ##.%k.1042 1 0) (bruijn ##.%r.2032 0 1))) ((bruijn ##.%k.1042 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2857.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2019 1 1) (basic-block 2 2 (##.%x.2029 ##.%r.2030) ((##vcore.car (bruijn ##.expr.160.2016 3 0)) (##vcore.blob=? (##string ##.string.2858) (bruijn ##.%x.2029 0 0))) ((bruijn ##.%k.1038 1 0) (bruijn ##.%r.2030 0 1))) ((bruijn ##.%k.1038 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2858.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1033 0 0) (bruijn ##.%k.1024 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cdadr.234 19 21) (bruijn ##.%k.1034 0 0) (bruijn ##.parse.385 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 21)), 2,
      _var0,
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1028 0 0) (basic-block 2 2 (##.expr.161.2020 ##.%p.2021) ((##vcore.cdr (bruijn ##.expr.160.2016 3 0)) (##vcore.pair? (bruijn ##.expr.161.2020 0 0))) (if (bruijn ##.%p.2021 0 1) (basic-block 3 3 (##.ret.2022 ##.expr.162.2023 ##.%p.2024) ((##vcore.car (bruijn ##.expr.161.2020 1 0)) (##vcore.cdr (bruijn ##.expr.161.2020 1 0)) (##vcore.pair? (bruijn ##.expr.162.2023 0 1))) (if (bruijn ##.%p.2024 0 2) (basic-block 2 2 (##.%x.2025 ##.%p.2026) ((##vcore.cdr (bruijn ##.expr.162.2023 1 1)) (##vcore.null? (bruijn ##.%x.2025 0 0))) (if (bruijn ##.%p.2026 0 1) (basic-block 2 2 (##.%x.2027 ##.%p.2028) ((##vcore.cdr (bruijn ##.expr.159.2014 7 0)) (##vcore.null? (bruijn ##.%x.2027 0 0))) (if (bruijn ##.%p.2028 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k225) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda43) (bruijn ##.kk.156.386 12 1)) ((bruijn ##.%k.1024 10 0) #f))) ((bruijn ##.%k.1024 9 0) #f))) ((bruijn ##.%k.1024 8 0) #f))) ((bruijn ##.%k.1024 7 0) #f))) ((bruijn ##.%k.1024 6 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k225, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda43, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1025 0 0) (basic-block 2 2 (##.expr.159.2014 ##.%p.2015) ((##vcore.cdr (bruijn ##.parse.385 6 1)) (##vcore.pair? (bruijn ##.expr.159.2014 0 0))) (if (bruijn ##.%p.2015 0 1) (basic-block 2 2 (##.expr.160.2016 ##.%p.2017) ((##vcore.car (bruijn ##.expr.159.2014 1 0)) (##vcore.pair? (bruijn ##.expr.160.2016 0 0))) (if (bruijn ##.%p.2017 0 1) (basic-block 2 2 (##.%x.2018 ##.%p.2019) ((##vcore.car (bruijn ##.expr.160.2016 1 0)) (##vcore.string? (bruijn ##.%x.2018 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k223) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k224))) ((bruijn ##.%k.1024 4 0) #f))) ((bruijn ##.%k.1024 3 0) #f))) ((bruijn ##.%k.1024 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k223, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k224, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1998 1 0) (basic-block 2 2 (##.%x.2012 ##.%p.2013) ((##vcore.car (bruijn ##.parse.385 4 1)) (##vcore.string? (bruijn ##.%x.2012 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k221) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k222))) ((bruijn ##.%k.1024 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k221, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k222, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2001 1 1) (basic-block 2 2 (##.%x.2010 ##.%r.2011) ((##vcore.car (bruijn ##.parse.385 7 1)) (##vcore.blob=? (##string ##.string.2859) (bruijn ##.%x.2010 0 0))) ((bruijn ##.%k.1020 1 0) (bruijn ##.%r.2011 0 1))) ((bruijn ##.%k.1020 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2859.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1016 0 0) (bruijn ##.%k.1011 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2009) ((##vcore.cdr (bruijn ##.parse.385 11 1))) ((bruijn ##.%k.1017 1 0) (bruijn ##.%r.2009 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1012 0 0) (basic-block 2 2 (##.expr.164.2002 ##.%p.2003) ((##vcore.cdr (bruijn ##.parse.385 7 1)) (##vcore.pair? (bruijn ##.expr.164.2002 0 0))) (if (bruijn ##.%p.2003 0 1) (basic-block 3 3 (##.ret.2004 ##.expr.165.2005 ##.%p.2006) ((##vcore.car (bruijn ##.expr.164.2002 1 0)) (##vcore.cdr (bruijn ##.expr.164.2002 1 0)) (##vcore.pair? (bruijn ##.expr.165.2005 0 1))) (if (bruijn ##.%p.2006 0 2) (basic-block 2 2 (##.%x.2007 ##.%p.2008) ((##vcore.cdr (bruijn ##.expr.165.2005 1 1)) (##vcore.null? (bruijn ##.%x.2007 0 0))) (if (bruijn ##.%p.2008 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k230) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda44) (bruijn ##.kk.156.386 8 1)) ((bruijn ##.%k.1011 5 0) #f))) ((bruijn ##.%k.1011 4 0) #f))) ((bruijn ##.%k.1011 3 0) #f))) ((bruijn ##.%k.1011 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k230, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda44, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1999 1 0) (basic-block 2 2 (##.%x.2000 ##.%p.2001) ((##vcore.car (bruijn ##.parse.385 5 1)) (##vcore.string? (bruijn ##.%x.2000 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k228) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k229))) ((bruijn ##.%k.1011 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k228, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k229, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k232(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1009 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.compiler-error.227 9 14) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k232) (##string ##.string.2860) (bruijn ##.parse.385 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k232, self)))),
      VEncodePointer(&_V10_Dstring_D2860.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k231(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1008 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda45) (bruijn ##.kk.156.386 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda45, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k226(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1999) ((##vcore.pair? (bruijn ##.parse.385 3 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k227) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k231)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k227, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k231, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1998) ((##vcore.pair? (bruijn ##.parse.385 2 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k220) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k226)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k220, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0k226, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.1007 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda42))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384_V0lambda42, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1105 0 0) (bruijn ##.%k.1099 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1106 0 0) (bruijn ##.expr.382 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1100 0 0) (basic-block 2 2 (##.expr.141.2080 ##.%p.2081) ((##vcore.cdr (bruijn ##.expr.382 8 1)) (##vcore.pair? (bruijn ##.expr.141.2080 0 0))) (if (bruijn ##.%p.2081 0 1) (basic-block 3 3 (##.lang.2082 ##.expr.142.2083 ##.%p.2084) ((##vcore.car (bruijn ##.expr.141.2080 1 0)) (##vcore.cdr (bruijn ##.expr.141.2080 1 0)) (##vcore.pair? (bruijn ##.expr.142.2083 0 1))) (if (bruijn ##.%p.2084 0 2) (basic-block 3 3 (##.decl.2085 ##.expr.143.2086 ##.%p.2087) ((##vcore.car (bruijn ##.expr.142.2083 1 1)) (##vcore.cdr (bruijn ##.expr.142.2083 1 1)) (##vcore.pair? (bruijn ##.expr.143.2086 0 1))) (if (bruijn ##.%p.2087 0 2) (basic-block 3 3 (##.a.2088 ##.expr.144.2089 ##.%p.2090) ((##vcore.car (bruijn ##.expr.143.2086 1 1)) (##vcore.cdr (bruijn ##.expr.143.2086 1 1)) (##vcore.pair? (bruijn ##.expr.144.2089 0 1))) (if (bruijn ##.%p.2090 0 2) (basic-block 2 2 (##.b.2091 ##.d.2092) ((##vcore.car (bruijn ##.expr.144.2089 1 1)) (##vcore.cdr (bruijn ##.expr.144.2089 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k235) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47) (bruijn ##.kk.138.398 9 1))) ((bruijn ##.%k.1099 6 0) #f))) ((bruijn ##.%k.1099 5 0) #f))) ((bruijn ##.%k.1099 4 0) #f))) ((bruijn ##.%k.1099 3 0) #f))) ((bruijn ##.%k.1099 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k235, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2033 1 0) (basic-block 1 1 (##.%x.2079) ((##vcore.car (bruijn ##.expr.382 6 1))) ((bruijn ##.equal?.214 8 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k234) '##foreign.function (bruijn ##.%x.2079 0 0))) ((bruijn ##.%k.1099 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k234, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1053 0 0) (bruijn ##.%k.1048 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.2044 1 0) ((bruijn ##.compiler-error.227 17 14) (bruijn ##.%k.1094 0 0) (##string ##.string.2844) (bruijn ##.lang.2038 5 0)) ((bruijn ##.%k.1094 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2844.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-extern) #t (bruijn ##.unwrap-extern.267 23 15) (bruijn ##.%k.1085 3 0) (bruijn ##.%x.1086 1 0) (bruijn ##.%x.1087 0 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.220 23 7) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k248) (bruijn ##.parse.416 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k248, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-function) #t (bruijn ##.unwrap-function.269 23 17) (bruijn ##.%k.1085 3 0) (bruijn ##.%x.1089 1 0) (bruijn ##.%x.1090 0 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.220 23 7) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k250) (bruijn ##.parse.416 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k250, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1084 1 0) (basic-block 1 1 (##.%x.2077) ((##vcore.car (bruijn ##.parse.416 4 0))) (##qualified-call (vanity compiler ffi reduce-type) #t (bruijn ##.reduce-type.271 21 19) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k247) (bruijn ##.%x.2077 0 0) '() #t)) (basic-block 1 1 (##.%x.2078) ((##vcore.car (bruijn ##.parse.416 4 0))) (##qualified-call (vanity compiler ffi reduce-type) #t (bruijn ##.reduce-type.271 21 19) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k249) (bruijn ##.%x.2078 0 0) '() #t)))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k247, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k249, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1077 0 0) (bruijn ##.%k.1073 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.2072 ##.%x.2073 ##.%x.2074 ##.%x.2075 ##.%r.2076) ((##vcore.cons (bruijn ##.name.2067 3 0) (bruijn ##.args.2071 2 1)) (##vcore.cons (bruijn ##.ret.2070 2 0) (bruijn ##.%x.2072 0 0)) (##vcore.cons (bruijn ##.decl.2041 18 0) (bruijn ##.%x.2073 0 1)) (##vcore.cons '(##string ##.string.2847) (bruijn ##.%x.2074 0 2)) (##vcore.cons '##foreign.function (bruijn ##.%x.2075 0 3))) ((bruijn ##.%k.1078 1 0) (bruijn ##.%r.2076 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 18-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2847.sym, VPOINTER_OTHER),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10foreign_Dfunction,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1074 0 0) (basic-block 2 2 (##.expr.151.2065 ##.%p.2066) ((##vcore.cdr (bruijn ##.ff.417 6 0)) (##vcore.pair? (bruijn ##.expr.151.2065 0 0))) (if (bruijn ##.%p.2066 0 1) (basic-block 3 3 (##.name.2067 ##.expr.152.2068 ##.%p.2069) ((##vcore.car (bruijn ##.expr.151.2065 1 0)) (##vcore.cdr (bruijn ##.expr.151.2065 1 0)) (##vcore.pair? (bruijn ##.expr.152.2068 0 1))) (if (bruijn ##.%p.2069 0 2) (basic-block 2 2 (##.ret.2070 ##.args.2071) ((##vcore.car (bruijn ##.expr.152.2068 1 1)) (##vcore.cdr (bruijn ##.expr.152.2068 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k254) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda50) (bruijn ##.kk.148.418 7 1))) ((bruijn ##.%k.1073 4 0) #f))) ((bruijn ##.%k.1073 3 0) #f))) ((bruijn ##.%k.1073 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k254, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda50, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2046 1 0) (basic-block 1 1 (##.%x.2064) ((##vcore.car (bruijn ##.ff.417 4 0))) ((bruijn ##.equal?.214 25 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k253) 'function (bruijn ##.%x.2064 0 0))) ((bruijn ##.%k.1073 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k253, self)))),
      _V0function,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1062 0 0) (bruijn ##.%k.1057 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.2057 ##.%x.2058 ##.%x.2059 ##.%x.2060 ##.%x.2061 ##.%x.2062 ##.%r.2063) ((##vcore.cons (bruijn ##.type.2054 2 0) '()) (##vcore.cons 'extern (bruijn ##.%x.2057 0 0)) (##vcore.cons (bruijn ##.name.2051 3 0) '()) (##vcore.cons (bruijn ##.%x.2058 0 1) (bruijn ##.%x.2059 0 2)) (##vcore.cons (bruijn ##.decl.2041 19 0) (bruijn ##.%x.2060 0 3)) (##vcore.cons '(##string ##.string.2847) (bruijn ##.%x.2061 0 4)) (##vcore.cons '##foreign.function (bruijn ##.%x.2062 0 5))) ((bruijn ##.%k.1063 1 0) (bruijn ##.%r.2063 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0extern,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 19-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2847.sym, VPOINTER_OTHER),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V10foreign_Dfunction,
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1058 0 0) (basic-block 2 2 (##.expr.154.2049 ##.%p.2050) ((##vcore.cdr (bruijn ##.ff.417 7 0)) (##vcore.pair? (bruijn ##.expr.154.2049 0 0))) (if (bruijn ##.%p.2050 0 1) (basic-block 3 3 (##.name.2051 ##.expr.155.2052 ##.%p.2053) ((##vcore.car (bruijn ##.expr.154.2049 1 0)) (##vcore.cdr (bruijn ##.expr.154.2049 1 0)) (##vcore.pair? (bruijn ##.expr.155.2052 0 1))) (if (bruijn ##.%p.2053 0 2) (basic-block 3 3 (##.type.2054 ##.%x.2055 ##.%p.2056) ((##vcore.car (bruijn ##.expr.155.2052 1 1)) (##vcore.cdr (bruijn ##.expr.155.2052 1 1)) (##vcore.null? (bruijn ##.%x.2055 0 1))) (if (bruijn ##.%p.2056 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k258) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda51) (bruijn ##.kk.148.418 8 1)) ((bruijn ##.%k.1057 5 0) #f))) ((bruijn ##.%k.1057 4 0) #f))) ((bruijn ##.%k.1057 3 0) #f))) ((bruijn ##.%k.1057 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k258, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda51, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2047 1 0) (basic-block 1 1 (##.%x.2048) ((##vcore.car (bruijn ##.ff.417 5 0))) ((bruijn ##.equal?.214 26 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k257) 'extern-variable (bruijn ##.%x.2048 0 0))) ((bruijn ##.%k.1057 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k257, self)))),
      _V0extern__variable,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k259(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.213 24 0) (bruijn ##.%k.1055 2 0) (##string ##.string.2713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2713.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k255(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2047) ((##vcore.pair? (bruijn ##.ff.417 3 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k256) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k259)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k256, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k259, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2046) ((##vcore.pair? (bruijn ##.ff.417 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k252) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k255)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k252, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k255, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1054 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda49))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda49, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k246) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k251))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k246, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k251, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2045) ((##vcore.car (bruijn ##.parse.416 1 0))) ((bruijn ##.member.233 19 20) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k245) (##string ##.string.2861) (bruijn ##.%x.2045 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k245, self)))),
      VEncodePointer(&_V10_Dstring_D2861.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi validate-foreign-function ##.is-one-decl.384) #f (bruijn ##.is-one-decl.384 13 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k244) (bruijn ##.raw-parse.415 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k244, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k242(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.parse-decl-c.383 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k243) (bruijn ##.decl.2041 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k243, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2044) ((##vcore.not (bruijn ##.%x.1095 1 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k241) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k242)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k241, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k242, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.214 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k240) (bruijn ##.lang.2038 2 0) (##string ##.string.2847))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k240, self)))),
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2847.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1049 0 0) (basic-block 2 2 (##.expr.146.2036 ##.%p.2037) ((##vcore.cdr (bruijn ##.expr.382 9 1)) (##vcore.pair? (bruijn ##.expr.146.2036 0 0))) (if (bruijn ##.%p.2037 0 1) (basic-block 3 3 (##.lang.2038 ##.expr.147.2039 ##.%p.2040) ((##vcore.car (bruijn ##.expr.146.2036 1 0)) (##vcore.cdr (bruijn ##.expr.146.2036 1 0)) (##vcore.pair? (bruijn ##.expr.147.2039 0 1))) (if (bruijn ##.%p.2040 0 2) (basic-block 3 3 (##.decl.2041 ##.%x.2042 ##.%p.2043) ((##vcore.car (bruijn ##.expr.147.2039 1 1)) (##vcore.cdr (bruijn ##.expr.147.2039 1 1)) (##vcore.null? (bruijn ##.%x.2042 0 1))) (if (bruijn ##.%p.2043 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k239) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda48) (bruijn ##.kk.138.398 8 1)) ((bruijn ##.%k.1048 5 0) #f))) ((bruijn ##.%k.1048 4 0) #f))) ((bruijn ##.%k.1048 3 0) #f))) ((bruijn ##.%k.1048 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k239, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda48, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2034 1 0) (basic-block 1 1 (##.%x.2035) ((##vcore.car (bruijn ##.expr.382 7 1))) ((bruijn ##.equal?.214 9 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k238) '##foreign.function (bruijn ##.%x.2035 0 0))) ((bruijn ##.%k.1048 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k238, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.227 8 14) (bruijn ##.%k.1046 0 0) (##string ##.string.2862) (bruijn ##.expr.382 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2862.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k260(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1045 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda52) (bruijn ##.kk.138.398 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda52, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k236(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2034) ((##vcore.pair? (bruijn ##.expr.382 5 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k237) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k260)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k237, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k260, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2033) ((##vcore.pair? (bruijn ##.expr.382 4 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k233) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k236)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k233, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k236, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.1006 1 0) (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384")) (##vcore.call/cc (bruijn ##.%k.1005 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D384, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46, self)))));
    }
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219) (##string ##.string.2863))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219, self)))),
      VEncodePointer(&_V10_Dstring_D2863.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2098) ((##vcore.not (bruijn ##.%x.1115 1 0))) (if (bruijn ##.%p.2098 0 0) (basic-block 1 1 (##.%x.2099) ((##vcore.car (bruijn ##.table.436 7 3))) ((bruijn ##.err-proc.437 7 4) (bruijn ##.%k.1109 7 0) (bruijn ##.%x.2099 0 0))) ((bruijn ##.%k.1109 6 0) #t)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 2,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(true));
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2094 ##.%p.2095) ((##vcore.eq? (bruijn ##.x.434 3 1) (bruijn ##.%x.1118 1 0)) (##vcore.not (bruijn ##.%x.2094 0 0))) (if (bruijn ##.%p.2095 0 1) (basic-block 1 1 (##.%x.2096) ((##vcore.cdr (bruijn ##.table.436 4 3))) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.433) #f (bruijn ##.duplicate-mismatch.433 5 0) (bruijn ##.%k.1109 4 0) (bruijn ##.x.434 4 1) (bruijn ##.entry.435 4 2) (bruijn ##.%x.2096 0 0) (bruijn ##.err-proc.437 4 4))) (basic-block 1 1 (##.%x.2097) ((##vcore.car (bruijn ##.table.436 4 3))) ((bruijn ##.equal?.214 8 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k262) (bruijn ##.entry.435 4 2) (bruijn ##.%x.2097 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      self->vars[0];
    VWORD _arg4 = 
      statics->up->up->up->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k262, self)))),
      statics->up->up->up->vars[2],
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2093) ((##vcore.null? (bruijn ##.table.436 1 3))) (if (bruijn ##.%p.2093 0 0) ((bruijn ##.%k.1109 1 0) #f) ((bruijn ##.cadar.235 5 22) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k261) (bruijn ##.table.436 1 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433_V0k261, self)))),
      statics->vars[3]);
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1189 0 0) (bruijn ##.%k.1185 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 9 9 (##.%x.2173 ##.%x.2174 ##.%x.2175 ##.%x.2176 ##.%x.2177 ##.%x.2178 ##.%x.2179 ##.%x.2180 ##.%x.2181) ((##vcore.cons (bruijn ##.%x.1203 1 0) (bruijn ##.args.2168 6 1)) (##vcore.cons (bruijn ##.ret.2167 6 0) (bruijn ##.%x.2173 0 0)) (##vcore.cons '(##string ##.string.2826) (bruijn ##.%x.2174 0 1)) (##vcore.cons '(##string ##.string.2847) (bruijn ##.%x.2175 0 2)) (##vcore.cons '##foreign.function (bruijn ##.%x.2176 0 3)) (##vcore.cons (bruijn ##.%x.2177 0 4) '()) (##vcore.cons (bruijn ##.name.2164 7 0) (bruijn ##.%x.2178 0 5)) (##vcore.cons 'define (bruijn ##.%x.2179 0 6)) (##vcore.cons (bruijn ##.%x.2180 0 7) (bruijn ##.acc.432 16 2))) (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.264 17 12) (bruijn ##.%k.1190 5 0) (bruijn ##.%x.2172 2 0) (bruijn ##.%x.2181 0 8)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2826.sym, VPOINTER_OTHER),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2847.sym, VPOINTER_OTHER),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10foreign_Dfunction,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0define,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VGetArg(statics, 16-1, 2));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[8];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1191 0 0) (basic-block 1 1 (##.%x.2171) ((##vcore.cdr (bruijn ##.table.431 14 1))) (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.264 15 12) (bruijn ##.%k.1190 3 0) (bruijn ##.%x.2171 0 0) (bruijn ##.acc.432 14 2))) (basic-block 1 1 (##.%x.2172) ((##vcore.cdr (bruijn ##.table.431 14 1))) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k267) (bruijn ##.name.2164 5 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k267, self)))),
      VGetArg(statics, 5-1, 0));
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2182) ((##vcore.car (bruijn ##.table.431 14 1))) ((bruijn ##.compiler-error.227 16 14) (bruijn ##.%k.1206 1 0) (##string ##.string.2864) (bruijn ##.%x.2182 0 0) (bruijn ##.conflict.446 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 14)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2864.sym, VPOINTER_OTHER),
      self->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2169 ##.%x.2170) ((##vcore.car (bruijn ##.table.431 12 1)) (##vcore.cdr (bruijn ##.table.431 12 1))) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.433) #f (bruijn ##.duplicate-mismatch.433 11 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k266) (bruijn ##.name.2164 3 0) (bruijn ##.%x.2169 0 0) (bruijn ##.%x.2170 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k266, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      self->vars[1];
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1186 0 0) (basic-block 2 2 (##.expr.127.2162 ##.%p.2163) ((##vcore.cdr (bruijn ##.input.125.2101 4 0)) (##vcore.pair? (bruijn ##.expr.127.2162 0 0))) (if (bruijn ##.%p.2163 0 1) (basic-block 3 3 (##.name.2164 ##.expr.128.2165 ##.%p.2166) ((##vcore.car (bruijn ##.expr.127.2162 1 0)) (##vcore.cdr (bruijn ##.expr.127.2162 1 0)) (##vcore.pair? (bruijn ##.expr.128.2165 0 1))) (if (bruijn ##.%p.2166 0 2) (basic-block 2 2 (##.ret.2167 ##.args.2168) ((##vcore.car (bruijn ##.expr.128.2165 1 1)) (##vcore.cdr (bruijn ##.expr.128.2165 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k265) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54) (bruijn ##.kk.124.438 7 1))) ((bruijn ##.%k.1185 4 0) #f))) ((bruijn ##.%k.1185 3 0) #f))) ((bruijn ##.%k.1185 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k265, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2102 1 1) (basic-block 1 1 (##.%x.2161) ((##vcore.car (bruijn ##.input.125.2101 2 0))) ((bruijn ##.equal?.214 8 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k264) 'function (bruijn ##.%x.2161 0 0))) ((bruijn ##.%k.1185 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k264, self)))),
      _V0function,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1162 0 0) (bruijn ##.%k.1157 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1164 0 0) (basic-block 1 1 (##.%x.2147) ((##vcore.cdr (bruijn ##.table.431 15 1))) (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.264 16 12) (bruijn ##.%k.1163 3 0) (bruijn ##.%x.2147 0 0) (bruijn ##.acc.432 15 2))) (basic-block 12 12 (##.%x.2148 ##.%x.2149 ##.%x.2150 ##.%x.2151 ##.%x.2152 ##.%x.2153 ##.%x.2154 ##.%x.2155 ##.%x.2156 ##.%x.2157 ##.%x.2158 ##.%x.2159) ((##vcore.cdr (bruijn ##.table.431 15 1)) (##vcore.cons (bruijn ##.type.2142 4 0) '()) (##vcore.cons 'extern (bruijn ##.%x.2149 0 1)) (##vcore.cons (bruijn ##.name.2139 5 0) '()) (##vcore.cons (bruijn ##.%x.2150 0 2) (bruijn ##.%x.2151 0 3)) (##vcore.cons '(##string ##.string.2826) (bruijn ##.%x.2152 0 4)) (##vcore.cons '(##string ##.string.2847) (bruijn ##.%x.2153 0 5)) (##vcore.cons '##foreign.function (bruijn ##.%x.2154 0 6)) (##vcore.cons (bruijn ##.%x.2155 0 7) '()) (##vcore.cons (bruijn ##.name.2139 5 0) (bruijn ##.%x.2156 0 8)) (##vcore.cons 'define (bruijn ##.%x.2157 0 9)) (##vcore.cons (bruijn ##.%x.2158 0 10) (bruijn ##.acc.432 15 2))) (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.264 16 12) (bruijn ##.%k.1163 3 0) (bruijn ##.%x.2148 0 0) (bruijn ##.%x.2159 0 11))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[12]; } container;
    self = &container.self;
    VInitEnv(self, 12, 12, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0extern,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2826.sym, VPOINTER_OTHER),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2847.sym, VPOINTER_OTHER),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10foreign_Dfunction,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0define,
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      VGetArg(statics, 15-1, 2));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[11];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2160) ((##vcore.car (bruijn ##.table.431 15 1))) ((bruijn ##.compiler-error.227 17 14) (bruijn ##.%k.1180 1 0) (##string ##.string.2864) (bruijn ##.%x.2160 0 0) (bruijn ##.conflict.452 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 14)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2864.sym, VPOINTER_OTHER),
      self->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2145 ##.%x.2146) ((##vcore.car (bruijn ##.table.431 13 1)) (##vcore.cdr (bruijn ##.table.431 13 1))) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.433) #f (bruijn ##.duplicate-mismatch.433 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k272) (bruijn ##.name.2139 3 0) (bruijn ##.%x.2145 0 0) (bruijn ##.%x.2146 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda57)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k272, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      self->vars[1];
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda57, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1158 0 0) (basic-block 2 2 (##.expr.130.2137 ##.%p.2138) ((##vcore.cdr (bruijn ##.input.125.2101 5 0)) (##vcore.pair? (bruijn ##.expr.130.2137 0 0))) (if (bruijn ##.%p.2138 0 1) (basic-block 3 3 (##.name.2139 ##.expr.131.2140 ##.%p.2141) ((##vcore.car (bruijn ##.expr.130.2137 1 0)) (##vcore.cdr (bruijn ##.expr.130.2137 1 0)) (##vcore.pair? (bruijn ##.expr.131.2140 0 1))) (if (bruijn ##.%p.2141 0 2) (basic-block 3 3 (##.type.2142 ##.%x.2143 ##.%p.2144) ((##vcore.car (bruijn ##.expr.131.2140 1 1)) (##vcore.cdr (bruijn ##.expr.131.2140 1 1)) (##vcore.null? (bruijn ##.%x.2143 0 1))) (if (bruijn ##.%p.2144 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k271) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda56) (bruijn ##.kk.124.438 8 1)) ((bruijn ##.%k.1157 5 0) #f))) ((bruijn ##.%k.1157 4 0) #f))) ((bruijn ##.%k.1157 3 0) #f))) ((bruijn ##.%k.1157 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k271, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda56, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2103 1 0) (basic-block 1 1 (##.%x.2136) ((##vcore.car (bruijn ##.input.125.2101 3 0))) ((bruijn ##.equal?.214 9 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k270) 'extern-variable (bruijn ##.%x.2136 0 0))) ((bruijn ##.%k.1157 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k270, self)))),
      _V0extern__variable,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1144 0 0) (bruijn ##.%k.1139 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k277(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 5 5 (##.%x.2130 ##.%x.2131 ##.%x.2132 ##.%x.2133 ##.%x.2134) ((##vcore.cdr (bruijn ##.table.431 15 1)) (##vcore.cons (bruijn ##.val.2126 3 0) '()) (##vcore.cons (bruijn ##.name.2123 4 0) (bruijn ##.%x.2131 0 1)) (##vcore.cons 'define-constant (bruijn ##.%x.2132 0 2)) (##vcore.cons (bruijn ##.%x.2133 0 3) (bruijn ##.acc.432 15 2))) (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.264 16 12) (bruijn ##.%k.1145 2 0) (bruijn ##.%x.2130 0 0) (bruijn ##.%x.2134 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0define__constant,
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VGetArg(statics, 15-1, 2));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2135) ((##vcore.car (bruijn ##.table.431 16 1))) ((bruijn ##.compiler-error.227 18 14) (bruijn ##.%k.1152 1 0) (##string ##.string.2864) (bruijn ##.%x.2135 0 0) (bruijn ##.conflict.458 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 14)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2864.sym, VPOINTER_OTHER),
      self->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2129) ((##vcore.cdr (bruijn ##.table.431 14 1))) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.433) #f (bruijn ##.duplicate-mismatch.433 13 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k277) (bruijn ##.name.2123 3 0) #f (bruijn ##.%x.2129 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda59)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k277, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      self->vars[0];
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda59, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1140 0 0) (basic-block 2 2 (##.expr.133.2121 ##.%p.2122) ((##vcore.cdr (bruijn ##.input.125.2101 6 0)) (##vcore.pair? (bruijn ##.expr.133.2121 0 0))) (if (bruijn ##.%p.2122 0 1) (basic-block 3 3 (##.name.2123 ##.expr.134.2124 ##.%p.2125) ((##vcore.car (bruijn ##.expr.133.2121 1 0)) (##vcore.cdr (bruijn ##.expr.133.2121 1 0)) (##vcore.pair? (bruijn ##.expr.134.2124 0 1))) (if (bruijn ##.%p.2125 0 2) (basic-block 3 3 (##.val.2126 ##.%x.2127 ##.%p.2128) ((##vcore.car (bruijn ##.expr.134.2124 1 1)) (##vcore.cdr (bruijn ##.expr.134.2124 1 1)) (##vcore.null? (bruijn ##.%x.2127 0 1))) (if (bruijn ##.%p.2128 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k276) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda58) (bruijn ##.kk.124.438 9 1)) ((bruijn ##.%k.1139 5 0) #f))) ((bruijn ##.%k.1139 4 0) #f))) ((bruijn ##.%k.1139 3 0) #f))) ((bruijn ##.%k.1139 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k276, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda58, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2104 1 0) (basic-block 1 1 (##.%x.2120) ((##vcore.car (bruijn ##.input.125.2101 4 0))) ((bruijn ##.equal?.214 10 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k275) 'enum (bruijn ##.%x.2120 0 0))) ((bruijn ##.%k.1139 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k275, self)))),
      _V0enum,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1129 0 0) (bruijn ##.%k.1124 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k282(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.2118) ((##vcore.cdr (bruijn ##.table.431 16 1))) (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.264 17 12) (bruijn ##.%k.1130 2 0) (bruijn ##.%x.2118 0 0) (bruijn ##.acc.432 16 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2119) ((##vcore.car (bruijn ##.table.431 17 1))) ((bruijn ##.compiler-error.227 19 14) (bruijn ##.%k.1134 1 0) (##string ##.string.2864) (bruijn ##.%x.2119 0 0) (bruijn ##.conflict.464 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 14)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2864.sym, VPOINTER_OTHER),
      self->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2116 ##.%x.2117) ((##vcore.car (bruijn ##.table.431 15 1)) (##vcore.cdr (bruijn ##.table.431 15 1))) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.433) #f (bruijn ##.duplicate-mismatch.433 14 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k282) (bruijn ##.name.2110 3 0) (bruijn ##.%x.2116 0 0) (bruijn ##.%x.2117 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda61)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k282, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      self->vars[1];
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda61, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1125 0 0) (basic-block 2 2 (##.expr.136.2108 ##.%p.2109) ((##vcore.cdr (bruijn ##.input.125.2101 7 0)) (##vcore.pair? (bruijn ##.expr.136.2108 0 0))) (if (bruijn ##.%p.2109 0 1) (basic-block 3 3 (##.name.2110 ##.expr.137.2111 ##.%p.2112) ((##vcore.car (bruijn ##.expr.136.2108 1 0)) (##vcore.cdr (bruijn ##.expr.136.2108 1 0)) (##vcore.pair? (bruijn ##.expr.137.2111 0 1))) (if (bruijn ##.%p.2112 0 2) (basic-block 3 3 (##.val.2113 ##.%x.2114 ##.%p.2115) ((##vcore.car (bruijn ##.expr.137.2111 1 1)) (##vcore.cdr (bruijn ##.expr.137.2111 1 1)) (##vcore.null? (bruijn ##.%x.2114 0 1))) (if (bruijn ##.%p.2115 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k281) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda60) (bruijn ##.kk.124.438 10 1)) ((bruijn ##.%k.1124 5 0) #f))) ((bruijn ##.%k.1124 4 0) #f))) ((bruijn ##.%k.1124 3 0) #f))) ((bruijn ##.%k.1124 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k281, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda60, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2105 1 0) (basic-block 1 1 (##.%x.2107) ((##vcore.car (bruijn ##.input.125.2101 5 0))) ((bruijn ##.equal?.214 11 1) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k280) 'typedef (bruijn ##.%x.2107 0 0))) ((bruijn ##.%k.1124 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k280, self)))),
      _V0typedef,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2106) ((##vcore.car (bruijn ##.table.431 9 1))) ((bruijn ##.compiler-error.227 11 14) (bruijn ##.%k.1121 1 0) (##string ##.string.2865) (bruijn ##.%x.2106 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 14)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2865.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k283(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1120 4 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda62) (bruijn ##.kk.124.438 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda62, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k278(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2105) ((##vcore.pair? (bruijn ##.input.125.2101 3 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k279) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k283)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k279, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k283, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k273(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2104) ((##vcore.pair? (bruijn ##.input.125.2101 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k274) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k278)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k274, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k278, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k268(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2103) ((##vcore.pair? (bruijn ##.input.125.2101 1 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k269) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k273)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k269, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k273, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.125.2101 ##.%p.2102) ((##vcore.car (bruijn ##.table.431 4 1)) (##vcore.pair? (bruijn ##.input.125.2101 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k263) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k268)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k263, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k268, self)))));
    }
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433")) (basic-block 1 1 (##.%p.2100) ((##vcore.null? (bruijn ##.table.431 2 1))) (if (bruijn ##.%p.2100 0 0) ((bruijn ##.%k.1108 2 0) (bruijn ##.acc.432 2 2)) (##vcore.call/cc (bruijn ##.%k.1108 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D433, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53, self)))));
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
  // (if (bruijn ##.%p.2210 1 1) (basic-block 2 2 (##.%x.2213 ##.%r.2214) ((##vcore.car (bruijn ##.parse.465 6 1)) (##vcore.blob=? (##string ##.string.2857) (bruijn ##.%x.2213 0 0))) ((bruijn ##.%k.1250 1 0) (bruijn ##.%r.2214 0 1))) ((bruijn ##.%k.1250 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2857.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1246 0 0) (bruijn ##.%k.1243 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1247 0 0) (bruijn ##.table.466 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 2));
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
  // (if (bruijn ##.%p.1244 0 0) (basic-block 2 2 (##.%x.2211 ##.%p.2212) ((##vcore.cdr (bruijn ##.parse.465 6 1)) (##vcore.null? (bruijn ##.%x.2211 0 0))) (if (bruijn ##.%p.2212 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k287) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda64) (bruijn ##.kk.117.467 5 1)) ((bruijn ##.%k.1243 3 0) #f))) ((bruijn ##.%k.1243 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k287, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda64, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
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
  // (if (bruijn ##.%p.2183 1 0) (basic-block 2 2 (##.%x.2209 ##.%p.2210) ((##vcore.car (bruijn ##.parse.465 4 1)) (##vcore.string? (bruijn ##.%x.2209 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k285) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k286))) ((bruijn ##.%k.1243 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k285, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k286, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2186 1 1) (basic-block 2 2 (##.%x.2207 ##.%r.2208) ((##vcore.car (bruijn ##.parse.465 7 1)) (##vcore.blob=? (##string ##.string.2857) (bruijn ##.%x.2207 0 0))) ((bruijn ##.%k.1239 1 0) (bruijn ##.%r.2208 0 1))) ((bruijn ##.%k.1239 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2857.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2192 1 1) (basic-block 2 2 (##.%x.2205 ##.%r.2206) ((##vcore.car (bruijn ##.expr.122.2189 3 0)) (##vcore.blob=? (##string ##.string.2858) (bruijn ##.%x.2205 0 0))) ((bruijn ##.%k.1235 1 0) (bruijn ##.%r.2206 0 1))) ((bruijn ##.%k.1235 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2858.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1218 0 0) (bruijn ##.%k.1212 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.typedef?.1220 8 0) (basic-block 1 1 (##.%x.2202) ((##vcore.car (bruijn ##.mydecls.482 4 1))) (##qualified-call (vanity compiler ffi unwrap-typedef) #t (bruijn ##.unwrap-typedef.270 24 18) (bruijn ##.%k.1230 1 0) (bruijn ##.ret.1223 6 0) (bruijn ##.%x.2202 0 0) (bruijn ##.table.483 4 2))) (if (bruijn ##.extern?.1221 7 0) (basic-block 1 1 (##.%x.2203) ((##vcore.car (bruijn ##.mydecls.482 4 1))) (##qualified-call (vanity compiler ffi unwrap-extern) #t (bruijn ##.unwrap-extern.267 24 15) (bruijn ##.%k.1230 1 0) (bruijn ##.ret.1223 6 0) (bruijn ##.%x.2203 0 0) (bruijn ##.table.483 4 2))) (basic-block 1 1 (##.%x.2204) ((##vcore.car (bruijn ##.mydecls.482 4 1))) (##qualified-call (vanity compiler ffi unwrap-function) #t (bruijn ##.unwrap-function.269 24 17) (bruijn ##.%k.1230 1 0) (bruijn ##.ret.1223 6 0) (bruijn ##.%x.2204 0 0) (bruijn ##.table.483 4 2)))))
if(VDecodeBool(
VGetArg(statics, 8-1, 0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
if(VDecodeBool(
VGetArg(statics, 7-1, 0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2201) ((##vcore.cons (bruijn ##.%x.1229 1 0) (bruijn ##.table.483 4 2))) (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.481) #f (bruijn ##.loop.481 5 0) (bruijn ##.%k.1224 4 0) (bruijn ##.%x.2200 2 0) (bruijn ##.%x.2201 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2198) ((##vcore.null? (bruijn ##.mydecls.482 1 1))) (if (bruijn ##.%p.2198 0 0) (basic-block 1 1 (##.%x.2199) ((##vcore.cons '(##string ##.string.2857) (bruijn ##.toprest.2197 9 2))) (##qualified-call (vanity compiler ffi unwrap-declares) #t (bruijn ##.unwrap-declares.265 22 13) (bruijn ##.%k.1224 2 0) (bruijn ##.%x.2199 0 0) (bruijn ##.table.483 2 2))) (basic-block 1 1 (##.%x.2200) ((##vcore.cdr (bruijn ##.mydecls.482 2 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k299) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k300)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2857.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 2));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k299, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481_V0k300, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481")) (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.481) #f (bruijn ##.loop.481 0 0) (bruijn ##.%k.1219 5 0) (bruijn ##.decls.2196 6 1) (bruijn ##.table.1222 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D481(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) #t (bruijn ##.reduce-type.271 17 19) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k298) (bruijn ##.ret.2195 4 0) (bruijn ##.table.466 16 2) #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k298, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi unwrap-enums) #t (bruijn ##.unwrap-enums.266 16 14) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k297) (bruijn ##.ret.2195 3 0) (bruijn ##.table.466 15 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k297, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.member.233 16 20) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k296) (##string ##.string.2861) (bruijn ##.ret.2195 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k296, self)))),
      VEncodePointer(&_V10_Dstring_D2861.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.member.233 15 20) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k295) (##string ##.string.2866) (bruijn ##.ret.2195 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k295, self)))),
      VEncodePointer(&_V10_Dstring_D2866.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1216 0 0) (basic-block 2 2 (##.expr.123.2193 ##.%p.2194) ((##vcore.cdr (bruijn ##.expr.122.2189 3 0)) (##vcore.pair? (bruijn ##.expr.123.2193 0 0))) (if (bruijn ##.%p.2194 0 1) (basic-block 3 3 (##.ret.2195 ##.decls.2196 ##.toprest.2197) ((##vcore.car (bruijn ##.expr.123.2193 1 0)) (##vcore.cdr (bruijn ##.expr.123.2193 1 0)) (##vcore.cdr (bruijn ##.expr.121.2187 5 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k294) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda65) (bruijn ##.kk.117.467 11 1))) ((bruijn ##.%k.1212 7 0) #f))) ((bruijn ##.%k.1212 6 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k294, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda65, self)))),
      VGetArg(statics, 11-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1213 0 0) (basic-block 2 2 (##.expr.121.2187 ##.%p.2188) ((##vcore.cdr (bruijn ##.parse.465 7 1)) (##vcore.pair? (bruijn ##.expr.121.2187 0 0))) (if (bruijn ##.%p.2188 0 1) (basic-block 2 2 (##.expr.122.2189 ##.%p.2190) ((##vcore.car (bruijn ##.expr.121.2187 1 0)) (##vcore.pair? (bruijn ##.expr.122.2189 0 0))) (if (bruijn ##.%p.2190 0 1) (basic-block 2 2 (##.%x.2191 ##.%p.2192) ((##vcore.car (bruijn ##.expr.122.2189 1 0)) (##vcore.string? (bruijn ##.%x.2191 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k292) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k293))) ((bruijn ##.%k.1212 4 0) #f))) ((bruijn ##.%k.1212 3 0) #f))) ((bruijn ##.%k.1212 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k292, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k293, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2184 1 0) (basic-block 2 2 (##.%x.2185 ##.%p.2186) ((##vcore.car (bruijn ##.parse.465 5 1)) (##vcore.string? (bruijn ##.%x.2185 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k290) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k291))) ((bruijn ##.%k.1212 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k290, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k291, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k301(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.213 5 0) (bruijn ##.%k.1210 2 0) (##string ##.string.2713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2713.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k288(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2184) ((##vcore.pair? (bruijn ##.parse.465 3 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k301)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k301, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2183) ((##vcore.pair? (bruijn ##.parse.465 2 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k288)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k288, self)))));
    }
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
  // (##vcore.call/cc (bruijn ##.%k.1209 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda63))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda63, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1264 1 0) ((bruijn ##.cadar.235 7 22) (bruijn ##.%k.1265 0 0) (bruijn ##.enums.487 3 1)) ((bruijn ##.%k.1265 0 0) (bruijn ##.val.488 3 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 2,
      _var0,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2218 ##.%x.2219 ##.%x.2220 ##.%x.2221) ((##vcore.cons (bruijn ##.val.490 4 0) '()) (##vcore.cons (bruijn ##.%x.1261 1 0) (bruijn ##.%x.2218 0 0)) (##vcore.cons 'enum (bruijn ##.%x.2219 0 1)) (##vcore.cons (bruijn ##.%x.2220 0 2) (bruijn ##.table.489 7 3))) (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.486) #f (bruijn ##.unwrap-enums-iter.486 8 0) (bruijn ##.%k.1254 7 0) (bruijn ##.%x.2216 3 0) (bruijn ##.%x.2217 3 1) (bruijn ##.%x.2221 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0enum,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VGetArg(statics, 7-1, 3));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k306) (bruijn ##.%x.1263 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k306, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2216 ##.%x.2217) ((##vcore.cdr (bruijn ##.enums.487 4 1)) (##vcore.+ (bruijn ##.val.490 1 0) 1)) ((bruijn ##.caar.237 8 24) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k305) (bruijn ##.enums.487 4 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k305, self)))),
      statics->up->up->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k303) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k304))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k303, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k304, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2215) ((##vcore.null? (bruijn ##.enums.487 1 1))) (if (bruijn ##.%p.2215 0 0) ((bruijn ##.%k.1254 1 0) (bruijn ##.table.489 1 3)) ((bruijn ##.cadar.235 5 22) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k302) (bruijn ##.enums.487 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486_V0k302, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.equal?.214 9 1) (bruijn ##.%k.1271 1 0) (bruijn ##.%x.1272 0 0) (##string ##.string.2867))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D2867.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2224 1 1) ((bruijn ##.caar.237 8 24) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k308) (bruijn ##.ret.492 3 1)) ((bruijn ##.%k.1271 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k308, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.enums.493 0 0) (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.486) #f (bruijn ##.unwrap-enums-iter.486 6 0) (bruijn ##.%k.1266 4 0) (bruijn ##.enums.493 0 0) 0 (bruijn ##.table.485 7 2)) ((bruijn ##.%k.1266 4 0) (bruijn ##.table.485 7 2)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VGetArg(statics, 7-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1268 0 0) ((bruijn ##.caddar.236 8 23) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k310) (bruijn ##.ret.492 3 1)) (basic-block 1 1 (##.%x.2225) ((##vcore.cdr (bruijn ##.ret.492 4 1))) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.491) #f (bruijn ##.loop.491 5 0) (bruijn ##.%k.1266 4 0) (bruijn ##.%x.2225 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k310, self)))),
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2222) ((##vcore.null? (bruijn ##.ret.492 1 1))) (if (bruijn ##.%p.2222 0 0) ((bruijn ##.%k.1266 1 0) (bruijn ##.table.485 4 2)) (basic-block 2 2 (##.%x.2223 ##.%p.2224) ((##vcore.car (bruijn ##.ret.492 2 1)) (##vcore.pair? (bruijn ##.%x.2223 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k307) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k309)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k307, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491_V0k309, self)))));
    }
}
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491")) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.491) #f (bruijn ##.loop.491 0 0) (bruijn ##.%k.1253 2 0) (bruijn ##.ret.484 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D486, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D491(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1296 0 0) (bruijn ##.%k.1294 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-function) #t (bruijn ##.unwrap-function.269 8 17) (bruijn ##.%k.1297 0 0) (bruijn ##.ret.494 7 1) (bruijn ##.decl.495 7 2) (bruijn ##.table.496 7 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1295 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k314) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda67) (bruijn ##.kk.111.498 4 1)) ((bruijn ##.%k.1294 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k314, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda67, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2226 1 0) (basic-block 1 1 (##.%x.2242) ((##vcore.car (bruijn ##.expr.497 4 0))) ((bruijn ##.equal?.214 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k313) 'function (bruijn ##.%x.2242 0 0))) ((bruijn ##.%k.1294 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k313, self)))),
      _V0function,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1283 0 0) (bruijn ##.%k.1278 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.2238 1 1) ((bruijn ##.compiler-error.227 15 14) (bruijn ##.%k.1289 0 0) (##string ##.string.2868) (bruijn ##.expr.497 12 0)) ((bruijn ##.%k.1289 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2868.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2239 ##.%x.2240 ##.%r.2241) ((##vcore.cons (bruijn ##.type.2231 5 0) '()) (##vcore.cons (bruijn ##.%x.1286 1 0) (bruijn ##.%x.2239 0 0)) (##vcore.cons 'extern-variable (bruijn ##.%x.2240 0 1))) ((bruijn ##.%k.1284 3 0) (bruijn ##.%r.2241 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0extern__variable,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k321(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k322) (bruijn ##.name.2234 2 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k322, self)))),
      statics->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k320(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi check-extern-variable-type) #t (bruijn ##.check-extern-variable-type.268 13 16) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k321) (bruijn ##.type.2231 3 0) (bruijn ##.expr.497 11 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k321, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2237 ##.%p.2238) ((##vcore.string? (bruijn ##.name.2234 2 0)) (##vcore.not (bruijn ##.%x.2237 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k319) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k320)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k319, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k320, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1279 0 0) (basic-block 2 2 (##.expr.115.2229 ##.%p.2230) ((##vcore.cdr (bruijn ##.expr.497 7 0)) (##vcore.pair? (bruijn ##.expr.115.2229 0 0))) (if (bruijn ##.%p.2230 0 1) (basic-block 3 3 (##.type.2231 ##.expr.116.2232 ##.%p.2233) ((##vcore.car (bruijn ##.expr.115.2229 1 0)) (##vcore.cdr (bruijn ##.expr.115.2229 1 0)) (##vcore.pair? (bruijn ##.expr.116.2232 0 1))) (if (bruijn ##.%p.2233 0 2) (basic-block 3 3 (##.name.2234 ##.%x.2235 ##.%p.2236) ((##vcore.car (bruijn ##.expr.116.2232 1 1)) (##vcore.cdr (bruijn ##.expr.116.2232 1 1)) (##vcore.null? (bruijn ##.%x.2235 0 1))) (if (bruijn ##.%p.2236 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k318) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda68) (bruijn ##.kk.111.498 8 1)) ((bruijn ##.%k.1278 5 0) #f))) ((bruijn ##.%k.1278 4 0) #f))) ((bruijn ##.%k.1278 3 0) #f))) ((bruijn ##.%k.1278 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k318, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda68, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2227 1 0) (basic-block 1 1 (##.%x.2228) ((##vcore.car (bruijn ##.expr.497 5 0))) ((bruijn ##.equal?.214 8 1) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k317) 'variable (bruijn ##.%x.2228 0 0))) ((bruijn ##.%k.1278 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k317, self)))),
      _V0variable,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.227 7 14) (bruijn ##.%k.1276 0 0) (##string ##.string.2869) (bruijn ##.expr.497 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2869.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k323(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1275 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda69) (bruijn ##.kk.111.498 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda69, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k315(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2227) ((##vcore.pair? (bruijn ##.expr.497 3 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k316) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k323)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k316, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k323, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2226) ((##vcore.pair? (bruijn ##.expr.497 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k312) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k315)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k312, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k315, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1274 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda66))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0lambda66, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern, got ~D~N"
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
  // (##qualified-call (vanity compiler ffi reduce-declare) #t (bruijn ##.reduce-declare.273 1 21) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k311) (bruijn ##.ret.494 0 1) (bruijn ##.decl.495 0 2) (bruijn ##.table.496 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern_V0k311, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2243 1 0) (basic-block 2 2 (##.%x.2248 ##.%r.2249) ((##vcore.car (bruijn ##.type.506 3 1)) (##vcore.eq? (bruijn ##.%x.2248 0 0) 'const)) ((bruijn ##.%k.1311 1 0) (bruijn ##.%r.2249 0 1))) ((bruijn ##.%k.1311 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0const);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.const?.508 1 0) ((bruijn ##.cadr.220 6 7) (bruijn ##.%k.1309 0 0) (bruijn ##.type.506 4 1)) ((bruijn ##.%k.1309 0 0) (bruijn ##.type.506 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 2,
      _var0,
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2247) ((##vcore.not (bruijn ##.%x.1306 1 0))) ((bruijn ##.%k.1303 5 0) (bruijn ##.%r.2247 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2245) ((##vcore.not (bruijn ##.%x.1307 1 0))) (if (bruijn ##.%p.2245 0 0) ((bruijn ##.%k.1303 2 0) (bruijn ##.%p.2245 0 0)) (basic-block 1 1 (##.%p.2246) ((##vcore.not (bruijn ##.const?.508 6 0))) (if (bruijn ##.%p.2246 0 0) (##qualified-call (vanity compiler ffi get-foreign-decoder) #t (bruijn ##.get-foreign-decoder.253 10 1) (close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k331) (bruijn ##.base.509 6 1)) ((bruijn ##.%k.1303 3 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k331, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2244 1 0) ((bruijn ##.%k.1303 0 0) (bruijn ##.%p.2244 1 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.254 7 2) (close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k330) (bruijn ##.base.509 3 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k330, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1301 0 0) ((bruijn ##.compiler-error.227 8 14) (bruijn ##.%k.1299 6 0) (##string ##.string.2870) (bruijn ##.expr.507 6 2)) ((bruijn ##.%k.1299 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 14)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D2870.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k328(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2244) ((##vcore.eq? (bruijn ##.base.509 2 1) 'void)) ((close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k329) (close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k332)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      _V0void);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k329, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k332, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k328) (bruijn ##.base.509 1 1) (bruijn ##.%x.1308 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k328, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.1300 1 0) #f) ((close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k326) (close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k327)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k326, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k327, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2243) ((##vcore.pair? (bruijn ##.type.506 1 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k324) (close _V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k325)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k324, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type_V0k325, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1321 0 0) (bruijn ##.%k.1317 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.2259 1 0) ((bruijn ##.compiler-error.227 15 14) (bruijn ##.%k.1333 0 0) (##string ##.string.2871) (bruijn ##.expr.513 12 0)) ((bruijn ##.%k.1333 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2871.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.2261 1 1) ((bruijn ##.compiler-error.227 16 14) (bruijn ##.%k.1330 0 0) (##string ##.string.2872) (bruijn ##.expr.513 13 0)) ((bruijn ##.%k.1330 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2872.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2262 ##.%x.2263 ##.%r.2264) ((##vcore.cons (bruijn ##.ret.2257 6 0) (bruijn ##.args.2258 6 1)) (##vcore.cons (bruijn ##.%x.1324 1 0) (bruijn ##.%x.2262 0 0)) (##vcore.cons 'function (bruijn ##.%x.2263 0 1))) ((bruijn ##.%k.1322 5 0) (bruijn ##.%r.2264 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0function,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[2]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k342(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k343) (bruijn ##.name.2254 5 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k343, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2265) ((##vcore.not (bruijn ##.%x.1328 1 0))) (if (bruijn ##.%p.2265 0 0) ((bruijn ##.compiler-error.227 18 14) (bruijn ##.%k.1326 2 0) (##string ##.string.2873) (bruijn ##.name.2254 8 0) (bruijn ##.arg.522 2 1)) ((bruijn ##.%k.1326 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 14)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2873.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) #t (bruijn ##.get-foreign-decoder.253 15 1) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k344) (bruijn ##.arg.522 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k344, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k341(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.217 15 4) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k342) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda72) (bruijn ##.args.2258 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k342, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda72, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k339(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2260 ##.%p.2261) ((##vcore.string? (bruijn ##.name.2254 5 0)) (##vcore.not (bruijn ##.%x.2260 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k340) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k341)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k340, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k341, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2259) ((##vcore.not (bruijn ##.%x.1334 1 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k338) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k339)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k338, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k339, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.254 11 2) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k337) (bruijn ##.ret.2257 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k337, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1318 0 0) (basic-block 2 2 (##.expr.109.2252 ##.%p.2253) ((##vcore.cdr (bruijn ##.expr.513 6 0)) (##vcore.pair? (bruijn ##.expr.109.2252 0 0))) (if (bruijn ##.%p.2253 0 1) (basic-block 3 3 (##.name.2254 ##.expr.110.2255 ##.%p.2256) ((##vcore.car (bruijn ##.expr.109.2252 1 0)) (##vcore.cdr (bruijn ##.expr.109.2252 1 0)) (##vcore.pair? (bruijn ##.expr.110.2255 0 1))) (if (bruijn ##.%p.2256 0 2) (basic-block 2 2 (##.ret.2257 ##.args.2258) ((##vcore.car (bruijn ##.expr.110.2255 1 1)) (##vcore.cdr (bruijn ##.expr.110.2255 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k336) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda71) (bruijn ##.kk.106.514 7 1))) ((bruijn ##.%k.1317 4 0) #f))) ((bruijn ##.%k.1317 3 0) #f))) ((bruijn ##.%k.1317 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k336, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda71, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2250 1 0) (basic-block 1 1 (##.%x.2251) ((##vcore.car (bruijn ##.expr.513 4 0))) ((bruijn ##.equal?.214 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k335) 'function (bruijn ##.%x.2251 0 0))) ((bruijn ##.%k.1317 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k335, self)))),
      _V0function,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.227 6 14) (bruijn ##.%k.1315 0 0) (##string ##.string.2874) (bruijn ##.expr.513 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2874.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k345(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1314 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda73) (bruijn ##.kk.106.514 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda73, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2250) ((##vcore.pair? (bruijn ##.expr.513 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k334) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k345)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k334, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k345, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1313 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda70))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda70, self)))));
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
  // (##qualified-call (vanity compiler ffi reduce-declare) #t (bruijn ##.reduce-declare.273 1 21) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k333) (bruijn ##.ret.510 0 1) (bruijn ##.decl.511 0 2) (bruijn ##.table.512 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k333, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1345 0 0) (bruijn ##.%k.1340 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.2277 1 1) ((bruijn ##.compiler-error.227 14 14) (bruijn ##.%k.1351 0 0) (##string ##.string.2875) (bruijn ##.expr.526 11 0)) ((bruijn ##.%k.1351 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2875.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2278 ##.%x.2279 ##.%r.2280) ((##vcore.cons (bruijn ##.ret.2270 5 0) '()) (##vcore.cons (bruijn ##.%x.1348 1 0) (bruijn ##.%x.2278 0 0)) (##vcore.cons 'typedef (bruijn ##.%x.2279 0 1))) ((bruijn ##.%k.1346 3 0) (bruijn ##.%r.2280 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0typedef,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k351(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k352) (bruijn ##.name.2273 2 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k352, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2276 ##.%p.2277) ((##vcore.string? (bruijn ##.name.2273 2 0)) (##vcore.not (bruijn ##.%x.2276 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k350) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k351)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k350, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k351, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1341 0 0) (basic-block 2 2 (##.expr.104.2268 ##.%p.2269) ((##vcore.cdr (bruijn ##.expr.526 6 0)) (##vcore.pair? (bruijn ##.expr.104.2268 0 0))) (if (bruijn ##.%p.2269 0 1) (basic-block 3 3 (##.ret.2270 ##.expr.105.2271 ##.%p.2272) ((##vcore.car (bruijn ##.expr.104.2268 1 0)) (##vcore.cdr (bruijn ##.expr.104.2268 1 0)) (##vcore.pair? (bruijn ##.expr.105.2271 0 1))) (if (bruijn ##.%p.2272 0 2) (basic-block 3 3 (##.name.2273 ##.%x.2274 ##.%p.2275) ((##vcore.car (bruijn ##.expr.105.2271 1 1)) (##vcore.cdr (bruijn ##.expr.105.2271 1 1)) (##vcore.null? (bruijn ##.%x.2274 0 1))) (if (bruijn ##.%p.2275 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k349) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda75) (bruijn ##.kk.101.527 7 1)) ((bruijn ##.%k.1340 5 0) #f))) ((bruijn ##.%k.1340 4 0) #f))) ((bruijn ##.%k.1340 3 0) #f))) ((bruijn ##.%k.1340 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k349, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda75, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2266 1 0) (basic-block 1 1 (##.%x.2267) ((##vcore.car (bruijn ##.expr.526 4 0))) ((bruijn ##.equal?.214 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k348) 'variable (bruijn ##.%x.2267 0 0))) ((bruijn ##.%k.1340 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k348, self)))),
      _V0variable,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.227 6 14) (bruijn ##.%k.1338 0 0) (##string ##.string.2876) (bruijn ##.expr.526 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2876.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k353(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1337 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda76) (bruijn ##.kk.101.527 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda76, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2266) ((##vcore.pair? (bruijn ##.expr.526 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k347) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k353)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k347, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k353, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1336 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda74))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda74, self)))));
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
  // (##qualified-call (vanity compiler ffi reduce-declare) #t (bruijn ##.reduce-declare.273 1 21) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k346) (bruijn ##.ret.523 0 1) (bruijn ##.decl.524 0 2) (bruijn ##.table.525 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k346, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1586 0 0) (bruijn ##.%k.1575 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1587 0 0) 'char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1576 0 0) (basic-block 2 2 (##.expr.41.2497 ##.%p.2498) ((##vcore.cdr (bruijn ##.args.540 6 1)) (##vcore.pair? (bruijn ##.expr.41.2497 0 0))) (if (bruijn ##.%p.2498 0 1) (basic-block 2 2 (##.%x.2499 ##.%p.2500) ((##vcore.car (bruijn ##.expr.41.2497 1 0)) (##vcore.eq? 0 (bruijn ##.%x.2499 0 0))) (if (bruijn ##.%p.2500 0 1) (basic-block 2 2 (##.expr.42.2501 ##.%p.2502) ((##vcore.cdr (bruijn ##.expr.41.2497 2 0)) (##vcore.pair? (bruijn ##.expr.42.2501 0 0))) (if (bruijn ##.%p.2502 0 1) (basic-block 2 2 (##.%x.2503 ##.%p.2504) ((##vcore.car (bruijn ##.expr.42.2501 1 0)) (##vcore.eq? #f (bruijn ##.%x.2503 0 0))) (if (bruijn ##.%p.2504 0 1) (basic-block 2 2 (##.expr.43.2505 ##.%p.2506) ((##vcore.cdr (bruijn ##.expr.42.2501 2 0)) (##vcore.pair? (bruijn ##.expr.43.2505 0 0))) (if (bruijn ##.%p.2506 0 1) (basic-block 2 2 (##.%x.2507 ##.%p.2508) ((##vcore.car (bruijn ##.expr.43.2505 1 0)) (##vcore.eq? #f (bruijn ##.%x.2507 0 0))) (if (bruijn ##.%p.2508 0 1) (basic-block 2 2 (##.expr.44.2509 ##.%p.2510) ((##vcore.cdr (bruijn ##.expr.43.2505 2 0)) (##vcore.pair? (bruijn ##.expr.44.2509 0 0))) (if (bruijn ##.%p.2510 0 1) (basic-block 2 2 (##.%x.2511 ##.%p.2512) ((##vcore.car (bruijn ##.expr.44.2509 1 0)) (##vcore.eq? #f (bruijn ##.%x.2511 0 0))) (if (bruijn ##.%p.2512 0 1) (basic-block 2 2 (##.%x.2513 ##.%p.2514) ((##vcore.cdr (bruijn ##.expr.44.2509 2 0)) (##vcore.null? (bruijn ##.%x.2513 0 0))) (if (bruijn ##.%p.2514 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k356) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda78) (bruijn ##.kk.38.541 13 1)) ((bruijn ##.%k.1575 11 0) #f))) ((bruijn ##.%k.1575 10 0) #f))) ((bruijn ##.%k.1575 9 0) #f))) ((bruijn ##.%k.1575 8 0) #f))) ((bruijn ##.%k.1575 7 0) #f))) ((bruijn ##.%k.1575 6 0) #f))) ((bruijn ##.%k.1575 5 0) #f))) ((bruijn ##.%k.1575 4 0) #f))) ((bruijn ##.%k.1575 3 0) #f))) ((bruijn ##.%k.1575 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k356, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda78, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2281 1 0) (basic-block 1 1 (##.%x.2496) ((##vcore.car (bruijn ##.args.540 4 1))) ((bruijn ##.equal?.214 8 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k355) 'char (bruijn ##.%x.2496 0 0))) ((bruijn ##.%k.1575 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k355, self)))),
      _V0char,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1566 0 0) (bruijn ##.%k.1555 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1567 0 0) 'unsigned-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1556 0 0) (basic-block 2 2 (##.expr.46.2478 ##.%p.2479) ((##vcore.cdr (bruijn ##.args.540 7 1)) (##vcore.pair? (bruijn ##.expr.46.2478 0 0))) (if (bruijn ##.%p.2479 0 1) (basic-block 2 2 (##.%x.2480 ##.%p.2481) ((##vcore.car (bruijn ##.expr.46.2478 1 0)) (##vcore.eq? 0 (bruijn ##.%x.2480 0 0))) (if (bruijn ##.%p.2481 0 1) (basic-block 2 2 (##.expr.47.2482 ##.%p.2483) ((##vcore.cdr (bruijn ##.expr.46.2478 2 0)) (##vcore.pair? (bruijn ##.expr.47.2482 0 0))) (if (bruijn ##.%p.2483 0 1) (basic-block 2 2 (##.%x.2484 ##.%p.2485) ((##vcore.car (bruijn ##.expr.47.2482 1 0)) (##vcore.eq? #f (bruijn ##.%x.2484 0 0))) (if (bruijn ##.%p.2485 0 1) (basic-block 2 2 (##.expr.48.2486 ##.%p.2487) ((##vcore.cdr (bruijn ##.expr.47.2482 2 0)) (##vcore.pair? (bruijn ##.expr.48.2486 0 0))) (if (bruijn ##.%p.2487 0 1) (basic-block 2 2 (##.%x.2488 ##.%p.2489) ((##vcore.car (bruijn ##.expr.48.2486 1 0)) (##vcore.eq? #t (bruijn ##.%x.2488 0 0))) (if (bruijn ##.%p.2489 0 1) (basic-block 2 2 (##.expr.49.2490 ##.%p.2491) ((##vcore.cdr (bruijn ##.expr.48.2486 2 0)) (##vcore.pair? (bruijn ##.expr.49.2490 0 0))) (if (bruijn ##.%p.2491 0 1) (basic-block 2 2 (##.%x.2492 ##.%p.2493) ((##vcore.car (bruijn ##.expr.49.2490 1 0)) (##vcore.eq? #f (bruijn ##.%x.2492 0 0))) (if (bruijn ##.%p.2493 0 1) (basic-block 2 2 (##.%x.2494 ##.%p.2495) ((##vcore.cdr (bruijn ##.expr.49.2490 2 0)) (##vcore.null? (bruijn ##.%x.2494 0 0))) (if (bruijn ##.%p.2495 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k360) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda79) (bruijn ##.kk.38.541 14 1)) ((bruijn ##.%k.1555 11 0) #f))) ((bruijn ##.%k.1555 10 0) #f))) ((bruijn ##.%k.1555 9 0) #f))) ((bruijn ##.%k.1555 8 0) #f))) ((bruijn ##.%k.1555 7 0) #f))) ((bruijn ##.%k.1555 6 0) #f))) ((bruijn ##.%k.1555 5 0) #f))) ((bruijn ##.%k.1555 4 0) #f))) ((bruijn ##.%k.1555 3 0) #f))) ((bruijn ##.%k.1555 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k360, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda79, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2282 1 0) (basic-block 1 1 (##.%x.2477) ((##vcore.car (bruijn ##.args.540 5 1))) ((bruijn ##.equal?.214 9 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k359) 'char (bruijn ##.%x.2477 0 0))) ((bruijn ##.%k.1555 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k359, self)))),
      _V0char,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1546 0 0) (bruijn ##.%k.1535 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1547 0 0) 'signed-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0signed__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1536 0 0) (basic-block 2 2 (##.expr.51.2459 ##.%p.2460) ((##vcore.cdr (bruijn ##.args.540 8 1)) (##vcore.pair? (bruijn ##.expr.51.2459 0 0))) (if (bruijn ##.%p.2460 0 1) (basic-block 2 2 (##.%x.2461 ##.%p.2462) ((##vcore.car (bruijn ##.expr.51.2459 1 0)) (##vcore.eq? 0 (bruijn ##.%x.2461 0 0))) (if (bruijn ##.%p.2462 0 1) (basic-block 2 2 (##.expr.52.2463 ##.%p.2464) ((##vcore.cdr (bruijn ##.expr.51.2459 2 0)) (##vcore.pair? (bruijn ##.expr.52.2463 0 0))) (if (bruijn ##.%p.2464 0 1) (basic-block 2 2 (##.%x.2465 ##.%p.2466) ((##vcore.car (bruijn ##.expr.52.2463 1 0)) (##vcore.eq? #f (bruijn ##.%x.2465 0 0))) (if (bruijn ##.%p.2466 0 1) (basic-block 2 2 (##.expr.53.2467 ##.%p.2468) ((##vcore.cdr (bruijn ##.expr.52.2463 2 0)) (##vcore.pair? (bruijn ##.expr.53.2467 0 0))) (if (bruijn ##.%p.2468 0 1) (basic-block 2 2 (##.%x.2469 ##.%p.2470) ((##vcore.car (bruijn ##.expr.53.2467 1 0)) (##vcore.eq? #f (bruijn ##.%x.2469 0 0))) (if (bruijn ##.%p.2470 0 1) (basic-block 2 2 (##.expr.54.2471 ##.%p.2472) ((##vcore.cdr (bruijn ##.expr.53.2467 2 0)) (##vcore.pair? (bruijn ##.expr.54.2471 0 0))) (if (bruijn ##.%p.2472 0 1) (basic-block 2 2 (##.%x.2473 ##.%p.2474) ((##vcore.car (bruijn ##.expr.54.2471 1 0)) (##vcore.eq? #t (bruijn ##.%x.2473 0 0))) (if (bruijn ##.%p.2474 0 1) (basic-block 2 2 (##.%x.2475 ##.%p.2476) ((##vcore.cdr (bruijn ##.expr.54.2471 2 0)) (##vcore.null? (bruijn ##.%x.2475 0 0))) (if (bruijn ##.%p.2476 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k364) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda80) (bruijn ##.kk.38.541 15 1)) ((bruijn ##.%k.1535 11 0) #f))) ((bruijn ##.%k.1535 10 0) #f))) ((bruijn ##.%k.1535 9 0) #f))) ((bruijn ##.%k.1535 8 0) #f))) ((bruijn ##.%k.1535 7 0) #f))) ((bruijn ##.%k.1535 6 0) #f))) ((bruijn ##.%k.1535 5 0) #f))) ((bruijn ##.%k.1535 4 0) #f))) ((bruijn ##.%k.1535 3 0) #f))) ((bruijn ##.%k.1535 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k364, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda80, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2283 1 0) (basic-block 1 1 (##.%x.2458) ((##vcore.car (bruijn ##.args.540 6 1))) ((bruijn ##.equal?.214 10 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k363) 'char (bruijn ##.%x.2458 0 0))) ((bruijn ##.%k.1535 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k363, self)))),
      _V0char,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1527 0 0) (bruijn ##.%k.1517 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1528 0 0) 'int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1518 0 0) (basic-block 2 2 (##.expr.56.2442 ##.%p.2443) ((##vcore.cdr (bruijn ##.args.540 9 1)) (##vcore.pair? (bruijn ##.expr.56.2442 0 0))) (if (bruijn ##.%p.2443 0 1) (basic-block 2 2 (##.%x.2444 ##.%p.2445) ((##vcore.car (bruijn ##.expr.56.2442 1 0)) (##vcore.eq? 0 (bruijn ##.%x.2444 0 0))) (if (bruijn ##.%p.2445 0 1) (basic-block 2 2 (##.expr.57.2446 ##.%p.2447) ((##vcore.cdr (bruijn ##.expr.56.2442 2 0)) (##vcore.pair? (bruijn ##.expr.57.2446 0 0))) (if (bruijn ##.%p.2447 0 1) (basic-block 2 2 (##.%x.2448 ##.%p.2449) ((##vcore.car (bruijn ##.expr.57.2446 1 0)) (##vcore.eq? #f (bruijn ##.%x.2448 0 0))) (if (bruijn ##.%p.2449 0 1) (basic-block 2 2 (##.expr.58.2450 ##.%p.2451) ((##vcore.cdr (bruijn ##.expr.57.2446 2 0)) (##vcore.pair? (bruijn ##.expr.58.2450 0 0))) (if (bruijn ##.%p.2451 0 1) (basic-block 2 2 (##.%x.2452 ##.%p.2453) ((##vcore.car (bruijn ##.expr.58.2450 1 0)) (##vcore.eq? #f (bruijn ##.%x.2452 0 0))) (if (bruijn ##.%p.2453 0 1) (basic-block 2 2 (##.expr.59.2454 ##.%p.2455) ((##vcore.cdr (bruijn ##.expr.58.2450 2 0)) (##vcore.pair? (bruijn ##.expr.59.2454 0 0))) (if (bruijn ##.%p.2455 0 1) (basic-block 2 2 (##.%x.2456 ##.%p.2457) ((##vcore.cdr (bruijn ##.expr.59.2454 1 0)) (##vcore.null? (bruijn ##.%x.2456 0 0))) (if (bruijn ##.%p.2457 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k368) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda81) (bruijn ##.kk.38.541 15 1)) ((bruijn ##.%k.1517 10 0) #f))) ((bruijn ##.%k.1517 9 0) #f))) ((bruijn ##.%k.1517 8 0) #f))) ((bruijn ##.%k.1517 7 0) #f))) ((bruijn ##.%k.1517 6 0) #f))) ((bruijn ##.%k.1517 5 0) #f))) ((bruijn ##.%k.1517 4 0) #f))) ((bruijn ##.%k.1517 3 0) #f))) ((bruijn ##.%k.1517 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k368, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda81, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2284 1 0) (basic-block 1 1 (##.%x.2441) ((##vcore.car (bruijn ##.args.540 7 1))) ((bruijn ##.equal?.214 11 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k367) 'int (bruijn ##.%x.2441 0 0))) ((bruijn ##.%k.1517 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k367, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1508 0 0) (bruijn ##.%k.1497 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1509 0 0) 'unsigned-int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1498 0 0) (basic-block 2 2 (##.expr.61.2423 ##.%p.2424) ((##vcore.cdr (bruijn ##.args.540 10 1)) (##vcore.pair? (bruijn ##.expr.61.2423 0 0))) (if (bruijn ##.%p.2424 0 1) (basic-block 2 2 (##.%x.2425 ##.%p.2426) ((##vcore.car (bruijn ##.expr.61.2423 1 0)) (##vcore.eq? 0 (bruijn ##.%x.2425 0 0))) (if (bruijn ##.%p.2426 0 1) (basic-block 2 2 (##.expr.62.2427 ##.%p.2428) ((##vcore.cdr (bruijn ##.expr.61.2423 2 0)) (##vcore.pair? (bruijn ##.expr.62.2427 0 0))) (if (bruijn ##.%p.2428 0 1) (basic-block 2 2 (##.%x.2429 ##.%p.2430) ((##vcore.car (bruijn ##.expr.62.2427 1 0)) (##vcore.eq? #f (bruijn ##.%x.2429 0 0))) (if (bruijn ##.%p.2430 0 1) (basic-block 2 2 (##.expr.63.2431 ##.%p.2432) ((##vcore.cdr (bruijn ##.expr.62.2427 2 0)) (##vcore.pair? (bruijn ##.expr.63.2431 0 0))) (if (bruijn ##.%p.2432 0 1) (basic-block 2 2 (##.%x.2433 ##.%p.2434) ((##vcore.car (bruijn ##.expr.63.2431 1 0)) (##vcore.eq? #t (bruijn ##.%x.2433 0 0))) (if (bruijn ##.%p.2434 0 1) (basic-block 2 2 (##.expr.64.2435 ##.%p.2436) ((##vcore.cdr (bruijn ##.expr.63.2431 2 0)) (##vcore.pair? (bruijn ##.expr.64.2435 0 0))) (if (bruijn ##.%p.2436 0 1) (basic-block 2 2 (##.%x.2437 ##.%p.2438) ((##vcore.car (bruijn ##.expr.64.2435 1 0)) (##vcore.eq? #f (bruijn ##.%x.2437 0 0))) (if (bruijn ##.%p.2438 0 1) (basic-block 2 2 (##.%x.2439 ##.%p.2440) ((##vcore.cdr (bruijn ##.expr.64.2435 2 0)) (##vcore.null? (bruijn ##.%x.2439 0 0))) (if (bruijn ##.%p.2440 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k372) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda82) (bruijn ##.kk.38.541 17 1)) ((bruijn ##.%k.1497 11 0) #f))) ((bruijn ##.%k.1497 10 0) #f))) ((bruijn ##.%k.1497 9 0) #f))) ((bruijn ##.%k.1497 8 0) #f))) ((bruijn ##.%k.1497 7 0) #f))) ((bruijn ##.%k.1497 6 0) #f))) ((bruijn ##.%k.1497 5 0) #f))) ((bruijn ##.%k.1497 4 0) #f))) ((bruijn ##.%k.1497 3 0) #f))) ((bruijn ##.%k.1497 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k372, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda82, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2285 1 0) (basic-block 1 1 (##.%x.2422) ((##vcore.car (bruijn ##.args.540 8 1))) ((bruijn ##.equal?.214 12 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k371) 'int (bruijn ##.%x.2422 0 0))) ((bruijn ##.%k.1497 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k371, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1489 0 0) (bruijn ##.%k.1479 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1490 0 0) 'long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1480 0 0) (basic-block 2 2 (##.expr.66.2406 ##.%p.2407) ((##vcore.cdr (bruijn ##.args.540 11 1)) (##vcore.pair? (bruijn ##.expr.66.2406 0 0))) (if (bruijn ##.%p.2407 0 1) (basic-block 2 2 (##.%x.2408 ##.%p.2409) ((##vcore.car (bruijn ##.expr.66.2406 1 0)) (##vcore.eq? 1 (bruijn ##.%x.2408 0 0))) (if (bruijn ##.%p.2409 0 1) (basic-block 2 2 (##.expr.67.2410 ##.%p.2411) ((##vcore.cdr (bruijn ##.expr.66.2406 2 0)) (##vcore.pair? (bruijn ##.expr.67.2410 0 0))) (if (bruijn ##.%p.2411 0 1) (basic-block 2 2 (##.%x.2412 ##.%p.2413) ((##vcore.car (bruijn ##.expr.67.2410 1 0)) (##vcore.eq? #f (bruijn ##.%x.2412 0 0))) (if (bruijn ##.%p.2413 0 1) (basic-block 2 2 (##.expr.68.2414 ##.%p.2415) ((##vcore.cdr (bruijn ##.expr.67.2410 2 0)) (##vcore.pair? (bruijn ##.expr.68.2414 0 0))) (if (bruijn ##.%p.2415 0 1) (basic-block 2 2 (##.%x.2416 ##.%p.2417) ((##vcore.car (bruijn ##.expr.68.2414 1 0)) (##vcore.eq? #f (bruijn ##.%x.2416 0 0))) (if (bruijn ##.%p.2417 0 1) (basic-block 2 2 (##.expr.69.2418 ##.%p.2419) ((##vcore.cdr (bruijn ##.expr.68.2414 2 0)) (##vcore.pair? (bruijn ##.expr.69.2418 0 0))) (if (bruijn ##.%p.2419 0 1) (basic-block 2 2 (##.%x.2420 ##.%p.2421) ((##vcore.cdr (bruijn ##.expr.69.2418 1 0)) (##vcore.null? (bruijn ##.%x.2420 0 0))) (if (bruijn ##.%p.2421 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k376) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda83) (bruijn ##.kk.38.541 17 1)) ((bruijn ##.%k.1479 10 0) #f))) ((bruijn ##.%k.1479 9 0) #f))) ((bruijn ##.%k.1479 8 0) #f))) ((bruijn ##.%k.1479 7 0) #f))) ((bruijn ##.%k.1479 6 0) #f))) ((bruijn ##.%k.1479 5 0) #f))) ((bruijn ##.%k.1479 4 0) #f))) ((bruijn ##.%k.1479 3 0) #f))) ((bruijn ##.%k.1479 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(1l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k376, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda83, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2286 1 0) (basic-block 1 1 (##.%x.2405) ((##vcore.car (bruijn ##.args.540 9 1))) ((bruijn ##.equal?.214 13 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k375) 'int (bruijn ##.%x.2405 0 0))) ((bruijn ##.%k.1479 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k375, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1470 0 0) (bruijn ##.%k.1459 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1471 0 0) 'unsigned-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1460 0 0) (basic-block 2 2 (##.expr.71.2387 ##.%p.2388) ((##vcore.cdr (bruijn ##.args.540 12 1)) (##vcore.pair? (bruijn ##.expr.71.2387 0 0))) (if (bruijn ##.%p.2388 0 1) (basic-block 2 2 (##.%x.2389 ##.%p.2390) ((##vcore.car (bruijn ##.expr.71.2387 1 0)) (##vcore.eq? 1 (bruijn ##.%x.2389 0 0))) (if (bruijn ##.%p.2390 0 1) (basic-block 2 2 (##.expr.72.2391 ##.%p.2392) ((##vcore.cdr (bruijn ##.expr.71.2387 2 0)) (##vcore.pair? (bruijn ##.expr.72.2391 0 0))) (if (bruijn ##.%p.2392 0 1) (basic-block 2 2 (##.%x.2393 ##.%p.2394) ((##vcore.car (bruijn ##.expr.72.2391 1 0)) (##vcore.eq? #f (bruijn ##.%x.2393 0 0))) (if (bruijn ##.%p.2394 0 1) (basic-block 2 2 (##.expr.73.2395 ##.%p.2396) ((##vcore.cdr (bruijn ##.expr.72.2391 2 0)) (##vcore.pair? (bruijn ##.expr.73.2395 0 0))) (if (bruijn ##.%p.2396 0 1) (basic-block 2 2 (##.%x.2397 ##.%p.2398) ((##vcore.car (bruijn ##.expr.73.2395 1 0)) (##vcore.eq? #t (bruijn ##.%x.2397 0 0))) (if (bruijn ##.%p.2398 0 1) (basic-block 2 2 (##.expr.74.2399 ##.%p.2400) ((##vcore.cdr (bruijn ##.expr.73.2395 2 0)) (##vcore.pair? (bruijn ##.expr.74.2399 0 0))) (if (bruijn ##.%p.2400 0 1) (basic-block 2 2 (##.%x.2401 ##.%p.2402) ((##vcore.car (bruijn ##.expr.74.2399 1 0)) (##vcore.eq? #f (bruijn ##.%x.2401 0 0))) (if (bruijn ##.%p.2402 0 1) (basic-block 2 2 (##.%x.2403 ##.%p.2404) ((##vcore.cdr (bruijn ##.expr.74.2399 2 0)) (##vcore.null? (bruijn ##.%x.2403 0 0))) (if (bruijn ##.%p.2404 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k380) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda84) (bruijn ##.kk.38.541 19 1)) ((bruijn ##.%k.1459 11 0) #f))) ((bruijn ##.%k.1459 10 0) #f))) ((bruijn ##.%k.1459 9 0) #f))) ((bruijn ##.%k.1459 8 0) #f))) ((bruijn ##.%k.1459 7 0) #f))) ((bruijn ##.%k.1459 6 0) #f))) ((bruijn ##.%k.1459 5 0) #f))) ((bruijn ##.%k.1459 4 0) #f))) ((bruijn ##.%k.1459 3 0) #f))) ((bruijn ##.%k.1459 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(1l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k380, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda84, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2287 1 0) (basic-block 1 1 (##.%x.2386) ((##vcore.car (bruijn ##.args.540 10 1))) ((bruijn ##.equal?.214 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k379) 'int (bruijn ##.%x.2386 0 0))) ((bruijn ##.%k.1459 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k379, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1451 0 0) (bruijn ##.%k.1441 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1452 0 0) 'long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1442 0 0) (basic-block 2 2 (##.expr.76.2370 ##.%p.2371) ((##vcore.cdr (bruijn ##.args.540 13 1)) (##vcore.pair? (bruijn ##.expr.76.2370 0 0))) (if (bruijn ##.%p.2371 0 1) (basic-block 2 2 (##.%x.2372 ##.%p.2373) ((##vcore.car (bruijn ##.expr.76.2370 1 0)) (##vcore.eq? 2 (bruijn ##.%x.2372 0 0))) (if (bruijn ##.%p.2373 0 1) (basic-block 2 2 (##.expr.77.2374 ##.%p.2375) ((##vcore.cdr (bruijn ##.expr.76.2370 2 0)) (##vcore.pair? (bruijn ##.expr.77.2374 0 0))) (if (bruijn ##.%p.2375 0 1) (basic-block 2 2 (##.%x.2376 ##.%p.2377) ((##vcore.car (bruijn ##.expr.77.2374 1 0)) (##vcore.eq? #f (bruijn ##.%x.2376 0 0))) (if (bruijn ##.%p.2377 0 1) (basic-block 2 2 (##.expr.78.2378 ##.%p.2379) ((##vcore.cdr (bruijn ##.expr.77.2374 2 0)) (##vcore.pair? (bruijn ##.expr.78.2378 0 0))) (if (bruijn ##.%p.2379 0 1) (basic-block 2 2 (##.%x.2380 ##.%p.2381) ((##vcore.car (bruijn ##.expr.78.2378 1 0)) (##vcore.eq? #f (bruijn ##.%x.2380 0 0))) (if (bruijn ##.%p.2381 0 1) (basic-block 2 2 (##.expr.79.2382 ##.%p.2383) ((##vcore.cdr (bruijn ##.expr.78.2378 2 0)) (##vcore.pair? (bruijn ##.expr.79.2382 0 0))) (if (bruijn ##.%p.2383 0 1) (basic-block 2 2 (##.%x.2384 ##.%p.2385) ((##vcore.cdr (bruijn ##.expr.79.2382 1 0)) (##vcore.null? (bruijn ##.%x.2384 0 0))) (if (bruijn ##.%p.2385 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k384) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda85) (bruijn ##.kk.38.541 19 1)) ((bruijn ##.%k.1441 10 0) #f))) ((bruijn ##.%k.1441 9 0) #f))) ((bruijn ##.%k.1441 8 0) #f))) ((bruijn ##.%k.1441 7 0) #f))) ((bruijn ##.%k.1441 6 0) #f))) ((bruijn ##.%k.1441 5 0) #f))) ((bruijn ##.%k.1441 4 0) #f))) ((bruijn ##.%k.1441 3 0) #f))) ((bruijn ##.%k.1441 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(2l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k384, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda85, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2288 1 0) (basic-block 1 1 (##.%x.2369) ((##vcore.car (bruijn ##.args.540 11 1))) ((bruijn ##.equal?.214 15 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k383) 'int (bruijn ##.%x.2369 0 0))) ((bruijn ##.%k.1441 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k383, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1432 0 0) (bruijn ##.%k.1421 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1433 0 0) 'unsigned-long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1422 0 0) (basic-block 2 2 (##.expr.81.2351 ##.%p.2352) ((##vcore.cdr (bruijn ##.args.540 14 1)) (##vcore.pair? (bruijn ##.expr.81.2351 0 0))) (if (bruijn ##.%p.2352 0 1) (basic-block 2 2 (##.%x.2353 ##.%p.2354) ((##vcore.car (bruijn ##.expr.81.2351 1 0)) (##vcore.eq? 2 (bruijn ##.%x.2353 0 0))) (if (bruijn ##.%p.2354 0 1) (basic-block 2 2 (##.expr.82.2355 ##.%p.2356) ((##vcore.cdr (bruijn ##.expr.81.2351 2 0)) (##vcore.pair? (bruijn ##.expr.82.2355 0 0))) (if (bruijn ##.%p.2356 0 1) (basic-block 2 2 (##.%x.2357 ##.%p.2358) ((##vcore.car (bruijn ##.expr.82.2355 1 0)) (##vcore.eq? #f (bruijn ##.%x.2357 0 0))) (if (bruijn ##.%p.2358 0 1) (basic-block 2 2 (##.expr.83.2359 ##.%p.2360) ((##vcore.cdr (bruijn ##.expr.82.2355 2 0)) (##vcore.pair? (bruijn ##.expr.83.2359 0 0))) (if (bruijn ##.%p.2360 0 1) (basic-block 2 2 (##.%x.2361 ##.%p.2362) ((##vcore.car (bruijn ##.expr.83.2359 1 0)) (##vcore.eq? #t (bruijn ##.%x.2361 0 0))) (if (bruijn ##.%p.2362 0 1) (basic-block 2 2 (##.expr.84.2363 ##.%p.2364) ((##vcore.cdr (bruijn ##.expr.83.2359 2 0)) (##vcore.pair? (bruijn ##.expr.84.2363 0 0))) (if (bruijn ##.%p.2364 0 1) (basic-block 2 2 (##.%x.2365 ##.%p.2366) ((##vcore.car (bruijn ##.expr.84.2363 1 0)) (##vcore.eq? #f (bruijn ##.%x.2365 0 0))) (if (bruijn ##.%p.2366 0 1) (basic-block 2 2 (##.%x.2367 ##.%p.2368) ((##vcore.cdr (bruijn ##.expr.84.2363 2 0)) (##vcore.null? (bruijn ##.%x.2367 0 0))) (if (bruijn ##.%p.2368 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k388) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda86) (bruijn ##.kk.38.541 21 1)) ((bruijn ##.%k.1421 11 0) #f))) ((bruijn ##.%k.1421 10 0) #f))) ((bruijn ##.%k.1421 9 0) #f))) ((bruijn ##.%k.1421 8 0) #f))) ((bruijn ##.%k.1421 7 0) #f))) ((bruijn ##.%k.1421 6 0) #f))) ((bruijn ##.%k.1421 5 0) #f))) ((bruijn ##.%k.1421 4 0) #f))) ((bruijn ##.%k.1421 3 0) #f))) ((bruijn ##.%k.1421 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(2l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k388, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda86, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2289 1 0) (basic-block 1 1 (##.%x.2350) ((##vcore.car (bruijn ##.args.540 12 1))) ((bruijn ##.equal?.214 16 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k387) 'int (bruijn ##.%x.2350 0 0))) ((bruijn ##.%k.1421 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k387, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1413 0 0) (bruijn ##.%k.1403 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1414 0 0) 'short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1404 0 0) (basic-block 2 2 (##.expr.86.2334 ##.%p.2335) ((##vcore.cdr (bruijn ##.args.540 15 1)) (##vcore.pair? (bruijn ##.expr.86.2334 0 0))) (if (bruijn ##.%p.2335 0 1) (basic-block 2 2 (##.%x.2336 ##.%p.2337) ((##vcore.car (bruijn ##.expr.86.2334 1 0)) (##vcore.eq? 0 (bruijn ##.%x.2336 0 0))) (if (bruijn ##.%p.2337 0 1) (basic-block 2 2 (##.expr.87.2338 ##.%p.2339) ((##vcore.cdr (bruijn ##.expr.86.2334 2 0)) (##vcore.pair? (bruijn ##.expr.87.2338 0 0))) (if (bruijn ##.%p.2339 0 1) (basic-block 2 2 (##.%x.2340 ##.%p.2341) ((##vcore.car (bruijn ##.expr.87.2338 1 0)) (##vcore.eq? #t (bruijn ##.%x.2340 0 0))) (if (bruijn ##.%p.2341 0 1) (basic-block 2 2 (##.expr.88.2342 ##.%p.2343) ((##vcore.cdr (bruijn ##.expr.87.2338 2 0)) (##vcore.pair? (bruijn ##.expr.88.2342 0 0))) (if (bruijn ##.%p.2343 0 1) (basic-block 2 2 (##.%x.2344 ##.%p.2345) ((##vcore.car (bruijn ##.expr.88.2342 1 0)) (##vcore.eq? #f (bruijn ##.%x.2344 0 0))) (if (bruijn ##.%p.2345 0 1) (basic-block 2 2 (##.expr.89.2346 ##.%p.2347) ((##vcore.cdr (bruijn ##.expr.88.2342 2 0)) (##vcore.pair? (bruijn ##.expr.89.2346 0 0))) (if (bruijn ##.%p.2347 0 1) (basic-block 2 2 (##.%x.2348 ##.%p.2349) ((##vcore.cdr (bruijn ##.expr.89.2346 1 0)) (##vcore.null? (bruijn ##.%x.2348 0 0))) (if (bruijn ##.%p.2349 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k392) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda87) (bruijn ##.kk.38.541 21 1)) ((bruijn ##.%k.1403 10 0) #f))) ((bruijn ##.%k.1403 9 0) #f))) ((bruijn ##.%k.1403 8 0) #f))) ((bruijn ##.%k.1403 7 0) #f))) ((bruijn ##.%k.1403 6 0) #f))) ((bruijn ##.%k.1403 5 0) #f))) ((bruijn ##.%k.1403 4 0) #f))) ((bruijn ##.%k.1403 3 0) #f))) ((bruijn ##.%k.1403 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k392, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda87, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2290 1 0) (basic-block 1 1 (##.%x.2333) ((##vcore.car (bruijn ##.args.540 13 1))) ((bruijn ##.equal?.214 17 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k391) 'int (bruijn ##.%x.2333 0 0))) ((bruijn ##.%k.1403 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k391, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1394 0 0) (bruijn ##.%k.1383 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1395 0 0) 'unsigned-short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1384 0 0) (basic-block 2 2 (##.expr.91.2315 ##.%p.2316) ((##vcore.cdr (bruijn ##.args.540 16 1)) (##vcore.pair? (bruijn ##.expr.91.2315 0 0))) (if (bruijn ##.%p.2316 0 1) (basic-block 2 2 (##.%x.2317 ##.%p.2318) ((##vcore.car (bruijn ##.expr.91.2315 1 0)) (##vcore.eq? 0 (bruijn ##.%x.2317 0 0))) (if (bruijn ##.%p.2318 0 1) (basic-block 2 2 (##.expr.92.2319 ##.%p.2320) ((##vcore.cdr (bruijn ##.expr.91.2315 2 0)) (##vcore.pair? (bruijn ##.expr.92.2319 0 0))) (if (bruijn ##.%p.2320 0 1) (basic-block 2 2 (##.%x.2321 ##.%p.2322) ((##vcore.car (bruijn ##.expr.92.2319 1 0)) (##vcore.eq? #t (bruijn ##.%x.2321 0 0))) (if (bruijn ##.%p.2322 0 1) (basic-block 2 2 (##.expr.93.2323 ##.%p.2324) ((##vcore.cdr (bruijn ##.expr.92.2319 2 0)) (##vcore.pair? (bruijn ##.expr.93.2323 0 0))) (if (bruijn ##.%p.2324 0 1) (basic-block 2 2 (##.%x.2325 ##.%p.2326) ((##vcore.car (bruijn ##.expr.93.2323 1 0)) (##vcore.eq? #t (bruijn ##.%x.2325 0 0))) (if (bruijn ##.%p.2326 0 1) (basic-block 2 2 (##.expr.94.2327 ##.%p.2328) ((##vcore.cdr (bruijn ##.expr.93.2323 2 0)) (##vcore.pair? (bruijn ##.expr.94.2327 0 0))) (if (bruijn ##.%p.2328 0 1) (basic-block 2 2 (##.%x.2329 ##.%p.2330) ((##vcore.car (bruijn ##.expr.94.2327 1 0)) (##vcore.eq? #f (bruijn ##.%x.2329 0 0))) (if (bruijn ##.%p.2330 0 1) (basic-block 2 2 (##.%x.2331 ##.%p.2332) ((##vcore.cdr (bruijn ##.expr.94.2327 2 0)) (##vcore.null? (bruijn ##.%x.2331 0 0))) (if (bruijn ##.%p.2332 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k396) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda88) (bruijn ##.kk.38.541 23 1)) ((bruijn ##.%k.1383 11 0) #f))) ((bruijn ##.%k.1383 10 0) #f))) ((bruijn ##.%k.1383 9 0) #f))) ((bruijn ##.%k.1383 8 0) #f))) ((bruijn ##.%k.1383 7 0) #f))) ((bruijn ##.%k.1383 6 0) #f))) ((bruijn ##.%k.1383 5 0) #f))) ((bruijn ##.%k.1383 4 0) #f))) ((bruijn ##.%k.1383 3 0) #f))) ((bruijn ##.%k.1383 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k396, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda88, self)))),
      VGetArg(statics, 23-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2291 1 0) (basic-block 1 1 (##.%x.2314) ((##vcore.car (bruijn ##.args.540 14 1))) ((bruijn ##.equal?.214 18 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k395) 'int (bruijn ##.%x.2314 0 0))) ((bruijn ##.%k.1383 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k395, self)))),
      _V0int,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1371 0 0) (bruijn ##.%k.1361 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2312 1 0) (basic-block 1 1 (##.%x.2313) ((##vcore.car (bruijn ##.special.2293 12 0))) ((bruijn ##.equal?.214 31 1) (bruijn ##.%k.1375 1 0) (bruijn ##.%x.2313 0 0) (##string ##.string.2867))) ((bruijn ##.%k.1375 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 1)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D2867.sym, VPOINTER_OTHER));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.100.604 0 0) ((bruijn ##.%k.1372 3 0) (bruijn ##.x.100.604 0 0)) ((bruijn ##.%k.1372 3 0) (bruijn ##.special.2293 12 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VGetArg(statics, 12-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1373 0 0) ((bruijn ##.%k.1372 2 0) 'unsigned-int) (##qualified-call (vanity compiler ffi find-typedef) #t (bruijn ##.find-typedef.272 29 20) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k402) (bruijn ##.special.2293 11 0) (bruijn ##.table.535 28 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V0unsigned__int);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k402, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 28-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2312) ((##vcore.pair? (bruijn ##.special.2293 10 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k400) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k401)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k400, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k401, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2292 1 0) (basic-block 3 3 (##.special.2293 ##.expr.96.2294 ##.%p.2295) ((##vcore.car (bruijn ##.args.540 15 1)) (##vcore.cdr (bruijn ##.args.540 15 1)) (##vcore.pair? (bruijn ##.expr.96.2294 0 1))) (if (bruijn ##.%p.2295 0 2) (basic-block 2 2 (##.%x.2296 ##.%p.2297) ((##vcore.car (bruijn ##.expr.96.2294 1 1)) (##vcore.eq? 0 (bruijn ##.%x.2296 0 0))) (if (bruijn ##.%p.2297 0 1) (basic-block 2 2 (##.expr.97.2298 ##.%p.2299) ((##vcore.cdr (bruijn ##.expr.96.2294 2 1)) (##vcore.pair? (bruijn ##.expr.97.2298 0 0))) (if (bruijn ##.%p.2299 0 1) (basic-block 2 2 (##.%x.2300 ##.%p.2301) ((##vcore.car (bruijn ##.expr.97.2298 1 0)) (##vcore.eq? #f (bruijn ##.%x.2300 0 0))) (if (bruijn ##.%p.2301 0 1) (basic-block 2 2 (##.expr.98.2302 ##.%p.2303) ((##vcore.cdr (bruijn ##.expr.97.2298 2 0)) (##vcore.pair? (bruijn ##.expr.98.2302 0 0))) (if (bruijn ##.%p.2303 0 1) (basic-block 2 2 (##.%x.2304 ##.%p.2305) ((##vcore.car (bruijn ##.expr.98.2302 1 0)) (##vcore.eq? #f (bruijn ##.%x.2304 0 0))) (if (bruijn ##.%p.2305 0 1) (basic-block 2 2 (##.expr.99.2306 ##.%p.2307) ((##vcore.cdr (bruijn ##.expr.98.2302 2 0)) (##vcore.pair? (bruijn ##.expr.99.2306 0 0))) (if (bruijn ##.%p.2307 0 1) (basic-block 2 2 (##.%x.2308 ##.%p.2309) ((##vcore.car (bruijn ##.expr.99.2306 1 0)) (##vcore.eq? #f (bruijn ##.%x.2308 0 0))) (if (bruijn ##.%p.2309 0 1) (basic-block 2 2 (##.%x.2310 ##.%p.2311) ((##vcore.cdr (bruijn ##.expr.99.2306 2 0)) (##vcore.null? (bruijn ##.%x.2310 0 0))) (if (bruijn ##.%p.2311 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k399) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda89) (bruijn ##.kk.38.541 22 1)) ((bruijn ##.%k.1361 9 0) #f))) ((bruijn ##.%k.1361 8 0) #f))) ((bruijn ##.%k.1361 7 0) #f))) ((bruijn ##.%k.1361 6 0) #f))) ((bruijn ##.%k.1361 5 0) #f))) ((bruijn ##.%k.1361 4 0) #f))) ((bruijn ##.%k.1361 3 0) #f))) ((bruijn ##.%k.1361 2 0) #f))) ((bruijn ##.%k.1361 1 0) #f))) ((bruijn ##.%k.1361 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k399, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda89, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.227 19 14) (bruijn ##.%k.1358 1 0) (##string ##.string.2877) (bruijn ##.%x.1359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 14)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2877.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.238 18 25) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k404) (bruijn ##.list.224 18 11) (bruijn ##.args.540 14 1) '(##pair ##.pair.2882))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 25)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k404, self)))),
      VGetArg(statics, 18-1, 11),
      VGetArg(statics, 14-1, 1),
      VEncodePointer(&_V10_Dpair_D2882, VPOINTER_PAIR));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k403(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1357 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda90) (bruijn ##.kk.38.541 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 12-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda90, self)))),
      VGetArg(statics, 12-1, 1));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k397(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2292) ((##vcore.pair? (bruijn ##.args.540 13 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k398) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k403)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k398, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k403, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k393(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2291) ((##vcore.pair? (bruijn ##.args.540 12 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k394) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k397)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k394, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k397, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k389(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2290) ((##vcore.pair? (bruijn ##.args.540 11 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k390) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k393)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k390, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k393, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k385(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2289) ((##vcore.pair? (bruijn ##.args.540 10 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k386) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k389)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k386, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k389, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k381(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2288) ((##vcore.pair? (bruijn ##.args.540 9 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k382) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k385)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k382, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k385, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k377(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2287) ((##vcore.pair? (bruijn ##.args.540 8 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k378) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k381)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k378, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k381, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k373(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2286) ((##vcore.pair? (bruijn ##.args.540 7 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k374) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k377)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k374, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k377, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k369(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2285) ((##vcore.pair? (bruijn ##.args.540 6 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k370) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k373)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k370, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k373, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k365(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2284) ((##vcore.pair? (bruijn ##.args.540 5 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k366) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k369)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k366, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k369, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k361(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2283) ((##vcore.pair? (bruijn ##.args.540 4 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k362) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k365)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k362, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k365, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k357(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2282) ((##vcore.pair? (bruijn ##.args.540 3 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k358) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k361)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k358, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k361, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2281) ((##vcore.pair? (bruijn ##.args.540 2 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k354) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k357)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k354, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0k357, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.%k.1356 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda77))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537_V0lambda77, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D538, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.const?.606 0 1) ((bruijn ##.list.224 4 11) (bruijn ##.%k.1594 0 0) 'const (bruijn ##.type.607 0 2)) ((bruijn ##.%k.1594 0 0) (bruijn ##.type.607 0 2)))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 3,
      _var0,
      _V0const,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D539, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2515) ((##vcore.string? (bruijn ##.x.608 1 1))) (if (bruijn ##.%p.2515 0 0) (##vcore.string->symbol (bruijn ##.%k.1595 1 0) (bruijn ##.x.608 1 1)) ((bruijn ##.%k.1595 1 0) (bruijn ##.x.608 1 1))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.special.612 2 3) ((bruijn ##.%k.1601 0 0) (bruijn ##.special.612 2 3)) ((bruijn ##.%k.1601 0 0) 'int))
if(VDecodeBool(
statics->up->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.append-const.538) #f (bruijn ##.append-const.538 5 1) (bruijn ##.%k.1597 3 0) (bruijn ##.const.613 3 4) (bruijn ##.%x.1599 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[4];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D538(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type ##.decide.537) #f (bruijn ##.decide.537 4 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k407) (bruijn ##.%x.1600 0 0) (bruijn ##.longs.614 2 5) (bruijn ##.short.615 2 6) (bruijn ##.unsigned.616 2 7) (bruijn ##.signed.617 2 8))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k407, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[5];
    VWORD _arg3 = 
      statics->up->vars[6];
    VWORD _arg4 = 
      statics->up->vars[7];
    VWORD _arg5 = 
      statics->up->vars[8];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2520 1 0) ((bruijn ##.%k.1631 0 0) (bruijn ##.%p.2520 1 0)) (basic-block 1 1 (##.%r.2544) ((##vcore.eq? (bruijn ##.x.37.2517 3 0) 'volatile)) ((bruijn ##.%k.1631 1 0) (bruijn ##.%r.2544 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      _V0volatile);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2522 1 0) ((bruijn ##.%k.1626 0 0) (bruijn ##.%p.2522 1 0)) (basic-block 1 1 (##.%p.2540) ((##vcore.eq? (bruijn ##.x.37.2517 5 0) 'extern)) (if (bruijn ##.%p.2540 0 0) ((bruijn ##.%k.1626 1 0) (bruijn ##.%p.2540 0 0)) (basic-block 1 1 (##.%p.2541) ((##vcore.eq? (bruijn ##.x.37.2517 6 0) 'typedef)) (if (bruijn ##.%p.2541 0 0) ((bruijn ##.%k.1626 2 0) (bruijn ##.%p.2541 0 0)) (basic-block 1 1 (##.%p.2542) ((##vcore.eq? (bruijn ##.x.37.2517 7 0) 'register)) (if (bruijn ##.%p.2542 0 0) ((bruijn ##.%k.1626 3 0) (bruijn ##.%p.2542 0 0)) (basic-block 1 1 (##.%r.2543) ((##vcore.eq? (bruijn ##.x.37.2517 8 0) 'auto)) ((bruijn ##.%k.1626 4 0) (bruijn ##.%r.2543 0 0))))))))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      _V0extern);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      _V0typedef);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      _V0register);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      _V0auto);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2523 1 0) ((bruijn ##.compiler-error.227 13 14) (bruijn ##.%k.1612 0 0) (##string ##.string.2883)) (basic-block 1 1 (##.%r.2527) ((##vcore.car (bruijn ##.t.610 9 1))) ((bruijn ##.%k.1612 1 0) (bruijn ##.%r.2527 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 14)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2883.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.storage.611 8 2) (basic-block 1 1 (##.%x.2526) ((##vcore.car (bruijn ##.t.610 9 1))) ((bruijn ##.compiler-error.227 14 14) (bruijn ##.%k.1609 1 0) (##string ##.string.2884) (bruijn ##.storage.611 9 2) (bruijn ##.%x.2526 0 0))) ((bruijn ##.%k.1609 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 14)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2884.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 2),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k415(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2524 ##.%x.2525) ((##vcore.cdr (bruijn ##.t.610 8 1)) (##vcore.car (bruijn ##.t.610 8 1))) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 9 0) (bruijn ##.%k.1597 8 0) (bruijn ##.%x.2524 0 0) (bruijn ##.%x.2525 0 1) (bruijn ##.special.612 8 3) (bruijn ##.const.613 8 4) (bruijn ##.longs.614 8 5) (bruijn ##.short.615 8 6) (bruijn ##.unsigned.616 8 7) (bruijn ##.signed.617 8 8)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k413(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k414) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k415))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k414, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k415, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1606 0 0) (basic-block 1 1 (##.%p.2523) ((##vcore.not (bruijn ##.storage-declaration?.536 10 3))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k412) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k413))) (basic-block 1 1 (##.%p.2528) ((##vcore.eq? (bruijn ##.x.37.2517 5 0) 'long)) (if (bruijn ##.%p.2528 0 0) (basic-block 2 2 (##.%x.2529 ##.%x.2530) ((##vcore.cdr (bruijn ##.t.610 8 1)) (##vcore.+ (bruijn ##.longs.614 8 5) 1)) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 9 0) (bruijn ##.%k.1597 8 0) (bruijn ##.%x.2529 0 0) (bruijn ##.storage.611 8 2) (bruijn ##.special.612 8 3) (bruijn ##.const.613 8 4) (bruijn ##.%x.2530 0 1) (bruijn ##.short.615 8 6) (bruijn ##.unsigned.616 8 7) (bruijn ##.signed.617 8 8))) (basic-block 1 1 (##.%p.2531) ((##vcore.eq? (bruijn ##.x.37.2517 6 0) 'short)) (if (bruijn ##.%p.2531 0 0) (basic-block 1 1 (##.%x.2532) ((##vcore.cdr (bruijn ##.t.610 9 1))) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 10 0) (bruijn ##.%k.1597 9 0) (bruijn ##.%x.2532 0 0) (bruijn ##.storage.611 9 2) (bruijn ##.special.612 9 3) (bruijn ##.const.613 9 4) (bruijn ##.longs.614 9 5) #t (bruijn ##.unsigned.616 9 7) (bruijn ##.signed.617 9 8))) (basic-block 1 1 (##.%p.2533) ((##vcore.eq? (bruijn ##.x.37.2517 7 0) 'unsigned)) (if (bruijn ##.%p.2533 0 0) (basic-block 1 1 (##.%x.2534) ((##vcore.cdr (bruijn ##.t.610 10 1))) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 11 0) (bruijn ##.%k.1597 10 0) (bruijn ##.%x.2534 0 0) (bruijn ##.storage.611 10 2) (bruijn ##.special.612 10 3) (bruijn ##.const.613 10 4) (bruijn ##.longs.614 10 5) (bruijn ##.short.615 10 6) #t (bruijn ##.signed.617 10 8))) (basic-block 1 1 (##.%p.2535) ((##vcore.eq? (bruijn ##.x.37.2517 8 0) 'signed)) (if (bruijn ##.%p.2535 0 0) (basic-block 1 1 (##.%x.2536) ((##vcore.cdr (bruijn ##.t.610 11 1))) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 12 0) (bruijn ##.%k.1597 11 0) (bruijn ##.%x.2536 0 0) (bruijn ##.storage.611 11 2) (bruijn ##.special.612 11 3) (bruijn ##.const.613 11 4) (bruijn ##.longs.614 11 5) (bruijn ##.short.615 11 6) (bruijn ##.unsigned.616 11 7) #t)) (if (bruijn ##.special.612 10 3) (basic-block 1 1 (##.%x.2537) ((##vcore.car (bruijn ##.t.610 11 1))) ((bruijn ##.compiler-error.227 16 14) (bruijn ##.%k.1597 11 0) (##string ##.string.2885) (bruijn ##.%x.2537 0 0) (bruijn ##.special.612 11 3))) (basic-block 2 2 (##.%x.2538 ##.%x.2539) ((##vcore.cdr (bruijn ##.t.610 11 1)) (##vcore.car (bruijn ##.t.610 11 1))) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 12 0) (bruijn ##.%k.1597 11 0) (bruijn ##.%x.2538 0 0) (bruijn ##.storage.611 11 2) (bruijn ##.%x.2539 0 1) (bruijn ##.const.613 11 4) (bruijn ##.longs.614 11 5) (bruijn ##.short.615 11 6) (bruijn ##.unsigned.616 11 7) (bruijn ##.signed.617 11 8)))))))))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k412, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k413, self)))));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      _V0long);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 5),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 8-1, 4);
    VWORD _arg5 = 
      self->vars[1];
    VWORD _arg6 = 
      VGetArg(statics, 8-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 8-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 8-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      _V0short);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 9-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 9-1, 5);
    VWORD _arg6 = 
      VEncodeBool(true);
    VWORD _arg7 = 
      VGetArg(statics, 9-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 9-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      _V0unsigned);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      self->vars[0];
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
      VEncodeBool(true);
    VWORD _arg8 = 
      VGetArg(statics, 10-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      _V0signed);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 11-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 11-1, 5);
    VWORD _arg6 = 
      VGetArg(statics, 11-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 11-1, 7);
    VWORD _arg8 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
if(VDecodeBool(
VGetArg(statics, 10-1, 3))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 14)), 4,
      VGetArg(statics, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D2885.sym, VPOINTER_OTHER),
      self->vars[0],
      VGetArg(statics, 11-1, 3));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      self->vars[1];
    VWORD _arg4 = 
      VGetArg(statics, 11-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 11-1, 5);
    VWORD _arg6 = 
      VGetArg(statics, 11-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 11-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 11-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
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
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1604 0 0) (basic-block 1 1 (##.%x.2521) ((##vcore.cdr (bruijn ##.t.610 5 1))) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 6 0) (bruijn ##.%k.1597 5 0) (bruijn ##.%x.2521 0 0) (bruijn ##.storage.611 5 2) (bruijn ##.special.612 5 3) (bruijn ##.const.613 5 4) (bruijn ##.longs.614 5 5) (bruijn ##.short.615 5 6) (bruijn ##.unsigned.616 5 7) (bruijn ##.signed.617 5 8))) (basic-block 1 1 (##.%p.2522) ((##vcore.eq? (bruijn ##.x.37.2517 3 0) 'static)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k410) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k411))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 5-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 5);
    VWORD _arg6 = 
      VGetArg(statics, 5-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 5-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 5-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      _V0static);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k410, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k411, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2516) ((##vcore.null? (bruijn ##.t.610 1 1))) (if (bruijn ##.%p.2516 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k405) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k406)) (basic-block 2 2 (##.x.37.2517 ##.%p.2518) ((##vcore.car (bruijn ##.t.610 2 1)) (##vcore.eq? (bruijn ##.x.37.2517 0 0) 'const)) (if (bruijn ##.%p.2518 0 1) (basic-block 1 1 (##.%x.2519) ((##vcore.cdr (bruijn ##.t.610 3 1))) (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 4 0) (bruijn ##.%k.1597 3 0) (bruijn ##.%x.2519 0 0) (bruijn ##.storage.611 3 2) (bruijn ##.special.612 3 3) #t (bruijn ##.longs.614 3 5) (bruijn ##.short.615 3 6) (bruijn ##.unsigned.616 3 7) (bruijn ##.signed.617 3 8))) (basic-block 1 1 (##.%p.2520) ((##vcore.eq? (bruijn ##.x.37.2517 1 0) 'restrict)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k408) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k409)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k405, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k406, self)))));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0const);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[3];
    VWORD _arg4 = 
      VEncodeBool(true);
    VWORD _arg5 = 
      statics->up->up->vars[5];
    VWORD _arg6 = 
      statics->up->up->vars[6];
    VWORD _arg7 = 
      statics->up->up->vars[7];
    VWORD _arg8 = 
      statics->up->up->vars[8];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0restrict);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k408, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609_V0k409, self)))));
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.loop.609) #f (bruijn ##.loop.609 1 0) (bruijn ##.%k.1355 3 0) (bruijn ##.%x.1632 0 0) #f #f #f 0 #f #f #f)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
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
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D538") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D539")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609")) ((bruijn ##.map.238 4 25) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k416) (bruijn ##.maybe-string->symbol.539 1 2) (bruijn ##.t.534 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D537, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D538, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D539, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D609, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[25]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k416, self)))),
      statics->vars[2],
      statics->up->vars[1]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2550) ((##vcore.not (bruijn ##.%x.1645 1 0))) ((bruijn ##.%k.1644 2 0) (bruijn ##.%r.2550 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2545 1 0) ((bruijn ##.memv.222 4 9) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k418) (bruijn ##.special.619 2 1) '(##pair ##.pair.2889)) ((bruijn ##.%k.1644 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k418, self)))),
      statics->up->vars[1],
      VEncodePointer(&_V10_Dpair_D2889, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2549) ((##vcore.eq? (bruijn ##.%x.1641 1 0) (bruijn ##.special.619 10 1))) ((bruijn ##.%k.1640 2 0) (bruijn ##.%r.2549 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2547 1 0) ((bruijn ##.cadar.235 10 22) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k422) (bruijn ##.table.622 4 1)) ((bruijn ##.%k.1640 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k422, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1637 0 0) ((bruijn ##.caddar.236 10 23) (bruijn ##.%k.1635 4 0) (bruijn ##.table.622 4 1)) (basic-block 1 1 (##.%x.2548) ((##vcore.cdr (bruijn ##.table.622 5 1))) (##qualified-call (vanity compiler ffi find-typedef ##.loop.621) #f (bruijn ##.loop.621 6 0) (bruijn ##.%k.1635 5 0) (bruijn ##.%x.2548 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 23)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2547) ((##vcore.eq? (bruijn ##.%x.1642 1 0) 'typedef)) ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k421) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k423)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0typedef);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k421, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k423, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2546) ((##vcore.null? (bruijn ##.table.622 1 1))) (if (bruijn ##.%p.2546 0 0) ((bruijn ##.compiler-error.227 7 14) (bruijn ##.%k.1635 1 0) (##string ##.string.2890) (bruijn ##.special.619 5 1)) ((bruijn ##.caar.237 7 24) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k420) (bruijn ##.table.622 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2890.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621_V0k420, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1634 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621")) (##qualified-call (vanity compiler ffi find-typedef ##.loop.621) #f (bruijn ##.loop.621 0 0) (bruijn ##.%k.1633 3 0) (bruijn ##.table.620 3 2))) ((bruijn ##.%k.1633 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D621(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (basic-block 1 1 (##.%p.2545) ((##vcore.symbol? (bruijn ##.special.619 1 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k417) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k419)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k417, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k419, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1655 0 0) (bruijn ##.%k.1651 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1656 0 0) (bruijn ##.y.2555 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1652 0 0) (basic-block 2 2 (##.expr.4.2553 ##.%p.2554) ((##vcore.cdr (bruijn ##.x.630 6 1)) (##vcore.pair? (bruijn ##.expr.4.2553 0 0))) (if (bruijn ##.%p.2554 0 1) (basic-block 3 3 (##.y.2555 ##.%x.2556 ##.%p.2557) ((##vcore.car (bruijn ##.expr.4.2553 1 0)) (##vcore.cdr (bruijn ##.expr.4.2553 1 0)) (##vcore.null? (bruijn ##.%x.2556 0 1))) (if (bruijn ##.%p.2557 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k426) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda92) (bruijn ##.kk.1.631 6 1)) ((bruijn ##.%k.1651 4 0) #f))) ((bruijn ##.%k.1651 3 0) #f))) ((bruijn ##.%k.1651 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k426, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda92, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2551 1 0) (basic-block 1 1 (##.%x.2552) ((##vcore.car (bruijn ##.x.630 4 1))) ((bruijn ##.equal?.214 8 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k425) 'const (bruijn ##.%x.2552 0 0))) ((bruijn ##.%k.1651 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k425, self)))),
      _V0const,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1649 0 0) (bruijn ##.x.630 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k427(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1648 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda93) (bruijn ##.kk.1.631 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda93, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2551) ((##vcore.pair? (bruijn ##.x.630 2 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k424) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k427)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k424, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0k427, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.1647 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda91))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626_V0lambda91, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2560) ((##vcore.cons (bruijn ##.%x.1661 3 0) (bruijn ##.%x.1662 1 0))) ((bruijn ##.%k.1659 10 0) (bruijn ##.%r.2560 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2559) ((##vcore.cdr (bruijn ##.args.636 8 1))) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.627) #f (bruijn ##.reduce-args.627 9 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k434) (bruijn ##.%x.2559 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k434, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1682 0 0) (bruijn ##.%k.1677 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.224 19 11) (bruijn ##.%k.1683 0 0) 'pointer (bruijn ##.rest.2578 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 11)), 3,
      _var0,
      _V0pointer,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1678 0 0) (basic-block 2 2 (##.expr.8.2573 ##.%p.2574) ((##vcore.cdr (bruijn ##.arg.637 6 0)) (##vcore.pair? (bruijn ##.expr.8.2573 0 0))) (if (bruijn ##.%p.2574 0 1) (basic-block 3 3 (##.len.2575 ##.expr.9.2576 ##.%p.2577) ((##vcore.car (bruijn ##.expr.8.2573 1 0)) (##vcore.cdr (bruijn ##.expr.8.2573 1 0)) (##vcore.pair? (bruijn ##.expr.9.2576 0 1))) (if (bruijn ##.%p.2577 0 2) (basic-block 3 3 (##.rest.2578 ##.%x.2579 ##.%p.2580) ((##vcore.car (bruijn ##.expr.9.2576 1 1)) (##vcore.cdr (bruijn ##.expr.9.2576 1 1)) (##vcore.null? (bruijn ##.%x.2579 0 1))) (if (bruijn ##.%p.2580 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k437) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda95) (bruijn ##.kk.5.638 7 1)) ((bruijn ##.%k.1677 5 0) #f))) ((bruijn ##.%k.1677 4 0) #f))) ((bruijn ##.%k.1677 3 0) #f))) ((bruijn ##.%k.1677 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k437, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda95, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2561 1 0) (basic-block 1 1 (##.%x.2572) ((##vcore.car (bruijn ##.arg.637 4 0))) ((bruijn ##.equal?.214 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k436) 'array (bruijn ##.%x.2572 0 0))) ((bruijn ##.%k.1677 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k436, self)))),
      _V0array,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1672 0 0) (bruijn ##.%k.1667 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.224 20 11) (bruijn ##.%k.1673 0 0) 'static-pointer (bruijn ##.len.2566 2 0) (bruijn ##.rest.2569 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 11)), 4,
      _var0,
      _V0static__pointer,
      statics->up->vars[0],
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1668 0 0) (basic-block 2 2 (##.expr.11.2564 ##.%p.2565) ((##vcore.cdr (bruijn ##.arg.637 7 0)) (##vcore.pair? (bruijn ##.expr.11.2564 0 0))) (if (bruijn ##.%p.2565 0 1) (basic-block 3 3 (##.len.2566 ##.expr.12.2567 ##.%p.2568) ((##vcore.car (bruijn ##.expr.11.2564 1 0)) (##vcore.cdr (bruijn ##.expr.11.2564 1 0)) (##vcore.pair? (bruijn ##.expr.12.2567 0 1))) (if (bruijn ##.%p.2568 0 2) (basic-block 3 3 (##.rest.2569 ##.%x.2570 ##.%p.2571) ((##vcore.car (bruijn ##.expr.12.2567 1 1)) (##vcore.cdr (bruijn ##.expr.12.2567 1 1)) (##vcore.null? (bruijn ##.%x.2570 0 1))) (if (bruijn ##.%p.2571 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k441) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda96) (bruijn ##.kk.5.638 8 1)) ((bruijn ##.%k.1667 5 0) #f))) ((bruijn ##.%k.1667 4 0) #f))) ((bruijn ##.%k.1667 3 0) #f))) ((bruijn ##.%k.1667 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k441, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda96, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2562 1 0) (basic-block 1 1 (##.%x.2563) ((##vcore.car (bruijn ##.arg.637 5 0))) ((bruijn ##.equal?.214 15 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k440) 'static-array (bruijn ##.%x.2563 0 0))) ((bruijn ##.%k.1667 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k440, self)))),
      _V0static__array,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1665 0 0) (bruijn ##.arg.637 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k442(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1664 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda97) (bruijn ##.kk.5.638 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda97, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k438(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2562) ((##vcore.pair? (bruijn ##.arg.637 3 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k439) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k442)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k439, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k442, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2561) ((##vcore.pair? (bruijn ##.arg.637 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k435) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k438)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k435, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k438, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k433) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda94))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k433, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0lambda94, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.220 9 7) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k432) (bruijn ##.%x.1686 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k432, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare) #t (bruijn ##.reduce-declare.273 7 21) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k431) (bruijn ##.%x.1687 1 0) (bruijn ##.%x.1688 0 0) (bruijn ##.table.625 6 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k431, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadar.235 7 22) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k430) (bruijn ##.args.636 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k430, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) #t (bruijn ##.reduce-type.271 5 19) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k429) (bruijn ##.%x.1689 0 0) (bruijn ##.table.625 4 3) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k429, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->up->vars[3];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2558) ((##vcore.null? (bruijn ##.args.636 1 1))) (if (bruijn ##.%p.2558 0 0) ((bruijn ##.%k.1659 1 0) '()) ((bruijn ##.caar.237 5 24) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k428) (bruijn ##.args.636 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627_V0k428, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1691 0 0) ((bruijn ##.%k.1690 1 0) '()) ((bruijn ##.%k.1690 1 0) (bruijn ##.args.650 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.equal?.214 4 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628_V0k443) (bruijn ##.args.650 0 1) '(##pair ##.pair.2895))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628_V0k443, self)))),
      _var1,
      VEncodePointer(&_V10_Dpair_D2895, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2663 1 1) (basic-block 2 2 (##.%x.2672 ##.%r.2673) ((##vcore.car (bruijn ##.decl.652 6 2)) (##vcore.blob=? (##string ##.string.2896) (bruijn ##.%x.2672 0 0))) ((bruijn ##.%k.1801 1 0) (bruijn ##.%r.2673 0 1))) ((bruijn ##.%k.1801 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2896.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1794 0 0) (bruijn ##.%k.1790 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2669 ##.%x.2670 ##.%r.2671) ((##vcore.cons (bruijn ##.%x.1798 1 0) '()) (##vcore.cons (bruijn ##.expr.2666 3 0) (bruijn ##.%x.2669 0 0)) (##vcore.cons 'function (bruijn ##.%x.2670 0 1))) ((bruijn ##.%k.1795 2 0) (bruijn ##.%r.2671 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0function,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.626) #f (bruijn ##.drop-const.626 9 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k448) (bruijn ##.ret.651 8 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k448, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1791 0 0) (basic-block 2 2 (##.expr.16.2664 ##.%p.2665) ((##vcore.cdr (bruijn ##.decl.652 6 2)) (##vcore.pair? (bruijn ##.expr.16.2664 0 0))) (if (bruijn ##.%p.2665 0 1) (basic-block 3 3 (##.expr.2666 ##.%x.2667 ##.%p.2668) ((##vcore.car (bruijn ##.expr.16.2664 1 0)) (##vcore.cdr (bruijn ##.expr.16.2664 1 0)) (##vcore.null? (bruijn ##.%x.2667 0 1))) (if (bruijn ##.%p.2668 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k447) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda99) (bruijn ##.kk.13.653 6 1)) ((bruijn ##.%k.1790 4 0) #f))) ((bruijn ##.%k.1790 3 0) #f))) ((bruijn ##.%k.1790 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k447, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda99, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2581 1 0) (basic-block 2 2 (##.%x.2662 ##.%p.2663) ((##vcore.car (bruijn ##.decl.652 4 2)) (##vcore.string? (bruijn ##.%x.2662 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k445) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k446))) ((bruijn ##.%k.1790 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k445, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k446, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2636 1 1) (basic-block 2 2 (##.%x.2660 ##.%r.2661) ((##vcore.car (bruijn ##.decl.652 7 2)) (##vcore.blob=? (##string ##.string.2896) (bruijn ##.%x.2660 0 0))) ((bruijn ##.%k.1786 1 0) (bruijn ##.%r.2661 0 1))) ((bruijn ##.%k.1786 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2896.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2645 1 1) (basic-block 2 2 (##.%x.2658 ##.%r.2659) ((##vcore.car (bruijn ##.expr.20.2642 3 0)) (##vcore.blob=? (##string ##.string.2897) (bruijn ##.%x.2658 0 0))) ((bruijn ##.%k.1782 1 0) (bruijn ##.%r.2659 0 1))) ((bruijn ##.%k.1782 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2897.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1761 0 0) (bruijn ##.%k.1753 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2650 ##.%x.2651 ##.%r.2652) ((##vcore.cons (bruijn ##.%x.1765 4 0) (bruijn ##.%x.1766 1 0)) (##vcore.cons (bruijn ##.expr.2639 13 0) (bruijn ##.%x.2650 0 0)) (##vcore.cons 'function (bruijn ##.%x.2651 0 1))) ((bruijn ##.%k.1762 5 0) (bruijn ##.%r.2652 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0function,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.238 23 25) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k459) (bruijn ##.drop-const.626 20 0) (bruijn ##.%x.1767 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 25)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k459, self)))),
      VGetArg(statics, 20-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.627) #f (bruijn ##.reduce-args.627 19 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k458) (bruijn ##.%x.1768 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k458, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.unvoid-params.628) #f (bruijn ##.unvoid-params.628 18 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k457) (bruijn ##.args.671 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k457, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.626) #f (bruijn ##.drop-const.626 17 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k456) (bruijn ##.ret.651 16 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k456, self))));
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2647) ((##vcore.null? (bruijn ##.tail-expr.670 1 0))) (if (bruijn ##.%p.2647 0 0) (basic-block 2 2 (##.%x.2648 ##.%p.2649) ((##vcore.cdr (bruijn ##.expr.19.2640 7 1)) (##vcore.null? (bruijn ##.%x.2648 0 0))) (if (bruijn ##.%p.2649 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k455) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda101) (bruijn ##.kk.13.653 14 1)) ((bruijn ##.%k.1753 11 0) #f))) ((bruijn ##.%k.1753 10 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k455, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda101, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.23.664 5 1) (bruijn ##.%k.1778 1 0) (bruijn ##.expr.25.666 3 1) (bruijn ##.%x.1779 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2654 1 1) ((bruijn ##.reverse.219 21 6) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k461) (bruijn ##.args.22.667 2 2)) ((bruijn ##.%k.1778 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k461, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.23.664 7 1) (bruijn ##.%k.1773 2 0) (bruijn ##.expr.25.666 5 1) (bruijn ##.%x.1774 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k463(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.219 23 6) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k464) (bruijn ##.args.22.667 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k464, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.args.2655 ##.%x.2656 ##.%x.2657) ((##vcore.car (bruijn ##.expr.25.666 4 1)) (##vcore.cdr (bruijn ##.expr.25.666 4 1)) (##vcore.cons (bruijn ##.args.2655 0 0) (bruijn ##.args.22.667 4 2))) ((bruijn ##.kk.24.668 1 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k463) (bruijn ##.%x.2656 0 1) (bruijn ##.%x.2657 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k463, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1772 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda104))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda104, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k462(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1771 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda103) (bruijn ##.loop.665 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0lambda103, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2653 ##.%p.2654) ((##vcore.pair? (bruijn ##.expr.25.666 1 1)) (##vcore.not (bruijn ##.%x.2653 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k460) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k462)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k460, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665_V0k462, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.629 ##.loop.665) #f (bruijn ##.loop.665 0 0) (bruijn ##.%k.1770 1 0) (bruijn ##.expr.21.2646 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V10_Dloop_D665(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1758 0 0) (basic-block 1 1 (##.expr.21.2646) ((##vcore.cdr (bruijn ##.expr.20.2642 3 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda100) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda102))) ((bruijn ##.%k.1753 7 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda102, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1754 0 0) (basic-block 2 2 (##.expr.18.2637 ##.%p.2638) ((##vcore.cdr (bruijn ##.decl.652 7 2)) (##vcore.pair? (bruijn ##.expr.18.2637 0 0))) (if (bruijn ##.%p.2638 0 1) (basic-block 3 3 (##.expr.2639 ##.expr.19.2640 ##.%p.2641) ((##vcore.car (bruijn ##.expr.18.2637 1 0)) (##vcore.cdr (bruijn ##.expr.18.2637 1 0)) (##vcore.pair? (bruijn ##.expr.19.2640 0 1))) (if (bruijn ##.%p.2641 0 2) (basic-block 2 2 (##.expr.20.2642 ##.%p.2643) ((##vcore.car (bruijn ##.expr.19.2640 1 1)) (##vcore.pair? (bruijn ##.expr.20.2642 0 0))) (if (bruijn ##.%p.2643 0 1) (basic-block 2 2 (##.%x.2644 ##.%p.2645) ((##vcore.car (bruijn ##.expr.20.2642 1 0)) (##vcore.string? (bruijn ##.%x.2644 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k453) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k454))) ((bruijn ##.%k.1753 5 0) #f))) ((bruijn ##.%k.1753 4 0) #f))) ((bruijn ##.%k.1753 3 0) #f))) ((bruijn ##.%k.1753 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k453, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k454, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2582 1 0) (basic-block 2 2 (##.%x.2635 ##.%p.2636) ((##vcore.car (bruijn ##.decl.652 5 2)) (##vcore.string? (bruijn ##.%x.2635 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k451) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k452))) ((bruijn ##.%k.1753 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k451, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k452, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2624 1 1) (basic-block 2 2 (##.%x.2633 ##.%r.2634) ((##vcore.car (bruijn ##.decl.652 8 2)) (##vcore.blob=? (##string ##.string.2898) (bruijn ##.%x.2633 0 0))) ((bruijn ##.%k.1749 1 0) (bruijn ##.%r.2634 0 1))) ((bruijn ##.%k.1749 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2898.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1745 0 0) (bruijn ##.%k.1740 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.227 15 14) (bruijn ##.%k.1746 0 0) (##string ##.string.2899) (bruijn ##.expr.2627 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2899.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1741 0 0) (basic-block 2 2 (##.expr.27.2625 ##.%p.2626) ((##vcore.cdr (bruijn ##.decl.652 8 2)) (##vcore.pair? (bruijn ##.expr.27.2625 0 0))) (if (bruijn ##.%p.2626 0 1) (basic-block 3 3 (##.expr.2627 ##.expr.28.2628 ##.%p.2629) ((##vcore.car (bruijn ##.expr.27.2625 1 0)) (##vcore.cdr (bruijn ##.expr.27.2625 1 0)) (##vcore.pair? (bruijn ##.expr.28.2628 0 1))) (if (bruijn ##.%p.2629 0 2) (basic-block 3 3 (##.params.2630 ##.%x.2631 ##.%p.2632) ((##vcore.car (bruijn ##.expr.28.2628 1 1)) (##vcore.cdr (bruijn ##.expr.28.2628 1 1)) (##vcore.null? (bruijn ##.%x.2631 0 1))) (if (bruijn ##.%p.2632 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k469) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda105) (bruijn ##.kk.13.653 9 1)) ((bruijn ##.%k.1740 5 0) #f))) ((bruijn ##.%k.1740 4 0) #f))) ((bruijn ##.%k.1740 3 0) #f))) ((bruijn ##.%k.1740 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k469, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda105, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2583 1 0) (basic-block 2 2 (##.%x.2623 ##.%p.2624) ((##vcore.car (bruijn ##.decl.652 6 2)) (##vcore.string? (bruijn ##.%x.2623 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k467) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k468))) ((bruijn ##.%k.1740 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k467, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k468, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2615 1 1) (basic-block 2 2 (##.%x.2621 ##.%r.2622) ((##vcore.car (bruijn ##.decl.652 9 2)) (##vcore.blob=? (##string ##.string.2900) (bruijn ##.%x.2621 0 0))) ((bruijn ##.%k.1736 1 0) (bruijn ##.%r.2622 0 1))) ((bruijn ##.%k.1736 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2900.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1731 0 0) (bruijn ##.%k.1727 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.629) #f (bruijn ##.reduce-declare-loop.629 13 3) (bruijn ##.%k.1732 1 0) (bruijn ##.%x.1733 0 0) (bruijn ##.expr.2618 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.224 15 11) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k475) 'pointer (bruijn ##.ret.651 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k475, self)))),
      _V0pointer,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1728 0 0) (basic-block 2 2 (##.expr.30.2616 ##.%p.2617) ((##vcore.cdr (bruijn ##.decl.652 9 2)) (##vcore.pair? (bruijn ##.expr.30.2616 0 0))) (if (bruijn ##.%p.2617 0 1) (basic-block 3 3 (##.expr.2618 ##.%x.2619 ##.%p.2620) ((##vcore.car (bruijn ##.expr.30.2616 1 0)) (##vcore.cdr (bruijn ##.expr.30.2616 1 0)) (##vcore.null? (bruijn ##.%x.2619 0 1))) (if (bruijn ##.%p.2620 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k474) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda106) (bruijn ##.kk.13.653 9 1)) ((bruijn ##.%k.1727 4 0) #f))) ((bruijn ##.%k.1727 3 0) #f))) ((bruijn ##.%k.1727 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k474, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda106, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2584 1 0) (basic-block 2 2 (##.%x.2614 ##.%p.2615) ((##vcore.car (bruijn ##.decl.652 7 2)) (##vcore.string? (bruijn ##.%x.2614 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k472) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k473))) ((bruijn ##.%k.1727 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k472, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k473, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2603 1 1) (basic-block 2 2 (##.%x.2612 ##.%r.2613) ((##vcore.car (bruijn ##.decl.652 10 2)) (##vcore.blob=? (##string ##.string.2901) (bruijn ##.%x.2612 0 0))) ((bruijn ##.%k.1723 1 0) (bruijn ##.%r.2613 0 1))) ((bruijn ##.%k.1723 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2901.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1718 0 0) (bruijn ##.%k.1713 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.629) #f (bruijn ##.reduce-declare-loop.629 15 3) (bruijn ##.%k.1719 1 0) (bruijn ##.%x.1720 0 0) (bruijn ##.expr.2606 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.224 17 11) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k481) 'array (bruijn ##.len.2609 1 0) (bruijn ##.ret.651 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 11)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k481, self)))),
      _V0array,
      statics->vars[0],
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1714 0 0) (basic-block 2 2 (##.expr.32.2604 ##.%p.2605) ((##vcore.cdr (bruijn ##.decl.652 10 2)) (##vcore.pair? (bruijn ##.expr.32.2604 0 0))) (if (bruijn ##.%p.2605 0 1) (basic-block 3 3 (##.expr.2606 ##.expr.33.2607 ##.%p.2608) ((##vcore.car (bruijn ##.expr.32.2604 1 0)) (##vcore.cdr (bruijn ##.expr.32.2604 1 0)) (##vcore.pair? (bruijn ##.expr.33.2607 0 1))) (if (bruijn ##.%p.2608 0 2) (basic-block 3 3 (##.len.2609 ##.%x.2610 ##.%p.2611) ((##vcore.car (bruijn ##.expr.33.2607 1 1)) (##vcore.cdr (bruijn ##.expr.33.2607 1 1)) (##vcore.null? (bruijn ##.%x.2610 0 1))) (if (bruijn ##.%p.2611 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k480) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda107) (bruijn ##.kk.13.653 11 1)) ((bruijn ##.%k.1713 5 0) #f))) ((bruijn ##.%k.1713 4 0) #f))) ((bruijn ##.%k.1713 3 0) #f))) ((bruijn ##.%k.1713 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k480, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda107, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2585 1 0) (basic-block 2 2 (##.%x.2602 ##.%p.2603) ((##vcore.car (bruijn ##.decl.652 8 2)) (##vcore.string? (bruijn ##.%x.2602 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k478) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k479))) ((bruijn ##.%k.1713 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k478, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k479, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2591 1 1) (basic-block 2 2 (##.%x.2600 ##.%r.2601) ((##vcore.car (bruijn ##.decl.652 11 2)) (##vcore.blob=? (##string ##.string.2902) (bruijn ##.%x.2600 0 0))) ((bruijn ##.%k.1709 1 0) (bruijn ##.%r.2601 0 1))) ((bruijn ##.%k.1709 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    self->vars[1] = _VBasic_VBlobEqv2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2902.sym, VPOINTER_OTHER),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1704 0 0) (bruijn ##.%k.1699 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.629) #f (bruijn ##.reduce-declare-loop.629 16 3) (bruijn ##.%k.1705 1 0) (bruijn ##.%x.1706 0 0) (bruijn ##.expr.2594 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.224 18 11) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k487) 'static-array (bruijn ##.len.2597 1 0) (bruijn ##.ret.651 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 11)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k487, self)))),
      _V0static__array,
      statics->vars[0],
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1700 0 0) (basic-block 2 2 (##.expr.35.2592 ##.%p.2593) ((##vcore.cdr (bruijn ##.decl.652 11 2)) (##vcore.pair? (bruijn ##.expr.35.2592 0 0))) (if (bruijn ##.%p.2593 0 1) (basic-block 3 3 (##.expr.2594 ##.expr.36.2595 ##.%p.2596) ((##vcore.car (bruijn ##.expr.35.2592 1 0)) (##vcore.cdr (bruijn ##.expr.35.2592 1 0)) (##vcore.pair? (bruijn ##.expr.36.2595 0 1))) (if (bruijn ##.%p.2596 0 2) (basic-block 3 3 (##.len.2597 ##.%x.2598 ##.%p.2599) ((##vcore.car (bruijn ##.expr.36.2595 1 1)) (##vcore.cdr (bruijn ##.expr.36.2595 1 1)) (##vcore.null? (bruijn ##.%x.2598 0 1))) (if (bruijn ##.%p.2599 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k486) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda108) (bruijn ##.kk.13.653 12 1)) ((bruijn ##.%k.1699 5 0) #f))) ((bruijn ##.%k.1699 4 0) #f))) ((bruijn ##.%k.1699 3 0) #f))) ((bruijn ##.%k.1699 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k486, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda108, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2586 1 0) (basic-block 2 2 (##.%x.2590 ##.%p.2591) ((##vcore.car (bruijn ##.decl.652 9 2)) (##vcore.string? (bruijn ##.%x.2590 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k484) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k485))) ((bruijn ##.%k.1699 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k484, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k485, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k490(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.213 12 0) (bruijn ##.%k.1693 7 0) (##string ##.string.2713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D2713.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.1694 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k490))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k490, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2587 ##.%x.2588 ##.%r.2589) ((##vcore.cons (bruijn ##.decl.652 9 2) '()) (##vcore.cons (bruijn ##.ret.651 9 1) (bruijn ##.%x.2587 0 0)) (##vcore.cons 'variable (bruijn ##.%x.2588 0 1))) ((bruijn ##.%k.1695 1 0) (bruijn ##.%r.2589 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0variable,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k488(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k489) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda109) (bruijn ##.kk.13.653 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k489, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda109, self)))),
      VGetArg(statics, 6-1, 1));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k482(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2586) ((##vcore.pair? (bruijn ##.decl.652 7 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k483) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k488)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k483, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k488, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k476(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2585) ((##vcore.pair? (bruijn ##.decl.652 6 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k477) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k482)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k477, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k482, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k470(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2584) ((##vcore.pair? (bruijn ##.decl.652 5 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k471) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k476)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k471, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k476, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k465(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2583) ((##vcore.pair? (bruijn ##.decl.652 4 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k466) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k470)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k466, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k470, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k449(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2582) ((##vcore.pair? (bruijn ##.decl.652 3 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k450) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k465)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k450, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k465, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2581) ((##vcore.pair? (bruijn ##.decl.652 2 2))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k444) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k449)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k444, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0k449, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.1692 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda98))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629_V0lambda98, self)))));
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
  // (letrec 4 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.629) #f (bruijn ##.reduce-declare-loop.629 0 3) (bruijn ##.%k.1646 1 0) (bruijn ##.ret.623 1 1) (bruijn ##.decl.624 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D626, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D627, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dunvoid__params_D628, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[3]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D629(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V0vanity_V0compiler_V0ffi_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25) {
 if(argc != 26) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0lambda2, got ~D~N"
  "-- expected 26~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[26]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 26, 26, statics);
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
  self->vars[11] = _var11;
  self->vars[12] = _var12;
  self->vars[13] = _var13;
  self->vars[14] = _var14;
  self->vars[15] = _var15;
  self->vars[16] = _var16;
  self->vars[17] = _var17;
  self->vars[18] = _var18;
  self->vars[19] = _var19;
  self->vars[20] = _var20;
  self->vars[21] = _var21;
  self->vars[22] = _var22;
  self->vars[23] = _var23;
  self->vars[24] = _var24;
  self->vars[25] = _var25;
  // (##letrec (vanity compiler ffi) 22 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0get__install__root" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0find__file" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef" (vanity compiler ffi)) (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare" (vanity compiler ffi))) (basic-block 18 18 (##.%x.2674 ##.%x.2675 ##.%x.2676 ##.%x.2677 ##.%x.2678 ##.%x.2679 ##.%x.2680 ##.%x.2681 ##.%x.2682 ##.%x.2683 ##.%x.2684 ##.%x.2685 ##.%x.2686 ##.%x.2687 ##.%x.2688 ##.%x.2689 ##.%x.2690 ##.%r.2691) ((##vcore.cons 'mangle-foreign (bruijn ##.mangle-foreign.258 1 6)) (##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.256 1 4)) (##vcore.cons 'mangle-foreign-basic (bruijn ##.mangle-foreign-basic.257 1 5)) (##vcore.cons 'mangle-foreign-closure (bruijn ##.mangle-foreign-closure.255 1 3)) (##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.263 1 11)) (##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.252 1 0)) (##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.259 1 7)) (##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.254 1 2)) (##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.253 1 1)) (##vcore.cons (bruijn ##.%x.2682 0 8) '()) (##vcore.cons (bruijn ##.%x.2681 0 7) (bruijn ##.%x.2683 0 9)) (##vcore.cons (bruijn ##.%x.2680 0 6) (bruijn ##.%x.2684 0 10)) (##vcore.cons (bruijn ##.%x.2679 0 5) (bruijn ##.%x.2685 0 11)) (##vcore.cons (bruijn ##.%x.2678 0 4) (bruijn ##.%x.2686 0 12)) (##vcore.cons (bruijn ##.%x.2677 0 3) (bruijn ##.%x.2687 0 13)) (##vcore.cons (bruijn ##.%x.2676 0 2) (bruijn ##.%x.2688 0 14)) (##vcore.cons (bruijn ##.%x.2675 0 1) (bruijn ##.%x.2689 0 15)) (##vcore.cons (bruijn ##.%x.2674 0 0) (bruijn ##.%x.2690 0 16))) ((bruijn ##.%k.692 8 0) (bruijn ##.%r.2691 0 17))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[22]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0ffi = self;
    VInitEnv(self, 22, 22, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__extern, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0check__extern__variable__type, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _V60_V0vanity_V0compiler_V0ffi))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0ffi_V20", &_V60_V0vanity_V0compiler_V0ffi);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[18]; } container;
    self = &container.self;
    VInitEnv(self, 18, 18, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__foreign,
      statics->vars[6]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__foreign__function,
      statics->vars[4]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__foreign__basic,
      statics->vars[5]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__foreign__closure,
      statics->vars[3]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0validate__foreign__function,
      statics->vars[11]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0print__foreign__function,
      statics->vars[0]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0resolve__foreign__import,
      statics->vars[7]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0get__foreign__encoder,
      statics->vars[2]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0get__foreign__decoder,
      statics->vars[1]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      VNULL);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[16]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[17]);
    }
    }
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0ffi_V20_V0lambda2) (##string ##.string.2903) (bruijn ##.%x.1821 0 0) 'error 'equal? 'iota 'length 'for-each 'printf 'reverse 'cadr 'assv 'memv 'string-append 'list 'caddr 'sprintf 'compiler-error 'close-port 'gcc-path 'platform 'install-root 'file-exists? 'member 'cdadr 'cadar 'caddar 'caar 'map)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 29,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D2903.sym, VPOINTER_OTHER),
      _var0,
      _V0error,
      _V0equal_Q,
      _V0iota,
      _V0length,
      _V0for__each,
      _V0printf,
      _V0reverse,
      _V0cadr,
      _V0assv,
      _V0memv,
      _V0string__append,
      _V0list,
      _V0caddr,
      _V0sprintf,
      _V0compiler__error,
      _V0close__port,
      _V0gcc__path,
      _V0platform,
      _V0install__root,
      _V0file__exists_Q,
      _V0member,
      _V0cdadr,
      _V0cadar,
      _V0caddar,
      _V0caar,
      _V0map);
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
  // (##vcore.vector (close _V0vanity_V0compiler_V0ffi_V20_V0k5) (bruijn ##.%x.1822 3 0) (bruijn ##.%x.1823 2 0) (bruijn ##.%x.1824 1 0) (bruijn ##.%x.1825 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k5, self)))),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k4) (##string ##.string.2904))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D2904.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k3) (##string ##.string.2905))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D2905.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k2) (##string ##.string.2906))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D2906.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k1) (##string ##.string.2907))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D2907.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VInternSymbol(-974166901, &_VW_V0caddar.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VInternSymbol(-1987367307, &_VW_V0cdadr.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VInternSymbol(-859422530, &_VW_V0file__exists_Q.sym), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VInternSymbol(-197696181, &_VW_V0install__root.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VInternSymbol(-1275049822, &_VW_V0gcc__path.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VInternSymbol(202546882, &_VW_V0printf.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VInternSymbol(786799409, &_VW_V0iota.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0get__foreign__decoder = VEncodePointer(VInternSymbol(1753899344, &_VW_V0get__foreign__decoder.sym), VPOINTER_OTHER);
  _V0get__foreign__encoder = VEncodePointer(VInternSymbol(968618603, &_VW_V0get__foreign__encoder.sym), VPOINTER_OTHER);
  _V0resolve__foreign__import = VEncodePointer(VInternSymbol(2007844216, &_VW_V0resolve__foreign__import.sym), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VInternSymbol(451191322, &_VW_V0print__foreign__function.sym), VPOINTER_OTHER);
  _V0validate__foreign__function = VEncodePointer(VInternSymbol(-1118368169, &_VW_V0validate__foreign__function.sym), VPOINTER_OTHER);
  _V0mangle__foreign__closure = VEncodePointer(VInternSymbol(1252962186, &_VW_V0mangle__foreign__closure.sym), VPOINTER_OTHER);
  _V0mangle__foreign__basic = VEncodePointer(VInternSymbol(1075834746, &_VW_V0mangle__foreign__basic.sym), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VInternSymbol(-536693803, &_VW_V0mangle__foreign__function.sym), VPOINTER_OTHER);
  _V0mangle__foreign = VEncodePointer(VInternSymbol(646216672, &_VW_V0mangle__foreign.sym), VPOINTER_OTHER);
  _V0static__array = VEncodePointer(VInternSymbol(1096561440, &_VW_V0static__array.sym), VPOINTER_OTHER);
  _V0array = VEncodePointer(VInternSymbol(1825404441, &_VW_V0array.sym), VPOINTER_OTHER);
  _V0auto = VEncodePointer(VInternSymbol(301920025, &_VW_V0auto.sym), VPOINTER_OTHER);
  _V0register = VEncodePointer(VInternSymbol(-1208819961, &_VW_V0register.sym), VPOINTER_OTHER);
  _V0static = VEncodePointer(VInternSymbol(258708560, &_VW_V0static.sym), VPOINTER_OTHER);
  _V0volatile = VEncodePointer(VInternSymbol(-1351859124, &_VW_V0volatile.sym), VPOINTER_OTHER);
  _V0restrict = VEncodePointer(VInternSymbol(-587744404, &_VW_V0restrict.sym), VPOINTER_OTHER);
  _V0signed = VEncodePointer(VInternSymbol(-960594618, &_VW_V0signed.sym), VPOINTER_OTHER);
  _V0unsigned = VEncodePointer(VInternSymbol(-1736165284, &_VW_V0unsigned.sym), VPOINTER_OTHER);
  _V0longs = VEncodePointer(VInternSymbol(163504664, &_VW_V0longs.sym), VPOINTER_OTHER);
  _V0special = VEncodePointer(VInternSymbol(356300345, &_VW_V0special.sym), VPOINTER_OTHER);
  _V0variable = VEncodePointer(VInternSymbol(1686232624, &_VW_V0variable.sym), VPOINTER_OTHER);
  _V0typedef = VEncodePointer(VInternSymbol(1481779009, &_VW_V0typedef.sym), VPOINTER_OTHER);
  _V0enum = VEncodePointer(VInternSymbol(-1607632426, &_VW_V0enum.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0extern__variable = VEncodePointer(VInternSymbol(-1919953395, &_VW_V0extern__variable.sym), VPOINTER_OTHER);
  _V0function = VEncodePointer(VInternSymbol(-30696130, &_VW_V0function.sym), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VInternSymbol(689389284, &_VW_V0windows.sym), VPOINTER_OTHER);
  _V10foreign_Dimport = VEncodePointer(VInternSymbol(-290361928, &_VW_V10foreign_Dimport.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V0VWORD = VEncodePointer(VInternSymbol(2093109341, &_VW_V0VWORD.sym), VPOINTER_OTHER);
  _V0unsigned__long__long = VEncodePointer(VInternSymbol(-805357021, &_VW_V0unsigned__long__long.sym), VPOINTER_OTHER);
  _V0long__long = VEncodePointer(VInternSymbol(-1483639818, &_VW_V0long__long.sym), VPOINTER_OTHER);
  _V0unsigned__long = VEncodePointer(VInternSymbol(595821848, &_VW_V0unsigned__long.sym), VPOINTER_OTHER);
  _V0long = VEncodePointer(VInternSymbol(-619595, &_VW_V0long.sym), VPOINTER_OTHER);
  _V0unsigned__int = VEncodePointer(VInternSymbol(-1271898789, &_VW_V0unsigned__int.sym), VPOINTER_OTHER);
  _V0_UBool = VEncodePointer(VInternSymbol(782772753, &_VW_V0_UBool.sym), VPOINTER_OTHER);
  _V0signed__char = VEncodePointer(VInternSymbol(-744970839, &_VW_V0signed__char.sym), VPOINTER_OTHER);
  _V0unsigned__char = VEncodePointer(VInternSymbol(842737144, &_VW_V0unsigned__char.sym), VPOINTER_OTHER);
  _V0short = VEncodePointer(VInternSymbol(1096919460, &_VW_V0short.sym), VPOINTER_OTHER);
  _V0unsigned__short = VEncodePointer(VInternSymbol(1948501763, &_VW_V0unsigned__short.sym), VPOINTER_OTHER);
  _V0int = VEncodePointer(VInternSymbol(-143632445, &_VW_V0int.sym), VPOINTER_OTHER);
  _V0double = VEncodePointer(VInternSymbol(-860986649, &_VW_V0double.sym), VPOINTER_OTHER);
  _V0float = VEncodePointer(VInternSymbol(-526811627, &_VW_V0float.sym), VPOINTER_OTHER);
  _V0void__pointer = VEncodePointer(VInternSymbol(1413929310, &_VW_V0void__pointer.sym), VPOINTER_OTHER);
  _V0const__void__pointer = VEncodePointer(VInternSymbol(-1685357267, &_VW_V0const__void__pointer.sym), VPOINTER_OTHER);
  _V0char = VEncodePointer(VInternSymbol(273258773, &_VW_V0char.sym), VPOINTER_OTHER);
  _V0const__c__string = VEncodePointer(VInternSymbol(-1155998464, &_VW_V0const__c__string.sym), VPOINTER_OTHER);
  _V0c__string = VEncodePointer(VInternSymbol(1227634575, &_VW_V0c__string.sym), VPOINTER_OTHER);
  _V0s8__pointer = VEncodePointer(VInternSymbol(293730729, &_VW_V0s8__pointer.sym), VPOINTER_OTHER);
  _V0u8__pointer = VEncodePointer(VInternSymbol(1902548842, &_VW_V0u8__pointer.sym), VPOINTER_OTHER);
  _V0s16__pointer = VEncodePointer(VInternSymbol(723565652, &_VW_V0s16__pointer.sym), VPOINTER_OTHER);
  _V0u16__pointer = VEncodePointer(VInternSymbol(-1151448616, &_VW_V0u16__pointer.sym), VPOINTER_OTHER);
  _V0s32__pointer = VEncodePointer(VInternSymbol(202109302, &_VW_V0s32__pointer.sym), VPOINTER_OTHER);
  _V0f64__pointer = VEncodePointer(VInternSymbol(-1083710135, &_VW_V0f64__pointer.sym), VPOINTER_OTHER);
  _V0f32__pointer = VEncodePointer(VInternSymbol(991239523, &_VW_V0f32__pointer.sym), VPOINTER_OTHER);
  _V0static__pointer = VEncodePointer(VInternSymbol(177092468, &_VW_V0static__pointer.sym), VPOINTER_OTHER);
  _V0void = VEncodePointer(VInternSymbol(-426423146, &_VW_V0void.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0extern = VEncodePointer(VInternSymbol(-1347183264, &_VW_V0extern.sym), VPOINTER_OTHER);
  _V0pointer = VEncodePointer(VInternSymbol(665170373, &_VW_V0pointer.sym), VPOINTER_OTHER);
  _V0const = VEncodePointer(VInternSymbol(1326696831, &_VW_V0const.sym), VPOINTER_OTHER);
  _V10_Dpair_D2895.first = VEncodePointer(&_V10_Dpair_D2894, VPOINTER_PAIR);
  _V10_Dpair_D2895.rest = VNULL;
  _V10_Dpair_D2894.first = VEncodePointer(&_V10_Dpair_D2892, VPOINTER_PAIR);
  _V10_Dpair_D2894.rest = VEncodePointer(&_V10_Dpair_D2893, VPOINTER_PAIR);
  _V10_Dpair_D2893.first = VEncodeBool(false);
  _V10_Dpair_D2893.rest = VNULL;
  _V10_Dpair_D2892.first = VEncodePointer(&_V10_Dstring_D2891.sym, VPOINTER_OTHER);
  _V10_Dpair_D2892.rest = VNULL;
  _V10_Dpair_D2889.first = _V0void;
  _V10_Dpair_D2889.rest = VEncodePointer(&_V10_Dpair_D2888, VPOINTER_PAIR);
  _V10_Dpair_D2888.first = _V0float;
  _V10_Dpair_D2888.rest = VEncodePointer(&_V10_Dpair_D2887, VPOINTER_PAIR);
  _V10_Dpair_D2887.first = _V0double;
  _V10_Dpair_D2887.rest = VEncodePointer(&_V10_Dpair_D2886, VPOINTER_PAIR);
  _V10_Dpair_D2886.first = _V0_UBool;
  _V10_Dpair_D2886.rest = VNULL;
  _V10_Dpair_D2882.first = _V0special;
  _V10_Dpair_D2882.rest = VEncodePointer(&_V10_Dpair_D2881, VPOINTER_PAIR);
  _V10_Dpair_D2881.first = _V0longs;
  _V10_Dpair_D2881.rest = VEncodePointer(&_V10_Dpair_D2880, VPOINTER_PAIR);
  _V10_Dpair_D2880.first = _V0short;
  _V10_Dpair_D2880.rest = VEncodePointer(&_V10_Dpair_D2879, VPOINTER_PAIR);
  _V10_Dpair_D2879.first = _V0unsigned;
  _V10_Dpair_D2879.rest = VEncodePointer(&_V10_Dpair_D2878, VPOINTER_PAIR);
  _V10_Dpair_D2878.first = _V0signed;
  _V10_Dpair_D2878.rest = VNULL;
  _V10_Dpair_D2839.first = VEncodePointer(&_V10_Dpair_D2811, VPOINTER_PAIR);
  _V10_Dpair_D2839.rest = VEncodePointer(&_V10_Dpair_D2838, VPOINTER_PAIR);
  _V10_Dpair_D2838.first = VEncodePointer(&_V10_Dpair_D2813, VPOINTER_PAIR);
  _V10_Dpair_D2838.rest = VEncodePointer(&_V10_Dpair_D2837, VPOINTER_PAIR);
  _V10_Dpair_D2837.first = VEncodePointer(&_V10_Dpair_D2815, VPOINTER_PAIR);
  _V10_Dpair_D2837.rest = VEncodePointer(&_V10_Dpair_D2836, VPOINTER_PAIR);
  _V10_Dpair_D2836.first = VEncodePointer(&_V10_Dpair_D2817, VPOINTER_PAIR);
  _V10_Dpair_D2836.rest = VEncodePointer(&_V10_Dpair_D2835, VPOINTER_PAIR);
  _V10_Dpair_D2835.first = VEncodePointer(&_V10_Dpair_D2818, VPOINTER_PAIR);
  _V10_Dpair_D2835.rest = VEncodePointer(&_V10_Dpair_D2834, VPOINTER_PAIR);
  _V10_Dpair_D2834.first = VEncodePointer(&_V10_Dpair_D2819, VPOINTER_PAIR);
  _V10_Dpair_D2834.rest = VEncodePointer(&_V10_Dpair_D2833, VPOINTER_PAIR);
  _V10_Dpair_D2833.first = VEncodePointer(&_V10_Dpair_D2820, VPOINTER_PAIR);
  _V10_Dpair_D2833.rest = VEncodePointer(&_V10_Dpair_D2832, VPOINTER_PAIR);
  _V10_Dpair_D2832.first = VEncodePointer(&_V10_Dpair_D2821, VPOINTER_PAIR);
  _V10_Dpair_D2832.rest = VEncodePointer(&_V10_Dpair_D2831, VPOINTER_PAIR);
  _V10_Dpair_D2831.first = VEncodePointer(&_V10_Dpair_D2822, VPOINTER_PAIR);
  _V10_Dpair_D2831.rest = VEncodePointer(&_V10_Dpair_D2830, VPOINTER_PAIR);
  _V10_Dpair_D2830.first = VEncodePointer(&_V10_Dpair_D2824, VPOINTER_PAIR);
  _V10_Dpair_D2830.rest = VEncodePointer(&_V10_Dpair_D2829, VPOINTER_PAIR);
  _V10_Dpair_D2829.first = VEncodePointer(&_V10_Dpair_D2825, VPOINTER_PAIR);
  _V10_Dpair_D2829.rest = VEncodePointer(&_V10_Dpair_D2828, VPOINTER_PAIR);
  _V10_Dpair_D2828.first = VEncodePointer(&_V10_Dpair_D2827, VPOINTER_PAIR);
  _V10_Dpair_D2828.rest = VNULL;
  _V10_Dpair_D2827.first = _V0VWORD;
  _V10_Dpair_D2827.rest = VEncodePointer(&_V10_Dstring_D2826.sym, VPOINTER_OTHER);
  _V10_Dpair_D2825.first = _V0float;
  _V10_Dpair_D2825.rest = VEncodePointer(&_V10_Dstring_D2823.sym, VPOINTER_OTHER);
  _V10_Dpair_D2824.first = _V0double;
  _V10_Dpair_D2824.rest = VEncodePointer(&_V10_Dstring_D2823.sym, VPOINTER_OTHER);
  _V10_Dpair_D2822.first = _V0unsigned__int;
  _V10_Dpair_D2822.rest = VEncodePointer(&_V10_Dstring_D2816.sym, VPOINTER_OTHER);
  _V10_Dpair_D2821.first = _V0int;
  _V10_Dpair_D2821.rest = VEncodePointer(&_V10_Dstring_D2816.sym, VPOINTER_OTHER);
  _V10_Dpair_D2820.first = _V0unsigned__short;
  _V10_Dpair_D2820.rest = VEncodePointer(&_V10_Dstring_D2816.sym, VPOINTER_OTHER);
  _V10_Dpair_D2819.first = _V0short;
  _V10_Dpair_D2819.rest = VEncodePointer(&_V10_Dstring_D2816.sym, VPOINTER_OTHER);
  _V10_Dpair_D2818.first = _V0unsigned__char;
  _V10_Dpair_D2818.rest = VEncodePointer(&_V10_Dstring_D2816.sym, VPOINTER_OTHER);
  _V10_Dpair_D2817.first = _V0signed__char;
  _V10_Dpair_D2817.rest = VEncodePointer(&_V10_Dstring_D2816.sym, VPOINTER_OTHER);
  _V10_Dpair_D2815.first = _V0char;
  _V10_Dpair_D2815.rest = VEncodePointer(&_V10_Dstring_D2814.sym, VPOINTER_OTHER);
  _V10_Dpair_D2813.first = _V0_UBool;
  _V10_Dpair_D2813.rest = VEncodePointer(&_V10_Dstring_D2812.sym, VPOINTER_OTHER);
  _V10_Dpair_D2811.first = _V0void;
  _V10_Dpair_D2811.rest = VEncodeBool(true);
  _V10_Dpair_D2810.first = _V0void__pointer;
  _V10_Dpair_D2810.rest = VEncodePointer(&_V10_Dstring_D2809.sym, VPOINTER_OTHER);
  _V10_Dpair_D2808.first = VEncodePointer(&_V10_Dpair_D2770, VPOINTER_PAIR);
  _V10_Dpair_D2808.rest = VEncodePointer(&_V10_Dpair_D2807, VPOINTER_PAIR);
  _V10_Dpair_D2807.first = VEncodePointer(&_V10_Dpair_D2772, VPOINTER_PAIR);
  _V10_Dpair_D2807.rest = VEncodePointer(&_V10_Dpair_D2806, VPOINTER_PAIR);
  _V10_Dpair_D2806.first = VEncodePointer(&_V10_Dpair_D2774, VPOINTER_PAIR);
  _V10_Dpair_D2806.rest = VEncodePointer(&_V10_Dpair_D2805, VPOINTER_PAIR);
  _V10_Dpair_D2805.first = VEncodePointer(&_V10_Dpair_D2776, VPOINTER_PAIR);
  _V10_Dpair_D2805.rest = VEncodePointer(&_V10_Dpair_D2804, VPOINTER_PAIR);
  _V10_Dpair_D2804.first = VEncodePointer(&_V10_Dpair_D2778, VPOINTER_PAIR);
  _V10_Dpair_D2804.rest = VEncodePointer(&_V10_Dpair_D2803, VPOINTER_PAIR);
  _V10_Dpair_D2803.first = VEncodePointer(&_V10_Dpair_D2780, VPOINTER_PAIR);
  _V10_Dpair_D2803.rest = VEncodePointer(&_V10_Dpair_D2802, VPOINTER_PAIR);
  _V10_Dpair_D2802.first = VEncodePointer(&_V10_Dpair_D2782, VPOINTER_PAIR);
  _V10_Dpair_D2802.rest = VEncodePointer(&_V10_Dpair_D2801, VPOINTER_PAIR);
  _V10_Dpair_D2801.first = VEncodePointer(&_V10_Dpair_D2783, VPOINTER_PAIR);
  _V10_Dpair_D2801.rest = VEncodePointer(&_V10_Dpair_D2800, VPOINTER_PAIR);
  _V10_Dpair_D2800.first = VEncodePointer(&_V10_Dpair_D2784, VPOINTER_PAIR);
  _V10_Dpair_D2800.rest = VEncodePointer(&_V10_Dpair_D2799, VPOINTER_PAIR);
  _V10_Dpair_D2799.first = VEncodePointer(&_V10_Dpair_D2785, VPOINTER_PAIR);
  _V10_Dpair_D2799.rest = VEncodePointer(&_V10_Dpair_D2798, VPOINTER_PAIR);
  _V10_Dpair_D2798.first = VEncodePointer(&_V10_Dpair_D2786, VPOINTER_PAIR);
  _V10_Dpair_D2798.rest = VEncodePointer(&_V10_Dpair_D2797, VPOINTER_PAIR);
  _V10_Dpair_D2797.first = VEncodePointer(&_V10_Dpair_D2787, VPOINTER_PAIR);
  _V10_Dpair_D2797.rest = VEncodePointer(&_V10_Dpair_D2796, VPOINTER_PAIR);
  _V10_Dpair_D2796.first = VEncodePointer(&_V10_Dpair_D2789, VPOINTER_PAIR);
  _V10_Dpair_D2796.rest = VEncodePointer(&_V10_Dpair_D2795, VPOINTER_PAIR);
  _V10_Dpair_D2795.first = VEncodePointer(&_V10_Dpair_D2790, VPOINTER_PAIR);
  _V10_Dpair_D2795.rest = VEncodePointer(&_V10_Dpair_D2794, VPOINTER_PAIR);
  _V10_Dpair_D2794.first = VEncodePointer(&_V10_Dpair_D2792, VPOINTER_PAIR);
  _V10_Dpair_D2794.rest = VEncodePointer(&_V10_Dpair_D2793, VPOINTER_PAIR);
  _V10_Dpair_D2793.first = VEncodePointer(&_V10_Dpair_D2747, VPOINTER_PAIR);
  _V10_Dpair_D2793.rest = VNULL;
  _V10_Dpair_D2792.first = _V0VWORD;
  _V10_Dpair_D2792.rest = VEncodePointer(&_V10_Dstring_D2791.sym, VPOINTER_OTHER);
  _V10_Dpair_D2790.first = _V0float;
  _V10_Dpair_D2790.rest = VEncodePointer(&_V10_Dstring_D2788.sym, VPOINTER_OTHER);
  _V10_Dpair_D2789.first = _V0double;
  _V10_Dpair_D2789.rest = VEncodePointer(&_V10_Dstring_D2788.sym, VPOINTER_OTHER);
  _V10_Dpair_D2787.first = _V0unsigned__long__long;
  _V10_Dpair_D2787.rest = VEncodePointer(&_V10_Dstring_D2781.sym, VPOINTER_OTHER);
  _V10_Dpair_D2786.first = _V0long__long;
  _V10_Dpair_D2786.rest = VEncodePointer(&_V10_Dstring_D2781.sym, VPOINTER_OTHER);
  _V10_Dpair_D2785.first = _V0unsigned__long;
  _V10_Dpair_D2785.rest = VEncodePointer(&_V10_Dstring_D2781.sym, VPOINTER_OTHER);
  _V10_Dpair_D2784.first = _V0long;
  _V10_Dpair_D2784.rest = VEncodePointer(&_V10_Dstring_D2781.sym, VPOINTER_OTHER);
  _V10_Dpair_D2783.first = _V0unsigned__int;
  _V10_Dpair_D2783.rest = VEncodePointer(&_V10_Dstring_D2781.sym, VPOINTER_OTHER);
  _V10_Dpair_D2782.first = _V0int;
  _V10_Dpair_D2782.rest = VEncodePointer(&_V10_Dstring_D2781.sym, VPOINTER_OTHER);
  _V10_Dpair_D2780.first = _V0unsigned__short;
  _V10_Dpair_D2780.rest = VEncodePointer(&_V10_Dstring_D2779.sym, VPOINTER_OTHER);
  _V10_Dpair_D2778.first = _V0short;
  _V10_Dpair_D2778.rest = VEncodePointer(&_V10_Dstring_D2777.sym, VPOINTER_OTHER);
  _V10_Dpair_D2776.first = _V0unsigned__char;
  _V10_Dpair_D2776.rest = VEncodePointer(&_V10_Dstring_D2775.sym, VPOINTER_OTHER);
  _V10_Dpair_D2774.first = _V0signed__char;
  _V10_Dpair_D2774.rest = VEncodePointer(&_V10_Dstring_D2773.sym, VPOINTER_OTHER);
  _V10_Dpair_D2772.first = _V0char;
  _V10_Dpair_D2772.rest = VEncodePointer(&_V10_Dstring_D2771.sym, VPOINTER_OTHER);
  _V10_Dpair_D2770.first = _V0_UBool;
  _V10_Dpair_D2770.rest = VEncodePointer(&_V10_Dstring_D2769.sym, VPOINTER_OTHER);
  _V10_Dpair_D2768.first = _V0void__pointer;
  _V10_Dpair_D2768.rest = VEncodePointer(&_V10_Dstring_D2692.sym, VPOINTER_OTHER);
  _V10_Dpair_D2767.first = _V0s8__pointer;
  _V10_Dpair_D2767.rest = VEncodePointer(&_V10_Dstring_D2766.sym, VPOINTER_OTHER);
  _V10_Dpair_D2765.first = _V0u8__pointer;
  _V10_Dpair_D2765.rest = VEncodePointer(&_V10_Dstring_D2764.sym, VPOINTER_OTHER);
  _V10_Dpair_D2763.first = _V0s16__pointer;
  _V10_Dpair_D2763.rest = VEncodePointer(&_V10_Dstring_D2762.sym, VPOINTER_OTHER);
  _V10_Dpair_D2761.first = _V0u16__pointer;
  _V10_Dpair_D2761.rest = VEncodePointer(&_V10_Dstring_D2760.sym, VPOINTER_OTHER);
  _V10_Dpair_D2759.first = _V0s32__pointer;
  _V10_Dpair_D2759.rest = VEncodePointer(&_V10_Dstring_D2758.sym, VPOINTER_OTHER);
  _V10_Dpair_D2757.first = _V0f64__pointer;
  _V10_Dpair_D2757.rest = VEncodePointer(&_V10_Dstring_D2756.sym, VPOINTER_OTHER);
  _V10_Dpair_D2755.first = _V0f32__pointer;
  _V10_Dpair_D2755.rest = VEncodePointer(&_V10_Dstring_D2754.sym, VPOINTER_OTHER);
  _V10_Dpair_D2753.first = _V0void__pointer;
  _V10_Dpair_D2753.rest = VEncodePointer(&_V10_Dstring_D2752.sym, VPOINTER_OTHER);
  _V10_Dpair_D2751.first = _V0const__void__pointer;
  _V10_Dpair_D2751.rest = VEncodePointer(&_V10_Dstring_D2750.sym, VPOINTER_OTHER);
  _V10_Dpair_D2749.first = _V0const__c__string;
  _V10_Dpair_D2749.rest = VEncodePointer(&_V10_Dstring_D2748.sym, VPOINTER_OTHER);
  _V10_Dpair_D2747.first = _V0c__string;
  _V10_Dpair_D2747.rest = VEncodePointer(&_V10_Dstring_D2746.sym, VPOINTER_OTHER);
  _V10_Dpair_D2745.first = _V0f32__pointer;
  _V10_Dpair_D2745.rest = VEncodePointer(&_V10_Dpair_D2744, VPOINTER_PAIR);
  _V10_Dpair_D2744.first = _V0f64__pointer;
  _V10_Dpair_D2744.rest = VEncodePointer(&_V10_Dpair_D2743, VPOINTER_PAIR);
  _V10_Dpair_D2743.first = _V0s32__pointer;
  _V10_Dpair_D2743.rest = VEncodePointer(&_V10_Dpair_D2742, VPOINTER_PAIR);
  _V10_Dpair_D2742.first = _V0u16__pointer;
  _V10_Dpair_D2742.rest = VEncodePointer(&_V10_Dpair_D2741, VPOINTER_PAIR);
  _V10_Dpair_D2741.first = _V0s16__pointer;
  _V10_Dpair_D2741.rest = VEncodePointer(&_V10_Dpair_D2740, VPOINTER_PAIR);
  _V10_Dpair_D2740.first = _V0u8__pointer;
  _V10_Dpair_D2740.rest = VEncodePointer(&_V10_Dpair_D2739, VPOINTER_PAIR);
  _V10_Dpair_D2739.first = _V0s8__pointer;
  _V10_Dpair_D2739.rest = VEncodePointer(&_V10_Dpair_D2738, VPOINTER_PAIR);
  _V10_Dpair_D2738.first = _V0c__string;
  _V10_Dpair_D2738.rest = VEncodePointer(&_V10_Dpair_D2737, VPOINTER_PAIR);
  _V10_Dpair_D2737.first = _V0const__c__string;
  _V10_Dpair_D2737.rest = VNULL;
  _V10_Dpair_D2735.first = _V0pointer;
  _V10_Dpair_D2735.rest = VEncodePointer(&_V10_Dpair_D2734, VPOINTER_PAIR);
  _V10_Dpair_D2734.first = _V0static__pointer;
  _V10_Dpair_D2734.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
