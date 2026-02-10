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

VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0mangle__foreign__closure;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0mangle__foreign__closure = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "mangle-foreign-closure" };
VWEAK VWORD _V0mangle__foreign__basic;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0mangle__foreign__basic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "mangle-foreign-basic" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0mangle__foreign;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-foreign" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "static-array" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "array" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
VWEAK VWORD _V0array;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0array = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "array" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
VWEAK VWORD _V0typedef;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0typedef = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "typedef" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A/../" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D1702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "include/vscheme/stdc" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D1700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "\"\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"\"" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V30~A" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "_V30~A_shim_basic" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "_V30~A_closure" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeVWORD2" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeNumber2" };
VWEAK VWORD _V0unsigned__long__long;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0unsigned__long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "unsigned-long-long" };
VWEAK VWORD _V0long__long;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "long-long" };
VWEAK VWORD _V0unsigned__long;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-long" };
VWEAK VWORD _V0long;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "long" };
VWEAK VWORD _V0unsigned__int;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0unsigned__int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "unsigned-int" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeInt2" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeUnsignedShort2" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeShort2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedChar2" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VCheckedDecodeSignedChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeBool2" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "VCheckedDecodeForeignPointer2" };
VWEAK VWORD _V0signed__char;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0signed__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "signed-char" };
VWEAK VWORD _V0unsigned__char;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-char" };
VWEAK VWORD _V0short;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "short" };
VWEAK VWORD _V0unsigned__short;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0unsigned__short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "unsigned-short" };
VWEAK VWORD _V0int;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "int" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeS8Ptr" };
VWEAK VWORD _V0s8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s8-pointer" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeU8Ptr" };
VWEAK VWORD _V0u8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0u8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "u8-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS16Ptr" };
VWEAK VWORD _V0s16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeU16Ptr" };
VWEAK VWORD _V0u16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0u16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "u16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS32Ptr" };
VWEAK VWORD _V0s32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s32-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF64Ptr" };
VWEAK VWORD _V0f64__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f64__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f64-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF32Ptr" };
VWEAK VWORD _V0f32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f32-pointer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeVoidPtr2" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstVoidPtr2" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
VWEAK VWORD _V0const;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0const = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "const" };
VWEAK VWORD _V0char;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "char" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstCString2" };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeCString2" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "static VWORD ~A(VRuntime * runtime, VEnv * statics" };
static struct { VBlob sym; char bytes[96]; } _V10_Dstring_D1657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 96 }, "static VClosure ~A = { .base.tag = VCLOSURE, .base.flags = VFLAG_STATIC, .func = (VFunc)~A };~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "));~N}~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, ");~N  return VVOID;~N}~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "  return ~A(~A(" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "  ~A(" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "  V_BOUNCE(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  V_BOUNCE(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1647 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "static void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1646 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1645 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "  V_ARG_CHECK3(runtime, \"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1644 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D1643 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "static V_BEGIN_FUNC(_V30~A_shim, \"_V30~A_shim\", ~A, _k " };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1642 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1641 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1640 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A(runtime, _arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1639 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1638 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1637 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1636 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1635 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0get__foreign__decoder = VEncodePointer(VInternSymbol(1753899344, &_VW_V0get__foreign__decoder.sym), VPOINTER_OTHER);
  _V0get__foreign__encoder = VEncodePointer(VInternSymbol(968618603, &_VW_V0get__foreign__encoder.sym), VPOINTER_OTHER);
  _V0resolve__foreign__import = VEncodePointer(VInternSymbol(2007844216, &_VW_V0resolve__foreign__import.sym), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VInternSymbol(451191322, &_VW_V0print__foreign__function.sym), VPOINTER_OTHER);
  _V0validate__foreign__function = VEncodePointer(VInternSymbol(-1118368169, &_VW_V0validate__foreign__function.sym), VPOINTER_OTHER);
  _V0mangle__foreign__closure = VEncodePointer(VInternSymbol(1252962186, &_VW_V0mangle__foreign__closure.sym), VPOINTER_OTHER);
  _V0mangle__foreign__basic = VEncodePointer(VInternSymbol(1075834746, &_VW_V0mangle__foreign__basic.sym), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VInternSymbol(-536693803, &_VW_V0mangle__foreign__function.sym), VPOINTER_OTHER);
  _V0mangle__foreign = VEncodePointer(VInternSymbol(646216672, &_VW_V0mangle__foreign.sym), VPOINTER_OTHER);
  _V0array = VEncodePointer(VInternSymbol(1825404441, &_VW_V0array.sym), VPOINTER_OTHER);
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
  _V0variable = VEncodePointer(VInternSymbol(1686232624, &_VW_V0variable.sym), VPOINTER_OTHER);
  _V0typedef = VEncodePointer(VInternSymbol(1481779009, &_VW_V0typedef.sym), VPOINTER_OTHER);
  _V0enum = VEncodePointer(VInternSymbol(-1607632426, &_VW_V0enum.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V0function = VEncodePointer(VInternSymbol(-30696130, &_VW_V0function.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
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
  _V0s8__pointer = VEncodePointer(VInternSymbol(293730729, &_VW_V0s8__pointer.sym), VPOINTER_OTHER);
  _V0u8__pointer = VEncodePointer(VInternSymbol(1902548842, &_VW_V0u8__pointer.sym), VPOINTER_OTHER);
  _V0s16__pointer = VEncodePointer(VInternSymbol(723565652, &_VW_V0s16__pointer.sym), VPOINTER_OTHER);
  _V0u16__pointer = VEncodePointer(VInternSymbol(-1151448616, &_VW_V0u16__pointer.sym), VPOINTER_OTHER);
  _V0s32__pointer = VEncodePointer(VInternSymbol(202109302, &_VW_V0s32__pointer.sym), VPOINTER_OTHER);
  _V0f64__pointer = VEncodePointer(VInternSymbol(-1083710135, &_VW_V0f64__pointer.sym), VPOINTER_OTHER);
  _V0f32__pointer = VEncodePointer(VInternSymbol(991239523, &_VW_V0f32__pointer.sym), VPOINTER_OTHER);
  _V0void__pointer = VEncodePointer(VInternSymbol(1413929310, &_VW_V0void__pointer.sym), VPOINTER_OTHER);
  _V0const__void__pointer = VEncodePointer(VInternSymbol(-1685357267, &_VW_V0const__void__pointer.sym), VPOINTER_OTHER);
  _V0const = VEncodePointer(VInternSymbol(1326696831, &_VW_V0const.sym), VPOINTER_OTHER);
  _V0char = VEncodePointer(VInternSymbol(273258773, &_VW_V0char.sym), VPOINTER_OTHER);
  _V0const__c__string = VEncodePointer(VInternSymbol(-1155998464, &_VW_V0const__c__string.sym), VPOINTER_OTHER);
  _V0c__string = VEncodePointer(VInternSymbol(1227634575, &_VW_V0c__string.sym), VPOINTER_OTHER);
  _V0pointer = VEncodePointer(VInternSymbol(665170373, &_VW_V0pointer.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0void = VEncodePointer(VInternSymbol(-426423146, &_VW_V0void.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VInternSymbol(-974166901, &_VW_V0caddar.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VInternSymbol(-1987367307, &_VW_V0cdadr.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VInternSymbol(-859422530, &_VW_V0file__exists_Q.sym), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VInternSymbol(-197696181, &_VW_V0install__root.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VInternSymbol(-1275049822, &_VW_V0gcc__path.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VInternSymbol(202546882, &_VW_V0printf.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VInternSymbol(786799409, &_VW_V0iota.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D441, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D440, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322, _var0, _var1);
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
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, _var0, _var1, _var2);
static void _V0vanity_V0compiler_V0ffi_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.583 5 0) (##string ##.string.1635) (bruijn ##.x.584 0 0) 'error 'equal? 'iota 'length 'for-each 'printf 'reverse 'assv 'cadr 'sprintf 'compiler-error 'close-port 'gcc-path 'platform 'install-root 'file-exists? 'caddr 'cdddr 'cdadr 'cadar 'member 'caddar 'caar 'map 'list 'memv)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 29,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1635.sym, VPOINTER_OTHER),
      _var0,
      _V0error,
      _V0equal_Q,
      _V0iota,
      _V0length,
      _V0for__each,
      _V0printf,
      _V0reverse,
      _V0assv,
      _V0cadr,
      _V0sprintf,
      _V0compiler__error,
      _V0close__port,
      _V0gcc__path,
      _V0platform,
      _V0install__root,
      _V0file__exists_Q,
      _V0caddr,
      _V0cdddr,
      _V0cdadr,
      _V0cadar,
      _V0member,
      _V0caddar,
      _V0caar,
      _V0map,
      _V0list,
      _V0memv);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0ffi_V20_V0k5) (bruijn ##.x.585 3 0) (bruijn ##.x.586 2 0) (bruijn ##.x.587 1 0) (bruijn ##.x.588 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k5, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k4) (##string ##.string.1636))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1636.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k3) (##string ##.string.1637))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1637.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k2) (##string ##.string.1638))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1638.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k1) (##string ##.string.1639))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1639.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.252 4 1) (bruijn ##.k.608 1 0) (bruijn ##.expr.178.254 2 1) (bruijn ##.x.609 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.178.254 1 1))) ((bruijn ##.reverse.185 16 7) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k15) (bruijn ##.args.175.255 1 2)) ((bruijn ##.k.608 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k15, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.252 5 1) (bruijn ##.k.603 1 0) (bruijn ##.expr.178.254 3 1) (bruijn ##.x.604 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k17(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.185 17 7) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k18) (bruijn ##.args.175.255 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k18, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.177.256 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k17) (##inline ##vcore.cdr (bruijn ##.expr.178.254 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.178.254 2 1)) (bruijn ##.args.175.255 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k17, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.602 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda8, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.601 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda7) (bruijn ##.loop.253 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0lambda7, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k14) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k16))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253_V0k16, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253")) (##qualified-call (vanity compiler ffi print-foreign-function ##.loop.253) #f (bruijn ##.loop.253 0 0) (bruijn ##.k.600 1 0) (##inline ##vcore.cdr (bruijn ##.expr.173.249 4 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D253(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.599 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda6, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 0 0) (bruijn ##.k.611 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.184 21 6) (bruijn ##.k.619 1 0) (##string ##.string.1640) (##inline ##vcore.cdr (bruijn ##.x.621 0 0)) (bruijn ##.argname.266 1 2) (bruijn ##.name.250 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 5,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1640.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      statics->vars[2],
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) #t (bruijn ##.get-foreign-decoder.219 19 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264_V0k25) (bruijn ##.arg.265 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264_V0k25, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 22 6) (bruijn ##.k.649 2 0) (##string ##.string.1641))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 6)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1641.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.184 23 6) (bruijn ##.k.650 0 0) (##string ##.string.1642) (bruijn ##.e.267 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 6)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1642.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.183 22 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k30) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11) (bruijn ##.x.618 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k30, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda11, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1612) ((##vcore.+ 1 (bruijn ##.x.652 1 0))) ((bruijn ##.printf.184 22 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k29) (##string ##.string.1643) (bruijn ##.name.250 11 0) (bruijn ##.name.250 11 0) (bruijn ##.reg.1612 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 6)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k29, self)))),
      VEncodePointer(&_V10_Dstring_D1643.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 11-1, 0),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 26 6) (bruijn ##.k.649 6 0) (##string ##.string.1641))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 6)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1641.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.184 27 6) (bruijn ##.k.653 0 0) (##string ##.string.1642) (bruijn ##.e.269 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 6)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1642.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k38(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.183 26 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k39) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12) (bruijn ##.x.618 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda12, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1615) ((##vcore.+ 1 (bruijn ##.x.656 1 0))) ((bruijn ##.printf.184 26 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k38) (##string ##.string.1644) (bruijn ##.x.615 12 0) (bruijn ##.reg.1614 2 0) (bruijn ##.reg.1615 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 6)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k38, self)))),
      VEncodePointer(&_V10_Dstring_D1644.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0),
      statics->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1614) ((##vcore.+ 1 (bruijn ##.x.657 1 0))) ((bruijn ##.length.182 24 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37) (bruijn ##.args.259 12 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k37, self)))),
      VGetArg(statics, 12-1, 2));
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.length.182 22 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36) (bruijn ##.args.259 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k36, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1613) ((##vcore.+ 1 (bruijn ##.x.659 1 0))) ((bruijn ##.printf.184 22 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k35) (##string ##.string.1645) (bruijn ##.x.615 8 0) (bruijn ##.reg.1613 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 6)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k35, self)))),
      VEncodePointer(&_V10_Dstring_D1645.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.length.182 20 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34) (bruijn ##.args.259 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k34, self)))),
      VGetArg(statics, 8-1, 2));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 20 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k33) (##string ##.string.1641))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k33, self)))),
      VEncodePointer(&_V10_Dstring_D1641.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.184 21 6) (bruijn ##.k.660 0 0) (##string ##.string.1646) (bruijn ##.e.268 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1646.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.183 20 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k32) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13) (bruijn ##.x.618 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k32, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda13, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.238 18 1) ((bruijn ##.length.182 20 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28) (bruijn ##.args.259 8 2)) ((bruijn ##.printf.184 20 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k31) (##string ##.string.1647) (bruijn ##.name.250 9 0)))
if(VDecodeBool(
VGetArg(statics, 18-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k28, self)))),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k31, self)))),
      VEncodePointer(&_V10_Dstring_D1647.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.184 21 6) (bruijn ##.k.646 1 0) (##string ##.string.1649) (##inline ##vcore.cdr (bruijn ##.x.648 0 0)) (bruijn ##.name.250 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1649.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.ret.248 11 0) 'void) ((bruijn ##.printf.184 20 6) (bruijn ##.k.646 0 0) (##string ##.string.1648) (bruijn ##.name.250 9 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.220 19 2) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42) (bruijn ##.ret.248 11 0)))
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 11-1, 0),
        _V0void))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1648.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k42, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.264) #f (bruijn ##.print-arg.264 2 0) (bruijn ##.k.640 0 0) (bruijn ##.arg.270 0 1) (bruijn ##.argname.271 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
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
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.printf.184 21 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k46) (##string ##.string.1650))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k46, self)))),
      VEncodePointer(&_V10_Dstring_D1650.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k45(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.183 20 5) (bruijn ##.k.639 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14) (##inline ##vcore.cdr (bruijn ##.args.259 8 2)) (##inline ##vcore.cdr (bruijn ##.x.618 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 5)), 4,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda14, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.259 8 2)) (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.264) #f (bruijn ##.print-arg.264 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k45) (##inline ##vcore.car (bruijn ##.args.259 8 2)) (##inline ##vcore.car (bruijn ##.x.618 2 0))) ((bruijn ##.k.639 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k45, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.ret.248 11 0) 'void) ((bruijn ##.printf.184 20 6) (bruijn ##.k.637 0 0) (##string ##.string.1651)) ((bruijn ##.printf.184 20 6) (bruijn ##.k.637 0 0) (##string ##.string.1652)))
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 11-1, 0),
        _V0void))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1651.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1652.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.184 21 6) (bruijn ##.k.632 1 0) (##string ##.string.1654) (##inline ##vcore.cdr (bruijn ##.x.634 0 0)) (bruijn ##.name.250 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1654.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.ret.248 11 0) 'void) ((bruijn ##.printf.184 20 6) (bruijn ##.k.632 0 0) (##string ##.string.1653) (bruijn ##.name.250 9 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.220 19 2) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k56) (bruijn ##.ret.248 11 0)))
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 11-1, 0),
        _V0void))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1653.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k56, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.264) #f (bruijn ##.print-arg.264 2 0) (bruijn ##.k.626 0 0) (bruijn ##.arg.273 0 1) (bruijn ##.argname.274 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
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
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.printf.184 21 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k60) (##string ##.string.1650))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k60, self)))),
      VEncodePointer(&_V10_Dstring_D1650.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k59(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.183 20 5) (bruijn ##.k.625 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15) (##inline ##vcore.cdr (bruijn ##.args.259 8 2)) (##inline ##vcore.cdr (bruijn ##.x.618 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 5)), 4,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda15, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.259 8 2)) (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.264) #f (bruijn ##.print-arg.264 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k59) (##inline ##vcore.car (bruijn ##.args.259 8 2)) (##inline ##vcore.car (bruijn ##.x.618 2 0))) ((bruijn ##.k.625 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k59, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.ret.248 11 0) 'void) ((bruijn ##.printf.184 20 6) (bruijn ##.k.623 0 0) (##string ##.string.1655)) ((bruijn ##.printf.184 20 6) (bruijn ##.k.623 0 0) (##string ##.string.1656)))
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 11-1, 0),
        _V0void))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1655.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1656.sym, VPOINTER_OTHER));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k63(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 19 6) (bruijn ##.k.614 6 0) (##string ##.string.1657) (bruijn ##.x.617 3 0) (bruijn ##.x.615 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 4,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1657.sym, VPOINTER_OTHER),
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k61(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k63))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k63, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k57(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k58) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k61))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k58, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k61, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k54(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k55) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k57))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k57, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k53(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 19 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k54) (##string ##.string.1641))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k54, self)))),
      VEncodePointer(&_V10_Dstring_D1641.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.184 20 6) (bruijn ##.k.635 0 0) (##string ##.string.1646) (bruijn ##.e.272 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1646.sym, VPOINTER_OTHER),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k52(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.183 19 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k53) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16) (bruijn ##.x.618 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k53, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda16, self)))),
      statics->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 19 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k52) (##string ##.string.1658) (bruijn ##.x.616 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k52, self)))),
      VEncodePointer(&_V10_Dstring_D1658.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 19 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k51) (##string ##.string.1659))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k51, self)))),
      VEncodePointer(&_V10_Dstring_D1659.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k50))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k50, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k47(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.printf.184 19 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k48) (##string ##.string.1660))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k48, self)))),
      VEncodePointer(&_V10_Dstring_D1660.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k43(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k47))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k47, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k40(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k43))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k41, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k43, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k40))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k40, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264")) ((bruijn ##.printf.184 19 6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k26) (##string ##.string.1661) (##inline ##vcore.car (bruijn ##.expr.171.245 12 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D264, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k26, self)))),
      VEncodePointer(&_V10_Dstring_D1661.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 0)));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iota.181 17 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24) (bruijn ##.x.661 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k24, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.182 16 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23) (bruijn ##.args.259 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k23, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-closure) #t (bruijn ##.mangle-foreign-closure.221 14 3) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22) (bruijn ##.name.250 4 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k22, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-basic) #t (bruijn ##.mangle-foreign-basic.223 13 5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21) (bruijn ##.name.250 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k21, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-function) #t (bruijn ##.mangle-foreign-function.222 12 4) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20) (bruijn ##.name.250 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k20, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.258 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10) (bruijn ##.kk.167.240 9 1)) ((bruijn ##.k.611 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda10, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.593 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda5, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda9, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.249 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13) (##inline ##vcore.car (bruijn ##.expr.173.249 0 0))) ((bruijn ##.k.593 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k13, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12) (##inline ##vcore.cdr (bruijn ##.expr.172.247 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k12, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.247 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11) (##inline ##vcore.car (bruijn ##.expr.172.247 0 0))) ((bruijn ##.k.593 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k11, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.245 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10) (##inline ##vcore.cdr (bruijn ##.expr.171.245 0 0))) ((bruijn ##.k.593 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k10, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.243 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9) (##inline ##vcore.cdr (bruijn ##.expr.170.243 0 0))) ((bruijn ##.k.593 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k9, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.594 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8) (##inline ##vcore.cdr (bruijn ##.expr.239 3 2))) ((bruijn ##.k.593 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k8, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.239 2 2)) ((bruijn ##.equal?.180 4 2) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.239 2 2))) ((bruijn ##.k.593 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k7, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.179 3 1) (bruijn ##.k.591 0 0) (##string ##.string.1662))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D1662.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k64))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k64, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.call/cc (bruijn ##.k.590 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.type.275 1 1)) ((bruijn ##.k.835 0 0) (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.type.275 1 1)) 'pointer)) ((bruijn ##.k.835 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0pointer));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.800 0 0) (bruijn ##.k.799 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.801 0 0) (##inline ##vcore.qcons 'c-string '(##string ##.string.1663)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1663.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.798 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k70) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda18) (bruijn ##.kk.147.276 3 1)) ((bruijn ##.k.799 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda18, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.793 0 0) (bruijn ##.k.788 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.794 0 0) (##inline ##vcore.qcons 'const-c-string '(##string ##.string.1664)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__c__string,
        VEncodePointer(&_V10_Dstring_D1664.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.791 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.150.279 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k76) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19) (bruijn ##.kk.147.276 6 1)) ((bruijn ##.k.788 3 0) #f)) ((bruijn ##.k.788 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k76, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda19, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.279 0 0)) ((bruijn ##.equal?.180 9 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k75) 'char (##inline ##vcore.car (bruijn ##.expr.150.279 0 0))) ((bruijn ##.k.788 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k75, self)))),
      _V0char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.789 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k74) (##inline ##vcore.cdr (bruijn ##.input.148.277 3 0))) ((bruijn ##.k.788 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k74, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 2 0)) ((bruijn ##.equal?.180 7 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k73) 'const (##inline ##vcore.car (bruijn ##.input.148.277 2 0))) ((bruijn ##.k.788 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k73, self)))),
      _V0const,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.782 0 0) (bruijn ##.k.777 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.783 0 0) (##inline ##vcore.qcons 'const-void-pointer '(##string ##.string.1665)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__void__pointer,
        VEncodePointer(&_V10_Dstring_D1665.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.780 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.281 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k82) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20) (bruijn ##.kk.147.276 6 1)) ((bruijn ##.k.777 3 0) #f)) ((bruijn ##.k.777 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda20, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.281 0 0)) ((bruijn ##.equal?.180 9 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k81) 'void (##inline ##vcore.car (bruijn ##.expr.152.281 0 0))) ((bruijn ##.k.777 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k81, self)))),
      _V0void,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.778 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k80) (##inline ##vcore.cdr (bruijn ##.input.148.277 3 0))) ((bruijn ##.k.777 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k80, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 2 0)) ((bruijn ##.equal?.180 7 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k79) 'const (##inline ##vcore.car (bruijn ##.input.148.277 2 0))) ((bruijn ##.k.777 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k79, self)))),
      _V0const,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.774 0 0) (bruijn ##.k.773 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.775 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1666)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1666.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.772 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k86) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21) (bruijn ##.kk.147.276 4 1)) ((bruijn ##.k.773 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k86, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda21, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.770 0 0) (bruijn ##.k.769 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.771 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1667)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1667.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.768 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k90) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22) (bruijn ##.kk.147.276 5 1)) ((bruijn ##.k.769 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k90, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda22, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.766 0 0) (bruijn ##.k.765 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.767 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1668)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.764 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k94) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23) (bruijn ##.kk.147.276 6 1)) ((bruijn ##.k.765 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k94, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda23, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.762 0 0) (bruijn ##.k.761 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.763 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1669)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1669.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.760 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k98) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24) (bruijn ##.kk.147.276 7 1)) ((bruijn ##.k.761 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k98, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda24, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.758 0 0) (bruijn ##.k.757 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.759 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1670)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1670.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.756 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k102) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25) (bruijn ##.kk.147.276 8 1)) ((bruijn ##.k.757 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k102, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda25, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.754 0 0) (bruijn ##.k.753 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.755 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1671)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1671.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.752 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26) (bruijn ##.kk.147.276 9 1)) ((bruijn ##.k.753 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k106, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda26, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.750 0 0) (bruijn ##.k.749 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.751 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1672)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1672.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.748 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27) (bruijn ##.kk.147.276 10 1)) ((bruijn ##.k.749 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k110, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda27, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.746 0 0) (bruijn ##.k.745 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.747 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1673)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1673.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.744 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28) (bruijn ##.kk.147.276 11 1)) ((bruijn ##.k.745 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda28, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.739 0 0) (bruijn ##.k.734 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.740 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1667)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1667.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.737 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.283 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29) (bruijn ##.kk.147.276 14 1)) ((bruijn ##.k.734 3 0) #f)) ((bruijn ##.k.734 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k120, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda29, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.283 0 0)) ((bruijn ##.equal?.180 17 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119) 'float (##inline ##vcore.car (bruijn ##.expr.154.283 0 0))) ((bruijn ##.k.734 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k119, self)))),
      _V0float,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.735 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118) (##inline ##vcore.cdr (bruijn ##.input.148.277 11 0))) ((bruijn ##.k.734 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k118, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 10 0)) ((bruijn ##.equal?.180 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117) 'const (##inline ##vcore.car (bruijn ##.input.148.277 10 0))) ((bruijn ##.k.734 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k117, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.728 0 0) (bruijn ##.k.723 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.729 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1668)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.726 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.285 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30) (bruijn ##.kk.147.276 14 1)) ((bruijn ##.k.723 3 0) #f)) ((bruijn ##.k.723 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k126, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda30, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.285 0 0)) ((bruijn ##.equal?.180 17 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125) 'double (##inline ##vcore.car (bruijn ##.expr.156.285 0 0))) ((bruijn ##.k.723 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k125, self)))),
      _V0double,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.724 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124) (##inline ##vcore.cdr (bruijn ##.input.148.277 11 0))) ((bruijn ##.k.723 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k124, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 10 0)) ((bruijn ##.equal?.180 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123) 'const (##inline ##vcore.car (bruijn ##.input.148.277 10 0))) ((bruijn ##.k.723 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k123, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.717 0 0) (bruijn ##.k.712 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.718 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1669)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1669.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.715 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.158.287 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31) (bruijn ##.kk.147.276 14 1)) ((bruijn ##.k.712 3 0) #f)) ((bruijn ##.k.712 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k132, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda31, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.287 0 0)) ((bruijn ##.equal?.180 17 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131) 'int (##inline ##vcore.car (bruijn ##.expr.158.287 0 0))) ((bruijn ##.k.712 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k131, self)))),
      _V0int,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.713 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130) (##inline ##vcore.cdr (bruijn ##.input.148.277 11 0))) ((bruijn ##.k.712 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k130, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 10 0)) ((bruijn ##.equal?.180 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129) 'const (##inline ##vcore.car (bruijn ##.input.148.277 10 0))) ((bruijn ##.k.712 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k129, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.706 0 0) (bruijn ##.k.701 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.707 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1670)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1670.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.704 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.160.289 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32) (bruijn ##.kk.147.276 14 1)) ((bruijn ##.k.701 3 0) #f)) ((bruijn ##.k.701 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda32, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.289 0 0)) ((bruijn ##.equal?.180 17 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137) 'unsigned-short (##inline ##vcore.car (bruijn ##.expr.160.289 0 0))) ((bruijn ##.k.701 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k137, self)))),
      _V0unsigned__short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.702 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136) (##inline ##vcore.cdr (bruijn ##.input.148.277 11 0))) ((bruijn ##.k.701 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k136, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 10 0)) ((bruijn ##.equal?.180 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135) 'const (##inline ##vcore.car (bruijn ##.input.148.277 10 0))) ((bruijn ##.k.701 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k135, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.695 0 0) (bruijn ##.k.690 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.696 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1671)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1671.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.693 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.291 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33) (bruijn ##.kk.147.276 14 1)) ((bruijn ##.k.690 3 0) #f)) ((bruijn ##.k.690 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k144, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda33, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.291 0 0)) ((bruijn ##.equal?.180 17 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143) 'short (##inline ##vcore.car (bruijn ##.expr.162.291 0 0))) ((bruijn ##.k.690 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k143, self)))),
      _V0short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.691 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142) (##inline ##vcore.cdr (bruijn ##.input.148.277 11 0))) ((bruijn ##.k.690 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k142, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 10 0)) ((bruijn ##.equal?.180 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141) 'const (##inline ##vcore.car (bruijn ##.input.148.277 10 0))) ((bruijn ##.k.690 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k141, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.684 0 0) (bruijn ##.k.679 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.685 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1672)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1672.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.682 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.293 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34) (bruijn ##.kk.147.276 14 1)) ((bruijn ##.k.679 3 0) #f)) ((bruijn ##.k.679 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k150, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda34, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.293 0 0)) ((bruijn ##.equal?.180 17 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149) 'unsigned-char (##inline ##vcore.car (bruijn ##.expr.164.293 0 0))) ((bruijn ##.k.679 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k149, self)))),
      _V0unsigned__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.680 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148) (##inline ##vcore.cdr (bruijn ##.input.148.277 11 0))) ((bruijn ##.k.679 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k148, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 10 0)) ((bruijn ##.equal?.180 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147) 'const (##inline ##vcore.car (bruijn ##.input.148.277 10 0))) ((bruijn ##.k.679 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k147, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.673 0 0) (bruijn ##.k.668 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.674 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1673)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1673.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.671 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.295 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35) (bruijn ##.kk.147.276 14 1)) ((bruijn ##.k.668 3 0) #f)) ((bruijn ##.k.668 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k156, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda35, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.295 0 0)) ((bruijn ##.equal?.180 17 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155) 'signed-char (##inline ##vcore.car (bruijn ##.expr.166.295 0 0))) ((bruijn ##.k.668 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k155, self)))),
      _V0signed__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.669 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154) (##inline ##vcore.cdr (bruijn ##.input.148.277 11 0))) ((bruijn ##.k.668 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k154, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.277 10 0)) ((bruijn ##.equal?.180 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153) 'const (##inline ##vcore.car (bruijn ##.input.148.277 10 0))) ((bruijn ##.k.668 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k153, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.666 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1674)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1674.sym, VPOINTER_OTHER)));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k157(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.665 10 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36) (bruijn ##.kk.147.276 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 10-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda36, self)))),
      VGetArg(statics, 10-1, 1));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k157))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k152, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k157, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k151))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k146, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k151, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k145))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k145, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k139))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k134, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k139, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k127(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k133))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k128, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k133, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k121(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k127))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k122, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k127, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k121))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k121, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112" };
 VRecordCall2(runtime, &dbg);
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
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k111(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 13 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112) 'signed-char (bruijn ##.input.148.277 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k112, self)))),
      _V0signed__char,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k111))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k111, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k107(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 12 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108) 'unsigned-char (bruijn ##.input.148.277 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k108, self)))),
      _V0unsigned__char,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k107, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 11 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104) 'short (bruijn ##.input.148.277 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k104, self)))),
      _V0short,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k101) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k103))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k103, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k99(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 10 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k100) 'unsigned-short (bruijn ##.input.148.277 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k100, self)))),
      _V0unsigned__short,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k97) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k99))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k99, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k95(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 9 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k96) 'int (bruijn ##.input.148.277 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k96, self)))),
      _V0int,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k93) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k95))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k95, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k91(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 8 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k92) 'double (bruijn ##.input.148.277 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k92, self)))),
      _V0double,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k89) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k91))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k91, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 7 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k88) 'float (bruijn ##.input.148.277 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k88, self)))),
      _V0float,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k85) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k87))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k85, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k87, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k84) 'void (bruijn ##.input.148.277 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k84, self)))),
      _V0void,
      statics->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k77(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k78) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k83, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k71(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k72) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k77))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k77, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k69) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k71))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k69, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k71, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.180 5 2) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k68) 'char (bruijn ##.input.148.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k68, self)))),
      _V0char,
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.187 4 9) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k67) (bruijn ##.type.275 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k67, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.664 0 0) (##vcore.call/cc (bruijn ##.k.663 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda17)) ((bruijn ##.assv.186 3 8) (bruijn ##.k.663 1 0) (bruijn ##.type.275 1 1) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1675)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1676)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1677)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1678)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1679)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1680)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1681)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1681)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long '(##string ##.string.1681)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long '(##string ##.string.1681)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long-long '(##string ##.string.1681)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long-long '(##string ##.string.1681)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1682)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1682)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1683)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'c-string '(##string ##.string.1663)) '()))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda17, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1675.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1676.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1677.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1678.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1679.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1680.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long,
        VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long,
        VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long__long,
        VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long__long,
        VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1682.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1682.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1683.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1663.sym, VPOINTER_OTHER)),
        VNULL)))))))))))))))));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder" };
 VRecordCall2(runtime, &dbg);
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k65) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k66))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k66, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.type.296 1 1)) ((bruijn ##.k.864 0 0) (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.type.296 1 1)) 'pointer)) ((bruijn ##.k.864 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0pointer));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.838 0 0) ((bruijn ##.k.837 1 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1684))) ((bruijn ##.assv.186 3 8) (bruijn ##.k.837 1 0) (bruijn ##.type.296 1 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'void '#t) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1685)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1686)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1687)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1687)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1687)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1687)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1687)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1687)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1688)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1688)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1689)) '()))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1684.sym, VPOINTER_OTHER)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0void,
        VEncodeBool(true)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1685.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1686.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1689.sym, VPOINTER_OTHER)),
        VNULL)))))))))))));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder" };
 VRecordCall2(runtime, &dbg);
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k158) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k159))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k159, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.188 2 10) (bruijn ##.k.866 0 0) (##string ##.string.1690) (bruijn ##.name.297 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.188 2 10) (bruijn ##.k.867 0 0) (##string ##.string.1691) (bruijn ##.name.298 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1691.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.188 2 10) (bruijn ##.k.868 0 0) (##string ##.string.1692) (bruijn ##.name.299 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1692.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.188 2 10) (bruijn ##.k.869 0 0) (##string ##.string.1693) (bruijn ##.name.300 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.880 0 0) (bruijn ##.k.875 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.893 1 0)) ((bruijn ##.compiler-error.189 13 11) (bruijn ##.k.892 0 0) (##string ##.string.1694) (bruijn ##.expr.301 11 1)) ((bruijn ##.k.892 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1694.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.1616 1 0)) ((bruijn ##.compiler-error.189 14 11) (bruijn ##.k.889 0 0) (##string ##.string.1695) (bruijn ##.expr.301 12 1)) ((bruijn ##.k.889 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.881 9 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.declare (##inline ##vcore.cons (bruijn ##.x.886 2 0) '())) (bruijn ##.x.883 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10foreign_Ddeclare,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.230 18 12) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k179) (bruijn ##.x.884 0 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k179, self))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi unwrap-declares) #t (bruijn ##.unwrap-declares.231 17 13) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k178) (bruijn ##.parse.314 1 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k178, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k176(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.sprintf.188 17 10) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k177) (##string ##.string.1696) (bruijn ##.file.311 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k177, self)))),
      VEncodePointer(&_V10_Dstring_D1696.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.190 17 12) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k176) (bruijn ##.fd.313 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k176, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-header-c.304 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k175) (bruijn ##.fd.313 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k175, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.open-input-process (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k174) (bruijn ##.cmd.312 0 0))
    VCallFuncWithGC(runtime, (VFunc)VOpenInputProcess2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k174, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi make-preprocess-command) #t (bruijn ##.make-preprocess-command.226 13 8) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k173) (bruijn ##.x.887 0 0) (bruijn ##.architecture.303 12 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k173, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k171(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi find-file) #t (bruijn ##.find-file.228 12 10) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k172) (bruijn ##.file.311 3 0) (bruijn ##.paths.302 11 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k172, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__file(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k169(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.1616) ((##vcore.string? (bruijn ##.file.311 3 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k170) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k171)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k171, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k168) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k169))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k169, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.180 11 2) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k167) (##inline ##vcore.car (bruijn ##.expr.145.308 3 0)) (##string ##.string.1697))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k167, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.310 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k166) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda38) (bruijn ##.kk.142.305 5 1)) ((bruijn ##.k.875 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k166, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda38, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.310 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k165) (##inline ##vcore.car (bruijn ##.expr.146.310 0 0))) ((bruijn ##.k.875 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k165, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.308 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k164) (##inline ##vcore.cdr (bruijn ##.expr.145.308 0 0))) ((bruijn ##.k.875 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k164, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.876 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k163) (##inline ##vcore.cdr (bruijn ##.expr.301 5 1))) ((bruijn ##.k.875 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k163, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.301 4 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k162) '##foreign.import (##inline ##vcore.car (bruijn ##.expr.301 4 1))) ((bruijn ##.k.875 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k162, self)))),
      _V10foreign_Dimport,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 6 11) (bruijn ##.k.873 0 0) (##string ##.string.1698) (bruijn ##.expr.301 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1698.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k180(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.872 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39) (bruijn ##.kk.142.305 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda39, self)))),
      self->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k161) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k180))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k180, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.871 1 0)) (##vcore.call/cc (bruijn ##.k.870 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda37)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda37, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k160) (##string ##.string.1699))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k160, self)))),
      VEncodePointer(&_V10_Dstring_D1699.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.188 3 10) (bruijn ##.k.896 1 0) (##string ##.string.1700) (bruijn ##.gcc-path.191 3 13) (bruijn ##.file.315 1 1) (bruijn ##.x.898 0 0) (##string ##.string.1701) (bruijn ##.architecture.316 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 7,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER),
      statics->up->up->vars[13],
      statics->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1701.sym, VPOINTER_OTHER),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.188 3 10) (bruijn ##.k.896 1 0) (##string ##.string.1702) (bruijn ##.gcc-path.191 3 13) (bruijn ##.file.315 1 1) (bruijn ##.x.899 0 0) (##string ##.string.1701) (bruijn ##.architecture.316 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 7,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1702.sym, VPOINTER_OTHER),
      statics->up->up->vars[13],
      statics->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1701.sym, VPOINTER_OTHER),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.eq? (bruijn ##.platform.192 2 14) 'windows) (##qualified-call (vanity compiler ffi get-install-root) #t (bruijn ##.get-install-root.227 1 9) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k181)) (##qualified-call (vanity compiler ffi get-install-root) #t (bruijn ##.get-install-root.227 1 9) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k182)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[14],
        _V0windows))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k181, self))));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k182, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, _V60_V0vanity_V0compiler_V0ffi)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__install__root(runtime, _closure_env, 1, _arg0);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.188 4 10) (bruijn ##.k.900 2 0) (##string ##.string.1703) (bruijn ##.x.901 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[10]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1703.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.902 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k184))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k184, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0get__install__root" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.install-root.193 2 15) ((bruijn ##.k.900 0 0) (bruijn ##.install-root.193 2 15)) (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k183) (##string ##.string.1704)))
if(VDecodeBool(
statics->up->vars[15])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[15]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k183, self)))),
      VEncodePointer(&_V10_Dstring_D1704.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.905 0 0) ((bruijn ##.k.903 2 0) (bruijn ##.path.319 1 0)) (##qualified-call (vanity compiler ffi find-file) #t (bruijn ##.find-file.228 3 10) (bruijn ##.k.903 2 0) (bruijn ##.file.317 2 1) (##inline ##vcore.cdr (bruijn ##.paths.318 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__file(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.file-exists?.194 3 16) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k186) (bruijn ##.path.319 0 0) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[16]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k186, self)))),
      _var0,
      VEncodeInt(4l));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__file" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.paths.318 0 2)) ((bruijn ##.compiler-error.189 2 11) (bruijn ##.k.903 0 0) (##string ##.string.1705) (bruijn ##.file.317 0 1)) ((bruijn ##.sprintf.188 2 10) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k185) (##string ##.string.1706) (##inline ##vcore.car (bruijn ##.paths.318 0 2)) (bruijn ##.file.317 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[11]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1705.sym, VPOINTER_OTHER),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k185, self)))),
      VEncodePointer(&_V10_Dstring_D1706.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var2),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1618 1 0) (##vcore.blob=? (bruijn ##.k.945 0 0) (##string ##.string.1707) (##inline ##vcore.car (bruijn ##.parse.323 4 1))) ((bruijn ##.k.945 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1619 1 0) (##vcore.blob=? (bruijn ##.k.941 0 0) (##string ##.string.1708) (##inline ##vcore.car (bruijn ##.expr.136.328 2 0))) ((bruijn ##.k.941 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1708.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.936 0 0) (bruijn ##.k.927 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cdadr.197 16 19) (bruijn ##.k.937 0 0) (bruijn ##.parse.323 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 19)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.331 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.331 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.327 5 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k197) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda41) (bruijn ##.kk.132.324 9 1)) ((bruijn ##.k.927 8 0) #f)) ((bruijn ##.k.927 8 0) #f)) ((bruijn ##.k.927 8 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k197, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda41, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.329 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k196) (##inline ##vcore.cdr (bruijn ##.expr.137.329 0 0))) ((bruijn ##.k.927 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k196, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.931 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k195) (##inline ##vcore.cdr (bruijn ##.expr.136.328 2 0))) ((bruijn ##.k.927 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k195, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.328 0 0)) (basic-block 1 1 (##.reg.1619) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.136.328 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k193) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k194))) ((bruijn ##.k.927 4 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k194, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.327 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k192) (##inline ##vcore.car (bruijn ##.expr.135.327 0 0))) ((bruijn ##.k.927 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k192, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.928 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k191) (##inline ##vcore.cdr (bruijn ##.parse.323 4 1))) ((bruijn ##.k.927 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k191, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.323 2 1)) (basic-block 1 1 (##.reg.1618) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.323 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k189) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k190))) ((bruijn ##.k.927 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k189, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k190, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1617 1 0) (##vcore.blob=? (bruijn ##.k.923 0 0) (##string ##.string.1709) (##inline ##vcore.car (bruijn ##.parse.323 4 1))) ((bruijn ##.k.923 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1709.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.919 0 0) (bruijn ##.k.914 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.920 0 0) (##inline ##vcore.cdr (bruijn ##.parse.323 7 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.335 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.335 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k204) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda42) (bruijn ##.kk.132.324 5 1)) ((bruijn ##.k.914 4 0) #f)) ((bruijn ##.k.914 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k204, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda42, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.333 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k203) (##inline ##vcore.cdr (bruijn ##.expr.140.333 0 0))) ((bruijn ##.k.914 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k203, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.915 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k202) (##inline ##vcore.cdr (bruijn ##.parse.323 4 1))) ((bruijn ##.k.914 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k202, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.323 2 1)) (basic-block 1 1 (##.reg.1617) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.323 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k200) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k201))) ((bruijn ##.k.914 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k200, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k201, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k206(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.912 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.compiler-error.189 7 11) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k206) (##string ##.string.1710) (bruijn ##.parse.323 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k206, self)))),
      VEncodePointer(&_V10_Dstring_D1710.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k205(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.911 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda43) (bruijn ##.kk.132.324 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda43, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k198(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k199) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k205))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k199, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k205, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k188) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k198))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0k198, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.910 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda40))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322_V0lambda40, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.980 0 0) (bruijn ##.k.974 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.981 0 0) (bruijn ##.expr.320 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.345 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k213) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda45) (bruijn ##.kk.122.336 6 1)) ((bruijn ##.k.974 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k213, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda45, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.343 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k212) (##inline ##vcore.cdr (bruijn ##.expr.127.343 0 0))) ((bruijn ##.k.974 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k212, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.341 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k211) (##inline ##vcore.cdr (bruijn ##.expr.126.341 0 0))) ((bruijn ##.k.974 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k211, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.339 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k210) (##inline ##vcore.cdr (bruijn ##.expr.125.339 0 0))) ((bruijn ##.k.974 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k210, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.975 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k209) (##inline ##vcore.cdr (bruijn ##.expr.320 5 1))) ((bruijn ##.k.974 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k209, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.320 4 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k208) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.320 4 1))) ((bruijn ##.k.974 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k208, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.956 0 0) (bruijn ##.k.951 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.970 1 0)) ((bruijn ##.compiler-error.189 14 11) (bruijn ##.k.969 0 0) (##string ##.string.1694) (bruijn ##.lang.350 5 0)) ((bruijn ##.k.969 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1694.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.957 9 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1697) (##inline ##vcore.cons (bruijn ##.decl.352 10 0) (##inline ##vcore.cons (bruijn ##.x.961 2 0) (##inline ##vcore.cons (bruijn ##.x.963 1 0) (bruijn ##.x.964 0 0)))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        _var0))))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdddr.196 20 18) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k232) (bruijn ##.ff.355 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k232, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.187 19 9) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k231) (bruijn ##.ff.355 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k231, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.195 18 17) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k230) (bruijn ##.ff.355 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k230, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi unwrap-function) #t (bruijn ##.unwrap-function.233 16 15) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k229) (bruijn ##.x.965 1 0) (bruijn ##.x.966 0 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k229, self))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.187 16 9) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k228) (bruijn ##.parse.354 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k228, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) #t (bruijn ##.reduce-type.235 14 17) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k227) (##inline ##vcore.car (bruijn ##.parse.354 0 0)) '() #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k227, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        _var0);
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi validate-foreign-function ##.is-one-decl.322) #f (bruijn ##.is-one-decl.322 10 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k226) (bruijn ##.raw-parse.353 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k226, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k224(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.parse-decl-c.321 9 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k225) (bruijn ##.decl.352 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k225, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k223) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k224))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k223, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k224, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.180 12 2) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k222) (bruijn ##.lang.350 3 0) (##string ##.string.1697))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k222, self)))),
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.351 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k221) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46) (bruijn ##.kk.122.336 6 1)) ((bruijn ##.k.951 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k221, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda46, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.351 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k220) (##inline ##vcore.car (bruijn ##.expr.131.351 0 0))) ((bruijn ##.k.951 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k220, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219) (##inline ##vcore.cdr (bruijn ##.expr.130.349 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k219, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.349 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k218) (##inline ##vcore.car (bruijn ##.expr.130.349 0 0))) ((bruijn ##.k.951 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k218, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.952 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k217) (##inline ##vcore.cdr (bruijn ##.expr.320 5 1))) ((bruijn ##.k.951 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k217, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.320 4 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k216) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.320 4 1))) ((bruijn ##.k.951 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k216, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 6 11) (bruijn ##.k.949 0 0) (##string ##.string.1711) (bruijn ##.expr.320 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k233(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.948 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47) (bruijn ##.kk.122.336 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda47, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k214(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k215) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k233))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k215, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k233, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k207) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k214))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k207, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k214, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.909 1 0) (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322")) (##vcore.call/cc (bruijn ##.k.908 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda44)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D322, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda44, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k187) (##string ##.string.1712))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k187, self)))),
      VEncodePointer(&_V10_Dstring_D1712.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.990 0 0)) ((bruijn ##.err-proc.362 2 4) (bruijn ##.k.984 2 0) (##inline ##vcore.car (bruijn ##.table.361 2 3))) ((bruijn ##.k.984 2 0) #t))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(true));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.x.359 1 1) (bruijn ##.x.993 0 0))) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.358) #f (bruijn ##.duplicate-mismatch.358 2 0) (bruijn ##.k.984 1 0) (bruijn ##.x.359 1 1) (bruijn ##.entry.360 1 2) (##inline ##vcore.cdr (bruijn ##.table.361 1 3)) (bruijn ##.err-proc.362 1 4)) ((bruijn ##.equal?.180 5 2) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k235) (bruijn ##.entry.360 1 2) (##inline ##vcore.car (bruijn ##.table.361 1 3))))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        statics->vars[1],
        _var0)))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->vars[3]);
    VWORD _arg4 = 
      statics->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k235, self)))),
      statics->vars[2],
      VInlineCar2(runtime,
        statics->vars[3]));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.table.361 0 3)) ((bruijn ##.k.984 0 0) #f) ((bruijn ##.cadar.198 4 20) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k234) (bruijn ##.table.361 0 3)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[20]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358_V0k234, self)))),
      _var3);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1036 0 0) (bruijn ##.k.1032 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.230 12 12) (bruijn ##.k.1037 2 0) (##inline ##vcore.cdr (bruijn ##.table.356 11 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.367 4 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1697) (##inline ##vcore.cons '(##string ##.string.1689) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.115.368 3 0)) (##inline ##vcore.cons (bruijn ##.x.1050 0 0) (##inline ##vcore.cdr (bruijn ##.expr.115.368 3 0))))))) '()))) (bruijn ##.acc.357 11 2)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
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
        VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1689.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        statics->up->up->vars[0])))))),
        VNULL))),
        VGetArg(statics, 11-1, 2));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1038 0 0) (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.230 11 12) (bruijn ##.k.1037 1 0) (##inline ##vcore.cdr (bruijn ##.table.356 10 1)) (bruijn ##.acc.357 10 2)) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k244) (bruijn ##.name.367 3 0)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k244, self)))),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 12 11) (bruijn ##.k.1053 0 0) (##string ##.string.1713) (##inline ##vcore.car (bruijn ##.table.356 10 1)) (bruijn ##.conflict.371 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.358) #f (bruijn ##.duplicate-mismatch.358 8 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k243) (bruijn ##.name.367 2 0) (##inline ##vcore.car (bruijn ##.table.356 9 1)) (##inline ##vcore.cdr (bruijn ##.table.356 9 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k243, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.368 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k242) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49) (bruijn ##.kk.111.363 6 1)) ((bruijn ##.k.1032 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k242, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k241) (##inline ##vcore.cdr (bruijn ##.expr.114.366 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k241, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.366 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k240) (##inline ##vcore.car (bruijn ##.expr.114.366 0 0))) ((bruijn ##.k.1032 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k240, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1033 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k239) (##inline ##vcore.cdr (bruijn ##.input.112.364 2 0))) ((bruijn ##.k.1032 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k239, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.364 1 0)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k238) 'function (##inline ##vcore.car (bruijn ##.input.112.364 1 0))) ((bruijn ##.k.1032 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k238, self)))),
      _V0function,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1019 0 0) (bruijn ##.k.1014 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k252(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.230 10 12) (bruijn ##.k.1020 0 0) (##inline ##vcore.cdr (bruijn ##.table.356 9 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define-constant (##inline ##vcore.cons (bruijn ##.name.374 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.118.375 1 0)) '()))) (bruijn ##.acc.357 9 2)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0define__constant,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        VNULL))),
        VGetArg(statics, 9-1, 2));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 12 11) (bruijn ##.k.1027 0 0) (##string ##.string.1713) (##inline ##vcore.car (bruijn ##.table.356 10 1)) (bruijn ##.conflict.377 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.358) #f (bruijn ##.duplicate-mismatch.358 8 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k252) (bruijn ##.name.374 2 0) #f (##inline ##vcore.cdr (bruijn ##.table.356 9 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda52))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k252, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda52, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.375 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.375 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k251) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51) (bruijn ##.kk.111.363 6 1)) ((bruijn ##.k.1014 4 0) #f)) ((bruijn ##.k.1014 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k251, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k250) (##inline ##vcore.cdr (bruijn ##.expr.117.373 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k250, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.373 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k249) (##inline ##vcore.car (bruijn ##.expr.117.373 0 0))) ((bruijn ##.k.1014 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k249, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1015 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k248) (##inline ##vcore.cdr (bruijn ##.input.112.364 2 0))) ((bruijn ##.k.1014 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k248, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.364 1 0)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k247) 'enum (##inline ##vcore.car (bruijn ##.input.112.364 1 0))) ((bruijn ##.k.1014 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k247, self)))),
      _V0enum,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1004 0 0) (bruijn ##.k.999 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k259(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi table->defines) #t (bruijn ##.table->defines.230 9 12) (bruijn ##.k.1005 0 0) (##inline ##vcore.cdr (bruijn ##.table.356 8 1)) (bruijn ##.acc.357 8 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 11 11) (bruijn ##.k.1009 0 0) (##string ##.string.1713) (##inline ##vcore.car (bruijn ##.table.356 9 1)) (bruijn ##.conflict.383 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.358) #f (bruijn ##.duplicate-mismatch.358 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k259) (##inline ##vcore.car (bruijn ##.expr.120.379 2 0)) (##inline ##vcore.car (bruijn ##.table.356 8 1)) (##inline ##vcore.cdr (bruijn ##.table.356 8 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k259, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda54, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.381 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.381 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k258) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53) (bruijn ##.kk.111.363 5 1)) ((bruijn ##.k.999 3 0) #f)) ((bruijn ##.k.999 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k258, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda53, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.379 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k257) (##inline ##vcore.cdr (bruijn ##.expr.120.379 0 0))) ((bruijn ##.k.999 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k257, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1000 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k256) (##inline ##vcore.cdr (bruijn ##.input.112.364 2 0))) ((bruijn ##.k.999 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k256, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.364 1 0)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k255) 'typedef (##inline ##vcore.car (bruijn ##.input.112.364 1 0))) ((bruijn ##.k.999 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k255, self)))),
      _V0typedef,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 6 11) (bruijn ##.k.996 0 0) (##string ##.string.1714) (##inline ##vcore.car (bruijn ##.table.356 4 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1714.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k260(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.995 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55) (bruijn ##.kk.111.363 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda55, self)))),
      statics->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k253(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k254) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k260))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k254, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k260, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k245(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k246) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k253))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k246, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k253, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k237) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k245))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k237, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k245, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k236) (##inline ##vcore.car (bruijn ##.table.356 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k236, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358")) (if (##inline ##vcore.null? (bruijn ##.table.356 1 1)) ((bruijn ##.k.983 1 0) (bruijn ##.acc.357 1 2)) (##vcore.call/cc (bruijn ##.k.983 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D358, self))));
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1622 1 0) (##vcore.blob=? (bruijn ##.k.1095 0 0) (##string ##.string.1707) (##inline ##vcore.car (bruijn ##.parse.384 4 1))) ((bruijn ##.k.1095 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1091 0 0) (bruijn ##.k.1088 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1092 0 0) (bruijn ##.table.385 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1089 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.parse.384 4 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k264) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda57) (bruijn ##.kk.104.386 3 1)) ((bruijn ##.k.1088 2 0) #f)) ((bruijn ##.k.1088 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k264, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda57, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.384 2 1)) (basic-block 1 1 (##.reg.1622) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.384 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k262) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k263))) ((bruijn ##.k.1088 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k262, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k263, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1620 1 0) (##vcore.blob=? (bruijn ##.k.1084 0 0) (##string ##.string.1707) (##inline ##vcore.car (bruijn ##.parse.384 4 1))) ((bruijn ##.k.1084 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1621 1 0) (##vcore.blob=? (bruijn ##.k.1080 0 0) (##string ##.string.1708) (##inline ##vcore.car (bruijn ##.expr.109.391 2 0))) ((bruijn ##.k.1080 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1708.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1065 0 0) (bruijn ##.k.1059 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.1067 5 0) (##qualified-call (vanity compiler ffi unwrap-typedef) #t (bruijn ##.unwrap-typedef.234 18 16) (bruijn ##.k.1076 0 0) (bruijn ##.x.1069 3 0) (##inline ##vcore.car (bruijn ##.mydecls.400 1 1)) (bruijn ##.table.401 1 2)) (##qualified-call (vanity compiler ffi unwrap-function) #t (bruijn ##.unwrap-function.233 18 15) (bruijn ##.k.1076 0 0) (bruijn ##.x.1069 3 0) (##inline ##vcore.car (bruijn ##.mydecls.400 1 1)) (bruijn ##.table.401 1 2)))
if(VDecodeBool(
VGetArg(statics, 5-1, 0))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.399) #f (bruijn ##.loop.399 2 0) (bruijn ##.k.1070 1 0) (##inline ##vcore.cdr (bruijn ##.mydecls.400 1 1)) (##inline ##vcore.cons (bruijn ##.x.1075 0 0) (bruijn ##.table.401 1 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _var0,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.mydecls.400 0 1)) (##qualified-call (vanity compiler ffi unwrap-declares) #t (bruijn ##.unwrap-declares.231 17 13) (bruijn ##.k.1070 0 0) (##inline ##vcore.cons '(##string ##.string.1707) (##inline ##vcore.cdr (bruijn ##.expr.108.390 11 0))) (bruijn ##.table.401 0 2)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k279) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k280)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER),
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k279, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399_V0k280, self)))));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399")) (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.399) #f (bruijn ##.loop.399 0 0) (bruijn ##.k.1066 4 0) (##inline ##vcore.cdr (bruijn ##.expr.110.392 6 0)) (bruijn ##.x.1068 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 0));
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D399(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) #t (bruijn ##.reduce-type.235 14 17) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278) (bruijn ##.ret.393 3 0) (bruijn ##.table.385 13 2) #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi unwrap-enums) #t (bruijn ##.unwrap-enums.232 13 14) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277) (bruijn ##.ret.393 2 0) (bruijn ##.table.385 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.member.199 13 21) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276) (##string ##.string.1715) (bruijn ##.ret.393 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 21)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276, self)))),
      VEncodePointer(&_V10_Dstring_D1715.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda58) (bruijn ##.kk.104.386 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda58, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.392 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274) (##inline ##vcore.car (bruijn ##.expr.110.392 0 0))) ((bruijn ##.k.1059 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1063 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273) (##inline ##vcore.cdr (bruijn ##.expr.109.391 2 0))) ((bruijn ##.k.1059 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.391 0 0)) (basic-block 1 1 (##.reg.1621) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.109.391 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272))) ((bruijn ##.k.1059 4 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.390 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270) (##inline ##vcore.car (bruijn ##.expr.108.390 0 0))) ((bruijn ##.k.1059 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1060 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269) (##inline ##vcore.cdr (bruijn ##.parse.384 4 1))) ((bruijn ##.k.1059 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.384 2 1)) (basic-block 1 1 (##.reg.1620) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.384 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k267) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k268))) ((bruijn ##.k.1059 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k267, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k268, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.179 3 1) (bruijn ##.k.1057 0 0) (##string ##.string.1662))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D1662.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k265(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k266) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k266, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k261) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k265))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k261, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k265, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.call/cc (bruijn ##.k.1056 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda56))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda56, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1109 1 0) ((bruijn ##.cadar.198 6 20) (bruijn ##.k.1110 0 0) (bruijn ##.enums.405 2 1)) ((bruijn ##.k.1110 0 0) (bruijn ##.val.406 2 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 20)), 2,
      _var0,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.404) #f (bruijn ##.unwrap-enums-iter.404 6 0) (bruijn ##.k.1099 5 0) (##inline ##vcore.cdr (bruijn ##.enums.405 5 1)) (bruijn ##.reg.1623 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'enum (##inline ##vcore.cons (bruijn ##.x.1106 0 0) (##inline ##vcore.cons (bruijn ##.val.408 3 0) '()))) (bruijn ##.table.407 5 3)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k286) (bruijn ##.x.1108 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k286, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1623) ((##vcore.+ (bruijn ##.val.408 1 0) 1)) ((bruijn ##.caar.201 7 23) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k285) (bruijn ##.enums.405 3 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k285, self)))),
      statics->up->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k283) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k284))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k283, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k284, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.enums.405 0 1)) ((bruijn ##.k.1099 0 0) (bruijn ##.table.407 0 3)) ((bruijn ##.cadar.198 4 20) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k282) (bruijn ##.enums.405 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[20]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404_V0k282, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.equal?.180 7 2) (bruijn ##.k.1116 1 0) (bruijn ##.x.1117 0 0) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.ret.410 1 1))) ((bruijn ##.caar.201 6 23) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k288) (bruijn ##.ret.410 1 1)) ((bruijn ##.k.1116 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k288, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.enums.411 0 0) (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.404) #f (bruijn ##.unwrap-enums-iter.404 4 0) (bruijn ##.k.1111 2 0) (bruijn ##.enums.411 0 0) 0 (bruijn ##.table.403 5 2)) ((bruijn ##.k.1111 2 0) (bruijn ##.table.403 5 2)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 5-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1113 0 0) ((bruijn ##.caddar.200 6 22) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k290) (bruijn ##.ret.410 1 1)) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.409) #f (bruijn ##.loop.409 2 0) (bruijn ##.k.1111 1 0) (##inline ##vcore.cdr (bruijn ##.ret.410 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k290, self)))),
      statics->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.ret.410 0 1)) ((bruijn ##.k.1111 0 0) (bruijn ##.table.403 3 2)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k287) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k289)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k287, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409_V0k289, self)))));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409")) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.409) #f (bruijn ##.loop.409 0 0) (bruijn ##.k.1098 2 0) (bruijn ##.ret.402 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D404, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409, self))));
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
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D409(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1127 0 0) (bruijn ##.k.1123 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1140 1 0)) ((bruijn ##.compiler-error.189 14 11) (bruijn ##.k.1139 0 0) (##string ##.string.1717) (bruijn ##.expr.415 11 0)) ((bruijn ##.k.1139 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.1624 1 0)) ((bruijn ##.compiler-error.189 15 11) (bruijn ##.k.1136 0 0) (##string ##.string.1718) (bruijn ##.expr.415 12 0)) ((bruijn ##.k.1136 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1718.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1128 3 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (bruijn ##.x.1130 0 0) (##inline ##vcore.cons (bruijn ##.ret.422 5 0) (bruijn ##.args.423 4 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        statics->up->up->up->vars[0]))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k305(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k306) (bruijn ##.name.420 6 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k306, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1134 0 0)) ((bruijn ##.compiler-error.189 16 11) (bruijn ##.k.1132 1 0) (##string ##.string.1719) (bruijn ##.name.420 8 0) (bruijn ##.arg.424 1 1)) ((bruijn ##.k.1132 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 11)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1719.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) #t (bruijn ##.get-foreign-decoder.219 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k307) (bruijn ##.arg.424 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k307, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k304(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.183 14 5) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k305) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda61) (bruijn ##.args.423 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k305, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda61, self)))),
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k302(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.1624) ((##vcore.string? (bruijn ##.name.420 6 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k303) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k304)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k303, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k304, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k301) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k302))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k301, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k302, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi get-foreign-encoder) #t (bruijn ##.get-foreign-encoder.220 11 2) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k300) (bruijn ##.ret.422 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k300, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _V60_V0vanity_V0compiler_V0ffi)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k299) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda60) (bruijn ##.kk.99.416 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k299, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda60, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k298) (##inline ##vcore.cdr (bruijn ##.expr.103.421 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k298, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.421 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k297) (##inline ##vcore.car (bruijn ##.expr.103.421 0 0))) ((bruijn ##.k.1123 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k297, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k296) (##inline ##vcore.cdr (bruijn ##.expr.102.419 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k296, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.419 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k295) (##inline ##vcore.car (bruijn ##.expr.102.419 0 0))) ((bruijn ##.k.1123 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k295, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1124 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k294) (##inline ##vcore.cdr (bruijn ##.expr.415 3 0))) ((bruijn ##.k.1123 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k294, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.415 2 0)) ((bruijn ##.equal?.180 5 2) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k293) 'function (##inline ##vcore.car (bruijn ##.expr.415 2 0))) ((bruijn ##.k.1123 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k293, self)))),
      _V0function,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 5 11) (bruijn ##.k.1121 0 0) (##string ##.string.1720) (bruijn ##.expr.415 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1720.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k308(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1120 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda62) (bruijn ##.kk.99.416 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda62, self)))),
      self->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k292) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k308))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k292, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k308, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1119 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda59))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda59, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function" };
 VRecordCall2(runtime, &dbg);
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
  // (##qualified-call (vanity compiler ffi reduce-declare) #t (bruijn ##.reduce-declare.237 1 19) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k291) (bruijn ##.ret.412 0 1) (bruijn ##.decl.413 0 2) (bruijn ##.table.414 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k291, self))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1151 0 0) (bruijn ##.k.1146 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.1625 1 0)) ((bruijn ##.compiler-error.189 12 11) (bruijn ##.k.1157 0 0) (##string ##.string.1721) (bruijn ##.expr.428 9 0)) ((bruijn ##.k.1157 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1721.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1152 2 0) (##inline ##vcore.cons 'typedef (##inline ##vcore.cons (bruijn ##.x.1154 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.97.432 5 0)) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0typedef,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        VNULL))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k317(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k318) (bruijn ##.name.435 2 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k318, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1625) ((##vcore.string? (bruijn ##.name.435 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k316) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k317)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k316, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k317, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.98.434 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k315) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda64) (bruijn ##.kk.94.429 5 1)) ((bruijn ##.k.1146 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k315, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda64, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.434 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k314) (##inline ##vcore.car (bruijn ##.expr.98.434 0 0))) ((bruijn ##.k.1146 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k314, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.432 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k313) (##inline ##vcore.cdr (bruijn ##.expr.97.432 0 0))) ((bruijn ##.k.1146 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k313, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1147 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k312) (##inline ##vcore.cdr (bruijn ##.expr.428 3 0))) ((bruijn ##.k.1146 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k312, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.428 2 0)) ((bruijn ##.equal?.180 5 2) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k311) 'variable (##inline ##vcore.car (bruijn ##.expr.428 2 0))) ((bruijn ##.k.1146 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k311, self)))),
      _V0variable,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 5 11) (bruijn ##.k.1144 0 0) (##string ##.string.1722) (bruijn ##.expr.428 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1722.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k319(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1143 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda65) (bruijn ##.kk.94.429 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda65, self)))),
      self->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k310) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k319))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k310, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k319, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1142 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda63))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda63, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef" };
 VRecordCall2(runtime, &dbg);
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
  // (##qualified-call (vanity compiler ffi reduce-declare) #t (bruijn ##.reduce-declare.237 1 19) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k309) (bruijn ##.ret.425 0 1) (bruijn ##.decl.426 0 2) (bruijn ##.table.427 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k309, self))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1397 0 0) (bruijn ##.k.1386 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1398 0 0) 'char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.449 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.37.449 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.449 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k326) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda67) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1386 5 0) #f)) ((bruijn ##.k.1386 5 0) #f)) ((bruijn ##.k.1386 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k326, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda67, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.448 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.36.448 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k325) (##inline ##vcore.cdr (bruijn ##.expr.36.448 0 0))) ((bruijn ##.k.1386 4 0) #f)) ((bruijn ##.k.1386 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k325, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.447 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.35.447 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k324) (##inline ##vcore.cdr (bruijn ##.expr.35.447 0 0))) ((bruijn ##.k.1386 3 0) #f)) ((bruijn ##.k.1386 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k324, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.446 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.34.446 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k323) (##inline ##vcore.cdr (bruijn ##.expr.34.446 0 0))) ((bruijn ##.k.1386 2 0) #f)) ((bruijn ##.k.1386 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k323, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1387 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k322) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1386 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k322, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k321) 'char (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1386 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k321, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1377 0 0) (bruijn ##.k.1366 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1378 0 0) 'unsigned-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.454 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.42.454 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.454 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k334) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda68) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1366 5 0) #f)) ((bruijn ##.k.1366 5 0) #f)) ((bruijn ##.k.1366 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k334, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda68, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.453 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.41.453 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k333) (##inline ##vcore.cdr (bruijn ##.expr.41.453 0 0))) ((bruijn ##.k.1366 4 0) #f)) ((bruijn ##.k.1366 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k333, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.452 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.40.452 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k332) (##inline ##vcore.cdr (bruijn ##.expr.40.452 0 0))) ((bruijn ##.k.1366 3 0) #f)) ((bruijn ##.k.1366 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k332, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.451 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.39.451 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k331) (##inline ##vcore.cdr (bruijn ##.expr.39.451 0 0))) ((bruijn ##.k.1366 2 0) #f)) ((bruijn ##.k.1366 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k331, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1367 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k330) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1366 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k330, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k329) 'char (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1366 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k329, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1357 0 0) (bruijn ##.k.1346 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1358 0 0) 'signed-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0signed__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.459 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.47.459 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.459 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k342) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda69) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1346 5 0) #f)) ((bruijn ##.k.1346 5 0) #f)) ((bruijn ##.k.1346 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k342, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda69, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.458 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.46.458 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k341) (##inline ##vcore.cdr (bruijn ##.expr.46.458 0 0))) ((bruijn ##.k.1346 4 0) #f)) ((bruijn ##.k.1346 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k341, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.457 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.45.457 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k340) (##inline ##vcore.cdr (bruijn ##.expr.45.457 0 0))) ((bruijn ##.k.1346 3 0) #f)) ((bruijn ##.k.1346 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k340, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.456 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.44.456 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k339) (##inline ##vcore.cdr (bruijn ##.expr.44.456 0 0))) ((bruijn ##.k.1346 2 0) #f)) ((bruijn ##.k.1346 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k339, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1347 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k338) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1346 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k338, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k337) 'char (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1346 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k337, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1338 0 0) (bruijn ##.k.1328 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1339 0 0) 'int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.464 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.464 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k350) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda70) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1328 5 0) #f)) ((bruijn ##.k.1328 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k350, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda70, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.463 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.51.463 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k349) (##inline ##vcore.cdr (bruijn ##.expr.51.463 0 0))) ((bruijn ##.k.1328 4 0) #f)) ((bruijn ##.k.1328 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k349, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.462 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.50.462 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k348) (##inline ##vcore.cdr (bruijn ##.expr.50.462 0 0))) ((bruijn ##.k.1328 3 0) #f)) ((bruijn ##.k.1328 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k348, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.461 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.49.461 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k347) (##inline ##vcore.cdr (bruijn ##.expr.49.461 0 0))) ((bruijn ##.k.1328 2 0) #f)) ((bruijn ##.k.1328 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k347, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1329 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k346) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1328 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k346, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k345) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1328 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k345, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1319 0 0) (bruijn ##.k.1308 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1320 0 0) 'unsigned-int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.469 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.57.469 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.469 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k358) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda71) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1308 5 0) #f)) ((bruijn ##.k.1308 5 0) #f)) ((bruijn ##.k.1308 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k358, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda71, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.468 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.56.468 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k357) (##inline ##vcore.cdr (bruijn ##.expr.56.468 0 0))) ((bruijn ##.k.1308 4 0) #f)) ((bruijn ##.k.1308 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k357, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.467 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.55.467 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k356) (##inline ##vcore.cdr (bruijn ##.expr.55.467 0 0))) ((bruijn ##.k.1308 3 0) #f)) ((bruijn ##.k.1308 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k356, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.466 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.54.466 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k355) (##inline ##vcore.cdr (bruijn ##.expr.54.466 0 0))) ((bruijn ##.k.1308 2 0) #f)) ((bruijn ##.k.1308 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k355, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1309 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k354) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1308 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k354, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k353) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1308 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k353, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1300 0 0) (bruijn ##.k.1290 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1301 0 0) 'long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.474 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.474 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k366) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda72) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1290 5 0) #f)) ((bruijn ##.k.1290 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k366, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda72, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.473 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.61.473 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k365) (##inline ##vcore.cdr (bruijn ##.expr.61.473 0 0))) ((bruijn ##.k.1290 4 0) #f)) ((bruijn ##.k.1290 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k365, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.472 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.60.472 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k364) (##inline ##vcore.cdr (bruijn ##.expr.60.472 0 0))) ((bruijn ##.k.1290 3 0) #f)) ((bruijn ##.k.1290 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k364, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.471 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.59.471 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k363) (##inline ##vcore.cdr (bruijn ##.expr.59.471 0 0))) ((bruijn ##.k.1290 2 0) #f)) ((bruijn ##.k.1290 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k363, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1291 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k362) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1290 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k362, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k361) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1290 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k361, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1281 0 0) (bruijn ##.k.1270 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1282 0 0) 'unsigned-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.479 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.67.479 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.479 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k374) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda73) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1270 5 0) #f)) ((bruijn ##.k.1270 5 0) #f)) ((bruijn ##.k.1270 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k374, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda73, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.478 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.66.478 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k373) (##inline ##vcore.cdr (bruijn ##.expr.66.478 0 0))) ((bruijn ##.k.1270 4 0) #f)) ((bruijn ##.k.1270 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k373, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.477 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.65.477 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k372) (##inline ##vcore.cdr (bruijn ##.expr.65.477 0 0))) ((bruijn ##.k.1270 3 0) #f)) ((bruijn ##.k.1270 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k372, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.476 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.64.476 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k371) (##inline ##vcore.cdr (bruijn ##.expr.64.476 0 0))) ((bruijn ##.k.1270 2 0) #f)) ((bruijn ##.k.1270 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k371, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1271 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k370) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1270 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k370, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k369) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1270 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k369, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1262 0 0) (bruijn ##.k.1252 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1263 0 0) 'long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.484 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.484 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k382) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda74) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1252 5 0) #f)) ((bruijn ##.k.1252 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k382, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda74, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.483 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.71.483 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k381) (##inline ##vcore.cdr (bruijn ##.expr.71.483 0 0))) ((bruijn ##.k.1252 4 0) #f)) ((bruijn ##.k.1252 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k381, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.482 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.70.482 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k380) (##inline ##vcore.cdr (bruijn ##.expr.70.482 0 0))) ((bruijn ##.k.1252 3 0) #f)) ((bruijn ##.k.1252 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k380, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.481 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.69.481 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k379) (##inline ##vcore.cdr (bruijn ##.expr.69.481 0 0))) ((bruijn ##.k.1252 2 0) #f)) ((bruijn ##.k.1252 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k379, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1253 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k378) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1252 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k378, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k377) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1252 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k377, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1243 0 0) (bruijn ##.k.1232 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1244 0 0) 'unsigned-long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.489 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.77.489 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.489 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k390) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda75) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1232 5 0) #f)) ((bruijn ##.k.1232 5 0) #f)) ((bruijn ##.k.1232 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k390, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda75, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.488 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.76.488 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k389) (##inline ##vcore.cdr (bruijn ##.expr.76.488 0 0))) ((bruijn ##.k.1232 4 0) #f)) ((bruijn ##.k.1232 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k389, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.487 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.75.487 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k388) (##inline ##vcore.cdr (bruijn ##.expr.75.487 0 0))) ((bruijn ##.k.1232 3 0) #f)) ((bruijn ##.k.1232 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k388, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.486 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.74.486 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k387) (##inline ##vcore.cdr (bruijn ##.expr.74.486 0 0))) ((bruijn ##.k.1232 2 0) #f)) ((bruijn ##.k.1232 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k387, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1233 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k386) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1232 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k386, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k385) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1232 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k385, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1224 0 0) (bruijn ##.k.1214 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1225 0 0) 'short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.494 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.82.494 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k398) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda76) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1214 5 0) #f)) ((bruijn ##.k.1214 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k398, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda76, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.493 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.81.493 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k397) (##inline ##vcore.cdr (bruijn ##.expr.81.493 0 0))) ((bruijn ##.k.1214 4 0) #f)) ((bruijn ##.k.1214 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k397, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.492 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.80.492 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k396) (##inline ##vcore.cdr (bruijn ##.expr.80.492 0 0))) ((bruijn ##.k.1214 3 0) #f)) ((bruijn ##.k.1214 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k396, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.491 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.79.491 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k395) (##inline ##vcore.cdr (bruijn ##.expr.79.491 0 0))) ((bruijn ##.k.1214 2 0) #f)) ((bruijn ##.k.1214 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k395, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1215 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k394) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1214 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k394, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k393) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1214 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k393, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1205 0 0) (bruijn ##.k.1194 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1206 0 0) 'unsigned-short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.499 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.87.499 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.499 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k406) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda77) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1194 5 0) #f)) ((bruijn ##.k.1194 5 0) #f)) ((bruijn ##.k.1194 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k406, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda77, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.498 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.86.498 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k405) (##inline ##vcore.cdr (bruijn ##.expr.86.498 0 0))) ((bruijn ##.k.1194 4 0) #f)) ((bruijn ##.k.1194 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k405, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.497 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.85.497 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k404) (##inline ##vcore.cdr (bruijn ##.expr.85.497 0 0))) ((bruijn ##.k.1194 3 0) #f)) ((bruijn ##.k.1194 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k404, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.496 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.84.496 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k403) (##inline ##vcore.cdr (bruijn ##.expr.84.496 0 0))) ((bruijn ##.k.1194 2 0) #f)) ((bruijn ##.k.1194 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k403, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1195 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k402) (##inline ##vcore.cdr (bruijn ##.args.442 3 1))) ((bruijn ##.k.1194 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k402, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k401) 'int (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1194 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k401, self)))),
      _V0int,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1182 0 0) (bruijn ##.k.1172 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.special.501 6 0)) ((bruijn ##.equal?.180 13 2) (bruijn ##.k.1186 0 0) (##inline ##vcore.car (bruijn ##.special.501 6 0)) (##string ##.string.1716)) ((bruijn ##.k.1186 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.93.506 0 0) ((bruijn ##.k.1183 2 0) (bruijn ##.x.93.506 0 0)) ((bruijn ##.k.1183 2 0) (bruijn ##.special.501 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1184 0 0) ((bruijn ##.k.1183 1 0) 'unsigned-int) (##qualified-call (vanity compiler ffi find-typedef) #t (bruijn ##.find-typedef.236 12 18) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k417) (bruijn ##.special.501 6 0) (bruijn ##.table.437 11 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V0unsigned__int);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k417, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _V60_V0vanity_V0compiler_V0ffi)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k415) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k416))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k415, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k416, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.505 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.92.505 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.92.505 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k414) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda78) (bruijn ##.kk.31.443 6 1)) ((bruijn ##.k.1172 5 0) #f)) ((bruijn ##.k.1172 5 0) #f)) ((bruijn ##.k.1172 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k414, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda78, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.504 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.91.504 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k413) (##inline ##vcore.cdr (bruijn ##.expr.91.504 0 0))) ((bruijn ##.k.1172 4 0) #f)) ((bruijn ##.k.1172 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k413, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.503 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.90.503 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k412) (##inline ##vcore.cdr (bruijn ##.expr.90.503 0 0))) ((bruijn ##.k.1172 3 0) #f)) ((bruijn ##.k.1172 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k412, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.502 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.89.502 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k411) (##inline ##vcore.cdr (bruijn ##.expr.89.502 0 0))) ((bruijn ##.k.1172 2 0) #f)) ((bruijn ##.k.1172 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k411, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k410) (##inline ##vcore.cdr (bruijn ##.args.442 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k410, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.442 2 1)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k409) (##inline ##vcore.car (bruijn ##.args.442 2 1))) ((bruijn ##.k.1172 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k409, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.189 7 11) (bruijn ##.k.1164 1 0) (##string ##.string.1723) (bruijn ##.x.1165 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1723.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.202 6 24) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k419) (bruijn ##.list.203 6 25) (bruijn ##.args.442 2 1) (##inline ##vcore.qcons 'special (##inline ##vcore.qcons 'longs (##inline ##vcore.qcons 'short (##inline ##vcore.qcons 'unsigned (##inline ##vcore.qcons 'signed '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 24)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k419, self)))),
      VGetArg(statics, 6-1, 25),
      statics->up->vars[1],
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
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k418(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1163 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda79) (bruijn ##.kk.31.443 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda79, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k407(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k408) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k418))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k408, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k418, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k399(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k400) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k407))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k400, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k407, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k391(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k392) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k399))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k392, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k399, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k383(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k384) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k391))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k384, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k391, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k375(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k376) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k383))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k376, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k383, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k367(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k368) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k375))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k368, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k375, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k359(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k360) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k367))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k360, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k367, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k351(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k352) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k359))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k352, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k359, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k343(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k344) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k351))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k344, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k351, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k335(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k336) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k343))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k336, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k343, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k327(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k328) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k335))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k328, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k335, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k320) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k327))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k320, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0k327, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.1162 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda66))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439_V0lambda66, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D440, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.const?.508 0 1) ((bruijn ##.list.203 4 25) (bruijn ##.k.1405 0 0) 'const (bruijn ##.type.509 0 2)) ((bruijn ##.k.1405 0 0) (bruijn ##.type.509 0 2)))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[25]), 3,
      _var0,
      _V0const,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D441, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1626) ((##vcore.string? (bruijn ##.x.510 1 1))) (if (bruijn ##.reg.1626 0 0) (##vcore.string->symbol (bruijn ##.k.1406 1 0) (bruijn ##.x.510 1 1)) ((bruijn ##.k.1406 1 0) (bruijn ##.x.510 1 1))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.special.514 1 3) ((bruijn ##.k.1412 0 0) (bruijn ##.special.514 1 3)) ((bruijn ##.k.1412 0 0) 'int))
if(VDecodeBool(
statics->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.append-const.440) #f (bruijn ##.append-const.440 4 1) (bruijn ##.k.1408 2 0) (bruijn ##.const.515 2 4) (bruijn ##.x.1410 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[4];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D440(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type ##.decide.439) #f (bruijn ##.decide.439 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k422) (bruijn ##.x.1411 0 0) (bruijn ##.longs.516 1 5) (bruijn ##.short.517 1 6) (bruijn ##.unsigned.518 1 7) (bruijn ##.signed.519 1 8))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k422, self))));
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1441 1 0) ((bruijn ##.k.1442 0 0) (bruijn ##.p.1441 1 0)) ((bruijn ##.k.1442 0 0) (##inline ##vcore.eq? (bruijn ##.x.30.520 2 0) 'volatile)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        statics->up->vars[0],
        _V0volatile));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1440 0 0) ((bruijn ##.k.1437 3 0) (bruijn ##.p.1440 0 0)) ((bruijn ##.k.1437 3 0) (##inline ##vcore.eq? (bruijn ##.x.30.520 7 0) 'auto)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 7-1, 0),
        _V0auto));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1439 0 0) ((bruijn ##.k.1437 2 0) (bruijn ##.p.1439 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k431) (##inline ##vcore.eq? (bruijn ##.x.30.520 6 0) 'register)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k431, self)), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 6-1, 0),
        _V0register));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1438 0 0) ((bruijn ##.k.1437 1 0) (bruijn ##.p.1438 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k430) (##inline ##vcore.eq? (bruijn ##.x.30.520 5 0) 'typedef)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k430, self)), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 5-1, 0),
        _V0typedef));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1436 1 0) ((bruijn ##.k.1437 0 0) (bruijn ##.p.1436 1 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k429) (##inline ##vcore.eq? (bruijn ##.x.30.520 4 0) 'extern)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k429, self)), 1,
      VInlineEq2(runtime,
        statics->up->up->up->vars[0],
        _V0extern));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.storage-declaration?.438 9 3)) ((bruijn ##.compiler-error.189 11 11) (bruijn ##.k.1423 0 0) (##string ##.string.1724)) ((bruijn ##.k.1423 0 0) (##inline ##vcore.car (bruijn ##.t.512 6 1))))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 9-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1724.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.storage.513 6 2) ((bruijn ##.compiler-error.189 11 11) (bruijn ##.k.1420 0 0) (##string ##.string.1725) (bruijn ##.storage.513 6 2) (##inline ##vcore.car (bruijn ##.t.512 6 1))) ((bruijn ##.k.1420 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 6-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1725.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 2),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k436(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 6 0) (bruijn ##.k.1408 5 0) (##inline ##vcore.cdr (bruijn ##.t.512 5 1)) (##inline ##vcore.car (bruijn ##.t.512 5 1)) (bruijn ##.special.514 5 3) (bruijn ##.const.515 5 4) (bruijn ##.longs.516 5 5) (bruijn ##.short.517 5 6) (bruijn ##.unsigned.518 5 7) (bruijn ##.signed.519 5 8))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1));
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k434(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k435) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k436))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k435, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k436, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1417 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k433) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k434)) (if (##inline ##vcore.eq? (bruijn ##.x.30.520 4 0) 'long) (basic-block 1 1 (##.reg.1627) ((##vcore.+ (bruijn ##.longs.516 6 5) 1)) (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 7 0) (bruijn ##.k.1408 6 0) (##inline ##vcore.cdr (bruijn ##.t.512 6 1)) (bruijn ##.storage.513 6 2) (bruijn ##.special.514 6 3) (bruijn ##.const.515 6 4) (bruijn ##.reg.1627 0 0) (bruijn ##.short.517 6 6) (bruijn ##.unsigned.518 6 7) (bruijn ##.signed.519 6 8))) (if (##inline ##vcore.eq? (bruijn ##.x.30.520 4 0) 'short) (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 6 0) (bruijn ##.k.1408 5 0) (##inline ##vcore.cdr (bruijn ##.t.512 5 1)) (bruijn ##.storage.513 5 2) (bruijn ##.special.514 5 3) (bruijn ##.const.515 5 4) (bruijn ##.longs.516 5 5) #t (bruijn ##.unsigned.518 5 7) (bruijn ##.signed.519 5 8)) (if (##inline ##vcore.eq? (bruijn ##.x.30.520 4 0) 'unsigned) (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 6 0) (bruijn ##.k.1408 5 0) (##inline ##vcore.cdr (bruijn ##.t.512 5 1)) (bruijn ##.storage.513 5 2) (bruijn ##.special.514 5 3) (bruijn ##.const.515 5 4) (bruijn ##.longs.516 5 5) (bruijn ##.short.517 5 6) #t (bruijn ##.signed.519 5 8)) (if (##inline ##vcore.eq? (bruijn ##.x.30.520 4 0) 'signed) (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 6 0) (bruijn ##.k.1408 5 0) (##inline ##vcore.cdr (bruijn ##.t.512 5 1)) (bruijn ##.storage.513 5 2) (bruijn ##.special.514 5 3) (bruijn ##.const.515 5 4) (bruijn ##.longs.516 5 5) (bruijn ##.short.517 5 6) (bruijn ##.unsigned.518 5 7) #t) (if (bruijn ##.special.514 5 3) ((bruijn ##.compiler-error.189 10 11) (bruijn ##.k.1408 5 0) (##string ##.string.1726) (##inline ##vcore.car (bruijn ##.t.512 5 1)) (bruijn ##.special.514 5 3)) (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 6 0) (bruijn ##.k.1408 5 0) (##inline ##vcore.cdr (bruijn ##.t.512 5 1)) (bruijn ##.storage.513 5 2) (##inline ##vcore.car (bruijn ##.t.512 5 1)) (bruijn ##.const.515 5 4) (bruijn ##.longs.516 5 5) (bruijn ##.short.517 5 6) (bruijn ##.unsigned.518 5 7) (bruijn ##.signed.519 5 8))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k433, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k434, self)))));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[0],
        _V0long))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 5),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 6-1, 4);
    VWORD _arg5 = 
      self->vars[0];
    VWORD _arg6 = 
      VGetArg(statics, 6-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 6-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 6-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[0],
        _V0short))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 5-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 5);
    VWORD _arg6 = 
      VEncodeBool(true);
    VWORD _arg7 = 
      VGetArg(statics, 5-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 5-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[0],
        _V0unsigned))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
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
      VEncodeBool(true);
    VWORD _arg8 = 
      VGetArg(statics, 5-1, 8);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[0],
        _V0signed))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
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
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
if(VDecodeBool(
VGetArg(statics, 5-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 4,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)),
      VGetArg(statics, 5-1, 3));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1));
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
}
}
}
}
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k428) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k432))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k428, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k432, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1415 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 4 0) (bruijn ##.k.1408 3 0) (##inline ##vcore.cdr (bruijn ##.t.512 3 1)) (bruijn ##.storage.513 3 2) (bruijn ##.special.514 3 3) (bruijn ##.const.515 3 4) (bruijn ##.longs.516 3 5) (bruijn ##.short.517 3 6) (bruijn ##.unsigned.518 3 7) (bruijn ##.signed.519 3 8)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k427) (##inline ##vcore.eq? (bruijn ##.x.30.520 2 0) 'static)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[3];
    VWORD _arg4 = 
      statics->up->up->vars[4];
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k427, self)), 1,
      VInlineEq2(runtime,
        statics->up->vars[0],
        _V0static));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k425) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k426))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k425, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k426, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.30.520 0 0) 'const) (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 2 0) (bruijn ##.k.1408 1 0) (##inline ##vcore.cdr (bruijn ##.t.512 1 1)) (bruijn ##.storage.513 1 2) (bruijn ##.special.514 1 3) #t (bruijn ##.longs.516 1 5) (bruijn ##.short.517 1 6) (bruijn ##.unsigned.518 1 7) (bruijn ##.signed.519 1 8)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k424) (##inline ##vcore.eq? (bruijn ##.x.30.520 0 0) 'restrict)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0const))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      VEncodeBool(true);
    VWORD _arg5 = 
      statics->vars[5];
    VWORD _arg6 = 
      statics->vars[6];
    VWORD _arg7 = 
      statics->vars[7];
    VWORD _arg8 = 
      statics->vars[8];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k424, self)), 1,
      VInlineEq2(runtime,
        _var0,
        _V0restrict));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.t.512 0 1)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k420) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k421)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k423) (##inline ##vcore.car (bruijn ##.t.512 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k420, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k421, self)))));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511_V0k423, self)), 1,
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.loop.511) #f (bruijn ##.loop.511 1 0) (bruijn ##.k.1161 3 0) (bruijn ##.x.1443 0 0) #f #f #f 0 #f #f #f)
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511(runtime, _closure_env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D440") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D441")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511")) ((bruijn ##.map.202 4 24) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k437) (bruijn ##.maybe-string->symbol.441 1 2) (bruijn ##.t.436 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D439, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D440, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D441, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D511, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k437, self)))),
      statics->vars[2],
      statics->up->vars[1]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1455 1 0) (##inline ##vcore.not (bruijn ##.x.1456 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.1628 1 0) ((bruijn ##.memv.204 4 26) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k439) (bruijn ##.special.521 2 1) (##inline ##vcore.qcons 'void (##inline ##vcore.qcons 'float (##inline ##vcore.qcons 'double (##inline ##vcore.qcons '_Bool '()))))) ((bruijn ##.k.1455 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[26]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k439, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1451 1 0) (##inline ##vcore.eq? (bruijn ##.x.1452 0 0) (bruijn ##.special.521 7 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        VGetArg(statics, 7-1, 1)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1453 1 0) 'typedef) ((bruijn ##.cadar.198 8 20) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k443) (bruijn ##.table.524 2 1)) ((bruijn ##.k.1451 0 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        _V0typedef))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k443, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1448 0 0) ((bruijn ##.caddar.200 8 22) (bruijn ##.k.1446 2 0) (bruijn ##.table.524 2 1)) (##qualified-call (vanity compiler ffi find-typedef ##.loop.523) #f (bruijn ##.loop.523 3 0) (bruijn ##.k.1446 2 0) (##inline ##vcore.cdr (bruijn ##.table.524 2 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 22)), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k442) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k444))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k442, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k444, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.table.524 0 1)) ((bruijn ##.compiler-error.189 6 11) (bruijn ##.k.1446 0 0) (##string ##.string.1727) (bruijn ##.special.521 4 1)) ((bruijn ##.caar.201 6 23) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k441) (bruijn ##.table.524 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1727.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523_V0k441, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1445 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523")) (##qualified-call (vanity compiler ffi find-typedef ##.loop.523) #f (bruijn ##.loop.523 0 0) (bruijn ##.k.1444 3 0) (bruijn ##.table.522 3 2))) ((bruijn ##.k.1444 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523, self))));
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
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D523(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef" };
 VRecordCall2(runtime, &dbg);
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
  // (basic-block 1 1 (##.reg.1628) ((##vcore.symbol? (bruijn ##.special.521 1 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k438) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k440)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k438, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k440, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1470 0 0) (bruijn ##.k.1466 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1471 0 0) (##inline ##vcore.car (bruijn ##.expr.3.535 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.535 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.3.535 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k448) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda81) (bruijn ##.kk.0.532 3 1)) ((bruijn ##.k.1466 2 0) #f)) ((bruijn ##.k.1466 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k448, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda81, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1467 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k447) (##inline ##vcore.cdr (bruijn ##.x.531 3 1))) ((bruijn ##.k.1466 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k447, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.531 2 1)) ((bruijn ##.equal?.180 6 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k446) 'const (##inline ##vcore.car (bruijn ##.x.531 2 1))) ((bruijn ##.k.1466 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k446, self)))),
      _V0const,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1464 0 0) (bruijn ##.x.531 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k449(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1463 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda82) (bruijn ##.kk.0.532 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda82, self)))),
      self->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k445) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k449))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k445, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0k449, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1462 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda80))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528_V0lambda80, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1474 7 0) (##inline ##vcore.cons (bruijn ##.x.1476 1 0) (bruijn ##.x.1477 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.529) #f (bruijn ##.reduce-args.529 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k456) (##inline ##vcore.cdr (bruijn ##.args.537 6 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k456, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1487 0 0) (bruijn ##.k.1482 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.203 15 25) (bruijn ##.k.1488 0 0) 'pointer (##inline ##vcore.car (bruijn ##.expr.8.544 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 25)), 3,
      _var0,
      _V0pointer,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.544 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.544 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k461) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda84) (bruijn ##.kk.4.539 4 1)) ((bruijn ##.k.1482 3 0) #f)) ((bruijn ##.k.1482 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k461, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda84, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.542 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k460) (##inline ##vcore.cdr (bruijn ##.expr.7.542 0 0))) ((bruijn ##.k.1482 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k460, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1483 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k459) (##inline ##vcore.cdr (bruijn ##.arg.538 3 0))) ((bruijn ##.k.1482 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k459, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.arg.538 2 0)) ((bruijn ##.equal?.180 11 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k458) 'array (##inline ##vcore.car (bruijn ##.arg.538 2 0))) ((bruijn ##.k.1482 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k458, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1480 0 0) (bruijn ##.arg.538 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k462(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1479 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda85) (bruijn ##.kk.4.539 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda85, self)))),
      self->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k457) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k462))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k457, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k462, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k455) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda83))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k455, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0lambda83, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.187 8 9) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k454) (bruijn ##.x.1491 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k454, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare) #t (bruijn ##.reduce-declare.237 6 19) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k453) (bruijn ##.x.1492 1 0) (bruijn ##.x.1493 0 0) (bruijn ##.table.527 5 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k453, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadar.198 6 20) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k452) (bruijn ##.args.537 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k452, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) #t (bruijn ##.reduce-type.235 4 17) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k451) (bruijn ##.x.1494 0 0) (bruijn ##.table.527 3 3) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0ffi;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k451, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[3];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.537 0 1)) ((bruijn ##.k.1474 0 0) '()) ((bruijn ##.caar.201 4 23) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k450) (bruijn ##.args.537 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529_V0k450, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1634 1 0) (##vcore.blob=? (bruijn ##.k.1592 0 0) (##string ##.string.1728) (##inline ##vcore.car (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1592 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1585 0 0) (bruijn ##.k.1581 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1586 1 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.12.551 2 0)) (##inline ##vcore.cons (bruijn ##.x.1589 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.528) #f (bruijn ##.drop-const.528 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k468) (bruijn ##.ret.546 6 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k468, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.551 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.551 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k467) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda87) (bruijn ##.kk.9.548 4 1)) ((bruijn ##.k.1581 3 0) #f)) ((bruijn ##.k.1581 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k467, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda87, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1582 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k466) (##inline ##vcore.cdr (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1581 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k466, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.547 2 2)) (basic-block 1 1 (##.reg.1634) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.547 3 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k464) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k465))) ((bruijn ##.k.1581 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k464, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k465, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1632 1 0) (##vcore.blob=? (bruijn ##.k.1577 0 0) (##string ##.string.1728) (##inline ##vcore.car (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1577 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1633 1 0) (##vcore.blob=? (bruijn ##.k.1573 0 0) (##string ##.string.1729) (##inline ##vcore.car (bruijn ##.expr.16.557 2 0))) ((bruijn ##.k.1573 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1729.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.559 4 1) (bruijn ##.k.1558 1 0) (bruijn ##.expr.21.561 2 1) (bruijn ##.x.1559 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.21.561 1 1))) ((bruijn ##.reverse.185 18 7) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k479) (bruijn ##.args.18.562 1 2)) ((bruijn ##.k.1558 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k479, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.559 5 1) (bruijn ##.k.1553 1 0) (bruijn ##.expr.21.561 3 1) (bruijn ##.x.1554 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k481(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.185 19 7) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k482) (bruijn ##.args.18.562 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k482, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.20.563 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k481) (##inline ##vcore.cdr (bruijn ##.expr.21.561 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.561 2 1)) (bruijn ##.args.18.562 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k481, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1552 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda91))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda91, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k480(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1551 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda90) (bruijn ##.loop.560 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0lambda90, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k478) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k480))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k478, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560_V0k480, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.530 ##.loop.560) #f (bruijn ##.loop.560 0 0) (bruijn ##.k.1550 1 0) (##inline ##vcore.cdr (bruijn ##.expr.16.557 5 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0));
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V10_Dloop_D560(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1549 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda89))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda89, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1564 0 0) (bruijn ##.k.1561 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1565 3 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.554 9 0)) (##inline ##vcore.cons (bruijn ##.x.1568 2 0) (bruijn ##.x.1569 0 0)))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.202 17 24) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k486) (bruijn ##.drop-const.528 14 0) (bruijn ##.x.1570 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 24)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k486, self)))),
      VGetArg(statics, 14-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.529) #f (bruijn ##.reduce-args.529 13 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k485) (bruijn ##.args.566 2 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k485, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.528) #f (bruijn ##.drop-const.528 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k484) (bruijn ##.ret.546 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k484, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda92, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.565 0 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.556 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k483) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda93) (bruijn ##.kk.9.548 9 1)) ((bruijn ##.k.1561 0 0) #f)) ((bruijn ##.k.1561 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k483, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda93, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1548 0 0) (##vcore.call-with-values (bruijn ##.k.1543 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda88) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda92)) ((bruijn ##.k.1543 7 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda92, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.557 0 0)) (basic-block 1 1 (##.reg.1633) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.16.557 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k476) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k477))) ((bruijn ##.k.1543 5 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k476, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k477, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.556 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k475) (##inline ##vcore.car (bruijn ##.expr.15.556 0 0))) ((bruijn ##.k.1543 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k475, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.554 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k474) (##inline ##vcore.cdr (bruijn ##.expr.14.554 0 0))) ((bruijn ##.k.1543 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k474, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1544 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k473) (##inline ##vcore.cdr (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1543 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k473, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.547 2 2)) (basic-block 1 1 (##.reg.1632) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.547 3 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k471) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k472))) ((bruijn ##.k.1543 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k471, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k472, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1631 1 0) (##vcore.blob=? (bruijn ##.k.1539 0 0) (##string ##.string.1730) (##inline ##vcore.car (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1539 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1730.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1534 0 0) (bruijn ##.k.1530 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.530) #f (bruijn ##.reduce-declare-loop.530 8 2) (bruijn ##.k.1535 1 0) (bruijn ##.x.1536 0 0) (##inline ##vcore.car (bruijn ##.expr.23.568 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.203 10 25) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k493) 'pointer (bruijn ##.ret.546 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 25)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k493, self)))),
      _V0pointer,
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.568 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.568 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k492) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda94) (bruijn ##.kk.9.548 4 1)) ((bruijn ##.k.1530 3 0) #f)) ((bruijn ##.k.1530 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k492, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda94, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1531 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k491) (##inline ##vcore.cdr (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1530 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k491, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.547 2 2)) (basic-block 1 1 (##.reg.1631) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.547 3 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k489) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k490))) ((bruijn ##.k.1530 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k489, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k490, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1630 1 0) (##vcore.blob=? (bruijn ##.k.1526 0 0) (##string ##.string.1731) (##inline ##vcore.car (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1526 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1521 0 0) (bruijn ##.k.1516 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.530) #f (bruijn ##.reduce-declare-loop.530 9 2) (bruijn ##.k.1522 1 0) (bruijn ##.x.1523 0 0) (##inline ##vcore.car (bruijn ##.expr.25.571 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.203 11 25) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k501) 'array (##inline ##vcore.car (bruijn ##.expr.26.573 1 0)) (bruijn ##.ret.546 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 25)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k501, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.573 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.573 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k500) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda95) (bruijn ##.kk.9.548 5 1)) ((bruijn ##.k.1516 4 0) #f)) ((bruijn ##.k.1516 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k500, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda95, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.571 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k499) (##inline ##vcore.cdr (bruijn ##.expr.25.571 0 0))) ((bruijn ##.k.1516 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k499, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1517 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k498) (##inline ##vcore.cdr (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1516 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k498, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.547 2 2)) (basic-block 1 1 (##.reg.1630) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.547 3 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k496) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k497))) ((bruijn ##.k.1516 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k496, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k497, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1629 1 0) (##vcore.blob=? (bruijn ##.k.1512 0 0) (##string ##.string.1732) (##inline ##vcore.car (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1512 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1507 0 0) (bruijn ##.k.1502 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.530) #f (bruijn ##.reduce-declare-loop.530 9 2) (bruijn ##.k.1508 1 0) (bruijn ##.x.1509 0 0) (##inline ##vcore.car (bruijn ##.expr.28.576 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.203 11 25) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k509) 'array (##inline ##vcore.car (bruijn ##.expr.29.578 1 0)) (bruijn ##.ret.546 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 25)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k509, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.578 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.578 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k508) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda96) (bruijn ##.kk.9.548 5 1)) ((bruijn ##.k.1502 4 0) #f)) ((bruijn ##.k.1502 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k508, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda96, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.576 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k507) (##inline ##vcore.cdr (bruijn ##.expr.28.576 0 0))) ((bruijn ##.k.1502 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k507, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1503 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k506) (##inline ##vcore.cdr (bruijn ##.decl.547 4 2))) ((bruijn ##.k.1502 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k506, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.547 2 2)) (basic-block 1 1 (##.reg.1629) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.547 3 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k504) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k505))) ((bruijn ##.k.1502 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k504, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k505, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k512(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.179 6 1) (bruijn ##.k.1496 1 0) (##string ##.string.1662))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1662.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1497 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k512))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k512, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1498 0 0) (##inline ##vcore.cons 'variable (##inline ##vcore.cons (bruijn ##.ret.546 2 1) (##inline ##vcore.cons (bruijn ##.decl.547 2 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0variable,
        VInlineCons2(runtime,
        statics->up->vars[1],
        VInlineCons2(runtime,
        statics->up->vars[2],
        VNULL))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k510(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k511) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda97) (bruijn ##.kk.9.548 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k511, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda97, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k502(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k503) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k510))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k503, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k510, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k494(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k495) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k502))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k495, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k502, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k487(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k488) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k494))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k488, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k494, self)))));
}
static void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k469(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k470) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k487))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k470, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k487, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k463) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k469))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k463, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0k469, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1495 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda86))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530_V0lambda86, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.530) #f (bruijn ##.reduce-declare-loop.530 0 2) (bruijn ##.k.1461 1 0) (bruijn ##.ret.525 1 1) (bruijn ##.decl.526 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D528, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D529, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[2]);
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D530(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V0vanity_V0compiler_V0ffi_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 27) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0lambda3, got ~D~N"
  "-- expected 27~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[27]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 27, 27, statics);
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
  self->vars[26] = _var26;
  // (##letrec (vanity compiler ffi) 20 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__install__root" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0find__file" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef" "_V60_V0vanity_V0compiler_V0ffi") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare" "_V60_V0vanity_V0compiler_V0ffi")) ((bruijn ##.k.589 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign (bruijn ##.mangle-foreign.224 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.222 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-basic (bruijn ##.mangle-foreign-basic.223 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-closure (bruijn ##.mangle-foreign-closure.221 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.229 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.218 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.225 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.220 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.219 0 1)) '())))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[20]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0ffi = self;
    VInitEnv(self, 20, 20, statics);
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
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _V60_V0vanity_V0compiler_V0ffi))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _V60_V0vanity_V0compiler_V0ffi))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0ffi_V20", &_V60_V0vanity_V0compiler_V0ffi);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__function,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__basic,
        self->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__closure,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0validate__foreign__function,
        self->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0print__foreign__function,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0resolve__foreign__import,
        self->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__encoder,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__decoder,
        self->vars[1]),
        VNULL))))))))));
    }
}
static void _V0vanity_V0compiler_V0ffi_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.582 0 0) (close _V0vanity_V0compiler_V0ffi_V20_V0lambda2) (close _V0vanity_V0compiler_V0ffi_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_V0lambda1;
