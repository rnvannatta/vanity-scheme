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



static VPair _V10_Dpair_D2203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2198 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
static VPair _V10_Dpair_D2197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2193 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "read" };
static VPair _V10_Dpair_D2192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2182 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "expand" };
static VPair _V10_Dpair_D2181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D2171 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "cps" };
static VPair _V10_Dpair_D2170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D2150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2149 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "optimize" };
static VPair _V10_Dpair_D2148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D58;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D58 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.58" };
static VPair _V10_Dpair_D2143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D2136 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "extract" };
static VPair _V10_Dpair_D2135 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2134 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2133 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2132 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2131 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2130 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2129 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2128 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2127 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2126 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2125 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2121 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2120 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2119 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2118 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D2117 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "transpile" };
static VPair _V10_Dpair_D2116 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2115 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0funs;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0funs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "funs" };
static VPair _V10_Dpair_D2110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0opt;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0opt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "opt" };
static VPair _V10_Dpair_D2101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2099 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2098 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2097 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2096 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2095 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2094 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2093 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0cps;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cps" };
static VPair _V10_Dpair_D2092 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2091 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2090 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2089 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2088 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2087 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2085 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0new__bound_D56;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0new__bound_D56 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "new-bound.56" };
VWEAK VWORD _V0new__free_D55;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0new__free_D55 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "new-free.55" };
static VPair _V10_Dpair_D2084 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2083 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2082 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2081 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2080 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2079 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2077 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0dummy_D57;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0dummy_D57 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "dummy.57" };
VWEAK VWORD _V0new__bound;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0new__bound = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "new-bound" };
VWEAK VWORD _V0new__free;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0new__free = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "new-free" };
static VPair _V10_Dpair_D2058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2054 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "free variables in program" };
static VPair _V10_Dpair_D2053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2041 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2040 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0free;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0free = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "free" };
VWEAK VWORD _V0bound;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0bound = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "bound" };
VWEAK VWORD _V0exprs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0exprs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "exprs" };
static VPair _V10_Dpair_D2025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D80;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D80 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.80" };
static VPair _V10_Dpair_D2024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2021 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2019 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2018 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2017 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expanded;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expanded = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expanded" };
static VPair _V10_Dpair_D2015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2013 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2012 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2011 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2010 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0fd;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0fd = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "fd" };
static VPair _V10_Dpair_D2006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1989 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A -I~A ~A ~A -c -o ~A ~A" };
static VPair _V10_Dpair_D1988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1983 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1982 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1981 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1980 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1979 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1978 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1977 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1976 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1975 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1974 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1973 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1972 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1971 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1970 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1969 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1968 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0cc__cmd;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cc__cmd = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cc-cmd" };
static VPair _V10_Dpair_D1966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0path;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "path" };
static VPair _V10_Dpair_D1957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0obj__file;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0obj__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "obj-file" };
VWEAK VWORD _V0cc__file;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0cc__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "cc-file" };
VWEAK VWORD _V0scm__file;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0scm__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "scm-file" };
static VPair _V10_Dpair_D1948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1947 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "compile" };
static VPair _V10_Dpair_D1946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1945 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1942 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1940 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1939 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1938 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1937 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1936 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1935 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1934 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1933 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1932 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1931 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1930 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1929 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1928 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1912 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static VPair _V10_Dpair_D1911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1910 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1909 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1908 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1907 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1906 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1905 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1904 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1903 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1902 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1901 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1900 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0option;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0option = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "option" };
static VPair _V10_Dpair_D1899 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1898 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1897 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1896 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1891 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1882 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static VPair _V10_Dpair_D1881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1878 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static VPair _V10_Dpair_D1877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1873 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D1872 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, " -Wl,--whole-archive -lvscheme -ldfile -s LLD_REPORT_UNDEFINED -s ALLOW_MEMORY_GROWTH=1 -s STACK_SIZE=2097152" };
static VPair _V10_Dpair_D1871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1868 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static VPair _V10_Dpair_D1867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1863 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1855 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0link__command;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0link__command = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "link-command" };
VWEAK VWORD _V0link__command__flags;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0link__command__flags = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "link-command-flags" };
static VPair _V10_Dpair_D1851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1850 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static VPair _V10_Dpair_D1849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1845 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1844 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1843 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1842 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1841 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1840 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1826 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -I~A" };
static VPair _V10_Dpair_D1822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1816 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1814 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1812 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1809 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0cc__paths;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0cc__paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "cc-paths" };
static VPair _V10_Dpair_D1802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0acc;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0acc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "acc" };
static VPair _V10_Dpair_D1797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D101;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D101 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.101" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static VPair _V10_Dpair_D1795 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1793 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static VPair _V10_Dpair_D1790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static VPair _V10_Dpair_D1769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
static VPair _V10_Dpair_D1764 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " -Og" };
static VPair _V10_Dpair_D1758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[108]; } _V10_Dstring_D1747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D1746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, " -Wno-gnu -DVANITY_PURE_C -fbracket-depth=4096" };
static VPair _V10_Dpair_D1745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static VPair _V10_Dpair_D1741 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1740 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1739 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1738 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1737 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1736 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1735 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1734 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1733 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1732 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1731 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1730 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1729 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1728 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1726 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1725 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1724 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1723 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1722 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1721 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1720 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1719 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1718 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static VPair _V10_Dpair_D1716 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1715 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1714 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1713 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1712 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1711 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1710 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1709 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1705 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1704 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1703 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1702 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1700 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1699 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1698 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1697 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1696 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1695 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1694 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1693 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1692 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1691 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0num__mains;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__mains = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-mains" };
VWEAK VWORD _V0architecture;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0architecture = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "architecture" };
VWEAK VWORD _V0id;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0id = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "id" };
VWEAK VWORD _V0cc__command;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0cc__command = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "cc-command" };
VWEAK VWORD _V0cc__command__flags;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0cc__command__flags = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "cc-command-flags" };
VWEAK VWORD _V0base__cc__flags;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0base__cc__flags = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "base-cc-flags" };
VWEAK VWORD _V0cc__obj__files;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0cc__obj__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "cc-obj-files" };
VWEAK VWORD _V0cc__files;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0cc__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "cc-files" };
static VPair _V10_Dpair_D1690 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1689 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Did_D64;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10_Did_D64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##.id.64" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "sysv_amd64" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "windows_amd64" };
VWEAK VWORD _V0link__ret;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0link__ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "link-ret" };
VWEAK VWORD _V0compile__ret;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0compile__ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "compile-ret" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "vanity-scheme-~A.~A" };
VWEAK VWORD _V0feature__list;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "feature-list" };
VWEAK VWORD _V0r7rs;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0r7rs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "r7rs" };
VWEAK VWORD _V0c17;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0c17 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "c17" };
VWEAK VWORD _V0ieee__float;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0ieee__float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "ieee-float" };
static VPair _V10_Dpair_D1685 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1684 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1683 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1682 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1681 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1680 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1679 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1678 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1677 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1676 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1675 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1674 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1673 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1672 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vanity__scheme;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vanity__scheme = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vanity-scheme" };
static VPair _V10_Dpair_D1671 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1670 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1669 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1668 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1667 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1666 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1665 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1664 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1663 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1662 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1661 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1660 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1659 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1658 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1657 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1656 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1655 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ilp32;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0ilp32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "ilp32" };
VWEAK VWORD _V0emscripten;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0emscripten = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "emscripten" };
VWEAK VWORD _V0wasm;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0wasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "wasm" };
static VPair _V10_Dpair_D1654 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1653 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1652 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1651 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1650 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1649 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1648 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1647 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1646 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1645 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1644 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0llp64;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0llp64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "llp64" };
VWEAK VWORD _V0mingw;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0mingw = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "mingw" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static VPair _V10_Dpair_D1643 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1642 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1641 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1640 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1634 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1633 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1632 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1631 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1630 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0little__endian;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0little__endian = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "little-endian" };
VWEAK VWORD _V0lp64;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lp64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lp64" };
VWEAK VWORD _V0x86__64;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0x86__64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "x86-64" };
VWEAK VWORD _V0compiled;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiled = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiled" };
VWEAK VWORD _V0gnuc;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0gnuc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "gnuc" };
VWEAK VWORD _V0gnu__linux;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0gnu__linux = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "gnu-linux" };
VWEAK VWORD _V0posix;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0posix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "posix" };
static VPair _V10_Dpair_D1629 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1628 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1627 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1626 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1625 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1624 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1623 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1622 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1621 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1620 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1619 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1618 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1617 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1616 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1615 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1614 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1613 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1612 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1611 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1610 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1609 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1608 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1607 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1606 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1605 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1604 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1603 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1602 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1601 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1600 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1599 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1598 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1597 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1596 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1595 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1593 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1592 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1587 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1586 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1580 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1579 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1573 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "vghtco:I:D:O:E:W:" };
static VPair _V10_Dpair_D1572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1571 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".vasm" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1570 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1569 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1568 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static VPair _V10_Dpair_D1567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1559 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1558 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1557 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1556 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1555 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D1554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static VPair _V10_Dpair_D1553 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1552 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1551 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1550 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1549 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1548 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1547 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1546 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1545 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D1539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static VPair _V10_Dpair_D1538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D1524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static VPair _V10_Dpair_D1523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static VPair _V10_Dpair_D1511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D1503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
static VPair _V10_Dpair_D1502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D1493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "Unknown --platform, only 'linux' and 'windows' and 'emscripten' are valid" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "emcc" };
static VPair _V10_Dpair_D1491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static VPair _V10_Dpair_D1487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static VPair _V10_Dpair_D1483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
VWEAK VWORD _V0hygiene;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0hygiene = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "hygiene" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static VPair _V10_Dpair_D1465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1434 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "emscripten" };
static VPair _V10_Dpair_D1433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1429 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1410 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "unbound" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1409 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "no-unbound" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1408 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "error=unbound" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1407 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "no-error=unbound" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1406 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -Wl," };
static VPair _V10_Dpair_D1405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1398 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1395 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1386 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static VPair _V10_Dpair_D1385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[67]; } _V10_Dstring_D1362 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static VPair _V10_Dpair_D1361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D1311 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static VPair _V10_Dpair_D1310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1287 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static VPair _V10_Dpair_D1286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1247 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1246 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1245 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1241 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1224 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".a" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".lib" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".scm" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File has unrecognized extension: ~A" };
static VPair _V10_Dpair_D1220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1213 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ".ss" };
static VPair _V10_Dpair_D1212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1192 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, " -Wl,--no-whole-archive" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1191 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "-Wl,--whole-archive " };
static VPair _V10_Dpair_D1190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D51;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D51 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.51" };
static VPair _V10_Dpair_D1151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D52;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D52 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.52" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1139 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "~A: " };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
static VPair _V10_Dpair_D1138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1136 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1135 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ret_D45;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0ret_D45 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "ret.45" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1134 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "\033[1;31m~A\033[0m: ~A: " };
static VPair _V10_Dpair_D1133 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1132 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1131 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1130 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1129 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1128 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1127 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static VPair _V10_Dpair_D1126 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1125 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1121 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1120 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1119 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1118 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1117 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1116 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1115 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0keyval_D44;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0keyval_D44 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "keyval.44" };
static VPair _V10_Dpair_D1099 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1098 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1097 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1096 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1095 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1094 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1093 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1092 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0err;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0err = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "err" };
VWEAK VWORD _V0handle__exception;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0handle__exception = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "handle-exception" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1091 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1090 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1089 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1088 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10_Dstring_D1087 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1086 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1085 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10_Dstring_D1084 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D1083 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D1082 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D1081 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D1080 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1079 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -D<feature>     Define a feature for use with cond-expand" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D1078 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1077 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "  -Wl,<option>    Pass comma seperated to the linker" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1076 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D1075 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D1074 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1073 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10_Dstring_D1072 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D1071 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "  --hygiene       Use new hygienic macro-expander (still in development)" };
static struct { VBlob sym; char bytes[97]; } _V10_Dstring_D1070 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 97 }, "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows' or 'emscripten'." };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D1069 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "  --main=<main>   What style of main to use. Either 'main' or 'winmain' or 'emscripten-loop' or 'none'." };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1068 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1067 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1066 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1065 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1064 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "  -Wunbound     Enable unbound toplevel variable warnings" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1063 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0target;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0target = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "target" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1057 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1056 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1054 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
static VPair _V10_Dpair_D1053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1041 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1040 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0dep;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0dep = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "dep" };
static VPair _V10_Dpair_D1034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0port;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "port" };
static VPair _V10_Dpair_D1027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1021 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1019 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0deps;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0deps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "deps" };
static VPair _V10_Dpair_D1018 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1017 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1013 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1012 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1011 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
static VPair _V10_Dpair_D1010 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static VPair _V10_Dpair_D994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D983 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D982 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D981 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D33;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.33" };
static VPair _V10_Dpair_D980 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D979 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D978 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D977 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D976 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D975 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D974 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D973 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D972 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D971 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D970 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D969 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D968 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D963 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static VPair _V10_Dpair_D962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D951 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
static VPair _V10_Dpair_D950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D947 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D945 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D942 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D940 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D939 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D938 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D937 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D936 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0headers;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0headers = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "headers" };
static VPair _V10_Dpair_D935 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D934 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D933 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D932 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D931 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D930 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D929 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D928 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D920 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0f;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0f = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "f" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
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
VWEAK VWORD _V0ct;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ct = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ct" };
static VPair _V10_Dpair_D886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D29;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D29 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.29" };
static VPair _V10_Dpair_D885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D884 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D883 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
static VPair _V10_Dpair_D882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ret;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ret" };
static VPair _V10_Dpair_D876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D873 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0proc;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0proc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "proc" };
static VPair _V10_Dpair_D870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
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
static VPair _V10_Dpair_D851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D20;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D20 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.20" };
static VPair _V10_Dpair_D846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D845 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D844 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D843 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D842 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0str;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0str = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "str" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
static VPair _V10_Dpair_D840 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D17;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D17 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.17" };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
static VPair _V10_Dpair_D837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D14;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D14 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.14" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
static VPair _V10_Dpair_D834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D826 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D823 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D816 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D814 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D11;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D11 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.11" };
static VPair _V10_Dpair_D812 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D809 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0new;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0new = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "new" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
static VPair _V10_Dpair_D806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D796 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D795 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D793 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D791 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D7;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10_Dloop_D7 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##.loop.7" };
static VPair _V10_Dpair_D777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0file;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "file" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
static VPair _V10_Dpair_D772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "~A: ~A seconds~N" };
static VPair _V10_Dpair_D765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D764 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D760 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D746 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0end;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "end" };
static VPair _V10_Dpair_D742 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D741 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D740 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D739 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D738 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D737 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0args = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "args" };
static VPair _V10_Dpair_D736 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D735 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D734 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D733 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D732 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D731 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0start;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0start = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "start" };
static VPair _V10_Dpair_D730 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D729 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D728 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D726 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D725 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0thunk;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0thunk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "thunk" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0stdout;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "stdout" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "~Ainclude" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
static VPair _V10_Dpair_D723 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D722 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D721 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0user__feature__list;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0user__feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "user-feature-list" };
VWEAK VWORD _V0werror__unbound__variables;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0werror__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "werror-unbound-variables" };
VWEAK VWORD _V0w__unbound__variables;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0w__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "w-unbound-variables" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "main" };
VWEAK VWORD _V0main;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0main = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "main" };
VWEAK VWORD _V0hygiene_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0hygiene_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "hygiene\?" };
VWEAK VWORD _V0purec_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0purec_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "purec\?" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
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
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0optimize_V20" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "_V0vanity_V0compiler_V0hygienic_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static VPair _V10_Dpair_D701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D700 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D699 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D698 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D697 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D696 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D695 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D694 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D693 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D692 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mnext;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_Mnext = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "%next" };
V_DECLARE_FUNC(_V50_V10_Dloop_D80, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V10_Dloop_D101, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Did_D64, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D52, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D29, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Dloop_D20, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D17, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D14, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D11, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D7, _var0, _var1);
static void global_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.113 1 0) (bruijn ##.%x.114 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k1) (##string ##.string.702))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER));
}
static void global_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.115 1 0) (bruijn ##.%x.116 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k2) (##string ##.string.703))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER));
}
static void global_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.117 1 0) (bruijn ##.%x.118 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k3) (##string ##.string.704))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
}
static void global_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.119 1 0) (bruijn ##.%x.120 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k4) (##string ##.string.705))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER));
}
static void global_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.121 1 0) (bruijn ##.%x.122 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k5) (##string ##.string.706))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER));
}
static void global_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.123 1 0) (bruijn ##.%x.124 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k6) (##string ##.string.707))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER));
}
static void global_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.125 1 0) (bruijn ##.%x.126 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k7) (##string ##.string.708))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER));
}
static void global_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.127 1 0) (bruijn ##.%x.128 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k8) (##string ##.string.709))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
}
static void global_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.129 1 0) (bruijn ##.%x.130 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k9) (##string ##.string.710))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k9, self)))),
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
static void global_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.131 1 0) (bruijn ##.%x.132 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k10) (##string ##.string.711))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k10, self)))),
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER));
}
static void global_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.133 1 0) (bruijn ##.%x.134 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k11) (##string ##.string.712))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
}
static void global_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.135 1 0) (bruijn ##.%x.136 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k12) (##string ##.string.713))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k12, self)))),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER));
}
static void global_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.137 1 0) (bruijn ##.%x.138 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k13) (##string ##.string.714))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k13, self)))),
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER));
}
static void global_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.139 1 0) (bruijn ##.%x.140 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k14) (##string ##.string.715))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k14, self)))),
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER));
}
static void global_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.141 1 0) (bruijn ##.%x.142 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k15) (##string ##.string.716))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
static void global_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.143 1 0) (bruijn ##.%x.144 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k16) (##string ##.string.717))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k16, self)))),
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER));
}
static void global_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.145 1 0) (bruijn ##.%x.146 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k17) (##string ##.string.718))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k17, self)))),
      VEncodePointer(&_V10_Dstring_D718.sym, VPOINTER_OTHER));
}
static void global_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.147 0 0) scm-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0scm__files,
      VNULL
    );
}
static void global_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.148 0 0) obj-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0obj__files,
      VNULL
    );
}
static void global_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.149 0 0) shared? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0shared_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.150 0 0) expand? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0expand_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.151 0 0) keep? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0keep_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.152 0 0) header? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0header_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.153 0 0) bytecode? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0bytecode_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.154 0 0) transpile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0transpile_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.155 0 0) object? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0object_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.156 0 0) debug? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0debug_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.157 0 0) verbose? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0verbose_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.158 0 0) optimization 0)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0optimization,
      VEncodeInt(0l)
    );
}
static void global_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.159 0 0) api 1)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0api,
      VEncodeInt(1l)
    );
}
static void global_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.160 0 0) out-file #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0out__file,
      VEncodeBool(false)
    );
}
static void global_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.161 0 0) platform (##string ##.string.719))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0platform,
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER)
    );
}
static void global_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.162 0 0) purec? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0purec_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.163 0 0) hygiene? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0hygiene_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.164 0 0) main (##string ##.string.720))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0main,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER)
    );
}
static void global_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.165 0 0) cc #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0cc,
      VEncodeBool(false)
    );
}
static void global_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.166 0 0) w-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.167 0 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.168 0 0) user-feature-list '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0user__feature__list,
      VNULL
    );
}
static void global_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.169 0 0) c-options '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0c__options,
      VNULL
    );
}
static void global_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.170 2 0) paths (bruijn ##.%x.171 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->up->vars[0],
      _V0paths,
      _var0
    );
}
static void global_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close global_V0k19) (bruijn ##.%x.172 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k19, self)))),
      _var0);
}
static void global_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k18) (##string ##.string.724) install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k18, self)))),
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
static void global_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.173 0 0) makefile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0makefile_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.174 0 0) maketargets '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0maketargets,
      VNULL
    );
}
static void global_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.175 0 0) benchmark? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark_Q,
      VEncodeBool(false)
    );
}
static void global_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.176 1 0) stdout (bruijn ##.%x.177 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->vars[0],
      _V0stdout,
      _var0
    );
}
static void global_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_V0k20))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k20, self)))));
}
static void _V0benchmark_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.%k.181 3 0) stdout (##string ##.string.766) (bruijn ##.label.1 7 1) (bruijn ##.%x.182 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 5,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "stdout"),
      VEncodePointer(&_V10_Dstring_D766.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1),
      _var0);
}
static void _V0benchmark_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (/ (close _V0benchmark_V0k26) (bruijn ##.%x.183 1 0) (bruijn ##.%x.184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "/")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k26, self)))),
      statics->vars[0],
      _var0);
}
static void _V0benchmark_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (jiffies-per-second (close _V0benchmark_V0k25))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "jiffies-per-second")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k25, self)))));
}
static void _V0benchmark_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if benchmark? (- (close _V0benchmark_V0k24) (bruijn ##.end.5 1 0) (bruijn ##.start.3 3 0)) ((bruijn ##.%k.181 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "benchmark?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k24, self)))),
      statics->vars[0],
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0benchmark_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (apply (bruijn ##.%k.180 1 0) values (bruijn ##.args.4 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->vars[0],
      VLookupGlobalVarFast2(runtime, "values"),
      statics->vars[1]);
}
static void _V0benchmark_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0benchmark_V0k23) (close _V0benchmark_V0k27))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k27, self)))));
}
static void _V0benchmark_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0benchmark_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0lambda48, got ~D~N"
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
  // (current-jiffy (close _V0benchmark_V0k22))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k22, self)))));
}
static void _V0benchmark_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (call-with-values (bruijn ##.%k.179 1 0) (bruijn ##.thunk.2 1 2) (close _V0benchmark_V0lambda48))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "call-with-values")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0lambda48, self)))));
}
static void _V0benchmark_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0benchmark_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0lambda47, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (current-jiffy (close _V0benchmark_V0k21))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k21, self)))));
}
static void global_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.178 0 0) benchmark (close _V0benchmark_V0lambda47))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0lambda47, self))))
    );
}
void _V50_V10_Dloop_D7_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D7_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.7) #f (bruijn ##.loop.7 5 0) (bruijn ##.%k.187 4 0) (bruijn ##.%x.190 0 0))
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
void _V50_V10_Dloop_D7_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D7_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.189 0 0) (substring (bruijn ##.%k.187 3 0) (bruijn ##.file.6 5 1) (bruijn ##.i.8 3 1)) (- (close _V50_V10_Dloop_D7_V0k31) (bruijn ##.i.8 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k31, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D7_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D7_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D7_V0k30) #\. (bruijn ##.%x.191 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k30, self)))),
      VEncodeChar('.'),
      _var0);
}
void _V50_V10_Dloop_D7_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D7_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.188 0 0) ((bruijn ##.%k.187 1 0) #f) (string-ref (close _V50_V10_Dloop_D7_V0k29) (bruijn ##.file.6 3 1) (bruijn ##.i.8 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k29, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D7" };
 VRecordCall2(runtime, &dbg);
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
  // (<= (close _V50_V10_Dloop_D7_V0k28) (bruijn ##.i.8 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k28, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0extension_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.7) #f (bruijn ##.loop.7 2 0) (bruijn ##.%k.186 3 0) (bruijn ##.%x.192 0 0))
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
static void _V0extension_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0extension_V0k33) (bruijn ##.%x.193 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0k33, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0extension_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D7")) (string-length (close _V0extension_V0k32) (bruijn ##.file.6 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0k32, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.185 0 0) extension (close _V0extension_V0lambda50))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0extension,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0lambda50, self))))
    );
}
void _V50_V10_Dloop_D11_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D11_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (string-append (bruijn ##.%k.196 4 0) (bruijn ##.%x.199 0 0) (bruijn ##.new.10 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->up->up->up->vars[0],
      _var0,
      VGetArg(statics, 6-1, 2));
}
void _V50_V10_Dloop_D11_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D11_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.11) #f (bruijn ##.loop.11 5 0) (bruijn ##.%k.196 4 0) (bruijn ##.%x.200 0 0))
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
void _V50_V10_Dloop_D11_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D11_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.198 0 0) (substring (close _V50_V10_Dloop_D11_V0k37) (bruijn ##.file.9 5 1) 0 (bruijn ##.i.12 3 1)) (- (close _V50_V10_Dloop_D11_V0k38) (bruijn ##.i.12 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k37, self)))),
      VGetArg(statics, 5-1, 1),
      VEncodeInt(0l),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k38, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D11_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D11_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D11_V0k36) #\. (bruijn ##.%x.201 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k36, self)))),
      VEncodeChar('.'),
      _var0);
}
void _V50_V10_Dloop_D11_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D11_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.197 0 0) (string-append (bruijn ##.%k.196 1 0) (bruijn ##.file.9 3 1) (bruijn ##.new.10 3 2)) (string-ref (close _V50_V10_Dloop_D11_V0k35) (bruijn ##.file.9 3 1) (bruijn ##.i.12 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k35, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D11" };
 VRecordCall2(runtime, &dbg);
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
  // (<= (close _V50_V10_Dloop_D11_V0k34) (bruijn ##.i.12 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k34, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0change__extension_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.11) #f (bruijn ##.loop.11 2 0) (bruijn ##.%k.195 3 0) (bruijn ##.%x.202 0 0))
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
static void _V0change__extension_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0change__extension_V0k40) (bruijn ##.%x.203 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0k40, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0change__extension_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0change__extension_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V10_Dloop_D11")) (string-length (close _V0change__extension_V0k39) (bruijn ##.file.9 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0k39, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.194 0 0) change-extension (close _V0change__extension_V0lambda52))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0change__extension,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0lambda52, self))))
    );
}
void _V50_V10_Dloop_D14_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D14_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.%k.206 4 0) (bruijn ##.file.13 6 1) (bruijn ##.%x.209 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V10_Dloop_D14_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D14_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.14) #f (bruijn ##.loop.14 5 0) (bruijn ##.%k.206 4 0) (bruijn ##.%x.210 0 0))
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
void _V50_V10_Dloop_D14_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D14_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.208 0 0) (+ (close _V50_V10_Dloop_D14_V0k44) (bruijn ##.i.15 3 1) 1) (- (close _V50_V10_Dloop_D14_V0k45) (bruijn ##.i.15 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k44, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k45, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D14_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D14_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D14_V0k43) #\/ (bruijn ##.%x.211 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k43, self)))),
      VEncodeChar('/'),
      _var0);
}
void _V50_V10_Dloop_D14_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D14_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.207 0 0) ((bruijn ##.%k.206 1 0) (bruijn ##.file.13 3 1)) (string-ref (close _V50_V10_Dloop_D14_V0k42) (bruijn ##.file.13 3 1) (bruijn ##.i.15 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k42, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D14" };
 VRecordCall2(runtime, &dbg);
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
  // (<= (close _V50_V10_Dloop_D14_V0k41) (bruijn ##.i.15 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k41, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0basename_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.14) #f (bruijn ##.loop.14 2 0) (bruijn ##.%k.205 3 0) (bruijn ##.%x.212 0 0))
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
static void _V0basename_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basename_V0k47) (bruijn ##.%x.213 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0k47, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0basename_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D14")) (string-length (close _V0basename_V0k46) (bruijn ##.file.13 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0k46, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.204 0 0) basename (close _V0basename_V0lambda54))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basename,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0lambda54, self))))
    );
}
void _V50_V10_Dloop_D17_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D17_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.%k.216 4 0) (bruijn ##.file.16 6 1) 0 (bruijn ##.%x.219 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      VEncodeInt(0l),
      _var0);
}
void _V50_V10_Dloop_D17_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D17_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.17) #f (bruijn ##.loop.17 5 0) (bruijn ##.%k.216 4 0) (bruijn ##.%x.220 0 0))
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
void _V50_V10_Dloop_D17_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D17_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.218 0 0) (+ (close _V50_V10_Dloop_D17_V0k51) (bruijn ##.i.18 3 1) 1) (- (close _V50_V10_Dloop_D17_V0k52) (bruijn ##.i.18 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k51, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k52, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D17_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D17_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D17_V0k50) #\/ (bruijn ##.%x.221 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k50, self)))),
      VEncodeChar('/'),
      _var0);
}
void _V50_V10_Dloop_D17_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D17_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.217 0 0) ((bruijn ##.%k.216 1 0) (##string ##.string.841)) (string-ref (close _V50_V10_Dloop_D17_V0k49) (bruijn ##.file.16 3 1) (bruijn ##.i.18 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D841.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k49, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D17" };
 VRecordCall2(runtime, &dbg);
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
  // (<= (close _V50_V10_Dloop_D17_V0k48) (bruijn ##.i.18 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k48, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0basepath_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.17) #f (bruijn ##.loop.17 2 0) (bruijn ##.%k.215 3 0) (bruijn ##.%x.222 0 0))
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
static void _V0basepath_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basepath_V0k54) (bruijn ##.%x.223 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0k54, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0basepath_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basepath_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D17")) (string-length (close _V0basepath_V0k53) (bruijn ##.file.16 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0k53, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.214 0 0) basepath (close _V0basepath_V0lambda56))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basepath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0lambda56, self))))
    );
}
void _V50_V10_Dloop_D20_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D20_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.20) #f (bruijn ##.loop.20 5 0) (bruijn ##.%k.226 4 0) (bruijn ##.%x.229 0 0))
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
static void _V50_V10_Dloop_D20_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (- (close _V50_V10_Dloop_D20_V0k59) (bruijn ##.i.21 3 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k59, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D20_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D20_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.20) #f (bruijn ##.loop.20 5 0) (bruijn ##.%k.226 4 0) (bruijn ##.%x.230 0 0))
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
void _V50_V10_Dloop_D20_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D20_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.228 0 0) (string-set! (close _V50_V10_Dloop_D20_V0k58) (bruijn ##.str.19 5 1) (bruijn ##.i.21 3 1) #\space) (- (close _V50_V10_Dloop_D20_V0k60) (bruijn ##.i.21 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-set!")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k58, self)))),
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1],
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k60, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D20_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D20_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D20_V0k57) #\, (bruijn ##.%x.231 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k57, self)))),
      VEncodeChar(','),
      _var0);
}
void _V50_V10_Dloop_D20_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D20_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.227 0 0) ((bruijn ##.%k.226 1 0) (bruijn ##.str.19 3 1)) (string-ref (close _V50_V10_Dloop_D20_V0k56) (bruijn ##.str.19 3 1) (bruijn ##.i.21 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k56, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D20" };
 VRecordCall2(runtime, &dbg);
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
  // (< (close _V50_V10_Dloop_D20_V0k55) (bruijn ##.i.21 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k55, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0decomma_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.20) #f (bruijn ##.loop.20 2 0) (bruijn ##.%k.225 3 0) (bruijn ##.%x.232 0 0))
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
static void _V0decomma_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0decomma_V0k62) (bruijn ##.%x.233 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0k62, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0decomma_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decomma_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D20")) (string-length (close _V0decomma_V0k61) (bruijn ##.str.19 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0k61, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.224 0 0) decomma (close _V0decomma_V0lambda58))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0decomma,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0lambda58, self))))
    );
}
static void _V0realpath_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.235 3 0) (bruijn ##.ret.24 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
static void _V0realpath_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realpath_V0k66) (bruijn ##.proc.23 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k66, self)))),
      statics->vars[0]);
}
static void _V0realpath_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realpath_V0k65) (bruijn ##.proc.23 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k65, self)))),
      _var0);
}
static void _V0realpath_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realpath_V0k64) (bruijn ##.%x.236 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k64, self)))),
      _var0);
}
static void _V0realpath_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realpath_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realpath_V0k63) (##string ##.string.883) (bruijn ##.file.22 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k63, self)))),
      VEncodePointer(&_V10_Dstring_D883.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.234 0 0) realpath (close _V0realpath_V0lambda60))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realpath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0lambda60, self))))
    );
}
static void _V0realbasepath_V0k70(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.238 3 0) (bruijn ##.ret.27 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
static void _V0realbasepath_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realbasepath_V0k70) (bruijn ##.proc.26 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k70, self)))),
      statics->vars[0]);
}
static void _V0realbasepath_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realbasepath_V0k69) (bruijn ##.proc.26 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k69, self)))),
      _var0);
}
static void _V0realbasepath_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_V0k68) (bruijn ##.%x.239 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k68, self)))),
      _var0);
}
static void _V0realbasepath_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realbasepath_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_V0k67) (##string ##.string.884) (bruijn ##.file.25 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k67, self)))),
      VEncodePointer(&_V10_Dstring_D884.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.237 0 0) realbasepath (close _V0realbasepath_V0lambda62))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realbasepath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0lambda62, self))))
    );
}
void _V50_V10_Dloop_D29_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D29_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.247 1 0) ((bruijn ##.%k.248 0 0) 1) ((bruijn ##.%k.248 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
void _V50_V10_Dloop_D29_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D29_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.29) #f (bruijn ##.loop.29 6 0) (bruijn ##.%k.242 5 0) (bruijn ##.%x.244 3 0) (bruijn ##.%x.245 0 0))
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
void _V50_V10_Dloop_D29_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D29_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (+ (close _V50_V10_Dloop_D29_V0k76) (bruijn ##.ct.31 4 2) (bruijn ##.%x.246 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k76, self)))),
      statics->up->up->up->vars[2],
      _var0);
}
void _V50_V10_Dloop_D29_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D29_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D29_V0k74) (close _V50_V10_Dloop_D29_V0k75))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k75, self)))));
}
void _V50_V10_Dloop_D29_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D29_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V50_V10_Dloop_D29_V0k73) (bruijn ##.args.30 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k73, self)))),
      statics->up->vars[1]);
}
void _V50_V10_Dloop_D29_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D29_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.243 0 0) ((bruijn ##.%k.242 1 0) (bruijn ##.ct.31 1 2)) (cdr (close _V50_V10_Dloop_D29_V0k72) (bruijn ##.args.30 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k72, self)))),
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D29" };
 VRecordCall2(runtime, &dbg);
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
  // (null? (close _V50_V10_Dloop_D29_V0k71) (bruijn ##.args.30 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k71, self)))),
      _var1);
}
static void _V0count__true_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0count__true_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0count__true_V0lambda64, got ~D~N"
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
  // (letrec 1 ((close "_V50_V10_Dloop_D29")) (##qualified-call (##.loop.29) #f (bruijn ##.loop.29 0 0) (bruijn ##.%k.241 1 0) (bruijn ##.args.28 1 1) 0))
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
static void global_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.240 0 0) count-true (close _V0count__true_V0lambda64))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0count__true,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0count__true_V0lambda64, self))))
    );
}
static void _V0delete__file_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete__file_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.%k.250 1 0) (bruijn ##.%x.251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      statics->vars[0],
      _var0);
}
static void _V0delete__file_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0delete__file_V0lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0delete__file_V0k77) (##string ##.string.920) (bruijn ##.f.32 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0delete__file_V0k77, self)))),
      VEncodePointer(&_V10_Dstring_D920.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.249 0 0) delete-file (close _V0delete__file_V0lambda66))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0delete__file,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0delete__file_V0lambda66, self))))
    );
}
static void _V0gen__header_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.264 1 0) (compiler-error (bruijn ##.%k.265 0 0) (##string ##.string.951)) ((bruijn ##.%k.265 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D951.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.262 1 0) ((bruijn ##.%k.263 0 0) (bruijn ##.%p.262 1 0)) (car (bruijn ##.%k.263 0 0) (bruijn ##.headers.35 4 0)))
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
static void _V0gen__header_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.259 1 0) (compiler-error (bruijn ##.%k.260 0 0) (##string ##.string.963)) ((bruijn ##.%k.260 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D963.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (write (bruijn ##.%k.256 1 0) (bruijn ##.%x.257 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write")), 2,
      statics->vars[0],
      _var0);
}
static void _V0gen__header_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.255 1 0) (car (close _V0gen__header_V0k96) (bruijn ##.headers.35 9 0)) ((bruijn ##.%k.256 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k96, self)))),
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k97(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (bruijn ##.%k.254 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      statics->up->vars[0]);
}
static void _V0gen__header_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k95) (close _V0gen__header_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k97, self)))));
}
static void _V0gen__header_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_V0k94) (bruijn ##.%x.258 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k94, self)))),
      _var0);
}
static void _V0gen__header_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__header_V0k93) (bruijn ##.headers.35 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k93, self)))),
      VGetArg(statics, 6-1, 0));
}
static void _V0gen__header_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (with-output-to-file (bruijn ##.%k.253 10 0) out-file (close _V0gen__header_V0lambda69))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      VGetArg(statics, 10-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda69, self)))));
}
static void _V0gen__header_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k90" };
 VRecordCall2(runtime, &dbg);
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
 static VDebugInfo dbg = { "_V0gen__header_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_V0k90) (bruijn ##.%x.261 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k90, self)))),
      _var0);
}
static void _V0gen__header_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k88) (close _V0gen__header_V0k89))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k89, self)))));
}
static void _V0gen__header_V0k86(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (null? (close _V0gen__header_V0k87) (bruijn ##.headers.35 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k87, self)))),
      statics->up->vars[0]);
}
static void _V0gen__header_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k85) (close _V0gen__header_V0k86))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k85, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k86, self)))));
}
static void _V0gen__header_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close _V0gen__header_V0k84) (bruijn ##.%x.266 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k84, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0gen__header_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (length (close _V0gen__header_V0k83) (bruijn ##.headers.35 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k83, self)))),
      _var0);
}
static void _V0gen__header_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header_V0lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.267 0 0) (bruijn ##.x.36 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V0gen__header_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V0gen__header_V0k82) (close _V0gen__header_V0lambda70) (bruijn ##.%x.268 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda70, self)))),
      _var0);
}
static void _V0gen__header_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (header-from-library (bruijn ##.%k.269 3 0) (bruijn ##.x.33.37 3 1) (bruijn ##.%x.270 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "header-from-library")), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V0gen__header_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V0gen__header_V0k100) (bruijn ##.%x.271 0 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k100, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void _V0gen__header_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (realbasepath (close _V0gen__header_V0k99) (bruijn ##.%x.272 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k99, self)))),
      _var0);
}
static void _V0gen__header_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header_V0lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (car (close _V0gen__header_V0k98) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k98, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__header_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close _V0gen__header_V0k81) (close _V0gen__header_V0lambda71) (bruijn ##.file.34 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k81, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda71, self)))),
      _var0);
}
static void _V0gen__header_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__header_V0k80) (bruijn ##.%x.273 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k80, self)))),
      _var0);
}
static void _V0gen__header_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_V0k79) (bruijn ##.%x.274 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k79, self)))),
      _var0);
}
static void _V0gen__header_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0gen__header_V0k78) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k78, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.252 0 0) gen-header (close _V0gen__header_V0lambda68))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__header,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda68, self))))
    );
}
static void _V0gen__makefile_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.289 4 0) maketargets (bruijn ##.%x.290 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
}
static void _V0gen__makefile_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V0gen__makefile_V0k106) (bruijn ##.%x.291 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k106, self)))),
      _var0);
}
static void _V0gen__makefile_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_V0k105) (bruijn ##.%x.292 0 0) (##string ##.string.1011))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k105, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1011.sym, VPOINTER_OTHER));
}
static void _V0gen__makefile_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close _V0gen__makefile_V0k104) (bruijn ##.%x.293 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k104, self)))),
      _var0);
}
static void _V0gen__makefile_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.288 1 0) (car (close _V0gen__makefile_V0k103) scm-files) ((bruijn ##.%k.289 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k103, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (open-output-file (bruijn ##.%k.285 0 0) out-file) (current-output-port (bruijn ##.%k.285 0 0)))
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
static void _V0gen__makefile_V0k119(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if out-file (close-port (bruijn ##.%k.276 7 0) (bruijn ##.port.40 1 0)) ((bruijn ##.%k.276 7 0) #f))
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
static void _V0gen__makefile_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (close _V0gen__makefile_V0k119) (bruijn ##.port.40 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k119, self)))),
      statics->vars[0]);
}
static void _V0gen__makefile_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.280 1 0) (compiler-error (bruijn ##.%k.281 0 0) (##string ##.string.1054) (bruijn ##.dep.42 4 1)) ((bruijn ##.%k.281 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1054.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.%k.277 4 0) (bruijn ##.port.40 6 0) (##string ##.string.1056) (bruijn ##.%x.279 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1056.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (import->path (close _V0gen__makefile_V0k125) (bruijn ##.dep.42 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "import->path")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k125, self)))),
      statics->up->up->vars[1]);
}
static void _V0gen__makefile_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k123) (close _V0gen__makefile_V0k124))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k123, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k124, self)))));
}
static void _V0gen__makefile_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__makefile_V0k122) (bruijn ##.%x.282 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k122, self)))),
      _var0);
}
static void _V0gen__makefile_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.278 0 0) (valid-import? (close _V0gen__makefile_V0k121) (bruijn ##.dep.42 1 1)) ((bruijn ##.%k.277 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "valid-import?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k121, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_V0k120) (bruijn ##.dep.42 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "pair?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k120, self)))),
      _var1);
}
static void _V0gen__makefile_V0k117(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (for-each (close _V0gen__makefile_V0k118) (close _V0gen__makefile_V0lambda74) (bruijn ##.deps.39 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k118, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda74, self)))),
      statics->up->vars[0]);
}
static void _V0gen__makefile_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (format (close _V0gen__makefile_V0k117) (bruijn ##.port.40 1 0) (##string ##.string.1056) (bruijn ##.%x.283 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k117, self)))),
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1056.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (car (close _V0gen__makefile_V0k116) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k116, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_V0k114(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (display (close _V0gen__makefile_V0k115) (##string ##.string.1057) (bruijn ##.port.40 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k115, self)))),
      VEncodePointer(&_V10_Dstring_D1057.sym, VPOINTER_OTHER),
      self->vars[0]);
}
static void _V0gen__makefile_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (format (bruijn ##.%k.284 0 0) (bruijn ##.port.40 1 0) (##string ##.string.1063) (bruijn ##.target.41 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      _var0,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1063.sym, VPOINTER_OTHER),
      _var1);
}
static void _V0gen__makefile_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_V0k114) (close _V0gen__makefile_V0lambda75) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda75, self)))),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void _V0gen__makefile_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k112) (close _V0gen__makefile_V0k113))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k112, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k113, self)))));
}
static void _V0gen__makefile_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_V0k111) (bruijn ##.file.38 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gather-dependencies")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k111, self)))),
      _var0);
}
static void _V0gen__makefile_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_V0k110) (bruijn ##.%x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k110, self)))),
      _var0);
}
static void _V0gen__makefile_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_V0k109) (bruijn ##.%x.287 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k109, self)))),
      _var0);
}
static void _V0gen__makefile_V0k107(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (car (close _V0gen__makefile_V0k108) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k108, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k102) (close _V0gen__makefile_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k107, self)))));
}
static void _V0gen__makefile_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__makefile_V0k101) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k101, self)))),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void global_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.275 0 0) gen-makefile (close _V0gen__makefile_V0lambda73))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__makefile,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda73, self))))
    );
}
static void _V0display__help_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (bruijn ##.%k.295 0 0) (##string ##.string.1064))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D1064.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k152) (##string ##.string.1065))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k152, self)))),
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k151) (##string ##.string.1066))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k151, self)))),
      VEncodePointer(&_V10_Dstring_D1066.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k150) (##string ##.string.1067))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k150, self)))),
      VEncodePointer(&_V10_Dstring_D1067.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k149) (##string ##.string.1068))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k149, self)))),
      VEncodePointer(&_V10_Dstring_D1068.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k147(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k148) (##string ##.string.1069))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k148, self)))),
      VEncodePointer(&_V10_Dstring_D1069.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k146(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k147) (##string ##.string.1070))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k147, self)))),
      VEncodePointer(&_V10_Dstring_D1070.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k146) (##string ##.string.1071))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k146, self)))),
      VEncodePointer(&_V10_Dstring_D1071.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k144(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k145) (##string ##.string.1072))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k145, self)))),
      VEncodePointer(&_V10_Dstring_D1072.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k143(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k144) (##string ##.string.1073))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k144, self)))),
      VEncodePointer(&_V10_Dstring_D1073.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k142(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k143) (##string ##.string.1065))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k143, self)))),
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k141(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k142) (##string ##.string.1074))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k142, self)))),
      VEncodePointer(&_V10_Dstring_D1074.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k141) (##string ##.string.1075))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k141, self)))),
      VEncodePointer(&_V10_Dstring_D1075.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k140) (##string ##.string.1065))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k140, self)))),
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k138(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k139) (##string ##.string.1076))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k139, self)))),
      VEncodePointer(&_V10_Dstring_D1076.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k138) (##string ##.string.1077))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k138, self)))),
      VEncodePointer(&_V10_Dstring_D1077.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k136(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k137) (##string ##.string.1078))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k137, self)))),
      VEncodePointer(&_V10_Dstring_D1078.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k136) (##string ##.string.1079))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k136, self)))),
      VEncodePointer(&_V10_Dstring_D1079.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k135) (##string ##.string.1080))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k135, self)))),
      VEncodePointer(&_V10_Dstring_D1080.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k134) (##string ##.string.1081))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k134, self)))),
      VEncodePointer(&_V10_Dstring_D1081.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k133) (##string ##.string.1082))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k133, self)))),
      VEncodePointer(&_V10_Dstring_D1082.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k131(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k132) (##string ##.string.1083))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k132, self)))),
      VEncodePointer(&_V10_Dstring_D1083.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k130(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k131) (##string ##.string.1084))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k131, self)))),
      VEncodePointer(&_V10_Dstring_D1084.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k129(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k130) (##string ##.string.1085))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k130, self)))),
      VEncodePointer(&_V10_Dstring_D1085.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k128(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k129) (##string ##.string.1086))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k129, self)))),
      VEncodePointer(&_V10_Dstring_D1086.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k127(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k128) (##string ##.string.1087))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k128, self)))),
      VEncodePointer(&_V10_Dstring_D1087.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k127) (##string ##.string.1088))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k127, self)))),
      VEncodePointer(&_V10_Dstring_D1088.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_V0lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_V0k126) (##string ##.string.1089))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k126, self)))),
      VEncodePointer(&_V10_Dstring_D1089.sym, VPOINTER_OTHER));
}
static void global_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.294 0 0) display-help (close _V0display__help_V0lambda77))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__help,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0lambda77, self))))
    );
}
static void _V0display__version_V0k155(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (bruijn ##.%k.297 2 0) (##string ##.string.1090))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1090.sym, VPOINTER_OTHER));
}
static void _V0display__version_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0display__version_V0k155) (##string ##.string.1091) (bruijn ##.%x.298 1 0) (bruijn ##.%x.299 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k155, self)))),
      VEncodePointer(&_V10_Dstring_D1091.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0display__version_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cadr (close _V0display__version_V0k154) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cadr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k154, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void _V0display__version_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_V0lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0display__version_V0k153) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k153, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.296 0 0) display-version (close _V0display__version_V0lambda79))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__version,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0lambda79, self))))
    );
}
static void _V0handle__exception_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0handle__exception_V0lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (printf (bruijn ##.%k.304 0 0) (##string ##.string.1063) (bruijn ##.e.50 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1063.sym, VPOINTER_OTHER),
      _var1);
}
static void _V0handle__exception_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (bruijn ##.%k.303 3 0) (close _V0handle__exception_V0lambda82) (bruijn ##.%x.305 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0lambda82, self)))),
      _var0);
}
static void _V0handle__exception_V0k165(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (error-object-irritants (close _V0handle__exception_V0k166) (bruijn ##.err.46 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "error-object-irritants")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k166, self)))),
      VGetArg(statics, 8-1, 1));
}
static void _V0handle__exception_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0handle__exception_V0k165) (##string ##.string.1134) (bruijn ##.%x.306 1 0) (bruijn ##.%x.307 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k165, self)))),
      VEncodePointer(&_V10_Dstring_D1134.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0handle__exception_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (error-object-message (close _V0handle__exception_V0k164) (bruijn ##.err.46 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "error-object-message")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k164, self)))),
      VGetArg(statics, 7-1, 1));
}
static void _V0handle__exception_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.302 1 0) (record-ref (close _V0handle__exception_V0k163) (bruijn ##.err.46 6 1) 1) (display (bruijn ##.%k.303 0 0) (bruijn ##.err.46 6 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "record-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k163, self)))),
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
}
static void _V0handle__exception_V0k170(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.301 6 0) (bruijn ##.ret.45.49 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
}
static void _V0handle__exception_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_V0k170) '##vcore.pop-value (bruijn ##.keyval.44.48 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k170, self)))),
      _V10vcore_Dpop__value,
      statics->up->up->up->vars[0]);
}
static void _V0handle__exception_V0k168(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (close _V0handle__exception_V0k169) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k169, self)))),
      VEncodeInt(1l));
}
static void _V0handle__exception_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (close _V0handle__exception_V0k168))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k168, self)))));
}
static void _V0handle__exception_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0handle__exception_V0k162) (close _V0handle__exception_V0k167))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k162, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k167, self)))));
}
static void _V0handle__exception_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (error-object? (close _V0handle__exception_V0k161) (bruijn ##.err.46 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "error-object?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k161, self)))),
      statics->up->up->up->vars[1]);
}
static void _V0handle__exception_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0handle__exception_V0k160) (##string ##.string.1139) (bruijn ##.%x.308 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k160, self)))),
      VEncodePointer(&_V10_Dstring_D1139.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0handle__exception_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0handle__exception_V0k159) (bruijn ##.%x.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k159, self)))),
      _var0);
}
static void _V0handle__exception_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (command-line (close _V0handle__exception_V0k158))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "command-line")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k158, self)))));
}
static void _V0handle__exception_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_V0k157) '##vcore.push-value (bruijn ##.%x.310 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k157, self)))),
      _V10vcore_Dpush__value,
      _var0);
}
static void _V0handle__exception_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0handle__exception_V0lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (current-error-port (close _V0handle__exception_V0k156))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-error-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k156, self)))));
}
static void global_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.300 0 0) handle-exception (close _V0handle__exception_V0lambda81))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0handle__exception,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0lambda81, self))))
    );
}
void _V50_V10_Dloop_D52_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 5 0) obj-files (bruijn ##.%x.368 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k180) (bruijn ##.%x.369 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k180, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D52_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 9 0) obj-files (bruijn ##.%x.371 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 9-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k186) (bruijn ##.%x.372 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k186, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D52_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D52_V0k185) (##string ##.string.1191) (bruijn ##.%x.373 0 0) (##string ##.string.1192))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k185, self)))),
      VEncodePointer(&_V10_Dstring_D1191.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D1192.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 12 0) obj-files (bruijn ##.%x.375 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k192) (bruijn ##.%x.376 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k192, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D52_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D52_V0k191) (##string ##.string.1191) (bruijn ##.%x.377 0 0) (##string ##.string.1192))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k191, self)))),
      VEncodePointer(&_V10_Dstring_D1191.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D1192.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (equal? (bruijn ##.%k.383 2 0) (bruijn ##.%x.384 0 0) (##string ##.string.1213))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1213.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D52_V0k198) (bruijn ##.%x.385 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k198, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.382 1 0) ((bruijn ##.%k.383 0 0) (bruijn ##.%p.382 1 0)) (cdar (close _V50_V10_Dloop_D52_V0k197) (bruijn ##.args.53 18 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k197, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 15 0) scm-files (bruijn ##.%x.379 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 15-1, 0),
      _V0scm__files,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k201) (bruijn ##.%x.380 0 0) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k201, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
void _V50_V10_Dloop_D52_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.366 14 0) (##string ##.string.1221) (bruijn ##.%x.381 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D1221.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D52_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.378 0 0) (cdar (close _V50_V10_Dloop_D52_V0k200) (bruijn ##.args.53 18 1)) (cdar (close _V50_V10_Dloop_D52_V0k202) (bruijn ##.args.53 18 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k200, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k202, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D52_V0k196) (close _V50_V10_Dloop_D52_V0k199))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k196, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k199, self)))));
}
void _V50_V10_Dloop_D52_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k195) (bruijn ##.%x.386 0 0) (##string ##.string.1222))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k195, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1222.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D52_V0k194) (bruijn ##.%x.387 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k194, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.374 0 0) (cdar (close _V50_V10_Dloop_D52_V0k190) (bruijn ##.args.53 14 1)) (cdar (close _V50_V10_Dloop_D52_V0k193) (bruijn ##.args.53 14 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k190, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k193, self)))),
      VGetArg(statics, 14-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k189) (bruijn ##.%x.388 0 0) (##string ##.string.1223))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k189, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1223.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D52_V0k188) (bruijn ##.%x.389 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k188, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.370 0 0) (cdar (close _V50_V10_Dloop_D52_V0k184) (bruijn ##.args.53 11 1)) (cdar (close _V50_V10_Dloop_D52_V0k187) (bruijn ##.args.53 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k184, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k187, self)))),
      VGetArg(statics, 11-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k183) (bruijn ##.%x.390 0 0) (##string ##.string.1224))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k183, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1224.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D52_V0k182) (bruijn ##.%x.391 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k182, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.367 0 0) (cdar (close _V50_V10_Dloop_D52_V0k179) (bruijn ##.args.53 8 1)) (cdar (close _V50_V10_Dloop_D52_V0k181) (bruijn ##.args.53 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k179, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k181, self)))),
      VGetArg(statics, 8-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k178) (bruijn ##.%x.392 0 0) (##string ##.string.1011))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k178, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1011.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D52_V0k177) (bruijn ##.%x.393 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k177, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 7 0) out-file (bruijn ##.%x.400 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 7-1, 0),
      _V0out__file,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 11 0) paths (bruijn ##.%x.402 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 11-1, 0),
      _V0paths,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V50_V10_Dloop_D52_V0k214) paths (bruijn ##.%x.403 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k214, self)))),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
}
void _V50_V10_Dloop_D52_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V50_V10_Dloop_D52_V0k213) (bruijn ##.%x.404 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k213, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (realpath (close _V50_V10_Dloop_D52_V0k212) (bruijn ##.%x.405 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realpath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k212, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 11 0) user-feature-list (bruijn ##.%x.407 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 11-1, 0),
      _V0user__feature__list,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k218) (bruijn ##.%x.408 0 0) user-feature-list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k218, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "user-feature-list"));
}
void _V50_V10_Dloop_D52_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->symbol (close _V50_V10_Dloop_D52_V0k217) (bruijn ##.%x.409 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->symbol")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k217, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.415 0 0) (<= (bruijn ##.%k.414 1 0) 0 optimization 3) ((bruijn ##.%k.414 1 0) #f))
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
void _V50_V10_Dloop_D52_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if optimization (integer? (close _V50_V10_Dloop_D52_V0k224) optimization) ((bruijn ##.%k.414 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k224, self)))),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.366 14 0) (##string ##.string.1287) (bruijn ##.%x.412 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D1287.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D52_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.411 0 0) (cdar (close _V50_V10_Dloop_D52_V0k227) (bruijn ##.args.53 18 1)) ((bruijn ##.%k.366 13 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k227, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D52_V0k226) (bruijn ##.%x.413 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k226, self)))),
      _var0);
}
static void _V50_V10_Dloop_D52_V0k222(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V10_Dloop_D52_V0k223) (close _V50_V10_Dloop_D52_V0k225))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k223, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k225, self)))));
}
void _V50_V10_Dloop_D52_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D52_V0k222) optimization (bruijn ##.%x.416 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k222, self)))),
      _V0optimization,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D52_V0k221) (bruijn ##.%x.417 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k221, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.424 0 0) ((bruijn ##.%k.422 2 0) (bruijn ##.%p.424 0 0)) (<= (bruijn ##.%k.422 2 0) 0 expand? 2))
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
void _V50_V10_Dloop_D52_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.423 0 0) (eq? (close _V50_V10_Dloop_D52_V0k234) expand? 9) ((bruijn ##.%k.422 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k234, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(9l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if expand? (integer? (close _V50_V10_Dloop_D52_V0k233) expand?) ((bruijn ##.%k.422 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k233, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.366 15 0) (##string ##.string.1311) (bruijn ##.%x.420 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D1311.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D52_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.419 0 0) (cdar (close _V50_V10_Dloop_D52_V0k237) (bruijn ##.args.53 19 1)) ((bruijn ##.%k.366 14 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k237, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D52_V0k236) (bruijn ##.%x.421 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k236, self)))),
      _var0);
}
static void _V50_V10_Dloop_D52_V0k231(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V10_Dloop_D52_V0k232) (close _V50_V10_Dloop_D52_V0k235))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k232, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k235, self)))));
}
void _V50_V10_Dloop_D52_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D52_V0k231) expand? (bruijn ##.%x.425 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k231, self)))),
      _V0expand_Q,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D52_V0k230) (bruijn ##.%x.426 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k230, self)))),
      _var0);
}
static void _V50_V10_Dloop_D52_V0k243(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.%k.366 15 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 15-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void _V50_V10_Dloop_D52_V0k246(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.%k.366 17 0) werror-unbound-variables #t)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(true)
    );
}
void _V50_V10_Dloop_D52_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.%k.456 2 0) (bruijn ##.%x.457 0 0) #\l)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar('l'));
}
void _V50_V10_Dloop_D52_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D52_V0k254) (bruijn ##.%x.458 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k254, self)))),
      _var0,
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D52_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.455 1 0) ((bruijn ##.%k.456 0 0) (bruijn ##.%p.455 1 0)) (cdar (close _V50_V10_Dloop_D52_V0k253) (bruijn ##.args.53 28 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k253, self)))),
      VGetArg(statics, 28-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.452 1 0) (compiler-error (bruijn ##.%k.453 0 0) (##string ##.string.1362)) ((bruijn ##.%k.453 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1362.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.%k.447 2 0) (bruijn ##.%x.448 0 0) #\,)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar(','));
}
void _V50_V10_Dloop_D52_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D52_V0k264) (bruijn ##.%x.449 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k264, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D52_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.446 1 0) (cdar (close _V50_V10_Dloop_D52_V0k263) (bruijn ##.args.53 33 1)) ((bruijn ##.%k.447 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k263, self)))),
      VGetArg(statics, 33-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.443 1 0) (compiler-error (bruijn ##.%k.444 0 0) (##string ##.string.1386)) ((bruijn ##.%k.444 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1386.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 36 0) c-options (bruijn ##.%x.433 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 36-1, 0),
      _V0c__options,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k275) (bruijn ##.%x.434 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k275, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
void _V50_V10_Dloop_D52_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (decomma (close _V50_V10_Dloop_D52_V0k274) (bruijn ##.%x.435 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "decomma")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k274, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V50_V10_Dloop_D52_V0k273) (bruijn ##.%x.436 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k273, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D52_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 36 0) c-options (bruijn ##.%x.437 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 36-1, 0),
      _V0c__options,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k279) (bruijn ##.%x.438 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k279, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
void _V50_V10_Dloop_D52_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D52_V0k278) (##string ##.string.1406) (bruijn ##.%x.439 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k278, self)))),
      VEncodePointer(&_V10_Dstring_D1406.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D52_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V50_V10_Dloop_D52_V0k277) (bruijn ##.%x.440 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k277, self)))),
      _var0,
      VEncodeInt(2l));
}
void _V50_V10_Dloop_D52_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.432 0 0) (cdar (close _V50_V10_Dloop_D52_V0k272) (bruijn ##.args.53 37 1)) (cdar (close _V50_V10_Dloop_D52_V0k276) (bruijn ##.args.53 37 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k272, self)))),
      VGetArg(statics, 37-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k276, self)))),
      VGetArg(statics, 37-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D52_V0k271) (bruijn ##.%x.441 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k271, self)))),
      _var0,
      VEncodeChar('c'));
}
void _V50_V10_Dloop_D52_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D52_V0k270) (bruijn ##.%x.442 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k270, self)))),
      _var0,
      VEncodeInt(0l));
}
static void _V50_V10_Dloop_D52_V0k268(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdar (close _V50_V10_Dloop_D52_V0k269) (bruijn ##.args.53 34 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k269, self)))),
      VGetArg(statics, 34-1, 1));
}
void _V50_V10_Dloop_D52_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D52_V0k267) (close _V50_V10_Dloop_D52_V0k268))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k267, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k268, self)))));
}
void _V50_V10_Dloop_D52_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D52_V0k266) (bruijn ##.%x.445 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k266, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D52_V0k262) (close _V50_V10_Dloop_D52_V0k265))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k262, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k265, self)))));
}
void _V50_V10_Dloop_D52_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (>= (close _V50_V10_Dloop_D52_V0k261) (bruijn ##.%x.450 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k261, self)))),
      _var0,
      VEncodeInt(2l));
}
void _V50_V10_Dloop_D52_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-length (close _V50_V10_Dloop_D52_V0k260) (bruijn ##.%x.451 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k260, self)))),
      _var0);
}
static void _V50_V10_Dloop_D52_V0k258(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdar (close _V50_V10_Dloop_D52_V0k259) (bruijn ##.args.53 29 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k259, self)))),
      VGetArg(statics, 29-1, 1));
}
void _V50_V10_Dloop_D52_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D52_V0k257) (close _V50_V10_Dloop_D52_V0k258))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k257, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k258, self)))));
}
void _V50_V10_Dloop_D52_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D52_V0k256) (bruijn ##.%x.454 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k256, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D52_V0k252) (close _V50_V10_Dloop_D52_V0k255))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k252, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k255, self)))));
}
void _V50_V10_Dloop_D52_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D52_V0k251) (bruijn ##.%x.459 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k251, self)))),
      _var0,
      VEncodeChar('c'));
}
void _V50_V10_Dloop_D52_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D52_V0k250) (bruijn ##.%x.460 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k250, self)))),
      _var0,
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D52_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.431 0 0) (set! (bruijn ##.%k.366 19 0) werror-unbound-variables #f) (cdar (close _V50_V10_Dloop_D52_V0k249) (bruijn ##.args.53 24 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k249, self)))),
      VGetArg(statics, 24-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k248) (bruijn ##.%x.461 0 0) (##string ##.string.1407))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k248, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1407.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.430 0 0) (set! (close _V50_V10_Dloop_D52_V0k246) w-unbound-variables #t) (cdar (close _V50_V10_Dloop_D52_V0k247) (bruijn ##.args.53 22 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k246, self)))),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k247, self)))),
      VGetArg(statics, 22-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k245) (bruijn ##.%x.462 0 0) (##string ##.string.1408))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k245, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1408.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.429 0 0) (set! (close _V50_V10_Dloop_D52_V0k243) w-unbound-variables #f) (cdar (close _V50_V10_Dloop_D52_V0k244) (bruijn ##.args.53 20 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k243, self)))),
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k244, self)))),
      VGetArg(statics, 20-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k242) (bruijn ##.%x.463 0 0) (##string ##.string.1409))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k242, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1409.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.428 0 0) (set! (bruijn ##.%k.366 13 0) w-unbound-variables #t) (cdar (close _V50_V10_Dloop_D52_V0k241) (bruijn ##.args.53 18 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 13-1, 0),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k241, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D52_V0k240) (bruijn ##.%x.464 0 0) (##string ##.string.1410))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k240, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1410.sym, VPOINTER_OTHER));
}
static void _V50_V10_Dloop_D52_V0k281(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.366 12 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 12-1, 0),
      VEncodeInt(0l));
}
static void _V50_V10_Dloop_D52_V0k283(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.366 13 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 13-1, 0),
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D52_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 17 0) api (bruijn ##.%x.469 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0api,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D52_V0k287) (bruijn ##.%x.470 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k287, self)))),
      _var0);
}
void _V50_V10_Dloop_D52_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.472 0 0) (set! (bruijn ##.%k.366 18 0) purec? #t) ((bruijn ##.%k.366 18 0) #f))
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
static void _V50_V10_Dloop_D52_V0k290(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close _V50_V10_Dloop_D52_V0k291) platform (##string ##.string.1434))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k291, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D52_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D52_V0k290) platform (bruijn ##.%x.473 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k290, self)))),
      _V0platform,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 18 0) main (bruijn ##.%x.475 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0main,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 19 0) cc (bruijn ##.%x.477 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0cc,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.366 23 0) maketargets (bruijn ##.%x.481 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 23-1, 0),
      _V0maketargets,
      _var0
    );
}
void _V50_V10_Dloop_D52_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D52_V0k300) (bruijn ##.%x.482 0 0) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k300, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
void _V50_V10_Dloop_D52_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.366 25 0) (##string ##.string.1466) (bruijn ##.%x.486 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 25-1, 0),
      VEncodePointer(&_V10_Dstring_D1466.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D52_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.485 0 0) (set! (bruijn ##.%k.366 24 0) hygiene? #t) (cdar (close _V50_V10_Dloop_D52_V0k304) (bruijn ##.args.53 29 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 24-1, 0),
      _V0hygiene_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k304, self)))),
      VGetArg(statics, 29-1, 1));
}
}
void _V50_V10_Dloop_D52_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.484 0 0) (set! (bruijn ##.%k.366 23 0) bytecode? #t) (eqv? (close _V50_V10_Dloop_D52_V0k303) (bruijn ##.x.51.54 25 0) 'hygiene))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 23-1, 0),
      _V0bytecode_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k303, self)))),
      VGetArg(statics, 25-1, 0),
      _V0hygiene);
}
}
void _V50_V10_Dloop_D52_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.483 0 0) (set! (bruijn ##.%k.366 22 0) benchmark? #t) (eqv? (close _V50_V10_Dloop_D52_V0k302) (bruijn ##.x.51.54 24 0) 'bytecode))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 22-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k302, self)))),
      VGetArg(statics, 24-1, 0),
      _V0bytecode);
}
}
void _V50_V10_Dloop_D52_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.480 0 0) (cdar (close _V50_V10_Dloop_D52_V0k299) (bruijn ##.args.53 26 1)) (eqv? (close _V50_V10_Dloop_D52_V0k301) (bruijn ##.x.51.54 23 0) 'benchmark))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k299, self)))),
      VGetArg(statics, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k301, self)))),
      VGetArg(statics, 23-1, 0),
      _V0benchmark);
}
}
void _V50_V10_Dloop_D52_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.479 0 0) (set! (bruijn ##.%k.366 20 0) makefile? #t) (eqv? (close _V50_V10_Dloop_D52_V0k298) (bruijn ##.x.51.54 22 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 20-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k298, self)))),
      VGetArg(statics, 22-1, 0),
      _V0maketarget);
}
}
void _V50_V10_Dloop_D52_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.478 0 0) (set! (bruijn ##.%k.366 19 0) keep? #t) (eqv? (close _V50_V10_Dloop_D52_V0k297) (bruijn ##.x.51.54 21 0) 'makefile))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k297, self)))),
      VGetArg(statics, 21-1, 0),
      _V0makefile);
}
}
void _V50_V10_Dloop_D52_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.476 0 0) (cdar (close _V50_V10_Dloop_D52_V0k295) (bruijn ##.args.53 23 1)) (eqv? (close _V50_V10_Dloop_D52_V0k296) (bruijn ##.x.51.54 20 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k295, self)))),
      VGetArg(statics, 23-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k296, self)))),
      VGetArg(statics, 20-1, 0),
      _V0keep__temps);
}
}
void _V50_V10_Dloop_D52_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.474 0 0) (cdar (close _V50_V10_Dloop_D52_V0k293) (bruijn ##.args.53 22 1)) (eqv? (close _V50_V10_Dloop_D52_V0k294) (bruijn ##.x.51.54 19 0) 'cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k293, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k294, self)))),
      VGetArg(statics, 19-1, 0),
      _V0cc);
}
}
void _V50_V10_Dloop_D52_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.471 0 0) (cdar (close _V50_V10_Dloop_D52_V0k289) (bruijn ##.args.53 21 1)) (eqv? (close _V50_V10_Dloop_D52_V0k292) (bruijn ##.x.51.54 18 0) 'main))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k289, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k292, self)))),
      VGetArg(statics, 18-1, 0),
      _V0main);
}
}
void _V50_V10_Dloop_D52_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.468 0 0) (cdar (close _V50_V10_Dloop_D52_V0k286) (bruijn ##.args.53 20 1)) (eqv? (close _V50_V10_Dloop_D52_V0k288) (bruijn ##.x.51.54 17 0) 'platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k286, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k288, self)))),
      VGetArg(statics, 17-1, 0),
      _V0platform);
}
}
void _V50_V10_Dloop_D52_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.467 0 0) (set! (bruijn ##.%k.366 14 0) shared? #t) (eqv? (close _V50_V10_Dloop_D52_V0k285) (bruijn ##.x.51.54 16 0) 'api))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 14-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k285, self)))),
      VGetArg(statics, 16-1, 0),
      _V0api);
}
}
void _V50_V10_Dloop_D52_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.466 0 0) (display-version (close _V50_V10_Dloop_D52_V0k283)) (eqv? (close _V50_V10_Dloop_D52_V0k284) (bruijn ##.x.51.54 15 0) 'shared))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-version")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k283, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k284, self)))),
      VGetArg(statics, 15-1, 0),
      _V0shared);
}
}
void _V50_V10_Dloop_D52_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.465 0 0) (display-help (close _V50_V10_Dloop_D52_V0k281)) (eqv? (close _V50_V10_Dloop_D52_V0k282) (bruijn ##.x.51.54 14 0) 'version))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-help")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k281, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k282, self)))),
      VGetArg(statics, 14-1, 0),
      _V0version);
}
}
void _V50_V10_Dloop_D52_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.427 0 0) (cdar (close _V50_V10_Dloop_D52_V0k239) (bruijn ##.args.53 16 1)) (eqv? (close _V50_V10_Dloop_D52_V0k280) (bruijn ##.x.51.54 13 0) 'help))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k239, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k280, self)))),
      VGetArg(statics, 13-1, 0),
      _V0help);
}
}
void _V50_V10_Dloop_D52_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.418 0 0) (cdar (close _V50_V10_Dloop_D52_V0k229) (bruijn ##.args.53 15 1)) (eqv? (close _V50_V10_Dloop_D52_V0k238) (bruijn ##.x.51.54 12 0) '#\W))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k229, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k238, self)))),
      VGetArg(statics, 12-1, 0),
      VEncodeChar('W'));
}
}
void _V50_V10_Dloop_D52_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.410 0 0) (cdar (close _V50_V10_Dloop_D52_V0k220) (bruijn ##.args.53 14 1)) (eqv? (close _V50_V10_Dloop_D52_V0k228) (bruijn ##.x.51.54 11 0) '#\E))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k220, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k228, self)))),
      VGetArg(statics, 11-1, 0),
      VEncodeChar('E'));
}
}
void _V50_V10_Dloop_D52_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.406 0 0) (cdar (close _V50_V10_Dloop_D52_V0k216) (bruijn ##.args.53 13 1)) (eqv? (close _V50_V10_Dloop_D52_V0k219) (bruijn ##.x.51.54 10 0) '#\O))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k216, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k219, self)))),
      VGetArg(statics, 10-1, 0),
      VEncodeChar('O'));
}
}
void _V50_V10_Dloop_D52_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.401 0 0) (cdar (close _V50_V10_Dloop_D52_V0k211) (bruijn ##.args.53 12 1)) (eqv? (close _V50_V10_Dloop_D52_V0k215) (bruijn ##.x.51.54 9 0) '#\D))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k211, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k215, self)))),
      VGetArg(statics, 9-1, 0),
      VEncodeChar('D'));
}
}
void _V50_V10_Dloop_D52_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.399 0 0) (cdar (close _V50_V10_Dloop_D52_V0k209) (bruijn ##.args.53 11 1)) (eqv? (close _V50_V10_Dloop_D52_V0k210) (bruijn ##.x.51.54 8 0) '#\I))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k209, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k210, self)))),
      VGetArg(statics, 8-1, 0),
      VEncodeChar('I'));
}
}
void _V50_V10_Dloop_D52_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.398 0 0) (set! (bruijn ##.%k.366 5 0) object? #t) (eqv? (close _V50_V10_Dloop_D52_V0k208) (bruijn ##.x.51.54 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k208, self)))),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('o'));
}
}
void _V50_V10_Dloop_D52_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.397 0 0) (set! (bruijn ##.%k.366 4 0) transpile? #t) (eqv? (close _V50_V10_Dloop_D52_V0k207) (bruijn ##.x.51.54 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k207, self)))),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('c'));
}
}
void _V50_V10_Dloop_D52_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.396 0 0) (set! (bruijn ##.%k.366 3 0) header? #t) (eqv? (close _V50_V10_Dloop_D52_V0k206) (bruijn ##.x.51.54 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k206, self)))),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('t'));
}
}
void _V50_V10_Dloop_D52_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.395 0 0) (set! (bruijn ##.%k.366 2 0) debug? #t) (eqv? (close _V50_V10_Dloop_D52_V0k205) (bruijn ##.x.51.54 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k205, self)))),
      statics->up->up->up->vars[0],
      VEncodeChar('h'));
}
}
void _V50_V10_Dloop_D52_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.394 0 0) (set! (bruijn ##.%k.366 1 0) verbose? #t) (eqv? (close _V50_V10_Dloop_D52_V0k204) (bruijn ##.x.51.54 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k204, self)))),
      statics->up->up->vars[0],
      VEncodeChar('g'));
}
}
void _V50_V10_Dloop_D52_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.365 1 0) (cdar (close _V50_V10_Dloop_D52_V0k176) (bruijn ##.args.53 5 1)) (eqv? (close _V50_V10_Dloop_D52_V0k203) (bruijn ##.x.51.54 2 0) '#\v))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k176, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k203, self)))),
      statics->up->vars[0],
      VEncodeChar('v'));
}
}
void _V50_V10_Dloop_D52_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.52) #f (bruijn ##.loop.52 6 0) (bruijn ##.%k.362 5 0) (bruijn ##.%x.364 0 0))
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
       _V50_V10_Dloop_D52(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V10_Dloop_D52_V0k305(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdr (close _V50_V10_Dloop_D52_V0k306) (bruijn ##.args.53 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k306, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V10_Dloop_D52_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D52_V0k175) (close _V50_V10_Dloop_D52_V0k305))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k175, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k305, self)))));
}
void _V50_V10_Dloop_D52_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eqv? (close _V50_V10_Dloop_D52_V0k174) (bruijn ##.x.51.54 0 0) '#t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k174, self)))),
      _var0,
      VEncodeBool(true));
}
void _V50_V10_Dloop_D52_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.363 0 0) (caar (close _V50_V10_Dloop_D52_V0k173) (bruijn ##.args.53 2 1)) ((bruijn ##.%k.362 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "caar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k173, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D52_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D52_V0k172) (bruijn ##.%x.487 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k172, self)))),
      _var0);
}
void _V50_V10_Dloop_D52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (null? (close _V50_V10_Dloop_D52_V0k171) (bruijn ##.args.53 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52_V0k171, self)))),
      _var1);
}
static void global_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.361 0 0) ((bruijn ##.%k.359 2 0) (##string ##.string.1492)) (compiler-error (bruijn ##.%k.359 2 0) (##string ##.string.1493) platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1492.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1493.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
}
static void global_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.360 0 0) ((bruijn ##.%k.359 1 0) (##string ##.string.1488)) (equal? (close global_V0k315) platform (##string ##.string.1434)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1488.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k315, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
}
static void global_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.358 1 0) ((bruijn ##.%k.359 0 0) (##string ##.string.1484)) (equal? (close global_V0k314) platform (##string ##.string.1494)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1484.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k314, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1494.sym, VPOINTER_OTHER));
}
}
static void global_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.356 2 0) cc (bruijn ##.%x.357 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0cc,
      _var0
    );
}
static void global_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k313) (close global_V0k316))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k313, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k316, self)))));
}
static void global_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.355 1 0) (equal? (close global_V0k312) platform (##string ##.string.719)) ((bruijn ##.%k.356 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k312, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.352 1 0) (compiler-error (bruijn ##.%k.353 0 0) (##string ##.string.1503)) ((bruijn ##.%k.353 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1503.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.350 1 0) (null? (bruijn ##.%k.351 0 0) obj-files) ((bruijn ##.%k.351 0 0) #f))
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
static void global_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.348 1 0) (compiler-error (bruijn ##.%k.349 0 0) (##string ##.string.1512)) ((bruijn ##.%k.349 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1512.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.%k.347 0 0) makefile?) (if header? ((bruijn ##.%k.347 0 0) header?) (if bytecode? ((bruijn ##.%k.347 0 0) bytecode?) (if transpile? ((bruijn ##.%k.347 0 0) transpile?) (if object? ((bruijn ##.%k.347 0 0) object?) ((bruijn ##.%k.347 0 0) expand?))))))
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
static void global_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.345 1 0) (bruijn ##.%x.346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
static void global_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.344 1 0) (null? (close global_V0k330) obj-files) ((bruijn ##.%k.345 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k330, self)))),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.342 1 0) (compiler-error (bruijn ##.%k.343 0 0) (##string ##.string.1524)) ((bruijn ##.%k.343 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1524.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.%k.341 0 0) makefile?) (if header? ((bruijn ##.%k.341 0 0) header?) (if bytecode? ((bruijn ##.%k.341 0 0) bytecode?) (if transpile? ((bruijn ##.%k.341 0 0) transpile?) (if object? ((bruijn ##.%k.341 0 0) object?) ((bruijn ##.%k.341 0 0) expand?))))))
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
static void global_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.338 2 0) (bruijn ##.%x.339 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k338) (bruijn ##.%x.340 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k338, self)))),
      _var0);
}
static void global_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.337 1 0) (if out-file (cdr (close global_V0k337) scm-files) ((bruijn ##.%k.338 0 0) #f)) ((bruijn ##.%k.338 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k337, self)))),
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
static void global_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.335 1 0) (compiler-error (bruijn ##.%k.336 0 0) (##string ##.string.1539)) ((bruijn ##.%k.336 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1539.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.%k.334 0 0) makefile?) (if header? ((bruijn ##.%k.334 0 0) header?) (if bytecode? ((bruijn ##.%k.334 0 0) bytecode?) (if transpile? ((bruijn ##.%k.334 0 0) transpile?) (if object? ((bruijn ##.%k.334 0 0) object?) ((bruijn ##.%k.334 0 0) expand?))))))
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
static void global_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.331 2 0) (bruijn ##.%x.332 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k346) (bruijn ##.%x.333 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k346, self)))),
      _var0);
}
static void global_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.330 1 0) (cdr (close global_V0k345) scm-files) ((bruijn ##.%k.331 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k345, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.328 1 0) (compiler-error (bruijn ##.%k.329 0 0) (##string ##.string.1554)) ((bruijn ##.%k.329 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1554.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.317 2 0) (bruijn ##.%x.318 0 0) (##string ##.string.1011))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1011.sym, VPOINTER_OTHER));
}
static void global_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k354) (bruijn ##.%x.319 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k354, self)))),
      _var0);
}
static void global_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.317 2 0) (bruijn ##.%x.320 0 0) (##string ##.string.1568))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1568.sym, VPOINTER_OTHER));
}
static void global_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k356) (bruijn ##.%x.321 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k356, self)))),
      _var0);
}
static void global_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.317 2 0) (bruijn ##.%x.322 0 0) (##string ##.string.1569))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1569.sym, VPOINTER_OTHER));
}
static void global_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k358) (bruijn ##.%x.323 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k358, self)))),
      _var0);
}
static void global_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.317 2 0) (bruijn ##.%x.324 0 0) (##string ##.string.1570))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1570.sym, VPOINTER_OTHER));
}
static void global_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k360) (bruijn ##.%x.325 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k360, self)))),
      _var0);
}
static void global_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.317 2 0) (bruijn ##.%x.326 0 0) (##string ##.string.1571))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1571.sym, VPOINTER_OTHER));
}
static void global_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k362) (bruijn ##.%x.327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k362, self)))),
      _var0);
}
static void global_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if object? (car (close global_V0k353) scm-files) (if transpile? (car (close global_V0k355) scm-files) (if expand? (car (close global_V0k357) scm-files) (if header? (car (close global_V0k359) scm-files) (if bytecode? (car (close global_V0k361) scm-files) (if makefile? ((bruijn ##.%k.317 0 0) out-file) ((bruijn ##.%k.317 0 0) #f)))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k353, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k355, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k357, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k359, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k361, self)))),
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
static void global_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.315 1 0) out-file (bruijn ##.%x.316 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0out__file,
      _var0
    );
}
static void global_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.314 1 0) ((close global_V0k352) (close global_V0k363)) ((bruijn ##.%k.315 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k352, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k363, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k366(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.313 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      self->vars[0]);
}
static void global_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if header? (gen-header (close global_V0k366)) ((bruijn ##.%k.313 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-header")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k366, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k368(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.312 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      VGetArg(statics, 15-1, 0));
}
static void global_V0k367(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if makefile? (gen-makefile (close global_V0k368)) ((bruijn ##.%k.312 15 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-makefile")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k368, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k364(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k365) (close global_V0k367))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k365, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k367, self)))));
}
static void global_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k351) (close global_V0k364))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k351, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k364, self)))));
}
static void global_V0k349(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k350) out-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k350, self)))),
      VLookupGlobalVarFast2(runtime, "out-file"));
}
static void global_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k348) (close global_V0k349))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k348, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k349, self)))));
}
static void global_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k344) (close global_V0k347))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k344, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k347, self)))));
}
static void global_V0k341(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k342) (close global_V0k343))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k342, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k343, self)))));
}
static void global_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k340) (close global_V0k341))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k340, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k341, self)))));
}
static void global_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k336) (close global_V0k339))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k336, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k339, self)))));
}
static void global_V0k333(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k334) (close global_V0k335))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k334, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k335, self)))));
}
static void global_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k332) (close global_V0k333))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k332, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k333, self)))));
}
static void global_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k329) (close global_V0k331))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k329, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k331, self)))));
}
static void global_V0k326(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k327) (close global_V0k328))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k327, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k328, self)))));
}
static void global_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k325) (close global_V0k326))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k325, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k326, self)))));
}
static void global_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k323) (close global_V0k324))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k323, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k324, self)))));
}
static void global_V0k321(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (null? (close global_V0k322) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k322, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k320) (close global_V0k321))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k320, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k321, self)))));
}
static void global_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close global_V0k319) (bruijn ##.%x.354 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k319, self)))),
      _var0,
      VEncodeInt(1l));
}
static void global_V0k317(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (count-true (close global_V0k318) makefile? header? bytecode? transpile? object? expand?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "count-true")), 7,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k318, self)))),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "bytecode?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
}
static void global_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k311) (close global_V0k317))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k311, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k317, self)))));
}
static void global_V0k309(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k310) cc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k310, self)))),
      VLookupGlobalVarFast2(runtime, "cc"));
}
static void global_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.loop.52) #f (bruijn ##.loop.52 2 0) (close global_V0k309) (bruijn ##.%x.488 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k309, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D52(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void global_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (getopt (close global_V0k308) (##string ##.string.1573) (bruijn ##.%x.489 0 0) '(##pair ##.pair.1625))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "getopt")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k308, self)))),
      VEncodePointer(&_V10_Dstring_D1573.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR));
}
static void global_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V10_Dloop_D52")) (command-line (close global_V0k307)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D52, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "command-line")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k307, self)))));
    }
}
static void global_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.%next.311 0 0) handle-exception (close global_V0lambda84))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda84, self)))));
}
static void global_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.511 1 0) ((bruijn ##.%k.512 0 0) '(##pair ##.pair.1636)) ((bruijn ##.%k.512 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D1636, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.509 1 0) ((bruijn ##.%k.510 0 0) '(##pair ##.pair.1647)) ((bruijn ##.%k.510 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.507 1 0) ((bruijn ##.%k.508 0 0) '(##pair ##.pair.1658)) ((bruijn ##.%k.508 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D1658, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.689 ##.%x.690 ##.%x.691) ((##vcore.cons 'ieee-float (bruijn ##.%x.494 1 0)) (##vcore.cons 'c17 (bruijn ##.%x.689 0 0)) (##vcore.cons 'r7rs (bruijn ##.%x.690 0 1))) (define (bruijn ##.%next.490 16 0) feature-list (bruijn ##.%x.691 0 2)))
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
static void global_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k385) (bruijn ##.%x.495 12 0) (bruijn ##.%x.496 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k385, self)))),
      VGetArg(statics, 12-1, 0),
      _var0);
}
static void global_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k384) (bruijn ##.%x.497 9 0) (bruijn ##.%x.498 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k384, self)))),
      VGetArg(statics, 9-1, 0),
      _var0);
}
static void global_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k383) (bruijn ##.%x.499 6 0) (bruijn ##.%x.500 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k383, self)))),
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void global_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.687 ##.%x.688) ((##vcore.cons (bruijn ##.%x.503 1 0) '()) (##vcore.cons 'vanity-scheme (bruijn ##.%x.687 0 0))) (append (close global_V0k382) user-feature-list (bruijn ##.%x.688 0 1)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k382, self)))),
      VLookupGlobalVarFast2(runtime, "user-feature-list"),
      self->vars[1]);
    }
}
static void global_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->symbol (close global_V0k381) (bruijn ##.%x.504 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->symbol")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k381, self)))),
      _var0);
}
static void global_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k380) (##string ##.string.1686) (bruijn ##.%x.505 1 0) (bruijn ##.%x.506 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k380, self)))),
      VEncodePointer(&_V10_Dstring_D1686.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void global_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cadr (close global_V0k379) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cadr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k379, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close global_V0k378) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k378, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k376) (close global_V0k377))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k376, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k377, self)))));
}
static void global_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k375) platform (##string ##.string.1434))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k375, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
static void global_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k373) (close global_V0k374))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k373, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k374, self)))));
}
static void global_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k372) platform (##string ##.string.1494))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k372, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1494.sym, VPOINTER_OTHER));
}
static void global_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k370) (close global_V0k371))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k370, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k371, self)))));
}
static void global_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k369) platform (##string ##.string.719))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k369, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER));
}
static void global_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (set-feature-list! (bruijn ##.%next.513 0 0) feature-list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "set-feature-list!")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "feature-list"));
}
static void global_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.514 0 0) compile-ret 0)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0compile__ret,
      VEncodeInt(0l)
    );
}
static void global_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.515 0 0) link-ret 0)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0link__ret,
      VEncodeInt(0l)
    );
}
static void global_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.679 1 0) ((bruijn ##.%k.680 0 0) (##string ##.string.1687)) ((bruijn ##.%k.680 0 0) (##string ##.string.1688)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER));
}
}
void _V50_V10_Did_D64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Did_D64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Did_D64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.518 0 0) (bruijn ##.x.68 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void global_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.%k.678 0 0) header?) (if bytecode? ((bruijn ##.%k.678 0 0) bytecode?) (if transpile? ((bruijn ##.%k.678 0 0) transpile?) ((bruijn ##.%k.678 0 0) expand?))))
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
static void global_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.%k.675 2 0) (bruijn ##.%x.676 0 0) (##string ##.string.1568))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1568.sym, VPOINTER_OTHER));
}
static void global_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k394) (##string ##.string.1717) (bruijn ##.%x.677 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k394, self)))),
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER),
      _var0);
}
static void global_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_V0k393) (bruijn ##.file.69 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k393, self)))),
      _var1);
}
static void global_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.673 1 0) (list (bruijn ##.%k.674 0 0) out-file) (map (bruijn ##.%k.674 0 0) (close global_V0lambda91) scm-files))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda91, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
static void global_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.%k.671 0 0) header?) (if bytecode? ((bruijn ##.%k.671 0 0) bytecode?) (if transpile? ((bruijn ##.%k.671 0 0) transpile?) ((bruijn ##.%k.671 0 0) expand?))))
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
static void global_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.%k.668 2 0) (bruijn ##.%x.669 0 0) (##string ##.string.1011))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1011.sym, VPOINTER_OTHER));
}
static void global_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k401) (##string ##.string.1717) (bruijn ##.%x.670 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k401, self)))),
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER),
      _var0);
}
static void global_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_V0k400) (bruijn ##.file.70 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k400, self)))),
      _var1);
}
static void global_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.666 1 0) (list (bruijn ##.%k.667 0 0) #f) (if object? (list (bruijn ##.%k.667 0 0) out-file) (map (bruijn ##.%k.667 0 0) (close global_V0lambda92) scm-files)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda92, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
}
static void global_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.664 0 0) ((bruijn ##.%k.663 1 0) (##string ##.string.1746)) (sprintf (bruijn ##.%k.663 1 0) (##string ##.string.1747) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1746.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.662 1 0) ((bruijn ##.%k.663 0 0) (##string ##.string.1742)) (equal? (close global_V0k406) platform (##string ##.string.1434)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1742.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k406, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
}
static void global_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.659 1 0) (eq? (bruijn ##.%k.660 0 0) optimization 0) ((bruijn ##.%k.660 0 0) #f))
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
static void global_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.657 1 0) ((bruijn ##.%k.658 0 0) (##string ##.string.1759)) (sprintf (bruijn ##.%k.658 0 0) (##string ##.string.1760) optimization))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1759.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
}
}
static void global_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.%k.656 0 0) (##string ##.string.1765)) ((bruijn ##.%k.656 0 0) (##string ##.string.1065)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER));
}
}
static void global_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? ((bruijn ##.%k.655 0 0) (##string ##.string.1770)) ((bruijn ##.%k.655 0 0) (##string ##.string.1065)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1770.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER));
}
}
static void global_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? (> (bruijn ##.%k.587 0 0) (bruijn ##.num-mains.67 16 8) 0) ((bruijn ##.%k.587 0 0) #f))
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
static void global_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.585 1 0) (compiler-error (bruijn ##.%k.586 0 0) (##string ##.string.1791)) ((bruijn ##.%k.586 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.583 1 0) (compiler-error (bruijn ##.%k.584 0 0) (##string ##.string.1796)) ((bruijn ##.%k.584 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D101_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D101_V0k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D101_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.101) #f (bruijn ##.loop.101 6 0) (bruijn ##.%k.576 5 0) (bruijn ##.%x.578 1 0) (bruijn ##.%x.579 0 0))
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
       _V50_V10_Dloop_D101(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dloop_D101_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D101_V0k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D101_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdr (close _V50_V10_Dloop_D101_V0k436) (bruijn ##.paths.103 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D101_V0k436, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V10_Dloop_D101_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D101_V0k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D101_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D101_V0k435) (bruijn ##.acc.102 3 1) (bruijn ##.%x.580 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D101_V0k435, self)))),
      statics->up->up->vars[1],
      _var0);
}
void _V50_V10_Dloop_D101_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D101_V0k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D101_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close _V50_V10_Dloop_D101_V0k434) (##string ##.string.1823) (bruijn ##.%x.581 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D101_V0k434, self)))),
      VEncodePointer(&_V10_Dstring_D1823.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D101_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D101_V0k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D101_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.577 0 0) ((bruijn ##.%k.576 1 0) (bruijn ##.acc.102 1 1)) (car (close _V50_V10_Dloop_D101_V0k433) (bruijn ##.paths.103 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D101_V0k433, self)))),
      statics->vars[2]);
}
}
void _V50_V10_Dloop_D101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (null? (close _V50_V10_Dloop_D101_V0k432) (bruijn ##.paths.103 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D101_V0k432, self)))),
      _var2);
}
static void global_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.563 0 0) (not (bruijn ##.%k.560 3 0) object?) ((bruijn ##.%k.560 3 0) #f))
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
static void global_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.562 0 0) (not (close global_V0k445) expand?) ((bruijn ##.%k.560 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k445, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.561 0 0) (not (close global_V0k444) transpile?) ((bruijn ##.%k.560 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k444, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.559 1 0) (not (close global_V0k443) bytecode?) ((bruijn ##.%k.560 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k443, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (sprintf (bruijn ##.%k.558 0 0) (##string ##.string.1850) cc out-file) ((bruijn ##.%k.558 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1850.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "cc"));
}
}
static void global_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.%k.557 0 0) (##string ##.string.1765)) ((bruijn ##.%k.557 0 0) (##string ##.string.1065)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER));
}
}
static void global_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.556 0 0) ((bruijn ##.%k.555 1 0) (##string ##.string.1872)) (sprintf (bruijn ##.%k.555 1 0) (##string ##.string.1873) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1872.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1873.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.554 1 0) ((bruijn ##.%k.555 0 0) (##string ##.string.1868)) (equal? (close global_V0k455) platform (##string ##.string.1434)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1868.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k455, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
}
static void global_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.553 0 0) ((bruijn ##.%k.552 1 0) (##string ##.string.1065)) ((bruijn ##.%k.552 1 0) (##string ##.string.1882)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1882.sym, VPOINTER_OTHER));
}
}
static void global_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if shared? ((bruijn ##.%k.552 0 0) (##string ##.string.1878)) (equal? (close global_V0k458) platform (##string ##.string.1434)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1878.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k458, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
}
static void global_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.%k.539 0 0) (bruijn ##.link-command.110 10 1)) ((bruijn ##.%k.539 0 0) #f))
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
static void global_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.536 12 0) link-ret (bruijn ##.%x.538 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0link__ret,
      _var0
    );
}
static void global_V0k469(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (system (close global_V0k470) (bruijn ##.link-command.110 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k470, self)))),
      VGetArg(statics, 9-1, 1));
}
static void global_V0k467(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k468) (close global_V0k469))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k468, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k469, self)))));
}
static void global_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k467) (bruijn ##.link-command.110 9 1) (bruijn ##.%x.540 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k467, self)))),
      VEncodeInt(9l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0k465(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (string-append (close global_V0k466) (bruijn ##.link-command.110 8 1) (bruijn ##.link-command-flags.109 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k466, self)))),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 8-1, 0));
}
static void global_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.541 1 0) (bruijn ##.link-command.110 10 1) (bruijn ##.%x.542 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(10l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_V0k471) (bruijn ##.link-command.110 9 1) (bruijn ##.option.112 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k471, self)))),
      VGetArg(statics, 9-1, 1),
      _var1);
}
static void global_V0k464(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (for-each (close global_V0k465) (close global_V0lambda93) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k465, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda93, self)))),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.543 1 0) (bruijn ##.link-command.110 10 1) (bruijn ##.%x.544 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(10l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_V0k472) (bruijn ##.link-command.110 9 1) (##string ##.string.1912) (bruijn ##.file.111 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k472, self)))),
      VGetArg(statics, 9-1, 1),
      VEncodePointer(&_V10_Dstring_D1912.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close global_V0k464) (close global_V0lambda94) (bruijn ##.%x.545 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k464, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda94, self)))),
      _var0);
}
static void global_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k463) (bruijn ##.cc-obj-files.60 33 1) (bruijn ##.%x.546 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k463, self)))),
      VGetArg(statics, 33-1, 1),
      _var0);
}
static void global_V0k461(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (reverse (close global_V0k462) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "reverse")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k462, self)))),
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void global_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k461) (bruijn ##.link-command-flags.109 6 0) (bruijn ##.%x.547 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k461, self)))),
      VEncodeInt(6l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k460) (bruijn ##.base-cc-flags.61 31 2) (bruijn ##.%x.548 4 0) (bruijn ##.%x.549 3 0) (bruijn ##.%x.550 1 0) (bruijn ##.%x.551 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k460, self)))),
      VGetArg(statics, 31-1, 2),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k457) (close global_V0k459))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k457, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k459, self)))));
}
static void global_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k454) (close global_V0k456))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k454, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k456, self)))));
}
static void global_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k453) platform (##string ##.string.719))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k453, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER));
}
static void global_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k451) (close global_V0k452))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k451, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k452, self)))));
}
static void global_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 (#f (bruijn ##.%x.537 1 0)) (sprintf (close global_V0k450) (##string ##.string.1760) optimization))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k450, self)))),
      VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
    }
}
static void global_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.535 1 0) ((close global_V0k448) (close global_V0k449)) ((bruijn ##.%k.536 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k448, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k449, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.534 0 0) (not (bruijn ##.%k.531 3 0) keep?) ((bruijn ##.%k.531 3 0) #f))
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
static void global_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.533 0 0) (not (close global_V0k478) expand?) ((bruijn ##.%k.531 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k478, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.532 0 0) (not (close global_V0k477) transpile?) ((bruijn ##.%k.531 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k477, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.530 1 0) (not (close global_V0k476) bytecode?) ((bruijn ##.%k.531 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k476, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.528 1 0) (for-each (bruijn ##.%k.529 0 0) delete-file (bruijn ##.cc-files.59 26 0)) ((bruijn ##.%k.529 0 0) #f))
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
static void global_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.527 0 0) (not (bruijn ##.%k.523 4 0) keep?) ((bruijn ##.%k.523 4 0) #f))
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
static void global_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.526 0 0) (not (close global_V0k487) object?) ((bruijn ##.%k.523 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k487, self)))),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.525 0 0) (not (close global_V0k486) expand?) ((bruijn ##.%k.523 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k486, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.524 0 0) (not (close global_V0k485) transpile?) ((bruijn ##.%k.523 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k485, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.522 1 0) (not (close global_V0k484) bytecode?) ((bruijn ##.%k.523 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k484, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.521 0 0) (for-each (bruijn ##.%k.517 31 0) delete-file (bruijn ##.cc-obj-files.60 27 1)) ((bruijn ##.%k.517 31 0) #f))
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
static void global_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k483) (close global_V0k488))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k483, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k488, self)))));
}
static void global_V0k481(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k482) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k482, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k480) (close global_V0k481))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k480, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k481, self)))));
}
static void global_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k475) (close global_V0k479))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k475, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k479, self)))));
}
static void global_V0k473(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k474) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k474, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k447) (close global_V0k473))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k447, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k473, self)))));
}
static void global_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k442) (close global_V0k446))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k442, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k446, self)))));
}
static void global_V0k440(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k441) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k441, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.574 0 0) (not (bruijn ##.%k.572 2 0) expand?) ((bruijn ##.%k.572 2 0) #f))
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
static void global_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.573 0 0) (not (close global_V0k494) transpile?) ((bruijn ##.%k.572 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k494, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.571 1 0) (not (close global_V0k493) bytecode?) ((bruijn ##.%k.572 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k493, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.%k.570 0 0) (bruijn ##.cc-cmd.108 3 0)) ((bruijn ##.%k.570 0 0) #f))
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
static void global_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.565 7 0) compile-ret (bruijn ##.%x.568 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 7-1, 0),
      _V0compile__ret,
      _var0
    );
}
static void global_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (bitwise-ior (close global_V0k499) compile-ret (bruijn ##.%x.569 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "bitwise-ior")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k499, self)))),
      VLookupGlobalVarFast2(runtime, "compile-ret"),
      _var0);
}
static void global_V0k497(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (system (close global_V0k498) (bruijn ##.cc-cmd.108 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k498, self)))),
      statics->up->vars[0]);
}
static void global_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.567 0 0) ((close global_V0k496) (close global_V0k497)) ((bruijn ##.%k.565 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k496, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k497, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k492) (close global_V0k495))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k492, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k495, self)))));
}
static void global_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.566 1 0)) (not (close global_V0k491) header?))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k491, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
    }
}
static void global_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k490) (##string ##.string.1989) cc (bruijn ##.path.107 0 0) (bruijn ##.cc-paths.100 6 0) (bruijn ##.cc-command.63 24 4) (bruijn ##.obj-file.106 1 3) (bruijn ##.cc-file.105 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k490, self)))),
      VEncodePointer(&_V10_Dstring_D1989.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      _var0,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 24-1, 4),
      statics->vars[3],
      statics->vars[2]);
}
static void global_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_V0lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda96, got ~D~N"
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
  // (realbasepath (close global_V0k489) (bruijn ##.scm-file.104 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k489, self)))),
      _var1);
}
static void global_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (bruijn ##.%k.564 0 0) (close global_V0lambda96) scm-files (bruijn ##.cc-files.59 22 0) (bruijn ##.cc-obj-files.60 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 5,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda96, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 22-1, 0),
      VGetArg(statics, 22-1, 1));
}
static void global_V0k439(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (benchmark (close global_V0k440) (##string ##.string.1947) (close global_V0lambda95))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k440, self)))),
      VEncodePointer(&_V10_Dstring_D1947.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda95, self)))));
}
static void global_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k439) (bruijn ##.cc-paths.100 3 0) (bruijn ##.%x.575 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k439, self)))),
      VEncodeInt(3l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.loop.101) #f (bruijn ##.loop.101 1 0) (close global_V0k438) (##string ##.string.1065) (bruijn ##.%x.582 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k438, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1065.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D101(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void global_V0k431(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 (#f) (letrec 1 ((close "_V50_V10_Dloop_D101")) (cdr (close global_V0k437) paths)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D101, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k437, self)))),
      VLookupGlobalVarFast2(runtime, "paths"));
    }
    }
}
static void global_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k430) (close global_V0k431))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k430, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k431, self)))));
}
static void global_V0k428(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (> (close global_V0k429) (bruijn ##.num-mains.67 16 8) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k429, self)))),
      VGetArg(statics, 16-1, 8),
      VEncodeInt(1l));
}
static void global_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k427) (close global_V0k428))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k427, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k428, self)))));
}
static void global_V0k424(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k425) (close global_V0k426))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k425, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k426, self)))));
}
static void global_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k424) (bruijn ##.num-mains.67 15 8) (bruijn ##.%x.588 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k424, self)))),
      VEncodeInt(15l), VEncodeInt(8l),
      _var0
    );
}
static void global_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.71 1 1) ((bruijn ##.%k.591 0 0) 1) ((bruijn ##.%k.591 0 0) 0))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void global_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (+ (bruijn ##.%k.589 1 0) (bruijn ##.acc.72 1 2) (bruijn ##.%x.590 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      statics->vars[0],
      statics->vars[2],
      _var0);
}
static void global_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_V0lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda97, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close global_V0k500) (close global_V0k501))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k500, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k501, self)))));
}
static void global_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (fold (close global_V0k423) (close global_V0lambda97) 0 (bruijn ##.%x.592 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "fold")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k423, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda97, self)))),
      VEncodeInt(0l),
      _var0);
}
void _V50_V10_Dloop_D80_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if werror-unbound-variables ((bruijn ##.%k.628 0 0) compiler-error) ((bruijn ##.%k.628 0 0) compiler-warning))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "werror-unbound-variables"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-error"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-warning"));
}
}
void _V50_V10_Dloop_D80_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.627 0 0) (bruijn ##.%k.624 5 0) (##string ##.string.2054) (bruijn ##.free.84 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D2054.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V10_Dloop_D80_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.626 0 0) ((close _V50_V10_Dloop_D80_V0k511) (close _V50_V10_Dloop_D80_V0k512)) ((bruijn ##.%k.624 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k511, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k512, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D80_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D80_V0k510) (bruijn ##.%x.629 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k510, self)))),
      _var0);
}
void _V50_V10_Dloop_D80_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V50_V10_Dloop_D80_V0k509) (bruijn ##.free.84 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k509, self)))),
      _var0);
}
void _V50_V10_Dloop_D80_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.630 1 0) (bruijn ##.%x.631 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
void _V50_V10_Dloop_D80_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V50_V10_Dloop_D80_V0k513) (bruijn ##.e.85 0 1) (bruijn ##.bound.82 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k513, self)))),
      _var1,
      statics->up->vars[2]);
}
void _V50_V10_Dloop_D80_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.80) #f (bruijn ##.loop.80 7 0) (bruijn ##.%k.624 6 0) (bruijn ##.%x.632 2 0) (bruijn ##.new-bound.87 4 1) (bruijn ##.%x.633 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V10_Dloop_D80(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V10_Dloop_D80_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V50_V10_Dloop_D80_V0k518) (bruijn ##.%x.634 0 0) (bruijn ##.free.83 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k518, self)))),
      _var0,
      VGetArg(statics, 5-1, 3));
}
void _V50_V10_Dloop_D80_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.635 1 0) (bruijn ##.%x.636 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
void _V50_V10_Dloop_D80_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V50_V10_Dloop_D80_V0k519) (bruijn ##.e.91 0 1) (bruijn ##.free.83 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k519, self)))),
      _var1,
      VGetArg(statics, 5-1, 3));
}
void _V50_V10_Dloop_D80_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V50_V10_Dloop_D80_V0k517) (close _V50_V10_Dloop_D80_V0lambda101) (bruijn ##.new-free.86 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k517, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0lambda101, self)))),
      statics->up->vars[0]);
}
static void _V50_V10_Dloop_D80_V0k515(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdr (close _V50_V10_Dloop_D80_V0k516) (bruijn ##.exprs.81 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k516, self)))),
      statics->up->up->vars[1]);
}
void _V50_V10_Dloop_D80_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D80_V0k515) (bruijn ##.dummy.57.88 1 2) (bruijn ##.%x.637 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k515, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V10_Dloop_D80_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (free-variables-toplevel (bruijn ##.%k.638 2 0) (bruijn ##.%x.639 1 0) (bruijn ##.bound.82 5 2) (bruijn ##.%x.640 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "free-variables-toplevel")), 4,
      statics->up->vars[0],
      statics->vars[0],
      VGetArg(statics, 5-1, 2),
      _var0);
}
void _V50_V10_Dloop_D80_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D80_V0k521) (bruijn ##.path.76 11 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k521, self)))),
      VGetArg(statics, 11-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
void _V50_V10_Dloop_D80_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V50_V10_Dloop_D80_V0k520) (bruijn ##.exprs.81 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k520, self)))),
      statics->up->up->vars[1]);
}
static void _V50_V10_Dloop_D80_V0k522(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.%k.641 0 0) (bruijn ##.new-bound.87 1 1) (bruijn ##.new-bound.56.90 0 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      self->vars[0],
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[2]
    );
}
void _V50_V10_Dloop_D80_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V10_Dloop_D80_V0k522) (bruijn ##.new-free.86 1 0) (bruijn ##.new-free.55.89 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k522, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V10_Dloop_D80_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80_V0k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.625 0 0) (filter (close _V50_V10_Dloop_D80_V0k508) (close _V50_V10_Dloop_D80_V0lambda100) (bruijn ##.free.83 1 3)) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V10_Dloop_D80_V0k514) (close _V50_V10_Dloop_D80_V0lambda102) (close _V50_V10_Dloop_D80_V0lambda103))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k508, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0lambda100, self)))),
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k514, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0lambda102, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0lambda103, self)))));
    }
}
}
void _V50_V10_Dloop_D80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D80, got ~D~N"
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
  // (null? (close _V50_V10_Dloop_D80_V0k507) (bruijn ##.exprs.81 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80_V0k507, self)))),
      _var1);
}
static void global_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.80) #f (bruijn ##.loop.80 1 0) (bruijn ##.%k.623 2 0) (bruijn ##.%x.642 0 0) '() '())
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
       _V50_V10_Dloop_D80(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void global_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if w-unbound-variables (letrec 1 ((close "_V50_V10_Dloop_D80")) (apply (close global_V0k523) append (bruijn ##.expanded.79 2 0))) ((bruijn ##.%k.623 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "w-unbound-variables"))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D80, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k523, self)))),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.598 5 0) (bruijn ##.%x.599 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void global_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k536) (bruijn ##.%x.600 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k536, self)))),
      _var0);
}
static void global_V0k534(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (take-right (close global_V0k535) (bruijn ##.funs.94 4 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "take-right")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k535, self)))),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
}
static void global_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (write-bytecode (close global_V0k534) (bruijn ##.%x.601 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write-bytecode")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k534, self)))),
      _var0);
}
static void global_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_V0k533) to-bytecode (bruijn ##.%x.602 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k533, self)))),
      VLookupGlobalVarFast2(runtime, "to-bytecode"),
      _var0);
}
static void global_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k532) debug? (bruijn ##.%x.603 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k532, self)))),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (apply (bruijn ##.%k.598 4 0) printout2 (bruijn ##.%x.604 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
}
static void global_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k540) main (bruijn ##.%x.605 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k540, self)))),
      VLookupGlobalVarFast2(runtime, "main"),
      _var0);
}
static void global_V0k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k538" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k539) purec? (bruijn ##.%x.606 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k539, self)))),
      VLookupGlobalVarFast2(runtime, "purec?"),
      _var0);
}
static void global_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k538) debug? (bruijn ##.%x.607 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k538, self)))),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if bytecode? (cons (close global_V0k531) shared? (bruijn ##.funs.94 1 0)) (cons (close global_V0k537) shared? (bruijn ##.funs.94 1 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k531, self)))),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k537, self)))),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
}
}
static void global_V0k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (bruijn ##.%k.594 9 0) (##string ##.string.2117) (close global_V0lambda104))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D2117.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda104, self)))));
}
static void global_V0k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k542" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (to-functions (bruijn ##.%k.608 2 0) (bruijn ##.%x.609 1 0) (bruijn ##.%x.610 0 0) debug?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-functions")), 4,
      statics->up->vars[0],
      statics->vars[0],
      _var0,
      VLookupGlobalVarFast2(runtime, "debug?"));
}
static void global_V0k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k541" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k542) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k542, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (bruijn-ify (bruijn ##.%k.611 0 0) (bruijn ##.x.58.95 0 1) debug?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "bruijn-ify")), 3,
      _var0,
      _var1,
      VLookupGlobalVarFast2(runtime, "debug?"));
}
static void global_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close global_V0k541) (close global_V0lambda106) (bruijn ##.opt.93 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k541, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda106, self)))),
      statics->up->vars[0]);
}
static void global_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.597 0 0) (for-each (bruijn ##.%k.594 8 0) pretty-print (bruijn ##.opt.93 1 0)) (benchmark (close global_V0k530) (##string ##.string.2136) (close global_V0lambda105)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 8-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k530, self)))),
      VEncodePointer(&_V10_Dstring_D2136.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda105, self)))));
}
}
static void global_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_V0k529) expand? 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k529, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
}
static void global_V0k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k544" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.617 1 0) ((bruijn ##.%k.618 0 0) qualify-callsites) ((bruijn ##.%k.618 0 0) (bruijn ##.id.64 26 5)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "qualify-callsites"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 26-1, 5));
}
}
static void global_V0k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k547" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.614 2 0) (bruijn ##.%k.613 4 0) (bruijn ##.%x.615 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void global_V0k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k546" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (optimize (close global_V0k547) (bruijn ##.expr.96 3 1) (bruijn ##.%x.616 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "optimize")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k547, self)))),
      statics->up->up->vars[1],
      _var0);
}
static void global_V0k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k545" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k546) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k546, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_V0k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k543" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k544) (close global_V0k545))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k544, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k545, self)))));
}
static void global_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (> (close global_V0k543) optimization 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k543, self)))),
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(0l));
}
static void global_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.%k.612 0 0) (close global_V0lambda108) (bruijn ##.cps.92 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda108, self)))),
      statics->up->vars[0]);
}
static void global_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.596 0 0) (for-each (bruijn ##.%k.594 6 0) pretty-print (bruijn ##.cps.92 1 0)) (benchmark (close global_V0k528) (##string ##.string.2149) (close global_V0lambda107)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 6-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k528, self)))),
      VEncodePointer(&_V10_Dstring_D2149.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda107, self)))));
}
}
static void global_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_V0k527) expand? 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k527, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
}
static void global_V0k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k549" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (to-cps (bruijn ##.%k.620 1 0) (bruijn ##.expr.97 1 1) (bruijn ##.%x.621 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-cps")), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void global_V0lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (cons (close global_V0k549) (bruijn ##.path.76 8 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k549, self)))),
      VGetArg(statics, 8-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_V0k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k548" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.%k.619 1 0) (close global_V0lambda110) (bruijn ##.%x.622 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda110, self)))),
      _var0);
}
static void global_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_V0k548) append (bruijn ##.expanded.79 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k548, self)))),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
}
static void global_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.595 0 0) (for-each (bruijn ##.%k.594 4 0) pretty-print (bruijn ##.expanded.79 1 0)) (benchmark (close global_V0k526) (##string ##.string.2171) (close global_V0lambda109)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k526, self)))),
      VEncodePointer(&_V10_Dstring_D2171.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda109, self)))));
}
}
static void global_V0k524(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (eq? (close global_V0k525) expand? 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k525, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
}
static void global_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k506) (close global_V0k524))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k506, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k524, self)))));
}
static void global_V0lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (expand-syntax (bruijn ##.%k.644 0 0) (bruijn ##.e.98 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-syntax")), 2,
      _var0,
      _var1);
}
static void global_V0k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k551" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (map (bruijn ##.%k.645 2 0) alpha-convert (bruijn ##.%x.646 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "alpha-convert"),
      _var0);
}
static void global_V0k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k550" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (expand-toplevel (close global_V0k551) (bruijn ##.e.99 1 1) (bruijn ##.%x.647 0 0) (bruijn ##.architecture.65 21 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-toplevel")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k551, self)))),
      statics->vars[1],
      _var0,
      VGetArg(statics, 21-1, 6));
}
static void global_V0lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (cons (close global_V0k550) (bruijn ##.path.76 5 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k550, self)))),
      VGetArg(statics, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_V0lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if hygiene? (map (bruijn ##.%k.643 0 0) (close global_V0lambda112) (bruijn ##.file.78 1 0)) (map (bruijn ##.%k.643 0 0) (close global_V0lambda113) (bruijn ##.file.78 1 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "hygiene?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda112, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda113, self)))),
      statics->vars[0]);
}
}
static void global_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_V0k505) (##string ##.string.2182) (close global_V0lambda111))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k505, self)))),
      VEncodePointer(&_V10_Dstring_D2182.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda111, self)))));
}
static void global_V0k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k552" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (append (bruijn ##.%k.648 1 0) (bruijn ##.%x.649 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.fd.77 1 0) (read-all (close global_V0k552) (bruijn ##.fd.77 1 0)) (compiler-error (bruijn ##.%k.648 0 0) (##string ##.string.2198) (bruijn ##.scm-file.73 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k552, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2198.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
}
static void global_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_V0k504) (##string ##.string.2193) (close global_V0lambda114))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k504, self)))),
      VEncodePointer(&_V10_Dstring_D2193.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda114, self)))));
}
static void global_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close global_V0k503) (bruijn ##.scm-file.73 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k503, self)))),
      statics->up->vars[1]);
}
static void global_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.%k.593 1 0) (bruijn ##.cc-file.74 1 2) (close global_V0lambda99))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda99, self)))));
}
static void global_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_V0lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda98, got ~D~N"
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
  // (realbasepath (close global_V0k502) (bruijn ##.scm-file.73 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k502, self)))),
      _var1);
}
static void global_V0k421(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (map (close global_V0k422) (close global_V0lambda98) scm-files (bruijn ##.cc-files.59 13 0) (bruijn ##.cc-obj-files.60 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k422, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda98, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 13-1, 1));
}
static void global_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k421) (bruijn ##.cc-command.63 13 4) (bruijn ##.%x.650 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k421, self)))),
      VEncodeInt(13l), VEncodeInt(4l),
      _var0
    );
}
static void global_V0k419(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (apply (close global_V0k420) string-append (bruijn ##.cc-command-flags.62 12 3) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k420, self)))),
      VLookupGlobalVarFast2(runtime, "string-append"),
      VGetArg(statics, 12-1, 3),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k419) (bruijn ##.cc-command-flags.62 12 3) (bruijn ##.%x.651 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k419, self)))),
      VEncodeInt(12l), VEncodeInt(3l),
      _var0
    );
}
static void global_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k418) (bruijn ##.base-cc-flags.61 11 2) (bruijn ##.%x.652 2 0) (bruijn ##.%x.653 1 0) (bruijn ##.%x.654 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k418, self)))),
      VGetArg(statics, 11-1, 2),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k416) (close global_V0k417))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k416, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k417, self)))));
}
static void global_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k414) (close global_V0k415))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k414, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k415, self)))));
}
static void global_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k412) (close global_V0k413))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k412, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k413, self)))));
}
static void global_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k409" };
 VRecordCall2(runtime, &dbg);
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
static void global_V0k408(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close global_V0k409) platform (##string ##.string.1434))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k409, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
static void global_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k408) (bruijn ##.base-cc-flags.61 6 2) (bruijn ##.%x.661 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k408, self)))),
      VEncodeInt(6l), VEncodeInt(2l),
      _var0
    );
}
static void global_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k405) (close global_V0k407))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k405, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k407, self)))));
}
static void global_V0k403(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close global_V0k404) platform (##string ##.string.719))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k404, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER));
}
static void global_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k403) (bruijn ##.cc-obj-files.60 4 1) (bruijn ##.%x.665 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k403, self)))),
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k399) (close global_V0k402))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k399, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k402, self)))));
}
static void global_V0k396(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k397) (close global_V0k398))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k397, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k398, self)))));
}
static void global_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k396) (bruijn ##.cc-files.59 2 0) (bruijn ##.%x.672 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k396, self)))),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k392) (close global_V0k395))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k392, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k395, self)))));
}
static void global_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 9 (#f #f #f #f #f (close "_V50_V10_Did_D64") (bruijn ##.%x.519 2 0) (bruijn ##.%x.520 1 0) #f) ((close global_V0k390) (close global_V0k391)))
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
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Did_D64, self))));
    self->vars[6] = statics->up->vars[0];
    self->vars[7] = statics->vars[0];
    self->vars[8] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k390, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k391, self)))));
    }
}
static void global_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_V0k389))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k389, self)))));
}
static void global_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k387) (close global_V0k388))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k387, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k388, self)))));
}
static void global_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k386) platform (##string ##.string.1494))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k386, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D1494.sym, VPOINTER_OTHER));
}
static void global_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.%next.516 0 0) handle-exception (close global_V0lambda90))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda90, self)))));
}
static void global_V0k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.685 1 0) (= (bruijn ##.%k.686 0 0) link-ret 0) ((bruijn ##.%k.686 0 0) #f))
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
static void global_V0k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k556" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.683 1 0) ((bruijn ##.%k.684 0 0) 0) ((bruijn ##.%k.684 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
static void global_V0k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k557" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.%next.681 3 0) (bruijn ##.%x.682 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      statics->up->up->vars[0],
      _var0);
}
static void global_V0k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k555" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k556) (close global_V0k557))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k556, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k557, self)))));
}
static void global_V0k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k553" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k554) (close global_V0k555))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k554, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k555, self)))));
}
static void global_V0lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (= (close global_V0k553) compile-ret 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k553, self)))),
      VLookupGlobalVarFast2(runtime, "compile-ret"),
      VEncodeInt(0l));
}
static __attribute__((constructor)) void VDllMain1() {
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0x_D58 = VEncodePointer(VInternSymbol(184642977, &_VW_V0x_D58.sym), VPOINTER_OTHER);
  _V0funs = VEncodePointer(VInternSymbol(-26315278, &_VW_V0funs.sym), VPOINTER_OTHER);
  _V0opt = VEncodePointer(VInternSymbol(2085663244, &_VW_V0opt.sym), VPOINTER_OTHER);
  _V0cps = VEncodePointer(VInternSymbol(-393178914, &_VW_V0cps.sym), VPOINTER_OTHER);
  _V0new__bound_D56 = VEncodePointer(VInternSymbol(1522437216, &_VW_V0new__bound_D56.sym), VPOINTER_OTHER);
  _V0new__free_D55 = VEncodePointer(VInternSymbol(1189665115, &_VW_V0new__free_D55.sym), VPOINTER_OTHER);
  _V0dummy_D57 = VEncodePointer(VInternSymbol(-697495223, &_VW_V0dummy_D57.sym), VPOINTER_OTHER);
  _V0new__bound = VEncodePointer(VInternSymbol(973228911, &_VW_V0new__bound.sym), VPOINTER_OTHER);
  _V0new__free = VEncodePointer(VInternSymbol(222047899, &_VW_V0new__free.sym), VPOINTER_OTHER);
  _V0free = VEncodePointer(VInternSymbol(964377747, &_VW_V0free.sym), VPOINTER_OTHER);
  _V0bound = VEncodePointer(VInternSymbol(159768787, &_VW_V0bound.sym), VPOINTER_OTHER);
  _V0exprs = VEncodePointer(VInternSymbol(476397979, &_VW_V0exprs.sym), VPOINTER_OTHER);
  _V10_Dloop_D80 = VEncodePointer(VInternSymbol(582618302, &_VW_V10_Dloop_D80.sym), VPOINTER_OTHER);
  _V0expanded = VEncodePointer(VInternSymbol(-1570311141, &_VW_V0expanded.sym), VPOINTER_OTHER);
  _V0fd = VEncodePointer(VInternSymbol(1106557157, &_VW_V0fd.sym), VPOINTER_OTHER);
  _V0cc__cmd = VEncodePointer(VInternSymbol(-1942108082, &_VW_V0cc__cmd.sym), VPOINTER_OTHER);
  _V0path = VEncodePointer(VInternSymbol(-1450499945, &_VW_V0path.sym), VPOINTER_OTHER);
  _V0obj__file = VEncodePointer(VInternSymbol(-1759298774, &_VW_V0obj__file.sym), VPOINTER_OTHER);
  _V0cc__file = VEncodePointer(VInternSymbol(1060419485, &_VW_V0cc__file.sym), VPOINTER_OTHER);
  _V0scm__file = VEncodePointer(VInternSymbol(307092586, &_VW_V0scm__file.sym), VPOINTER_OTHER);
  _V0option = VEncodePointer(VInternSymbol(433558053, &_VW_V0option.sym), VPOINTER_OTHER);
  _V0link__command = VEncodePointer(VInternSymbol(-1004149783, &_VW_V0link__command.sym), VPOINTER_OTHER);
  _V0link__command__flags = VEncodePointer(VInternSymbol(228971191, &_VW_V0link__command__flags.sym), VPOINTER_OTHER);
  _V0cc__paths = VEncodePointer(VInternSymbol(-802369542, &_VW_V0cc__paths.sym), VPOINTER_OTHER);
  _V0acc = VEncodePointer(VInternSymbol(112110611, &_VW_V0acc.sym), VPOINTER_OTHER);
  _V10_Dloop_D101 = VEncodePointer(VInternSymbol(2130375409, &_VW_V10_Dloop_D101.sym), VPOINTER_OTHER);
  _V0num__mains = VEncodePointer(VInternSymbol(1376230407, &_VW_V0num__mains.sym), VPOINTER_OTHER);
  _V0architecture = VEncodePointer(VInternSymbol(1787915438, &_VW_V0architecture.sym), VPOINTER_OTHER);
  _V0id = VEncodePointer(VInternSymbol(358670118, &_VW_V0id.sym), VPOINTER_OTHER);
  _V0cc__command = VEncodePointer(VInternSymbol(554589872, &_VW_V0cc__command.sym), VPOINTER_OTHER);
  _V0cc__command__flags = VEncodePointer(VInternSymbol(-1931665793, &_VW_V0cc__command__flags.sym), VPOINTER_OTHER);
  _V0base__cc__flags = VEncodePointer(VInternSymbol(-839836314, &_VW_V0base__cc__flags.sym), VPOINTER_OTHER);
  _V0cc__obj__files = VEncodePointer(VInternSymbol(961709356, &_VW_V0cc__obj__files.sym), VPOINTER_OTHER);
  _V0cc__files = VEncodePointer(VInternSymbol(-852043661, &_VW_V0cc__files.sym), VPOINTER_OTHER);
  _V10_Did_D64 = VEncodePointer(VInternSymbol(1856035655, &_VW_V10_Did_D64.sym), VPOINTER_OTHER);
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
  _V0x_D51 = VEncodePointer(VInternSymbol(-495808068, &_VW_V0x_D51.sym), VPOINTER_OTHER);
  _V10_Dloop_D52 = VEncodePointer(VInternSymbol(-139273786, &_VW_V10_Dloop_D52.sym), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VInternSymbol(1433144780, &_VW_V10vcore_Dpush__value.sym), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VInternSymbol(-858837018, &_VW_V10vcore_Dpop__value.sym), VPOINTER_OTHER);
  _V0ret_D45 = VEncodePointer(VInternSymbol(-399682182, &_VW_V0ret_D45.sym), VPOINTER_OTHER);
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V0keyval_D44 = VEncodePointer(VInternSymbol(493375195, &_VW_V0keyval_D44.sym), VPOINTER_OTHER);
  _V0err = VEncodePointer(VInternSymbol(-494507917, &_VW_V0err.sym), VPOINTER_OTHER);
  _V0handle__exception = VEncodePointer(VInternSymbol(1135967109, &_VW_V0handle__exception.sym), VPOINTER_OTHER);
  _V0display__version = VEncodePointer(VInternSymbol(2039570464, &_VW_V0display__version.sym), VPOINTER_OTHER);
  _V0display__help = VEncodePointer(VInternSymbol(1582000525, &_VW_V0display__help.sym), VPOINTER_OTHER);
  _V0target = VEncodePointer(VInternSymbol(-950913602, &_VW_V0target.sym), VPOINTER_OTHER);
  _V0dep = VEncodePointer(VInternSymbol(-1588572952, &_VW_V0dep.sym), VPOINTER_OTHER);
  _V0port = VEncodePointer(VInternSymbol(-1893404613, &_VW_V0port.sym), VPOINTER_OTHER);
  _V0deps = VEncodePointer(VInternSymbol(-346540348, &_VW_V0deps.sym), VPOINTER_OTHER);
  _V0gen__makefile = VEncodePointer(VInternSymbol(-412355213, &_VW_V0gen__makefile.sym), VPOINTER_OTHER);
  _V0x_D33 = VEncodePointer(VInternSymbol(526290655, &_VW_V0x_D33.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0headers = VEncodePointer(VInternSymbol(-1749313570, &_VW_V0headers.sym), VPOINTER_OTHER);
  _V0gen__header = VEncodePointer(VInternSymbol(1804758416, &_VW_V0gen__header.sym), VPOINTER_OTHER);
  _V0f = VEncodePointer(VInternSymbol(-265621939, &_VW_V0f.sym), VPOINTER_OTHER);
  _V0delete__file = VEncodePointer(VInternSymbol(102699508, &_VW_V0delete__file.sym), VPOINTER_OTHER);
  _V0ct = VEncodePointer(VInternSymbol(-1432294710, &_VW_V0ct.sym), VPOINTER_OTHER);
  _V10_Dloop_D29 = VEncodePointer(VInternSymbol(-1678264600, &_VW_V10_Dloop_D29.sym), VPOINTER_OTHER);
  _V0count__true = VEncodePointer(VInternSymbol(-1292537198, &_VW_V0count__true.sym), VPOINTER_OTHER);
  _V0realbasepath = VEncodePointer(VInternSymbol(-842581961, &_VW_V0realbasepath.sym), VPOINTER_OTHER);
  _V0ret = VEncodePointer(VInternSymbol(1095520858, &_VW_V0ret.sym), VPOINTER_OTHER);
  _V0proc = VEncodePointer(VInternSymbol(1454542134, &_VW_V0proc.sym), VPOINTER_OTHER);
  _V0realpath = VEncodePointer(VInternSymbol(-417293311, &_VW_V0realpath.sym), VPOINTER_OTHER);
  _V10_Dloop_D20 = VEncodePointer(VInternSymbol(2038792703, &_VW_V10_Dloop_D20.sym), VPOINTER_OTHER);
  _V0str = VEncodePointer(VInternSymbol(128699971, &_VW_V0str.sym), VPOINTER_OTHER);
  _V0decomma = VEncodePointer(VInternSymbol(337974732, &_VW_V0decomma.sym), VPOINTER_OTHER);
  _V10_Dloop_D17 = VEncodePointer(VInternSymbol(-2025488231, &_VW_V10_Dloop_D17.sym), VPOINTER_OTHER);
  _V0basepath = VEncodePointer(VInternSymbol(-2104195748, &_VW_V0basepath.sym), VPOINTER_OTHER);
  _V10_Dloop_D14 = VEncodePointer(VInternSymbol(1715561454, &_VW_V10_Dloop_D14.sym), VPOINTER_OTHER);
  _V0basename = VEncodePointer(VInternSymbol(1409282627, &_VW_V0basename.sym), VPOINTER_OTHER);
  _V10_Dloop_D11 = VEncodePointer(VInternSymbol(-1665289357, &_VW_V10_Dloop_D11.sym), VPOINTER_OTHER);
  _V0new = VEncodePointer(VInternSymbol(-2048846553, &_VW_V0new.sym), VPOINTER_OTHER);
  _V0change__extension = VEncodePointer(VInternSymbol(-974840667, &_VW_V0change__extension.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D7 = VEncodePointer(VInternSymbol(-1440423150, &_VW_V10_Dloop_D7.sym), VPOINTER_OTHER);
  _V0file = VEncodePointer(VInternSymbol(1964336744, &_VW_V0file.sym), VPOINTER_OTHER);
  _V0extension = VEncodePointer(VInternSymbol(-116467526, &_VW_V0extension.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0end = VEncodePointer(VInternSymbol(1592199522, &_VW_V0end.sym), VPOINTER_OTHER);
  _V0args = VEncodePointer(VInternSymbol(-1952811398, &_VW_V0args.sym), VPOINTER_OTHER);
  _V0start = VEncodePointer(VInternSymbol(529090921, &_VW_V0start.sym), VPOINTER_OTHER);
  _V0thunk = VEncodePointer(VInternSymbol(447097569, &_VW_V0thunk.sym), VPOINTER_OTHER);
  _V0label = VEncodePointer(VInternSymbol(619689535, &_VW_V0label.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
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
  _V0hygiene_Q = VEncodePointer(VInternSymbol(357684437, &_VW_V0hygiene_Q.sym), VPOINTER_OTHER);
  _V0purec_Q = VEncodePointer(VInternSymbol(489592549, &_VW_V0purec_Q.sym), VPOINTER_OTHER);
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
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mnext = VEncodePointer(VInternSymbol(-496022608, &_VW_V0_Mnext.sym), VPOINTER_OTHER);
  _V10_Dpair_D2203.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2203.rest = VEncodePointer(&_V10_Dpair_D2201, VPOINTER_PAIR);
  _V10_Dpair_D2202.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2202.rest = VEncodePointer(&_V10_Dpair_D2201, VPOINTER_PAIR);
  _V10_Dpair_D2201.first = VEncodePointer(&_V10_Dpair_D2200, VPOINTER_PAIR);
  _V10_Dpair_D2201.rest = VNULL;
  _V10_Dpair_D2200.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D2200.rest = VEncodePointer(&_V10_Dpair_D1627, VPOINTER_PAIR);
  _V10_Dpair_D2199.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D2199.rest = VEncodePointer(&_V10_Dpair_D1628, VPOINTER_PAIR);
  _V10_Dpair_D2197.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2197.rest = VEncodePointer(&_V10_Dpair_D2196, VPOINTER_PAIR);
  _V10_Dpair_D2196.first = VEncodePointer(&_V10_Dpair_D2195, VPOINTER_PAIR);
  _V10_Dpair_D2196.rest = VNULL;
  _V10_Dpair_D2195.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2195.rest = VEncodePointer(&_V10_Dpair_D2013, VPOINTER_PAIR);
  _V10_Dpair_D2194.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2194.rest = VEncodePointer(&_V10_Dpair_D2014, VPOINTER_PAIR);
  _V10_Dpair_D2192.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2192.rest = VEncodePointer(&_V10_Dpair_D2191, VPOINTER_PAIR);
  _V10_Dpair_D2191.first = VEncodePointer(&_V10_Dpair_D2190, VPOINTER_PAIR);
  _V10_Dpair_D2191.rest = VNULL;
  _V10_Dpair_D2190.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2190.rest = VEncodePointer(&_V10_Dpair_D2187, VPOINTER_PAIR);
  _V10_Dpair_D2189.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2189.rest = VEncodePointer(&_V10_Dpair_D2188, VPOINTER_PAIR);
  _V10_Dpair_D2188.first = VEncodePointer(&_V10_Dpair_D2187, VPOINTER_PAIR);
  _V10_Dpair_D2188.rest = VNULL;
  _V10_Dpair_D2187.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D2187.rest = VEncodePointer(&_V10_Dpair_D2184, VPOINTER_PAIR);
  _V10_Dpair_D2186.first = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D2186.rest = VEncodePointer(&_V10_Dpair_D2185, VPOINTER_PAIR);
  _V10_Dpair_D2185.first = VEncodePointer(&_V10_Dpair_D2184, VPOINTER_PAIR);
  _V10_Dpair_D2185.rest = VNULL;
  _V10_Dpair_D2184.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2184.rest = VEncodePointer(&_V10_Dpair_D2019, VPOINTER_PAIR);
  _V10_Dpair_D2183.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2183.rest = VEncodePointer(&_V10_Dpair_D2020, VPOINTER_PAIR);
  _V10_Dpair_D2181.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2181.rest = VEncodePointer(&_V10_Dpair_D2180, VPOINTER_PAIR);
  _V10_Dpair_D2180.first = VEncodePointer(&_V10_Dpair_D2179, VPOINTER_PAIR);
  _V10_Dpair_D2180.rest = VNULL;
  _V10_Dpair_D2179.first = VEncodePointer(&_V10_Dpair_D2152, VPOINTER_PAIR);
  _V10_Dpair_D2179.rest = VEncodePointer(&_V10_Dpair_D2176, VPOINTER_PAIR);
  _V10_Dpair_D2178.first = VEncodePointer(&_V10_Dpair_D2154, VPOINTER_PAIR);
  _V10_Dpair_D2178.rest = VEncodePointer(&_V10_Dpair_D2177, VPOINTER_PAIR);
  _V10_Dpair_D2177.first = VEncodePointer(&_V10_Dpair_D2176, VPOINTER_PAIR);
  _V10_Dpair_D2177.rest = VNULL;
  _V10_Dpair_D2176.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2176.rest = VEncodePointer(&_V10_Dpair_D2173, VPOINTER_PAIR);
  _V10_Dpair_D2175.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2175.rest = VEncodePointer(&_V10_Dpair_D2174, VPOINTER_PAIR);
  _V10_Dpair_D2174.first = VEncodePointer(&_V10_Dpair_D2173, VPOINTER_PAIR);
  _V10_Dpair_D2174.rest = VNULL;
  _V10_Dpair_D2173.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2173.rest = VEncodePointer(&_V10_Dpair_D2096, VPOINTER_PAIR);
  _V10_Dpair_D2172.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2172.rest = VEncodePointer(&_V10_Dpair_D2097, VPOINTER_PAIR);
  _V10_Dpair_D2170.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2170.rest = VEncodePointer(&_V10_Dpair_D2169, VPOINTER_PAIR);
  _V10_Dpair_D2169.first = VEncodePointer(&_V10_Dpair_D2168, VPOINTER_PAIR);
  _V10_Dpair_D2169.rest = VNULL;
  _V10_Dpair_D2168.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2168.rest = VEncodePointer(&_V10_Dpair_D2165, VPOINTER_PAIR);
  _V10_Dpair_D2167.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2167.rest = VEncodePointer(&_V10_Dpair_D2166, VPOINTER_PAIR);
  _V10_Dpair_D2166.first = VEncodePointer(&_V10_Dpair_D2165, VPOINTER_PAIR);
  _V10_Dpair_D2166.rest = VNULL;
  _V10_Dpair_D2165.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2165.rest = VEncodePointer(&_V10_Dpair_D2161, VPOINTER_PAIR);
  _V10_Dpair_D2164.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2164.rest = VEncodePointer(&_V10_Dpair_D2162, VPOINTER_PAIR);
  _V10_Dpair_D2163.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2163.rest = VEncodePointer(&_V10_Dpair_D2162, VPOINTER_PAIR);
  _V10_Dpair_D2162.first = VEncodePointer(&_V10_Dpair_D2161, VPOINTER_PAIR);
  _V10_Dpair_D2162.rest = VNULL;
  _V10_Dpair_D2161.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D2161.rest = VEncodePointer(&_V10_Dpair_D2158, VPOINTER_PAIR);
  _V10_Dpair_D2160.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D2160.rest = VEncodePointer(&_V10_Dpair_D2159, VPOINTER_PAIR);
  _V10_Dpair_D2159.first = VEncodePointer(&_V10_Dpair_D2158, VPOINTER_PAIR);
  _V10_Dpair_D2159.rest = VNULL;
  _V10_Dpair_D2158.first = VEncodePointer(&_V10_Dpair_D2152, VPOINTER_PAIR);
  _V10_Dpair_D2158.rest = VEncodePointer(&_V10_Dpair_D2155, VPOINTER_PAIR);
  _V10_Dpair_D2157.first = VEncodePointer(&_V10_Dpair_D2154, VPOINTER_PAIR);
  _V10_Dpair_D2157.rest = VEncodePointer(&_V10_Dpair_D2156, VPOINTER_PAIR);
  _V10_Dpair_D2156.first = VEncodePointer(&_V10_Dpair_D2155, VPOINTER_PAIR);
  _V10_Dpair_D2156.rest = VNULL;
  _V10_Dpair_D2155.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2155.rest = VEncodePointer(&_V10_Dpair_D2105, VPOINTER_PAIR);
  _V10_Dpair_D2154.first = VEncodeBool(false);
  _V10_Dpair_D2154.rest = VEncodePointer(&_V10_Dpair_D2153, VPOINTER_PAIR);
  _V10_Dpair_D2153.first = VEncodePointer(&_V10_Dpair_D2152, VPOINTER_PAIR);
  _V10_Dpair_D2153.rest = VNULL;
  _V10_Dpair_D2152.first = _V0_Mk;
  _V10_Dpair_D2152.rest = VEncodePointer(&_V10_Dpair_D2151, VPOINTER_PAIR);
  _V10_Dpair_D2151.first = _V0expr;
  _V10_Dpair_D2151.rest = VNULL;
  _V10_Dpair_D2150.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2150.rest = VEncodePointer(&_V10_Dpair_D2106, VPOINTER_PAIR);
  _V10_Dpair_D2148.first = VEncodePointer(&_V10_Dpair_D2147, VPOINTER_PAIR);
  _V10_Dpair_D2148.rest = VEncodePointer(&_V10_Dpair_D2139, VPOINTER_PAIR);
  _V10_Dpair_D2147.first = VEncodeBool(false);
  _V10_Dpair_D2147.rest = VEncodePointer(&_V10_Dpair_D2146, VPOINTER_PAIR);
  _V10_Dpair_D2146.first = VEncodePointer(&_V10_Dpair_D2145, VPOINTER_PAIR);
  _V10_Dpair_D2146.rest = VNULL;
  _V10_Dpair_D2145.first = _V0_Mk;
  _V10_Dpair_D2145.rest = VEncodePointer(&_V10_Dpair_D2144, VPOINTER_PAIR);
  _V10_Dpair_D2144.first = _V0x_D58;
  _V10_Dpair_D2144.rest = VNULL;
  _V10_Dpair_D2143.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2143.rest = VEncodePointer(&_V10_Dpair_D2142, VPOINTER_PAIR);
  _V10_Dpair_D2142.first = VEncodePointer(&_V10_Dpair_D2141, VPOINTER_PAIR);
  _V10_Dpair_D2142.rest = VNULL;
  _V10_Dpair_D2141.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2141.rest = VEncodePointer(&_V10_Dpair_D2138, VPOINTER_PAIR);
  _V10_Dpair_D2140.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2140.rest = VEncodePointer(&_V10_Dpair_D2139, VPOINTER_PAIR);
  _V10_Dpair_D2139.first = VEncodePointer(&_V10_Dpair_D2138, VPOINTER_PAIR);
  _V10_Dpair_D2139.rest = VNULL;
  _V10_Dpair_D2138.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2138.rest = VEncodePointer(&_V10_Dpair_D2114, VPOINTER_PAIR);
  _V10_Dpair_D2137.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2137.rest = VEncodePointer(&_V10_Dpair_D2115, VPOINTER_PAIR);
  _V10_Dpair_D2135.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2135.rest = VEncodePointer(&_V10_Dpair_D2134, VPOINTER_PAIR);
  _V10_Dpair_D2134.first = VEncodePointer(&_V10_Dpair_D2133, VPOINTER_PAIR);
  _V10_Dpair_D2134.rest = VNULL;
  _V10_Dpair_D2133.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2133.rest = VEncodePointer(&_V10_Dpair_D2130, VPOINTER_PAIR);
  _V10_Dpair_D2132.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2132.rest = VEncodePointer(&_V10_Dpair_D2131, VPOINTER_PAIR);
  _V10_Dpair_D2131.first = VEncodePointer(&_V10_Dpair_D2130, VPOINTER_PAIR);
  _V10_Dpair_D2131.rest = VNULL;
  _V10_Dpair_D2130.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2130.rest = VEncodePointer(&_V10_Dpair_D2127, VPOINTER_PAIR);
  _V10_Dpair_D2129.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2129.rest = VEncodePointer(&_V10_Dpair_D2128, VPOINTER_PAIR);
  _V10_Dpair_D2128.first = VEncodePointer(&_V10_Dpair_D2127, VPOINTER_PAIR);
  _V10_Dpair_D2128.rest = VNULL;
  _V10_Dpair_D2127.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2127.rest = VEncodePointer(&_V10_Dpair_D2124, VPOINTER_PAIR);
  _V10_Dpair_D2126.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2126.rest = VEncodePointer(&_V10_Dpair_D2125, VPOINTER_PAIR);
  _V10_Dpair_D2125.first = VEncodePointer(&_V10_Dpair_D2124, VPOINTER_PAIR);
  _V10_Dpair_D2125.rest = VNULL;
  _V10_Dpair_D2124.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2124.rest = VEncodePointer(&_V10_Dpair_D2121, VPOINTER_PAIR);
  _V10_Dpair_D2123.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2123.rest = VEncodePointer(&_V10_Dpair_D2122, VPOINTER_PAIR);
  _V10_Dpair_D2122.first = VEncodePointer(&_V10_Dpair_D2121, VPOINTER_PAIR);
  _V10_Dpair_D2122.rest = VNULL;
  _V10_Dpair_D2121.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2121.rest = VEncodePointer(&_V10_Dpair_D2118, VPOINTER_PAIR);
  _V10_Dpair_D2120.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2120.rest = VEncodePointer(&_V10_Dpair_D2119, VPOINTER_PAIR);
  _V10_Dpair_D2119.first = VEncodePointer(&_V10_Dpair_D2118, VPOINTER_PAIR);
  _V10_Dpair_D2119.rest = VNULL;
  _V10_Dpair_D2118.first = VEncodePointer(&_V10_Dpair_D2111, VPOINTER_PAIR);
  _V10_Dpair_D2118.rest = VEncodePointer(&_V10_Dpair_D2114, VPOINTER_PAIR);
  _V10_Dpair_D2116.first = VEncodePointer(&_V10_Dpair_D2113, VPOINTER_PAIR);
  _V10_Dpair_D2116.rest = VEncodePointer(&_V10_Dpair_D2115, VPOINTER_PAIR);
  _V10_Dpair_D2115.first = VEncodePointer(&_V10_Dpair_D2114, VPOINTER_PAIR);
  _V10_Dpair_D2115.rest = VNULL;
  _V10_Dpair_D2114.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D2114.rest = VEncodePointer(&_V10_Dpair_D2108, VPOINTER_PAIR);
  _V10_Dpair_D2113.first = VEncodeBool(false);
  _V10_Dpair_D2113.rest = VEncodePointer(&_V10_Dpair_D2112, VPOINTER_PAIR);
  _V10_Dpair_D2112.first = VEncodePointer(&_V10_Dpair_D2111, VPOINTER_PAIR);
  _V10_Dpair_D2112.rest = VNULL;
  _V10_Dpair_D2111.first = _V0funs;
  _V10_Dpair_D2111.rest = VNULL;
  _V10_Dpair_D2110.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D2110.rest = VEncodePointer(&_V10_Dpair_D2109, VPOINTER_PAIR);
  _V10_Dpair_D2109.first = VEncodePointer(&_V10_Dpair_D2108, VPOINTER_PAIR);
  _V10_Dpair_D2109.rest = VNULL;
  _V10_Dpair_D2108.first = VEncodePointer(&_V10_Dpair_D2102, VPOINTER_PAIR);
  _V10_Dpair_D2108.rest = VEncodePointer(&_V10_Dpair_D2105, VPOINTER_PAIR);
  _V10_Dpair_D2107.first = VEncodePointer(&_V10_Dpair_D2104, VPOINTER_PAIR);
  _V10_Dpair_D2107.rest = VEncodePointer(&_V10_Dpair_D2106, VPOINTER_PAIR);
  _V10_Dpair_D2106.first = VEncodePointer(&_V10_Dpair_D2105, VPOINTER_PAIR);
  _V10_Dpair_D2106.rest = VNULL;
  _V10_Dpair_D2105.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D2105.rest = VEncodePointer(&_V10_Dpair_D2099, VPOINTER_PAIR);
  _V10_Dpair_D2104.first = VEncodeBool(false);
  _V10_Dpair_D2104.rest = VEncodePointer(&_V10_Dpair_D2103, VPOINTER_PAIR);
  _V10_Dpair_D2103.first = VEncodePointer(&_V10_Dpair_D2102, VPOINTER_PAIR);
  _V10_Dpair_D2103.rest = VNULL;
  _V10_Dpair_D2102.first = _V0opt;
  _V10_Dpair_D2102.rest = VNULL;
  _V10_Dpair_D2101.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D2101.rest = VEncodePointer(&_V10_Dpair_D2100, VPOINTER_PAIR);
  _V10_Dpair_D2100.first = VEncodePointer(&_V10_Dpair_D2099, VPOINTER_PAIR);
  _V10_Dpair_D2100.rest = VNULL;
  _V10_Dpair_D2099.first = VEncodePointer(&_V10_Dpair_D2093, VPOINTER_PAIR);
  _V10_Dpair_D2099.rest = VEncodePointer(&_V10_Dpair_D2096, VPOINTER_PAIR);
  _V10_Dpair_D2098.first = VEncodePointer(&_V10_Dpair_D2095, VPOINTER_PAIR);
  _V10_Dpair_D2098.rest = VEncodePointer(&_V10_Dpair_D2097, VPOINTER_PAIR);
  _V10_Dpair_D2097.first = VEncodePointer(&_V10_Dpair_D2096, VPOINTER_PAIR);
  _V10_Dpair_D2097.rest = VNULL;
  _V10_Dpair_D2096.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D2096.rest = VEncodePointer(&_V10_Dpair_D2022, VPOINTER_PAIR);
  _V10_Dpair_D2095.first = VEncodeBool(false);
  _V10_Dpair_D2095.rest = VEncodePointer(&_V10_Dpair_D2094, VPOINTER_PAIR);
  _V10_Dpair_D2094.first = VEncodePointer(&_V10_Dpair_D2093, VPOINTER_PAIR);
  _V10_Dpair_D2094.rest = VNULL;
  _V10_Dpair_D2093.first = _V0cps;
  _V10_Dpair_D2093.rest = VNULL;
  _V10_Dpair_D2092.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D2092.rest = VEncodePointer(&_V10_Dpair_D2023, VPOINTER_PAIR);
  _V10_Dpair_D2091.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2091.rest = VEncodePointer(&_V10_Dpair_D2034, VPOINTER_PAIR);
  _V10_Dpair_D2090.first = VEncodePointer(&_V10_Dpair_D2089, VPOINTER_PAIR);
  _V10_Dpair_D2090.rest = VEncodePointer(&_V10_Dpair_D2063, VPOINTER_PAIR);
  _V10_Dpair_D2089.first = VEncodeBool(false);
  _V10_Dpair_D2089.rest = VEncodePointer(&_V10_Dpair_D2088, VPOINTER_PAIR);
  _V10_Dpair_D2088.first = VEncodePointer(&_V10_Dpair_D2087, VPOINTER_PAIR);
  _V10_Dpair_D2088.rest = VNULL;
  _V10_Dpair_D2087.first = _V0_Mk;
  _V10_Dpair_D2087.rest = VEncodePointer(&_V10_Dpair_D2086, VPOINTER_PAIR);
  _V10_Dpair_D2086.first = _V0new__free_D55;
  _V10_Dpair_D2086.rest = VEncodePointer(&_V10_Dpair_D2085, VPOINTER_PAIR);
  _V10_Dpair_D2085.first = _V0new__bound_D56;
  _V10_Dpair_D2085.rest = VNULL;
  _V10_Dpair_D2084.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2084.rest = VEncodePointer(&_V10_Dpair_D2083, VPOINTER_PAIR);
  _V10_Dpair_D2083.first = VEncodePointer(&_V10_Dpair_D2082, VPOINTER_PAIR);
  _V10_Dpair_D2083.rest = VNULL;
  _V10_Dpair_D2082.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2082.rest = VEncodePointer(&_V10_Dpair_D2079, VPOINTER_PAIR);
  _V10_Dpair_D2081.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2081.rest = VEncodePointer(&_V10_Dpair_D2080, VPOINTER_PAIR);
  _V10_Dpair_D2080.first = VEncodePointer(&_V10_Dpair_D2079, VPOINTER_PAIR);
  _V10_Dpair_D2080.rest = VNULL;
  _V10_Dpair_D2079.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2079.rest = VEncodePointer(&_V10_Dpair_D2062, VPOINTER_PAIR);
  _V10_Dpair_D2078.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2078.rest = VEncodePointer(&_V10_Dpair_D2063, VPOINTER_PAIR);
  _V10_Dpair_D2077.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2077.rest = VEncodePointer(&_V10_Dpair_D2076, VPOINTER_PAIR);
  _V10_Dpair_D2076.first = VEncodePointer(&_V10_Dpair_D2075, VPOINTER_PAIR);
  _V10_Dpair_D2076.rest = VNULL;
  _V10_Dpair_D2075.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D2075.rest = VEncodePointer(&_V10_Dpair_D2068, VPOINTER_PAIR);
  _V10_Dpair_D2074.first = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D2074.rest = VEncodePointer(&_V10_Dpair_D2069, VPOINTER_PAIR);
  _V10_Dpair_D2073.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2073.rest = VEncodePointer(&_V10_Dpair_D2072, VPOINTER_PAIR);
  _V10_Dpair_D2072.first = VEncodePointer(&_V10_Dpair_D2071, VPOINTER_PAIR);
  _V10_Dpair_D2072.rest = VNULL;
  _V10_Dpair_D2071.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2071.rest = VEncodePointer(&_V10_Dpair_D2068, VPOINTER_PAIR);
  _V10_Dpair_D2070.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2070.rest = VEncodePointer(&_V10_Dpair_D2069, VPOINTER_PAIR);
  _V10_Dpair_D2069.first = VEncodePointer(&_V10_Dpair_D2068, VPOINTER_PAIR);
  _V10_Dpair_D2069.rest = VNULL;
  _V10_Dpair_D2068.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2068.rest = VEncodePointer(&_V10_Dpair_D2065, VPOINTER_PAIR);
  _V10_Dpair_D2067.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2067.rest = VEncodePointer(&_V10_Dpair_D2066, VPOINTER_PAIR);
  _V10_Dpair_D2066.first = VEncodePointer(&_V10_Dpair_D2065, VPOINTER_PAIR);
  _V10_Dpair_D2066.rest = VNULL;
  _V10_Dpair_D2065.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2065.rest = VEncodePointer(&_V10_Dpair_D2062, VPOINTER_PAIR);
  _V10_Dpair_D2064.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2064.rest = VEncodePointer(&_V10_Dpair_D2063, VPOINTER_PAIR);
  _V10_Dpair_D2063.first = VEncodePointer(&_V10_Dpair_D2062, VPOINTER_PAIR);
  _V10_Dpair_D2063.rest = VNULL;
  _V10_Dpair_D2062.first = VEncodePointer(&_V10_Dpair_D2061, VPOINTER_PAIR);
  _V10_Dpair_D2062.rest = VEncodePointer(&_V10_Dpair_D2041, VPOINTER_PAIR);
  _V10_Dpair_D2061.first = _V0new__free;
  _V10_Dpair_D2061.rest = VEncodePointer(&_V10_Dpair_D2060, VPOINTER_PAIR);
  _V10_Dpair_D2060.first = _V0new__bound;
  _V10_Dpair_D2060.rest = VEncodePointer(&_V10_Dpair_D2059, VPOINTER_PAIR);
  _V10_Dpair_D2059.first = _V0dummy_D57;
  _V10_Dpair_D2059.rest = VNULL;
  _V10_Dpair_D2058.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2058.rest = VEncodePointer(&_V10_Dpair_D2057, VPOINTER_PAIR);
  _V10_Dpair_D2057.first = VEncodePointer(&_V10_Dpair_D2056, VPOINTER_PAIR);
  _V10_Dpair_D2057.rest = VNULL;
  _V10_Dpair_D2056.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D2056.rest = VEncodePointer(&_V10_Dpair_D2041, VPOINTER_PAIR);
  _V10_Dpair_D2055.first = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D2055.rest = VEncodePointer(&_V10_Dpair_D2042, VPOINTER_PAIR);
  _V10_Dpair_D2053.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2053.rest = VEncodePointer(&_V10_Dpair_D2051, VPOINTER_PAIR);
  _V10_Dpair_D2052.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2052.rest = VEncodePointer(&_V10_Dpair_D2051, VPOINTER_PAIR);
  _V10_Dpair_D2051.first = VEncodePointer(&_V10_Dpair_D2050, VPOINTER_PAIR);
  _V10_Dpair_D2051.rest = VNULL;
  _V10_Dpair_D2050.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D2050.rest = VEncodePointer(&_V10_Dpair_D2047, VPOINTER_PAIR);
  _V10_Dpair_D2049.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D2049.rest = VEncodePointer(&_V10_Dpair_D2048, VPOINTER_PAIR);
  _V10_Dpair_D2048.first = VEncodePointer(&_V10_Dpair_D2047, VPOINTER_PAIR);
  _V10_Dpair_D2048.rest = VNULL;
  _V10_Dpair_D2047.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D2047.rest = VEncodePointer(&_V10_Dpair_D2044, VPOINTER_PAIR);
  _V10_Dpair_D2046.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D2046.rest = VEncodePointer(&_V10_Dpair_D2045, VPOINTER_PAIR);
  _V10_Dpair_D2045.first = VEncodePointer(&_V10_Dpair_D2044, VPOINTER_PAIR);
  _V10_Dpair_D2045.rest = VNULL;
  _V10_Dpair_D2044.first = VEncodePointer(&_V10_Dpair_D2026, VPOINTER_PAIR);
  _V10_Dpair_D2044.rest = VEncodePointer(&_V10_Dpair_D2041, VPOINTER_PAIR);
  _V10_Dpair_D2043.first = VEncodePointer(&_V10_Dpair_D2040, VPOINTER_PAIR);
  _V10_Dpair_D2043.rest = VEncodePointer(&_V10_Dpair_D2042, VPOINTER_PAIR);
  _V10_Dpair_D2042.first = VEncodePointer(&_V10_Dpair_D2041, VPOINTER_PAIR);
  _V10_Dpair_D2042.rest = VNULL;
  _V10_Dpair_D2041.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D2041.rest = VEncodePointer(&_V10_Dpair_D2036, VPOINTER_PAIR);
  _V10_Dpair_D2040.first = VEncodeBool(false);
  _V10_Dpair_D2040.rest = VEncodePointer(&_V10_Dpair_D2039, VPOINTER_PAIR);
  _V10_Dpair_D2039.first = VEncodePointer(&_V10_Dpair_D2026, VPOINTER_PAIR);
  _V10_Dpair_D2039.rest = VNULL;
  _V10_Dpair_D2038.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D2038.rest = VEncodePointer(&_V10_Dpair_D2037, VPOINTER_PAIR);
  _V10_Dpair_D2037.first = VEncodePointer(&_V10_Dpair_D2036, VPOINTER_PAIR);
  _V10_Dpair_D2037.rest = VNULL;
  _V10_Dpair_D2036.first = VEncodePointer(&_V10_Dpair_D2029, VPOINTER_PAIR);
  _V10_Dpair_D2036.rest = VEncodePointer(&_V10_Dpair_D2033, VPOINTER_PAIR);
  _V10_Dpair_D2035.first = VEncodePointer(&_V10_Dpair_D2031, VPOINTER_PAIR);
  _V10_Dpair_D2035.rest = VEncodePointer(&_V10_Dpair_D2034, VPOINTER_PAIR);
  _V10_Dpair_D2034.first = VEncodePointer(&_V10_Dpair_D2033, VPOINTER_PAIR);
  _V10_Dpair_D2034.rest = VNULL;
  _V10_Dpair_D2033.first = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D2033.rest = VEncodePointer(&_V10_Dpair_D2032, VPOINTER_PAIR);
  _V10_Dpair_D2032.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2032.rest = VEncodePointer(&_V10_Dpair_D2022, VPOINTER_PAIR);
  _V10_Dpair_D2031.first = VEncodePointer(&_V10_Dpair_D2025, VPOINTER_PAIR);
  _V10_Dpair_D2031.rest = VEncodePointer(&_V10_Dpair_D2030, VPOINTER_PAIR);
  _V10_Dpair_D2030.first = VEncodePointer(&_V10_Dpair_D2029, VPOINTER_PAIR);
  _V10_Dpair_D2030.rest = VNULL;
  _V10_Dpair_D2029.first = _V0_Mk;
  _V10_Dpair_D2029.rest = VEncodePointer(&_V10_Dpair_D2028, VPOINTER_PAIR);
  _V10_Dpair_D2028.first = _V0exprs;
  _V10_Dpair_D2028.rest = VEncodePointer(&_V10_Dpair_D2027, VPOINTER_PAIR);
  _V10_Dpair_D2027.first = _V0bound;
  _V10_Dpair_D2027.rest = VEncodePointer(&_V10_Dpair_D2026, VPOINTER_PAIR);
  _V10_Dpair_D2026.first = _V0free;
  _V10_Dpair_D2026.rest = VNULL;
  _V10_Dpair_D2025.first = _V10_Dloop_D80;
  _V10_Dpair_D2025.rest = VNULL;
  _V10_Dpair_D2024.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2024.rest = VEncodePointer(&_V10_Dpair_D2023, VPOINTER_PAIR);
  _V10_Dpair_D2023.first = VEncodePointer(&_V10_Dpair_D2022, VPOINTER_PAIR);
  _V10_Dpair_D2023.rest = VNULL;
  _V10_Dpair_D2022.first = VEncodePointer(&_V10_Dpair_D2016, VPOINTER_PAIR);
  _V10_Dpair_D2022.rest = VEncodePointer(&_V10_Dpair_D2019, VPOINTER_PAIR);
  _V10_Dpair_D2021.first = VEncodePointer(&_V10_Dpair_D2018, VPOINTER_PAIR);
  _V10_Dpair_D2021.rest = VEncodePointer(&_V10_Dpair_D2020, VPOINTER_PAIR);
  _V10_Dpair_D2020.first = VEncodePointer(&_V10_Dpair_D2019, VPOINTER_PAIR);
  _V10_Dpair_D2020.rest = VNULL;
  _V10_Dpair_D2019.first = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D2019.rest = VEncodePointer(&_V10_Dpair_D2013, VPOINTER_PAIR);
  _V10_Dpair_D2018.first = VEncodeBool(false);
  _V10_Dpair_D2018.rest = VEncodePointer(&_V10_Dpair_D2017, VPOINTER_PAIR);
  _V10_Dpair_D2017.first = VEncodePointer(&_V10_Dpair_D2016, VPOINTER_PAIR);
  _V10_Dpair_D2017.rest = VNULL;
  _V10_Dpair_D2016.first = _V0expanded;
  _V10_Dpair_D2016.rest = VNULL;
  _V10_Dpair_D2015.first = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D2015.rest = VEncodePointer(&_V10_Dpair_D2014, VPOINTER_PAIR);
  _V10_Dpair_D2014.first = VEncodePointer(&_V10_Dpair_D2013, VPOINTER_PAIR);
  _V10_Dpair_D2014.rest = VNULL;
  _V10_Dpair_D2013.first = VEncodePointer(&_V10_Dpair_D2007, VPOINTER_PAIR);
  _V10_Dpair_D2013.rest = VEncodePointer(&_V10_Dpair_D2010, VPOINTER_PAIR);
  _V10_Dpair_D2012.first = VEncodePointer(&_V10_Dpair_D2009, VPOINTER_PAIR);
  _V10_Dpair_D2012.rest = VEncodePointer(&_V10_Dpair_D2011, VPOINTER_PAIR);
  _V10_Dpair_D2011.first = VEncodePointer(&_V10_Dpair_D2010, VPOINTER_PAIR);
  _V10_Dpair_D2011.rest = VNULL;
  _V10_Dpair_D2010.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D2010.rest = VEncodePointer(&_V10_Dpair_D2004, VPOINTER_PAIR);
  _V10_Dpair_D2009.first = VEncodeBool(false);
  _V10_Dpair_D2009.rest = VEncodePointer(&_V10_Dpair_D2008, VPOINTER_PAIR);
  _V10_Dpair_D2008.first = VEncodePointer(&_V10_Dpair_D2007, VPOINTER_PAIR);
  _V10_Dpair_D2008.rest = VNULL;
  _V10_Dpair_D2007.first = _V0fd;
  _V10_Dpair_D2007.rest = VNULL;
  _V10_Dpair_D2006.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D2006.rest = VEncodePointer(&_V10_Dpair_D2005, VPOINTER_PAIR);
  _V10_Dpair_D2005.first = VEncodePointer(&_V10_Dpair_D2004, VPOINTER_PAIR);
  _V10_Dpair_D2005.rest = VNULL;
  _V10_Dpair_D2004.first = VEncodePointer(&_V10_Dpair_D1958, VPOINTER_PAIR);
  _V10_Dpair_D2004.rest = VEncodePointer(&_V10_Dpair_D2001, VPOINTER_PAIR);
  _V10_Dpair_D2003.first = VEncodePointer(&_V10_Dpair_D1960, VPOINTER_PAIR);
  _V10_Dpair_D2003.rest = VEncodePointer(&_V10_Dpair_D2002, VPOINTER_PAIR);
  _V10_Dpair_D2002.first = VEncodePointer(&_V10_Dpair_D2001, VPOINTER_PAIR);
  _V10_Dpair_D2002.rest = VNULL;
  _V10_Dpair_D2001.first = VEncodePointer(&_V10_Dpair_D1952, VPOINTER_PAIR);
  _V10_Dpair_D2001.rest = VEncodePointer(&_V10_Dpair_D1778, VPOINTER_PAIR);
  _V10_Dpair_D2000.first = VEncodePointer(&_V10_Dpair_D1954, VPOINTER_PAIR);
  _V10_Dpair_D2000.rest = VEncodePointer(&_V10_Dpair_D1779, VPOINTER_PAIR);
  _V10_Dpair_D1999.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1999.rest = VEncodePointer(&_V10_Dpair_D1997, VPOINTER_PAIR);
  _V10_Dpair_D1998.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1998.rest = VEncodePointer(&_V10_Dpair_D1997, VPOINTER_PAIR);
  _V10_Dpair_D1997.first = VEncodePointer(&_V10_Dpair_D1996, VPOINTER_PAIR);
  _V10_Dpair_D1997.rest = VNULL;
  _V10_Dpair_D1996.first = VEncodePointer(&_V10_Dpair_D1992, VPOINTER_PAIR);
  _V10_Dpair_D1996.rest = VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR);
  _V10_Dpair_D1995.first = VEncodePointer(&_V10_Dpair_D1994, VPOINTER_PAIR);
  _V10_Dpair_D1995.rest = VEncodePointer(&_V10_Dpair_D1782, VPOINTER_PAIR);
  _V10_Dpair_D1994.first = VEncodeBool(false);
  _V10_Dpair_D1994.rest = VEncodePointer(&_V10_Dpair_D1993, VPOINTER_PAIR);
  _V10_Dpair_D1993.first = VEncodePointer(&_V10_Dpair_D1992, VPOINTER_PAIR);
  _V10_Dpair_D1993.rest = VNULL;
  _V10_Dpair_D1992.first = _V0_Mk;
  _V10_Dpair_D1992.rest = VEncodePointer(&_V10_Dpair_D1991, VPOINTER_PAIR);
  _V10_Dpair_D1991.first = _V0x;
  _V10_Dpair_D1991.rest = VEncodePointer(&_V10_Dpair_D1990, VPOINTER_PAIR);
  _V10_Dpair_D1990.first = _V0acc;
  _V10_Dpair_D1990.rest = VNULL;
  _V10_Dpair_D1988.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1988.rest = VEncodePointer(&_V10_Dpair_D1987, VPOINTER_PAIR);
  _V10_Dpair_D1987.first = VEncodePointer(&_V10_Dpair_D1986, VPOINTER_PAIR);
  _V10_Dpair_D1987.rest = VNULL;
  _V10_Dpair_D1986.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1986.rest = VEncodePointer(&_V10_Dpair_D1982, VPOINTER_PAIR);
  _V10_Dpair_D1985.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1985.rest = VEncodePointer(&_V10_Dpair_D1983, VPOINTER_PAIR);
  _V10_Dpair_D1984.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1984.rest = VEncodePointer(&_V10_Dpair_D1983, VPOINTER_PAIR);
  _V10_Dpair_D1983.first = VEncodePointer(&_V10_Dpair_D1982, VPOINTER_PAIR);
  _V10_Dpair_D1983.rest = VNULL;
  _V10_Dpair_D1982.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1982.rest = VEncodePointer(&_V10_Dpair_D1972, VPOINTER_PAIR);
  _V10_Dpair_D1981.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1981.rest = VEncodePointer(&_V10_Dpair_D1973, VPOINTER_PAIR);
  _V10_Dpair_D1980.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1980.rest = VEncodePointer(&_V10_Dpair_D1979, VPOINTER_PAIR);
  _V10_Dpair_D1979.first = VEncodePointer(&_V10_Dpair_D1978, VPOINTER_PAIR);
  _V10_Dpair_D1979.rest = VNULL;
  _V10_Dpair_D1978.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1978.rest = VEncodePointer(&_V10_Dpair_D1975, VPOINTER_PAIR);
  _V10_Dpair_D1977.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1977.rest = VEncodePointer(&_V10_Dpair_D1976, VPOINTER_PAIR);
  _V10_Dpair_D1976.first = VEncodePointer(&_V10_Dpair_D1975, VPOINTER_PAIR);
  _V10_Dpair_D1976.rest = VNULL;
  _V10_Dpair_D1975.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1975.rest = VEncodePointer(&_V10_Dpair_D1972, VPOINTER_PAIR);
  _V10_Dpair_D1974.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1974.rest = VEncodePointer(&_V10_Dpair_D1973, VPOINTER_PAIR);
  _V10_Dpair_D1973.first = VEncodePointer(&_V10_Dpair_D1972, VPOINTER_PAIR);
  _V10_Dpair_D1973.rest = VNULL;
  _V10_Dpair_D1972.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1972.rest = VEncodePointer(&_V10_Dpair_D1969, VPOINTER_PAIR);
  _V10_Dpair_D1971.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1971.rest = VEncodePointer(&_V10_Dpair_D1970, VPOINTER_PAIR);
  _V10_Dpair_D1970.first = VEncodePointer(&_V10_Dpair_D1969, VPOINTER_PAIR);
  _V10_Dpair_D1970.rest = VNULL;
  _V10_Dpair_D1969.first = VEncodePointer(&_V10_Dpair_D1967, VPOINTER_PAIR);
  _V10_Dpair_D1969.rest = VEncodePointer(&_V10_Dpair_D1968, VPOINTER_PAIR);
  _V10_Dpair_D1968.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1968.rest = VEncodePointer(&_V10_Dpair_D1964, VPOINTER_PAIR);
  _V10_Dpair_D1967.first = _V0cc__cmd;
  _V10_Dpair_D1967.rest = VNULL;
  _V10_Dpair_D1966.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1966.rest = VEncodePointer(&_V10_Dpair_D1965, VPOINTER_PAIR);
  _V10_Dpair_D1965.first = VEncodePointer(&_V10_Dpair_D1964, VPOINTER_PAIR);
  _V10_Dpair_D1965.rest = VNULL;
  _V10_Dpair_D1964.first = VEncodePointer(&_V10_Dpair_D1958, VPOINTER_PAIR);
  _V10_Dpair_D1964.rest = VEncodePointer(&_V10_Dpair_D1961, VPOINTER_PAIR);
  _V10_Dpair_D1963.first = VEncodePointer(&_V10_Dpair_D1960, VPOINTER_PAIR);
  _V10_Dpair_D1963.rest = VEncodePointer(&_V10_Dpair_D1962, VPOINTER_PAIR);
  _V10_Dpair_D1962.first = VEncodePointer(&_V10_Dpair_D1961, VPOINTER_PAIR);
  _V10_Dpair_D1962.rest = VNULL;
  _V10_Dpair_D1961.first = VEncodePointer(&_V10_Dpair_D1952, VPOINTER_PAIR);
  _V10_Dpair_D1961.rest = VEncodePointer(&_V10_Dpair_D1955, VPOINTER_PAIR);
  _V10_Dpair_D1960.first = VEncodeBool(false);
  _V10_Dpair_D1960.rest = VEncodePointer(&_V10_Dpair_D1959, VPOINTER_PAIR);
  _V10_Dpair_D1959.first = VEncodePointer(&_V10_Dpair_D1958, VPOINTER_PAIR);
  _V10_Dpair_D1959.rest = VNULL;
  _V10_Dpair_D1958.first = _V0path;
  _V10_Dpair_D1958.rest = VNULL;
  _V10_Dpair_D1957.first = VEncodePointer(&_V10_Dpair_D1954, VPOINTER_PAIR);
  _V10_Dpair_D1957.rest = VEncodePointer(&_V10_Dpair_D1956, VPOINTER_PAIR);
  _V10_Dpair_D1956.first = VEncodePointer(&_V10_Dpair_D1955, VPOINTER_PAIR);
  _V10_Dpair_D1956.rest = VNULL;
  _V10_Dpair_D1955.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1955.rest = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1954.first = VEncodeBool(false);
  _V10_Dpair_D1954.rest = VEncodePointer(&_V10_Dpair_D1953, VPOINTER_PAIR);
  _V10_Dpair_D1953.first = VEncodePointer(&_V10_Dpair_D1952, VPOINTER_PAIR);
  _V10_Dpair_D1953.rest = VNULL;
  _V10_Dpair_D1952.first = _V0_Mk;
  _V10_Dpair_D1952.rest = VEncodePointer(&_V10_Dpair_D1951, VPOINTER_PAIR);
  _V10_Dpair_D1951.first = _V0scm__file;
  _V10_Dpair_D1951.rest = VEncodePointer(&_V10_Dpair_D1950, VPOINTER_PAIR);
  _V10_Dpair_D1950.first = _V0cc__file;
  _V10_Dpair_D1950.rest = VEncodePointer(&_V10_Dpair_D1949, VPOINTER_PAIR);
  _V10_Dpair_D1949.first = _V0obj__file;
  _V10_Dpair_D1949.rest = VNULL;
  _V10_Dpair_D1948.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1948.rest = VEncodePointer(&_V10_Dpair_D1829, VPOINTER_PAIR);
  _V10_Dpair_D1946.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1946.rest = VEncodePointer(&_V10_Dpair_D1932, VPOINTER_PAIR);
  _V10_Dpair_D1945.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1945.rest = VEncodePointer(&_V10_Dpair_D1944, VPOINTER_PAIR);
  _V10_Dpair_D1944.first = VEncodePointer(&_V10_Dpair_D1943, VPOINTER_PAIR);
  _V10_Dpair_D1944.rest = VNULL;
  _V10_Dpair_D1943.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1943.rest = VEncodePointer(&_V10_Dpair_D1940, VPOINTER_PAIR);
  _V10_Dpair_D1942.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1942.rest = VEncodePointer(&_V10_Dpair_D1941, VPOINTER_PAIR);
  _V10_Dpair_D1941.first = VEncodePointer(&_V10_Dpair_D1940, VPOINTER_PAIR);
  _V10_Dpair_D1941.rest = VNULL;
  _V10_Dpair_D1940.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1940.rest = VEncodePointer(&_V10_Dpair_D1937, VPOINTER_PAIR);
  _V10_Dpair_D1939.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1939.rest = VEncodePointer(&_V10_Dpair_D1938, VPOINTER_PAIR);
  _V10_Dpair_D1938.first = VEncodePointer(&_V10_Dpair_D1937, VPOINTER_PAIR);
  _V10_Dpair_D1938.rest = VNULL;
  _V10_Dpair_D1937.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1937.rest = VEncodePointer(&_V10_Dpair_D1934, VPOINTER_PAIR);
  _V10_Dpair_D1936.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1936.rest = VEncodePointer(&_V10_Dpair_D1935, VPOINTER_PAIR);
  _V10_Dpair_D1935.first = VEncodePointer(&_V10_Dpair_D1934, VPOINTER_PAIR);
  _V10_Dpair_D1935.rest = VNULL;
  _V10_Dpair_D1934.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1934.rest = VEncodePointer(&_V10_Dpair_D1931, VPOINTER_PAIR);
  _V10_Dpair_D1933.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1933.rest = VEncodePointer(&_V10_Dpair_D1932, VPOINTER_PAIR);
  _V10_Dpair_D1932.first = VEncodePointer(&_V10_Dpair_D1931, VPOINTER_PAIR);
  _V10_Dpair_D1932.rest = VNULL;
  _V10_Dpair_D1931.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1931.rest = VEncodePointer(&_V10_Dpair_D1927, VPOINTER_PAIR);
  _V10_Dpair_D1930.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1930.rest = VEncodePointer(&_V10_Dpair_D1928, VPOINTER_PAIR);
  _V10_Dpair_D1929.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1929.rest = VEncodePointer(&_V10_Dpair_D1928, VPOINTER_PAIR);
  _V10_Dpair_D1928.first = VEncodePointer(&_V10_Dpair_D1927, VPOINTER_PAIR);
  _V10_Dpair_D1928.rest = VNULL;
  _V10_Dpair_D1927.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1927.rest = VEncodePointer(&_V10_Dpair_D1914, VPOINTER_PAIR);
  _V10_Dpair_D1926.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1926.rest = VEncodePointer(&_V10_Dpair_D1915, VPOINTER_PAIR);
  _V10_Dpair_D1925.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1925.rest = VEncodePointer(&_V10_Dpair_D1924, VPOINTER_PAIR);
  _V10_Dpair_D1924.first = VEncodePointer(&_V10_Dpair_D1923, VPOINTER_PAIR);
  _V10_Dpair_D1924.rest = VNULL;
  _V10_Dpair_D1923.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1923.rest = VEncodePointer(&_V10_Dpair_D1920, VPOINTER_PAIR);
  _V10_Dpair_D1922.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1922.rest = VEncodePointer(&_V10_Dpair_D1921, VPOINTER_PAIR);
  _V10_Dpair_D1921.first = VEncodePointer(&_V10_Dpair_D1920, VPOINTER_PAIR);
  _V10_Dpair_D1921.rest = VNULL;
  _V10_Dpair_D1920.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1920.rest = VEncodePointer(&_V10_Dpair_D1917, VPOINTER_PAIR);
  _V10_Dpair_D1919.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1919.rest = VEncodePointer(&_V10_Dpair_D1918, VPOINTER_PAIR);
  _V10_Dpair_D1918.first = VEncodePointer(&_V10_Dpair_D1917, VPOINTER_PAIR);
  _V10_Dpair_D1918.rest = VNULL;
  _V10_Dpair_D1917.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1917.rest = VEncodePointer(&_V10_Dpair_D1914, VPOINTER_PAIR);
  _V10_Dpair_D1916.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1916.rest = VEncodePointer(&_V10_Dpair_D1915, VPOINTER_PAIR);
  _V10_Dpair_D1915.first = VEncodePointer(&_V10_Dpair_D1914, VPOINTER_PAIR);
  _V10_Dpair_D1915.rest = VNULL;
  _V10_Dpair_D1914.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1914.rest = VEncodePointer(&_V10_Dpair_D1844, VPOINTER_PAIR);
  _V10_Dpair_D1913.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1913.rest = VEncodePointer(&_V10_Dpair_D1845, VPOINTER_PAIR);
  _V10_Dpair_D1911.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1911.rest = VEncodePointer(&_V10_Dpair_D1910, VPOINTER_PAIR);
  _V10_Dpair_D1910.first = VEncodePointer(&_V10_Dpair_D1909, VPOINTER_PAIR);
  _V10_Dpair_D1910.rest = VNULL;
  _V10_Dpair_D1909.first = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D1909.rest = VEncodePointer(&_V10_Dpair_D1893, VPOINTER_PAIR);
  _V10_Dpair_D1908.first = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D1908.rest = VEncodePointer(&_V10_Dpair_D1894, VPOINTER_PAIR);
  _V10_Dpair_D1907.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1907.rest = VEncodePointer(&_V10_Dpair_D1906, VPOINTER_PAIR);
  _V10_Dpair_D1906.first = VEncodePointer(&_V10_Dpair_D1905, VPOINTER_PAIR);
  _V10_Dpair_D1906.rest = VNULL;
  _V10_Dpair_D1905.first = VEncodePointer(&_V10_Dpair_D1901, VPOINTER_PAIR);
  _V10_Dpair_D1905.rest = VEncodePointer(&_V10_Dpair_D1893, VPOINTER_PAIR);
  _V10_Dpair_D1904.first = VEncodePointer(&_V10_Dpair_D1903, VPOINTER_PAIR);
  _V10_Dpair_D1904.rest = VEncodePointer(&_V10_Dpair_D1894, VPOINTER_PAIR);
  _V10_Dpair_D1903.first = VEncodeBool(false);
  _V10_Dpair_D1903.rest = VEncodePointer(&_V10_Dpair_D1902, VPOINTER_PAIR);
  _V10_Dpair_D1902.first = VEncodePointer(&_V10_Dpair_D1901, VPOINTER_PAIR);
  _V10_Dpair_D1902.rest = VNULL;
  _V10_Dpair_D1901.first = _V0_Mk;
  _V10_Dpair_D1901.rest = VEncodePointer(&_V10_Dpair_D1900, VPOINTER_PAIR);
  _V10_Dpair_D1900.first = _V0option;
  _V10_Dpair_D1900.rest = VNULL;
  _V10_Dpair_D1899.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1899.rest = VEncodePointer(&_V10_Dpair_D1897, VPOINTER_PAIR);
  _V10_Dpair_D1898.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1898.rest = VEncodePointer(&_V10_Dpair_D1897, VPOINTER_PAIR);
  _V10_Dpair_D1897.first = VEncodePointer(&_V10_Dpair_D1896, VPOINTER_PAIR);
  _V10_Dpair_D1897.rest = VNULL;
  _V10_Dpair_D1896.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1896.rest = VEncodePointer(&_V10_Dpair_D1893, VPOINTER_PAIR);
  _V10_Dpair_D1895.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1895.rest = VEncodePointer(&_V10_Dpair_D1894, VPOINTER_PAIR);
  _V10_Dpair_D1894.first = VEncodePointer(&_V10_Dpair_D1893, VPOINTER_PAIR);
  _V10_Dpair_D1894.rest = VNULL;
  _V10_Dpair_D1893.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1893.rest = VEncodePointer(&_V10_Dpair_D1890, VPOINTER_PAIR);
  _V10_Dpair_D1892.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1892.rest = VEncodePointer(&_V10_Dpair_D1891, VPOINTER_PAIR);
  _V10_Dpair_D1891.first = VEncodePointer(&_V10_Dpair_D1890, VPOINTER_PAIR);
  _V10_Dpair_D1891.rest = VNULL;
  _V10_Dpair_D1890.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1890.rest = VEncodePointer(&_V10_Dpair_D1887, VPOINTER_PAIR);
  _V10_Dpair_D1889.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1889.rest = VEncodePointer(&_V10_Dpair_D1888, VPOINTER_PAIR);
  _V10_Dpair_D1888.first = VEncodePointer(&_V10_Dpair_D1887, VPOINTER_PAIR);
  _V10_Dpair_D1888.rest = VNULL;
  _V10_Dpair_D1887.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1887.rest = VEncodePointer(&_V10_Dpair_D1884, VPOINTER_PAIR);
  _V10_Dpair_D1886.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1886.rest = VEncodePointer(&_V10_Dpair_D1885, VPOINTER_PAIR);
  _V10_Dpair_D1885.first = VEncodePointer(&_V10_Dpair_D1884, VPOINTER_PAIR);
  _V10_Dpair_D1885.rest = VNULL;
  _V10_Dpair_D1884.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1884.rest = VEncodePointer(&_V10_Dpair_D1875, VPOINTER_PAIR);
  _V10_Dpair_D1883.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1883.rest = VEncodePointer(&_V10_Dpair_D1876, VPOINTER_PAIR);
  _V10_Dpair_D1881.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1881.rest = VEncodePointer(&_V10_Dpair_D1880, VPOINTER_PAIR);
  _V10_Dpair_D1880.first = VEncodePointer(&_V10_Dpair_D1879, VPOINTER_PAIR);
  _V10_Dpair_D1880.rest = VNULL;
  _V10_Dpair_D1879.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1879.rest = VEncodePointer(&_V10_Dpair_D1875, VPOINTER_PAIR);
  _V10_Dpair_D1877.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1877.rest = VEncodePointer(&_V10_Dpair_D1876, VPOINTER_PAIR);
  _V10_Dpair_D1876.first = VEncodePointer(&_V10_Dpair_D1875, VPOINTER_PAIR);
  _V10_Dpair_D1876.rest = VNULL;
  _V10_Dpair_D1875.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1875.rest = VEncodePointer(&_V10_Dpair_D1865, VPOINTER_PAIR);
  _V10_Dpair_D1874.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1874.rest = VEncodePointer(&_V10_Dpair_D1866, VPOINTER_PAIR);
  _V10_Dpair_D1871.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1871.rest = VEncodePointer(&_V10_Dpair_D1870, VPOINTER_PAIR);
  _V10_Dpair_D1870.first = VEncodePointer(&_V10_Dpair_D1869, VPOINTER_PAIR);
  _V10_Dpair_D1870.rest = VNULL;
  _V10_Dpair_D1869.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1869.rest = VEncodePointer(&_V10_Dpair_D1865, VPOINTER_PAIR);
  _V10_Dpair_D1867.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1867.rest = VEncodePointer(&_V10_Dpair_D1866, VPOINTER_PAIR);
  _V10_Dpair_D1866.first = VEncodePointer(&_V10_Dpair_D1865, VPOINTER_PAIR);
  _V10_Dpair_D1866.rest = VNULL;
  _V10_Dpair_D1865.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1865.rest = VEncodePointer(&_V10_Dpair_D1862, VPOINTER_PAIR);
  _V10_Dpair_D1864.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1864.rest = VEncodePointer(&_V10_Dpair_D1863, VPOINTER_PAIR);
  _V10_Dpair_D1863.first = VEncodePointer(&_V10_Dpair_D1862, VPOINTER_PAIR);
  _V10_Dpair_D1863.rest = VNULL;
  _V10_Dpair_D1862.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1862.rest = VEncodePointer(&_V10_Dpair_D1858, VPOINTER_PAIR);
  _V10_Dpair_D1861.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1861.rest = VEncodePointer(&_V10_Dpair_D1859, VPOINTER_PAIR);
  _V10_Dpair_D1860.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1860.rest = VEncodePointer(&_V10_Dpair_D1859, VPOINTER_PAIR);
  _V10_Dpair_D1859.first = VEncodePointer(&_V10_Dpair_D1858, VPOINTER_PAIR);
  _V10_Dpair_D1859.rest = VNULL;
  _V10_Dpair_D1858.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1858.rest = VEncodePointer(&_V10_Dpair_D1855, VPOINTER_PAIR);
  _V10_Dpair_D1857.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1857.rest = VEncodePointer(&_V10_Dpair_D1856, VPOINTER_PAIR);
  _V10_Dpair_D1856.first = VEncodePointer(&_V10_Dpair_D1855, VPOINTER_PAIR);
  _V10_Dpair_D1856.rest = VNULL;
  _V10_Dpair_D1855.first = VEncodePointer(&_V10_Dpair_D1853, VPOINTER_PAIR);
  _V10_Dpair_D1855.rest = VEncodePointer(&_V10_Dpair_D1854, VPOINTER_PAIR);
  _V10_Dpair_D1854.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1854.rest = VEncodePointer(&_V10_Dpair_D1847, VPOINTER_PAIR);
  _V10_Dpair_D1853.first = _V0link__command__flags;
  _V10_Dpair_D1853.rest = VEncodePointer(&_V10_Dpair_D1852, VPOINTER_PAIR);
  _V10_Dpair_D1852.first = _V0link__command;
  _V10_Dpair_D1852.rest = VNULL;
  _V10_Dpair_D1851.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1851.rest = VEncodePointer(&_V10_Dpair_D1848, VPOINTER_PAIR);
  _V10_Dpair_D1849.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1849.rest = VEncodePointer(&_V10_Dpair_D1848, VPOINTER_PAIR);
  _V10_Dpair_D1848.first = VEncodePointer(&_V10_Dpair_D1847, VPOINTER_PAIR);
  _V10_Dpair_D1848.rest = VNULL;
  _V10_Dpair_D1847.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1847.rest = VEncodePointer(&_V10_Dpair_D1844, VPOINTER_PAIR);
  _V10_Dpair_D1846.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1846.rest = VEncodePointer(&_V10_Dpair_D1845, VPOINTER_PAIR);
  _V10_Dpair_D1845.first = VEncodePointer(&_V10_Dpair_D1844, VPOINTER_PAIR);
  _V10_Dpair_D1845.rest = VNULL;
  _V10_Dpair_D1844.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1844.rest = VEncodePointer(&_V10_Dpair_D1831, VPOINTER_PAIR);
  _V10_Dpair_D1843.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1843.rest = VEncodePointer(&_V10_Dpair_D1832, VPOINTER_PAIR);
  _V10_Dpair_D1842.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1842.rest = VEncodePointer(&_V10_Dpair_D1841, VPOINTER_PAIR);
  _V10_Dpair_D1841.first = VEncodePointer(&_V10_Dpair_D1840, VPOINTER_PAIR);
  _V10_Dpair_D1841.rest = VNULL;
  _V10_Dpair_D1840.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1840.rest = VEncodePointer(&_V10_Dpair_D1837, VPOINTER_PAIR);
  _V10_Dpair_D1839.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1839.rest = VEncodePointer(&_V10_Dpair_D1838, VPOINTER_PAIR);
  _V10_Dpair_D1838.first = VEncodePointer(&_V10_Dpair_D1837, VPOINTER_PAIR);
  _V10_Dpair_D1838.rest = VNULL;
  _V10_Dpair_D1837.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1837.rest = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1836.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1836.rest = VEncodePointer(&_V10_Dpair_D1835, VPOINTER_PAIR);
  _V10_Dpair_D1835.first = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1835.rest = VNULL;
  _V10_Dpair_D1834.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1834.rest = VEncodePointer(&_V10_Dpair_D1831, VPOINTER_PAIR);
  _V10_Dpair_D1833.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1833.rest = VEncodePointer(&_V10_Dpair_D1832, VPOINTER_PAIR);
  _V10_Dpair_D1832.first = VEncodePointer(&_V10_Dpair_D1831, VPOINTER_PAIR);
  _V10_Dpair_D1832.rest = VNULL;
  _V10_Dpair_D1831.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1831.rest = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1830.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1830.rest = VEncodePointer(&_V10_Dpair_D1829, VPOINTER_PAIR);
  _V10_Dpair_D1829.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1829.rest = VNULL;
  _V10_Dpair_D1828.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1828.rest = VEncodePointer(&_V10_Dpair_D1825, VPOINTER_PAIR);
  _V10_Dpair_D1827.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1827.rest = VEncodePointer(&_V10_Dpair_D1826, VPOINTER_PAIR);
  _V10_Dpair_D1826.first = VEncodePointer(&_V10_Dpair_D1825, VPOINTER_PAIR);
  _V10_Dpair_D1826.rest = VNULL;
  _V10_Dpair_D1825.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1825.rest = VEncodePointer(&_V10_Dpair_D1805, VPOINTER_PAIR);
  _V10_Dpair_D1824.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1824.rest = VEncodePointer(&_V10_Dpair_D1806, VPOINTER_PAIR);
  _V10_Dpair_D1822.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1822.rest = VEncodePointer(&_V10_Dpair_D1821, VPOINTER_PAIR);
  _V10_Dpair_D1821.first = VEncodePointer(&_V10_Dpair_D1820, VPOINTER_PAIR);
  _V10_Dpair_D1821.rest = VNULL;
  _V10_Dpair_D1820.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1820.rest = VEncodePointer(&_V10_Dpair_D1817, VPOINTER_PAIR);
  _V10_Dpair_D1819.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1819.rest = VEncodePointer(&_V10_Dpair_D1818, VPOINTER_PAIR);
  _V10_Dpair_D1818.first = VEncodePointer(&_V10_Dpair_D1817, VPOINTER_PAIR);
  _V10_Dpair_D1818.rest = VNULL;
  _V10_Dpair_D1817.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1817.rest = VEncodePointer(&_V10_Dpair_D1814, VPOINTER_PAIR);
  _V10_Dpair_D1816.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1816.rest = VEncodePointer(&_V10_Dpair_D1815, VPOINTER_PAIR);
  _V10_Dpair_D1815.first = VEncodePointer(&_V10_Dpair_D1814, VPOINTER_PAIR);
  _V10_Dpair_D1815.rest = VNULL;
  _V10_Dpair_D1814.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1814.rest = VEncodePointer(&_V10_Dpair_D1811, VPOINTER_PAIR);
  _V10_Dpair_D1813.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1813.rest = VEncodePointer(&_V10_Dpair_D1812, VPOINTER_PAIR);
  _V10_Dpair_D1812.first = VEncodePointer(&_V10_Dpair_D1811, VPOINTER_PAIR);
  _V10_Dpair_D1812.rest = VNULL;
  _V10_Dpair_D1811.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1811.rest = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1810.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1810.rest = VEncodePointer(&_V10_Dpair_D1809, VPOINTER_PAIR);
  _V10_Dpair_D1809.first = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1809.rest = VNULL;
  _V10_Dpair_D1808.first = VEncodePointer(&_V10_Dpair_D1800, VPOINTER_PAIR);
  _V10_Dpair_D1808.rest = VEncodePointer(&_V10_Dpair_D1805, VPOINTER_PAIR);
  _V10_Dpair_D1807.first = VEncodePointer(&_V10_Dpair_D1802, VPOINTER_PAIR);
  _V10_Dpair_D1807.rest = VEncodePointer(&_V10_Dpair_D1806, VPOINTER_PAIR);
  _V10_Dpair_D1806.first = VEncodePointer(&_V10_Dpair_D1805, VPOINTER_PAIR);
  _V10_Dpair_D1806.rest = VNULL;
  _V10_Dpair_D1805.first = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D1805.rest = VEncodePointer(&_V10_Dpair_D1804, VPOINTER_PAIR);
  _V10_Dpair_D1804.first = VEncodePointer(&_V10_Dpair_D1803, VPOINTER_PAIR);
  _V10_Dpair_D1804.rest = VEncodePointer(&_V10_Dpair_D1793, VPOINTER_PAIR);
  _V10_Dpair_D1803.first = _V0cc__paths;
  _V10_Dpair_D1803.rest = VNULL;
  _V10_Dpair_D1802.first = VEncodePointer(&_V10_Dpair_D1797, VPOINTER_PAIR);
  _V10_Dpair_D1802.rest = VEncodePointer(&_V10_Dpair_D1801, VPOINTER_PAIR);
  _V10_Dpair_D1801.first = VEncodePointer(&_V10_Dpair_D1800, VPOINTER_PAIR);
  _V10_Dpair_D1801.rest = VNULL;
  _V10_Dpair_D1800.first = _V0_Mk;
  _V10_Dpair_D1800.rest = VEncodePointer(&_V10_Dpair_D1799, VPOINTER_PAIR);
  _V10_Dpair_D1799.first = _V0acc;
  _V10_Dpair_D1799.rest = VEncodePointer(&_V10_Dpair_D1798, VPOINTER_PAIR);
  _V10_Dpair_D1798.first = _V0paths;
  _V10_Dpair_D1798.rest = VNULL;
  _V10_Dpair_D1797.first = _V10_Dloop_D101;
  _V10_Dpair_D1797.rest = VNULL;
  _V10_Dpair_D1795.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1795.rest = VEncodePointer(&_V10_Dpair_D1794, VPOINTER_PAIR);
  _V10_Dpair_D1794.first = VEncodePointer(&_V10_Dpair_D1793, VPOINTER_PAIR);
  _V10_Dpair_D1794.rest = VNULL;
  _V10_Dpair_D1793.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1793.rest = VEncodePointer(&_V10_Dpair_D1788, VPOINTER_PAIR);
  _V10_Dpair_D1792.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1792.rest = VEncodePointer(&_V10_Dpair_D1789, VPOINTER_PAIR);
  _V10_Dpair_D1790.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1790.rest = VEncodePointer(&_V10_Dpair_D1789, VPOINTER_PAIR);
  _V10_Dpair_D1789.first = VEncodePointer(&_V10_Dpair_D1788, VPOINTER_PAIR);
  _V10_Dpair_D1789.rest = VNULL;
  _V10_Dpair_D1788.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1788.rest = VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR);
  _V10_Dpair_D1787.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1787.rest = VEncodePointer(&_V10_Dpair_D1785, VPOINTER_PAIR);
  _V10_Dpair_D1786.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1786.rest = VEncodePointer(&_V10_Dpair_D1785, VPOINTER_PAIR);
  _V10_Dpair_D1785.first = VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR);
  _V10_Dpair_D1785.rest = VNULL;
  _V10_Dpair_D1784.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1784.rest = VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR);
  _V10_Dpair_D1783.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1783.rest = VEncodePointer(&_V10_Dpair_D1782, VPOINTER_PAIR);
  _V10_Dpair_D1782.first = VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR);
  _V10_Dpair_D1782.rest = VNULL;
  _V10_Dpair_D1781.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1781.rest = VEncodePointer(&_V10_Dpair_D1778, VPOINTER_PAIR);
  _V10_Dpair_D1780.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1780.rest = VEncodePointer(&_V10_Dpair_D1779, VPOINTER_PAIR);
  _V10_Dpair_D1779.first = VEncodePointer(&_V10_Dpair_D1778, VPOINTER_PAIR);
  _V10_Dpair_D1779.rest = VNULL;
  _V10_Dpair_D1778.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1778.rest = VEncodePointer(&_V10_Dpair_D1775, VPOINTER_PAIR);
  _V10_Dpair_D1777.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1777.rest = VEncodePointer(&_V10_Dpair_D1776, VPOINTER_PAIR);
  _V10_Dpair_D1776.first = VEncodePointer(&_V10_Dpair_D1775, VPOINTER_PAIR);
  _V10_Dpair_D1776.rest = VNULL;
  _V10_Dpair_D1775.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1775.rest = VEncodePointer(&_V10_Dpair_D1772, VPOINTER_PAIR);
  _V10_Dpair_D1774.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1774.rest = VEncodePointer(&_V10_Dpair_D1773, VPOINTER_PAIR);
  _V10_Dpair_D1773.first = VEncodePointer(&_V10_Dpair_D1772, VPOINTER_PAIR);
  _V10_Dpair_D1773.rest = VNULL;
  _V10_Dpair_D1772.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1772.rest = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1771.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1771.rest = VEncodePointer(&_V10_Dpair_D1768, VPOINTER_PAIR);
  _V10_Dpair_D1769.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1769.rest = VEncodePointer(&_V10_Dpair_D1768, VPOINTER_PAIR);
  _V10_Dpair_D1768.first = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1768.rest = VNULL;
  _V10_Dpair_D1767.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1767.rest = VEncodePointer(&_V10_Dpair_D1762, VPOINTER_PAIR);
  _V10_Dpair_D1766.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1766.rest = VEncodePointer(&_V10_Dpair_D1763, VPOINTER_PAIR);
  _V10_Dpair_D1764.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1764.rest = VEncodePointer(&_V10_Dpair_D1763, VPOINTER_PAIR);
  _V10_Dpair_D1763.first = VEncodePointer(&_V10_Dpair_D1762, VPOINTER_PAIR);
  _V10_Dpair_D1763.rest = VNULL;
  _V10_Dpair_D1762.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1762.rest = VEncodePointer(&_V10_Dpair_D1756, VPOINTER_PAIR);
  _V10_Dpair_D1761.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1761.rest = VEncodePointer(&_V10_Dpair_D1757, VPOINTER_PAIR);
  _V10_Dpair_D1758.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1758.rest = VEncodePointer(&_V10_Dpair_D1757, VPOINTER_PAIR);
  _V10_Dpair_D1757.first = VEncodePointer(&_V10_Dpair_D1756, VPOINTER_PAIR);
  _V10_Dpair_D1757.rest = VNULL;
  _V10_Dpair_D1756.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1756.rest = VEncodePointer(&_V10_Dpair_D1752, VPOINTER_PAIR);
  _V10_Dpair_D1755.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1755.rest = VEncodePointer(&_V10_Dpair_D1753, VPOINTER_PAIR);
  _V10_Dpair_D1754.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1754.rest = VEncodePointer(&_V10_Dpair_D1753, VPOINTER_PAIR);
  _V10_Dpair_D1753.first = VEncodePointer(&_V10_Dpair_D1752, VPOINTER_PAIR);
  _V10_Dpair_D1753.rest = VNULL;
  _V10_Dpair_D1752.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1752.rest = VEncodePointer(&_V10_Dpair_D1749, VPOINTER_PAIR);
  _V10_Dpair_D1751.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1751.rest = VEncodePointer(&_V10_Dpair_D1750, VPOINTER_PAIR);
  _V10_Dpair_D1750.first = VEncodePointer(&_V10_Dpair_D1749, VPOINTER_PAIR);
  _V10_Dpair_D1750.rest = VNULL;
  _V10_Dpair_D1749.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1749.rest = VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR);
  _V10_Dpair_D1748.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1748.rest = VEncodePointer(&_V10_Dpair_D1740, VPOINTER_PAIR);
  _V10_Dpair_D1745.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1745.rest = VEncodePointer(&_V10_Dpair_D1744, VPOINTER_PAIR);
  _V10_Dpair_D1744.first = VEncodePointer(&_V10_Dpair_D1743, VPOINTER_PAIR);
  _V10_Dpair_D1744.rest = VNULL;
  _V10_Dpair_D1743.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1743.rest = VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR);
  _V10_Dpair_D1741.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1741.rest = VEncodePointer(&_V10_Dpair_D1740, VPOINTER_PAIR);
  _V10_Dpair_D1740.first = VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR);
  _V10_Dpair_D1740.rest = VNULL;
  _V10_Dpair_D1739.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1739.rest = VEncodePointer(&_V10_Dpair_D1736, VPOINTER_PAIR);
  _V10_Dpair_D1738.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1738.rest = VEncodePointer(&_V10_Dpair_D1737, VPOINTER_PAIR);
  _V10_Dpair_D1737.first = VEncodePointer(&_V10_Dpair_D1736, VPOINTER_PAIR);
  _V10_Dpair_D1737.rest = VNULL;
  _V10_Dpair_D1736.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1736.rest = VEncodePointer(&_V10_Dpair_D1723, VPOINTER_PAIR);
  _V10_Dpair_D1735.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1735.rest = VEncodePointer(&_V10_Dpair_D1724, VPOINTER_PAIR);
  _V10_Dpair_D1734.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1734.rest = VEncodePointer(&_V10_Dpair_D1733, VPOINTER_PAIR);
  _V10_Dpair_D1733.first = VEncodePointer(&_V10_Dpair_D1732, VPOINTER_PAIR);
  _V10_Dpair_D1733.rest = VNULL;
  _V10_Dpair_D1732.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1732.rest = VEncodePointer(&_V10_Dpair_D1729, VPOINTER_PAIR);
  _V10_Dpair_D1731.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1731.rest = VEncodePointer(&_V10_Dpair_D1730, VPOINTER_PAIR);
  _V10_Dpair_D1730.first = VEncodePointer(&_V10_Dpair_D1729, VPOINTER_PAIR);
  _V10_Dpair_D1730.rest = VNULL;
  _V10_Dpair_D1729.first = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D1729.rest = VEncodePointer(&_V10_Dpair_D1726, VPOINTER_PAIR);
  _V10_Dpair_D1728.first = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D1728.rest = VEncodePointer(&_V10_Dpair_D1727, VPOINTER_PAIR);
  _V10_Dpair_D1727.first = VEncodePointer(&_V10_Dpair_D1726, VPOINTER_PAIR);
  _V10_Dpair_D1727.rest = VNULL;
  _V10_Dpair_D1726.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1726.rest = VEncodePointer(&_V10_Dpair_D1723, VPOINTER_PAIR);
  _V10_Dpair_D1725.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1725.rest = VEncodePointer(&_V10_Dpair_D1724, VPOINTER_PAIR);
  _V10_Dpair_D1724.first = VEncodePointer(&_V10_Dpair_D1723, VPOINTER_PAIR);
  _V10_Dpair_D1724.rest = VNULL;
  _V10_Dpair_D1723.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1723.rest = VEncodePointer(&_V10_Dpair_D1719, VPOINTER_PAIR);
  _V10_Dpair_D1722.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1722.rest = VEncodePointer(&_V10_Dpair_D1720, VPOINTER_PAIR);
  _V10_Dpair_D1721.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1721.rest = VEncodePointer(&_V10_Dpair_D1720, VPOINTER_PAIR);
  _V10_Dpair_D1720.first = VEncodePointer(&_V10_Dpair_D1719, VPOINTER_PAIR);
  _V10_Dpair_D1720.rest = VNULL;
  _V10_Dpair_D1719.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1719.rest = VEncodePointer(&_V10_Dpair_D1705, VPOINTER_PAIR);
  _V10_Dpair_D1718.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1718.rest = VEncodePointer(&_V10_Dpair_D1706, VPOINTER_PAIR);
  _V10_Dpair_D1716.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1716.rest = VEncodePointer(&_V10_Dpair_D1715, VPOINTER_PAIR);
  _V10_Dpair_D1715.first = VEncodePointer(&_V10_Dpair_D1714, VPOINTER_PAIR);
  _V10_Dpair_D1715.rest = VNULL;
  _V10_Dpair_D1714.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1714.rest = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D1713.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1713.rest = VEncodePointer(&_V10_Dpair_D1712, VPOINTER_PAIR);
  _V10_Dpair_D1712.first = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D1712.rest = VNULL;
  _V10_Dpair_D1711.first = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D1711.rest = VEncodePointer(&_V10_Dpair_D1708, VPOINTER_PAIR);
  _V10_Dpair_D1710.first = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D1710.rest = VEncodePointer(&_V10_Dpair_D1709, VPOINTER_PAIR);
  _V10_Dpair_D1709.first = VEncodePointer(&_V10_Dpair_D1708, VPOINTER_PAIR);
  _V10_Dpair_D1709.rest = VNULL;
  _V10_Dpair_D1708.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1708.rest = VEncodePointer(&_V10_Dpair_D1705, VPOINTER_PAIR);
  _V10_Dpair_D1707.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1707.rest = VEncodePointer(&_V10_Dpair_D1706, VPOINTER_PAIR);
  _V10_Dpair_D1706.first = VEncodePointer(&_V10_Dpair_D1705, VPOINTER_PAIR);
  _V10_Dpair_D1706.rest = VNULL;
  _V10_Dpair_D1705.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1705.rest = VEncodePointer(&_V10_Dpair_D1700, VPOINTER_PAIR);
  _V10_Dpair_D1704.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1704.rest = VEncodePointer(&_V10_Dpair_D1701, VPOINTER_PAIR);
  _V10_Dpair_D1703.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1703.rest = VEncodePointer(&_V10_Dpair_D1701, VPOINTER_PAIR);
  _V10_Dpair_D1702.first = VEncodePointer(&_V10_Dpair_D1690, VPOINTER_PAIR);
  _V10_Dpair_D1702.rest = VEncodePointer(&_V10_Dpair_D1701, VPOINTER_PAIR);
  _V10_Dpair_D1701.first = VEncodePointer(&_V10_Dpair_D1700, VPOINTER_PAIR);
  _V10_Dpair_D1701.rest = VNULL;
  _V10_Dpair_D1700.first = VEncodePointer(&_V10_Dpair_D1699, VPOINTER_PAIR);
  _V10_Dpair_D1700.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1699.first = _V0cc__files;
  _V10_Dpair_D1699.rest = VEncodePointer(&_V10_Dpair_D1698, VPOINTER_PAIR);
  _V10_Dpair_D1698.first = _V0cc__obj__files;
  _V10_Dpair_D1698.rest = VEncodePointer(&_V10_Dpair_D1697, VPOINTER_PAIR);
  _V10_Dpair_D1697.first = _V0base__cc__flags;
  _V10_Dpair_D1697.rest = VEncodePointer(&_V10_Dpair_D1696, VPOINTER_PAIR);
  _V10_Dpair_D1696.first = _V0cc__command__flags;
  _V10_Dpair_D1696.rest = VEncodePointer(&_V10_Dpair_D1695, VPOINTER_PAIR);
  _V10_Dpair_D1695.first = _V0cc__command;
  _V10_Dpair_D1695.rest = VEncodePointer(&_V10_Dpair_D1694, VPOINTER_PAIR);
  _V10_Dpair_D1694.first = _V0id;
  _V10_Dpair_D1694.rest = VEncodePointer(&_V10_Dpair_D1693, VPOINTER_PAIR);
  _V10_Dpair_D1693.first = _V0architecture;
  _V10_Dpair_D1693.rest = VEncodePointer(&_V10_Dpair_D1692, VPOINTER_PAIR);
  _V10_Dpair_D1692.first = _V0stdout;
  _V10_Dpair_D1692.rest = VEncodePointer(&_V10_Dpair_D1691, VPOINTER_PAIR);
  _V10_Dpair_D1691.first = _V0num__mains;
  _V10_Dpair_D1691.rest = VNULL;
  _V10_Dpair_D1690.first = VEncodePointer(&_V10_Dpair_D1689, VPOINTER_PAIR);
  _V10_Dpair_D1690.rest = VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR);
  _V10_Dpair_D1689.first = _V10_Did_D64;
  _V10_Dpair_D1689.rest = VNULL;
  _V10_Dpair_D1685.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1685.rest = VEncodePointer(&_V10_Dpair_D1684, VPOINTER_PAIR);
  _V10_Dpair_D1684.first = VEncodePointer(&_V10_Dpair_D1683, VPOINTER_PAIR);
  _V10_Dpair_D1684.rest = VNULL;
  _V10_Dpair_D1683.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1683.rest = VEncodePointer(&_V10_Dpair_D1680, VPOINTER_PAIR);
  _V10_Dpair_D1682.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1682.rest = VEncodePointer(&_V10_Dpair_D1681, VPOINTER_PAIR);
  _V10_Dpair_D1681.first = VEncodePointer(&_V10_Dpair_D1680, VPOINTER_PAIR);
  _V10_Dpair_D1681.rest = VNULL;
  _V10_Dpair_D1680.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1680.rest = VEncodePointer(&_V10_Dpair_D1677, VPOINTER_PAIR);
  _V10_Dpair_D1679.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1679.rest = VEncodePointer(&_V10_Dpair_D1678, VPOINTER_PAIR);
  _V10_Dpair_D1678.first = VEncodePointer(&_V10_Dpair_D1677, VPOINTER_PAIR);
  _V10_Dpair_D1678.rest = VNULL;
  _V10_Dpair_D1677.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1677.rest = VEncodePointer(&_V10_Dpair_D1674, VPOINTER_PAIR);
  _V10_Dpair_D1676.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1676.rest = VEncodePointer(&_V10_Dpair_D1675, VPOINTER_PAIR);
  _V10_Dpair_D1675.first = VEncodePointer(&_V10_Dpair_D1674, VPOINTER_PAIR);
  _V10_Dpair_D1675.rest = VNULL;
  _V10_Dpair_D1674.first = VEncodePointer(&_V10_Dpair_D1672, VPOINTER_PAIR);
  _V10_Dpair_D1674.rest = VEncodePointer(&_V10_Dpair_D1673, VPOINTER_PAIR);
  _V10_Dpair_D1673.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1673.rest = VEncodePointer(&_V10_Dpair_D1669, VPOINTER_PAIR);
  _V10_Dpair_D1672.first = _V0_Mx;
  _V10_Dpair_D1672.rest = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1671.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1671.rest = VEncodePointer(&_V10_Dpair_D1670, VPOINTER_PAIR);
  _V10_Dpair_D1670.first = VEncodePointer(&_V10_Dpair_D1669, VPOINTER_PAIR);
  _V10_Dpair_D1670.rest = VNULL;
  _V10_Dpair_D1669.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1669.rest = VEncodePointer(&_V10_Dpair_D1666, VPOINTER_PAIR);
  _V10_Dpair_D1668.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1668.rest = VEncodePointer(&_V10_Dpair_D1667, VPOINTER_PAIR);
  _V10_Dpair_D1667.first = VEncodePointer(&_V10_Dpair_D1666, VPOINTER_PAIR);
  _V10_Dpair_D1667.rest = VNULL;
  _V10_Dpair_D1666.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1666.rest = VEncodePointer(&_V10_Dpair_D1663, VPOINTER_PAIR);
  _V10_Dpair_D1665.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1665.rest = VEncodePointer(&_V10_Dpair_D1664, VPOINTER_PAIR);
  _V10_Dpair_D1664.first = VEncodePointer(&_V10_Dpair_D1663, VPOINTER_PAIR);
  _V10_Dpair_D1664.rest = VNULL;
  _V10_Dpair_D1663.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1663.rest = VEncodePointer(&_V10_Dpair_D1660, VPOINTER_PAIR);
  _V10_Dpair_D1662.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1662.rest = VEncodePointer(&_V10_Dpair_D1661, VPOINTER_PAIR);
  _V10_Dpair_D1661.first = VEncodePointer(&_V10_Dpair_D1660, VPOINTER_PAIR);
  _V10_Dpair_D1661.rest = VNULL;
  _V10_Dpair_D1660.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1660.rest = VEncodePointer(&_V10_Dpair_D1652, VPOINTER_PAIR);
  _V10_Dpair_D1659.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1659.rest = VEncodePointer(&_V10_Dpair_D1653, VPOINTER_PAIR);
  _V10_Dpair_D1658.first = _V0wasm;
  _V10_Dpair_D1658.rest = VEncodePointer(&_V10_Dpair_D1657, VPOINTER_PAIR);
  _V10_Dpair_D1657.first = _V0emscripten;
  _V10_Dpair_D1657.rest = VEncodePointer(&_V10_Dpair_D1656, VPOINTER_PAIR);
  _V10_Dpair_D1656.first = _V0compiled;
  _V10_Dpair_D1656.rest = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1655.first = _V0ilp32;
  _V10_Dpair_D1655.rest = VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR);
  _V10_Dpair_D1654.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1654.rest = VEncodePointer(&_V10_Dpair_D1653, VPOINTER_PAIR);
  _V10_Dpair_D1653.first = VEncodePointer(&_V10_Dpair_D1652, VPOINTER_PAIR);
  _V10_Dpair_D1653.rest = VNULL;
  _V10_Dpair_D1652.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1652.rest = VEncodePointer(&_V10_Dpair_D1649, VPOINTER_PAIR);
  _V10_Dpair_D1651.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1651.rest = VEncodePointer(&_V10_Dpair_D1650, VPOINTER_PAIR);
  _V10_Dpair_D1650.first = VEncodePointer(&_V10_Dpair_D1649, VPOINTER_PAIR);
  _V10_Dpair_D1650.rest = VNULL;
  _V10_Dpair_D1649.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1649.rest = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D1648.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1648.rest = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D1647.first = _V0windows;
  _V10_Dpair_D1647.rest = VEncodePointer(&_V10_Dpair_D1646, VPOINTER_PAIR);
  _V10_Dpair_D1646.first = _V0mingw;
  _V10_Dpair_D1646.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1645.first = _V0compiled;
  _V10_Dpair_D1645.rest = VEncodePointer(&_V10_Dpair_D1644, VPOINTER_PAIR);
  _V10_Dpair_D1644.first = _V0llp64;
  _V10_Dpair_D1644.rest = VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR);
  _V10_Dpair_D1643.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1643.rest = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D1642.first = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D1642.rest = VNULL;
  _V10_Dpair_D1641.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1641.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1640.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1640.rest = VEncodePointer(&_V10_Dpair_D1639, VPOINTER_PAIR);
  _V10_Dpair_D1639.first = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1639.rest = VNULL;
  _V10_Dpair_D1638.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1638.rest = VEncodePointer(&_V10_Dpair_D1627, VPOINTER_PAIR);
  _V10_Dpair_D1637.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1637.rest = VEncodePointer(&_V10_Dpair_D1628, VPOINTER_PAIR);
  _V10_Dpair_D1636.first = _V0posix;
  _V10_Dpair_D1636.rest = VEncodePointer(&_V10_Dpair_D1635, VPOINTER_PAIR);
  _V10_Dpair_D1635.first = _V0gnu__linux;
  _V10_Dpair_D1635.rest = VEncodePointer(&_V10_Dpair_D1634, VPOINTER_PAIR);
  _V10_Dpair_D1634.first = _V0gnuc;
  _V10_Dpair_D1634.rest = VEncodePointer(&_V10_Dpair_D1633, VPOINTER_PAIR);
  _V10_Dpair_D1633.first = _V0compiled;
  _V10_Dpair_D1633.rest = VEncodePointer(&_V10_Dpair_D1632, VPOINTER_PAIR);
  _V10_Dpair_D1632.first = _V0x86__64;
  _V10_Dpair_D1632.rest = VEncodePointer(&_V10_Dpair_D1631, VPOINTER_PAIR);
  _V10_Dpair_D1631.first = _V0lp64;
  _V10_Dpair_D1631.rest = VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR);
  _V10_Dpair_D1630.first = _V0little__endian;
  _V10_Dpair_D1630.rest = VNULL;
  _V10_Dpair_D1629.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1629.rest = VEncodePointer(&_V10_Dpair_D1628, VPOINTER_PAIR);
  _V10_Dpair_D1628.first = VEncodePointer(&_V10_Dpair_D1627, VPOINTER_PAIR);
  _V10_Dpair_D1628.rest = VNULL;
  _V10_Dpair_D1627.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1627.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D1626.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1626.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D1625.first = VEncodePointer(&_V10_Dpair_D1576, VPOINTER_PAIR);
  _V10_Dpair_D1625.rest = VEncodePointer(&_V10_Dpair_D1624, VPOINTER_PAIR);
  _V10_Dpair_D1624.first = VEncodePointer(&_V10_Dpair_D1579, VPOINTER_PAIR);
  _V10_Dpair_D1624.rest = VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR);
  _V10_Dpair_D1623.first = VEncodePointer(&_V10_Dpair_D1582, VPOINTER_PAIR);
  _V10_Dpair_D1623.rest = VEncodePointer(&_V10_Dpair_D1622, VPOINTER_PAIR);
  _V10_Dpair_D1622.first = VEncodePointer(&_V10_Dpair_D1585, VPOINTER_PAIR);
  _V10_Dpair_D1622.rest = VEncodePointer(&_V10_Dpair_D1621, VPOINTER_PAIR);
  _V10_Dpair_D1621.first = VEncodePointer(&_V10_Dpair_D1588, VPOINTER_PAIR);
  _V10_Dpair_D1621.rest = VEncodePointer(&_V10_Dpair_D1620, VPOINTER_PAIR);
  _V10_Dpair_D1620.first = VEncodePointer(&_V10_Dpair_D1591, VPOINTER_PAIR);
  _V10_Dpair_D1620.rest = VEncodePointer(&_V10_Dpair_D1619, VPOINTER_PAIR);
  _V10_Dpair_D1619.first = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1619.rest = VEncodePointer(&_V10_Dpair_D1618, VPOINTER_PAIR);
  _V10_Dpair_D1618.first = VEncodePointer(&_V10_Dpair_D1597, VPOINTER_PAIR);
  _V10_Dpair_D1618.rest = VEncodePointer(&_V10_Dpair_D1617, VPOINTER_PAIR);
  _V10_Dpair_D1617.first = VEncodePointer(&_V10_Dpair_D1600, VPOINTER_PAIR);
  _V10_Dpair_D1617.rest = VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR);
  _V10_Dpair_D1616.first = VEncodePointer(&_V10_Dpair_D1603, VPOINTER_PAIR);
  _V10_Dpair_D1616.rest = VEncodePointer(&_V10_Dpair_D1615, VPOINTER_PAIR);
  _V10_Dpair_D1615.first = VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR);
  _V10_Dpair_D1615.rest = VEncodePointer(&_V10_Dpair_D1614, VPOINTER_PAIR);
  _V10_Dpair_D1614.first = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1614.rest = VEncodePointer(&_V10_Dpair_D1613, VPOINTER_PAIR);
  _V10_Dpair_D1613.first = VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR);
  _V10_Dpair_D1613.rest = VNULL;
  _V10_Dpair_D1612.first = _V0hygiene;
  _V10_Dpair_D1612.rest = VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR);
  _V10_Dpair_D1611.first = VEncodeBool(false);
  _V10_Dpair_D1611.rest = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1610.first = _V0hygiene;
  _V10_Dpair_D1610.rest = VNULL;
  _V10_Dpair_D1609.first = _V0benchmark;
  _V10_Dpair_D1609.rest = VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR);
  _V10_Dpair_D1608.first = VEncodeBool(false);
  _V10_Dpair_D1608.rest = VEncodePointer(&_V10_Dpair_D1607, VPOINTER_PAIR);
  _V10_Dpair_D1607.first = _V0benchmark;
  _V10_Dpair_D1607.rest = VNULL;
  _V10_Dpair_D1606.first = _V0bytecode;
  _V10_Dpair_D1606.rest = VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR);
  _V10_Dpair_D1605.first = VEncodeBool(false);
  _V10_Dpair_D1605.rest = VEncodePointer(&_V10_Dpair_D1604, VPOINTER_PAIR);
  _V10_Dpair_D1604.first = _V0bytecode;
  _V10_Dpair_D1604.rest = VNULL;
  _V10_Dpair_D1603.first = _V0maketarget;
  _V10_Dpair_D1603.rest = VEncodePointer(&_V10_Dpair_D1602, VPOINTER_PAIR);
  _V10_Dpair_D1602.first = VEncodeBool(true);
  _V10_Dpair_D1602.rest = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1601.first = _V0maketarget;
  _V10_Dpair_D1601.rest = VNULL;
  _V10_Dpair_D1600.first = _V0makefile;
  _V10_Dpair_D1600.rest = VEncodePointer(&_V10_Dpair_D1599, VPOINTER_PAIR);
  _V10_Dpair_D1599.first = VEncodeBool(false);
  _V10_Dpair_D1599.rest = VEncodePointer(&_V10_Dpair_D1598, VPOINTER_PAIR);
  _V10_Dpair_D1598.first = _V0makefile;
  _V10_Dpair_D1598.rest = VNULL;
  _V10_Dpair_D1597.first = _V0keep__temps;
  _V10_Dpair_D1597.rest = VEncodePointer(&_V10_Dpair_D1596, VPOINTER_PAIR);
  _V10_Dpair_D1596.first = VEncodeBool(false);
  _V10_Dpair_D1596.rest = VEncodePointer(&_V10_Dpair_D1595, VPOINTER_PAIR);
  _V10_Dpair_D1595.first = _V0keep__temps;
  _V10_Dpair_D1595.rest = VNULL;
  _V10_Dpair_D1594.first = _V0version;
  _V10_Dpair_D1594.rest = VEncodePointer(&_V10_Dpair_D1593, VPOINTER_PAIR);
  _V10_Dpair_D1593.first = VEncodeBool(false);
  _V10_Dpair_D1593.rest = VEncodePointer(&_V10_Dpair_D1592, VPOINTER_PAIR);
  _V10_Dpair_D1592.first = _V0version;
  _V10_Dpair_D1592.rest = VNULL;
  _V10_Dpair_D1591.first = _V0cc;
  _V10_Dpair_D1591.rest = VEncodePointer(&_V10_Dpair_D1590, VPOINTER_PAIR);
  _V10_Dpair_D1590.first = VEncodeBool(true);
  _V10_Dpair_D1590.rest = VEncodePointer(&_V10_Dpair_D1589, VPOINTER_PAIR);
  _V10_Dpair_D1589.first = _V0cc;
  _V10_Dpair_D1589.rest = VNULL;
  _V10_Dpair_D1588.first = _V0main;
  _V10_Dpair_D1588.rest = VEncodePointer(&_V10_Dpair_D1587, VPOINTER_PAIR);
  _V10_Dpair_D1587.first = VEncodeBool(true);
  _V10_Dpair_D1587.rest = VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR);
  _V10_Dpair_D1586.first = _V0main;
  _V10_Dpair_D1586.rest = VNULL;
  _V10_Dpair_D1585.first = _V0platform;
  _V10_Dpair_D1585.rest = VEncodePointer(&_V10_Dpair_D1584, VPOINTER_PAIR);
  _V10_Dpair_D1584.first = VEncodeBool(true);
  _V10_Dpair_D1584.rest = VEncodePointer(&_V10_Dpair_D1583, VPOINTER_PAIR);
  _V10_Dpair_D1583.first = _V0platform;
  _V10_Dpair_D1583.rest = VNULL;
  _V10_Dpair_D1582.first = _V0api;
  _V10_Dpair_D1582.rest = VEncodePointer(&_V10_Dpair_D1581, VPOINTER_PAIR);
  _V10_Dpair_D1581.first = VEncodeBool(true);
  _V10_Dpair_D1581.rest = VEncodePointer(&_V10_Dpair_D1580, VPOINTER_PAIR);
  _V10_Dpair_D1580.first = _V0api;
  _V10_Dpair_D1580.rest = VNULL;
  _V10_Dpair_D1579.first = _V0help;
  _V10_Dpair_D1579.rest = VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR);
  _V10_Dpair_D1578.first = VEncodeBool(false);
  _V10_Dpair_D1578.rest = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V10_Dpair_D1577.first = _V0help;
  _V10_Dpair_D1577.rest = VNULL;
  _V10_Dpair_D1576.first = _V0shared;
  _V10_Dpair_D1576.rest = VEncodePointer(&_V10_Dpair_D1575, VPOINTER_PAIR);
  _V10_Dpair_D1575.first = VEncodeBool(false);
  _V10_Dpair_D1575.rest = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1574.first = _V0shared;
  _V10_Dpair_D1574.rest = VNULL;
  _V10_Dpair_D1572.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1572.rest = VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR);
  _V10_Dpair_D1567.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1567.rest = VEncodePointer(&_V10_Dpair_D1566, VPOINTER_PAIR);
  _V10_Dpair_D1566.first = VEncodePointer(&_V10_Dpair_D1565, VPOINTER_PAIR);
  _V10_Dpair_D1566.rest = VNULL;
  _V10_Dpair_D1565.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1565.rest = VEncodePointer(&_V10_Dpair_D1562, VPOINTER_PAIR);
  _V10_Dpair_D1564.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1564.rest = VEncodePointer(&_V10_Dpair_D1563, VPOINTER_PAIR);
  _V10_Dpair_D1563.first = VEncodePointer(&_V10_Dpair_D1562, VPOINTER_PAIR);
  _V10_Dpair_D1563.rest = VNULL;
  _V10_Dpair_D1562.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1562.rest = VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR);
  _V10_Dpair_D1561.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1561.rest = VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR);
  _V10_Dpair_D1560.first = VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR);
  _V10_Dpair_D1560.rest = VNULL;
  _V10_Dpair_D1559.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1559.rest = VEncodePointer(&_V10_Dpair_D1556, VPOINTER_PAIR);
  _V10_Dpair_D1558.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1558.rest = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1557.first = VEncodePointer(&_V10_Dpair_D1556, VPOINTER_PAIR);
  _V10_Dpair_D1557.rest = VNULL;
  _V10_Dpair_D1556.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1556.rest = VEncodePointer(&_V10_Dpair_D1551, VPOINTER_PAIR);
  _V10_Dpair_D1555.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1555.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1553.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1553.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1552.first = VEncodePointer(&_V10_Dpair_D1551, VPOINTER_PAIR);
  _V10_Dpair_D1552.rest = VNULL;
  _V10_Dpair_D1551.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1551.rest = VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR);
  _V10_Dpair_D1550.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1550.rest = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1549.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1549.rest = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1548.first = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1548.rest = VNULL;
  _V10_Dpair_D1547.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1547.rest = VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR);
  _V10_Dpair_D1546.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1546.rest = VEncodePointer(&_V10_Dpair_D1545, VPOINTER_PAIR);
  _V10_Dpair_D1545.first = VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR);
  _V10_Dpair_D1545.rest = VNULL;
  _V10_Dpair_D1544.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1544.rest = VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR);
  _V10_Dpair_D1543.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1543.rest = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1542.first = VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR);
  _V10_Dpair_D1542.rest = VNULL;
  _V10_Dpair_D1541.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1541.rest = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1540.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1540.rest = VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR);
  _V10_Dpair_D1538.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1538.rest = VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR);
  _V10_Dpair_D1537.first = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1537.rest = VNULL;
  _V10_Dpair_D1536.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1536.rest = VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR);
  _V10_Dpair_D1535.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1535.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1534.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1534.rest = VEncodePointer(&_V10_Dpair_D1533, VPOINTER_PAIR);
  _V10_Dpair_D1533.first = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1533.rest = VNULL;
  _V10_Dpair_D1532.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1532.rest = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1531.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1531.rest = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1530.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1530.rest = VNULL;
  _V10_Dpair_D1529.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1529.rest = VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR);
  _V10_Dpair_D1528.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1528.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1527.first = VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR);
  _V10_Dpair_D1527.rest = VNULL;
  _V10_Dpair_D1526.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1526.rest = VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR);
  _V10_Dpair_D1525.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1525.rest = VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR);
  _V10_Dpair_D1523.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1523.rest = VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR);
  _V10_Dpair_D1522.first = VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR);
  _V10_Dpair_D1522.rest = VNULL;
  _V10_Dpair_D1521.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1521.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1520.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1520.rest = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1519.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1519.rest = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1518.first = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1518.rest = VNULL;
  _V10_Dpair_D1517.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1517.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1516.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1516.rest = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1515.first = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1515.rest = VNULL;
  _V10_Dpair_D1514.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1514.rest = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1513.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1513.rest = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1511.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1511.rest = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1510.first = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1510.rest = VNULL;
  _V10_Dpair_D1509.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1509.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1508.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1508.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1507.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1507.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1506.first = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1506.rest = VNULL;
  _V10_Dpair_D1505.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1505.rest = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1504.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1504.rest = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1502.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1502.rest = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1501.first = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1501.rest = VNULL;
  _V10_Dpair_D1500.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1500.rest = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1499.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1499.rest = VEncodePointer(&_V10_Dpair_D1498, VPOINTER_PAIR);
  _V10_Dpair_D1498.first = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1498.rest = VNULL;
  _V10_Dpair_D1497.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1497.rest = VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR);
  _V10_Dpair_D1496.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1496.rest = VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR);
  _V10_Dpair_D1495.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1495.rest = VEncodePointer(&_V10_Dpair_D1482, VPOINTER_PAIR);
  _V10_Dpair_D1491.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1491.rest = VEncodePointer(&_V10_Dpair_D1490, VPOINTER_PAIR);
  _V10_Dpair_D1490.first = VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR);
  _V10_Dpair_D1490.rest = VNULL;
  _V10_Dpair_D1489.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1489.rest = VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR);
  _V10_Dpair_D1487.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1487.rest = VEncodePointer(&_V10_Dpair_D1486, VPOINTER_PAIR);
  _V10_Dpair_D1486.first = VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR);
  _V10_Dpair_D1486.rest = VNULL;
  _V10_Dpair_D1485.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1485.rest = VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR);
  _V10_Dpair_D1483.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1483.rest = VEncodePointer(&_V10_Dpair_D1482, VPOINTER_PAIR);
  _V10_Dpair_D1482.first = VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR);
  _V10_Dpair_D1482.rest = VNULL;
  _V10_Dpair_D1481.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1481.rest = VEncodePointer(&_V10_Dpair_D1478, VPOINTER_PAIR);
  _V10_Dpair_D1480.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1480.rest = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1479.first = VEncodePointer(&_V10_Dpair_D1478, VPOINTER_PAIR);
  _V10_Dpair_D1479.rest = VNULL;
  _V10_Dpair_D1478.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1478.rest = VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR);
  _V10_Dpair_D1477.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1477.rest = VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR);
  _V10_Dpair_D1476.first = VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR);
  _V10_Dpair_D1476.rest = VNULL;
  _V10_Dpair_D1475.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1475.rest = VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR);
  _V10_Dpair_D1474.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1474.rest = VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR);
  _V10_Dpair_D1473.first = VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR);
  _V10_Dpair_D1473.rest = VNULL;
  _V10_Dpair_D1472.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1472.rest = VEncodePointer(&_V10_Dpair_D1469, VPOINTER_PAIR);
  _V10_Dpair_D1471.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1471.rest = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1470.first = VEncodePointer(&_V10_Dpair_D1469, VPOINTER_PAIR);
  _V10_Dpair_D1470.rest = VNULL;
  _V10_Dpair_D1469.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1469.rest = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1468.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1468.rest = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1467.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1467.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1465.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1465.rest = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1464.first = VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR);
  _V10_Dpair_D1464.rest = VNULL;
  _V10_Dpair_D1463.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1463.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1462.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1462.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1461.first = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1461.rest = VNULL;
  _V10_Dpair_D1460.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1460.rest = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1459.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1458.rest = VNULL;
  _V10_Dpair_D1457.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1455.rest = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1454.first = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1454.rest = VNULL;
  _V10_Dpair_D1453.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1453.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1452.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1451.rest = VNULL;
  _V10_Dpair_D1450.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1449.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1449.rest = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1448.first = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1448.rest = VNULL;
  _V10_Dpair_D1447.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1447.rest = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1446.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1446.rest = VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR);
  _V10_Dpair_D1445.first = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1445.rest = VNULL;
  _V10_Dpair_D1444.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1444.rest = VEncodePointer(&_V10_Dpair_D1440, VPOINTER_PAIR);
  _V10_Dpair_D1443.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1443.rest = VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR);
  _V10_Dpair_D1442.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1442.rest = VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR);
  _V10_Dpair_D1441.first = VEncodePointer(&_V10_Dpair_D1440, VPOINTER_PAIR);
  _V10_Dpair_D1441.rest = VNULL;
  _V10_Dpair_D1440.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1440.rest = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1439.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1439.rest = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1438.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1438.rest = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1437.first = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1437.rest = VNULL;
  _V10_Dpair_D1436.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1436.rest = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1435.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1435.rest = VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1433.rest = VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR);
  _V10_Dpair_D1432.first = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1432.rest = VNULL;
  _V10_Dpair_D1431.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1431.rest = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1430.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1430.rest = VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR);
  _V10_Dpair_D1429.first = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1429.rest = VNULL;
  _V10_Dpair_D1428.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1428.rest = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1427.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1427.rest = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1426.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1426.rest = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1425.first = VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR);
  _V10_Dpair_D1425.rest = VNULL;
  _V10_Dpair_D1424.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1424.rest = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1423.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1423.rest = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1422.first = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1422.rest = VNULL;
  _V10_Dpair_D1421.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1421.rest = VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR);
  _V10_Dpair_D1420.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1420.rest = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1419.first = VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR);
  _V10_Dpair_D1419.rest = VNULL;
  _V10_Dpair_D1418.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1418.rest = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1417.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1417.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1416.first = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1416.rest = VNULL;
  _V10_Dpair_D1415.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1415.rest = VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR);
  _V10_Dpair_D1414.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1414.rest = VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR);
  _V10_Dpair_D1413.first = VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR);
  _V10_Dpair_D1413.rest = VNULL;
  _V10_Dpair_D1412.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1412.rest = VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR);
  _V10_Dpair_D1411.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1411.rest = VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR);
  _V10_Dpair_D1405.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1405.rest = VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR);
  _V10_Dpair_D1404.first = VEncodePointer(&_V10_Dpair_D1403, VPOINTER_PAIR);
  _V10_Dpair_D1404.rest = VNULL;
  _V10_Dpair_D1403.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1403.rest = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1402.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1402.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1401.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1401.rest = VNULL;
  _V10_Dpair_D1400.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1400.rest = VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR);
  _V10_Dpair_D1399.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1399.rest = VEncodePointer(&_V10_Dpair_D1398, VPOINTER_PAIR);
  _V10_Dpair_D1398.first = VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR);
  _V10_Dpair_D1398.rest = VNULL;
  _V10_Dpair_D1397.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1397.rest = VEncodePointer(&_V10_Dpair_D1394, VPOINTER_PAIR);
  _V10_Dpair_D1396.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1396.rest = VEncodePointer(&_V10_Dpair_D1395, VPOINTER_PAIR);
  _V10_Dpair_D1395.first = VEncodePointer(&_V10_Dpair_D1394, VPOINTER_PAIR);
  _V10_Dpair_D1395.rest = VNULL;
  _V10_Dpair_D1394.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1394.rest = VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR);
  _V10_Dpair_D1393.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1393.rest = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1392.first = VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR);
  _V10_Dpair_D1392.rest = VNULL;
  _V10_Dpair_D1391.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1391.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1390.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1390.rest = VEncodePointer(&_V10_Dpair_D1389, VPOINTER_PAIR);
  _V10_Dpair_D1389.first = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1389.rest = VNULL;
  _V10_Dpair_D1388.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1388.rest = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1387.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1387.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1385.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1385.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1384.first = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1384.rest = VNULL;
  _V10_Dpair_D1383.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1383.rest = VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR);
  _V10_Dpair_D1382.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1382.rest = VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR);
  _V10_Dpair_D1381.first = VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR);
  _V10_Dpair_D1381.rest = VNULL;
  _V10_Dpair_D1380.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1380.rest = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1379.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1379.rest = VEncodePointer(&_V10_Dpair_D1371, VPOINTER_PAIR);
  _V10_Dpair_D1378.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1378.rest = VEncodePointer(&_V10_Dpair_D1377, VPOINTER_PAIR);
  _V10_Dpair_D1377.first = VEncodePointer(&_V10_Dpair_D1376, VPOINTER_PAIR);
  _V10_Dpair_D1377.rest = VNULL;
  _V10_Dpair_D1376.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1376.rest = VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR);
  _V10_Dpair_D1375.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1375.rest = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1374.first = VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR);
  _V10_Dpair_D1374.rest = VNULL;
  _V10_Dpair_D1373.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1373.rest = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1372.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1372.rest = VEncodePointer(&_V10_Dpair_D1371, VPOINTER_PAIR);
  _V10_Dpair_D1371.first = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1371.rest = VNULL;
  _V10_Dpair_D1370.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1370.rest = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1369.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1369.rest = VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR);
  _V10_Dpair_D1368.first = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1368.rest = VNULL;
  _V10_Dpair_D1367.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1367.rest = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1366.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1366.rest = VEncodePointer(&_V10_Dpair_D1365, VPOINTER_PAIR);
  _V10_Dpair_D1365.first = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1365.rest = VNULL;
  _V10_Dpair_D1364.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1364.rest = VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR);
  _V10_Dpair_D1363.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1363.rest = VEncodePointer(&_V10_Dpair_D1360, VPOINTER_PAIR);
  _V10_Dpair_D1361.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1361.rest = VEncodePointer(&_V10_Dpair_D1360, VPOINTER_PAIR);
  _V10_Dpair_D1360.first = VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR);
  _V10_Dpair_D1360.rest = VNULL;
  _V10_Dpair_D1359.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1359.rest = VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR);
  _V10_Dpair_D1358.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1358.rest = VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR);
  _V10_Dpair_D1357.first = VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR);
  _V10_Dpair_D1357.rest = VNULL;
  _V10_Dpair_D1356.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1356.rest = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1355.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1355.rest = VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR);
  _V10_Dpair_D1354.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1354.rest = VEncodePointer(&_V10_Dpair_D1353, VPOINTER_PAIR);
  _V10_Dpair_D1353.first = VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR);
  _V10_Dpair_D1353.rest = VNULL;
  _V10_Dpair_D1352.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1352.rest = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1351.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1351.rest = VEncodePointer(&_V10_Dpair_D1350, VPOINTER_PAIR);
  _V10_Dpair_D1350.first = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1350.rest = VNULL;
  _V10_Dpair_D1349.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1349.rest = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1348.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1348.rest = VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR);
  _V10_Dpair_D1347.first = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1347.rest = VNULL;
  _V10_Dpair_D1346.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1346.rest = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1345.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1345.rest = VEncodePointer(&_V10_Dpair_D1344, VPOINTER_PAIR);
  _V10_Dpair_D1344.first = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1344.rest = VNULL;
  _V10_Dpair_D1343.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1343.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1342.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1342.rest = VEncodePointer(&_V10_Dpair_D1341, VPOINTER_PAIR);
  _V10_Dpair_D1341.first = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1341.rest = VNULL;
  _V10_Dpair_D1340.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1340.rest = VEncodePointer(&_V10_Dpair_D1337, VPOINTER_PAIR);
  _V10_Dpair_D1339.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1339.rest = VEncodePointer(&_V10_Dpair_D1338, VPOINTER_PAIR);
  _V10_Dpair_D1338.first = VEncodePointer(&_V10_Dpair_D1337, VPOINTER_PAIR);
  _V10_Dpair_D1338.rest = VNULL;
  _V10_Dpair_D1337.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1337.rest = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1336.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1336.rest = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1335.first = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1335.rest = VNULL;
  _V10_Dpair_D1334.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1334.rest = VEncodePointer(&_V10_Dpair_D1331, VPOINTER_PAIR);
  _V10_Dpair_D1333.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1333.rest = VEncodePointer(&_V10_Dpair_D1332, VPOINTER_PAIR);
  _V10_Dpair_D1332.first = VEncodePointer(&_V10_Dpair_D1331, VPOINTER_PAIR);
  _V10_Dpair_D1332.rest = VNULL;
  _V10_Dpair_D1331.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1331.rest = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1330.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1330.rest = VEncodePointer(&_V10_Dpair_D1329, VPOINTER_PAIR);
  _V10_Dpair_D1329.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1329.rest = VNULL;
  _V10_Dpair_D1328.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1328.rest = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1327.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1327.rest = VEncodePointer(&_V10_Dpair_D1326, VPOINTER_PAIR);
  _V10_Dpair_D1326.first = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1326.rest = VNULL;
  _V10_Dpair_D1325.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1325.rest = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1324.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1324.rest = VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR);
  _V10_Dpair_D1323.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1323.rest = VNULL;
  _V10_Dpair_D1322.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1322.rest = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1321.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1321.rest = VEncodePointer(&_V10_Dpair_D1320, VPOINTER_PAIR);
  _V10_Dpair_D1320.first = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1320.rest = VNULL;
  _V10_Dpair_D1319.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1319.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1318.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1318.rest = VEncodePointer(&_V10_Dpair_D1317, VPOINTER_PAIR);
  _V10_Dpair_D1317.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1317.rest = VNULL;
  _V10_Dpair_D1316.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1316.rest = VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR);
  _V10_Dpair_D1315.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1315.rest = VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR);
  _V10_Dpair_D1314.first = VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR);
  _V10_Dpair_D1314.rest = VNULL;
  _V10_Dpair_D1313.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1313.rest = VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR);
  _V10_Dpair_D1312.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1312.rest = VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR);
  _V10_Dpair_D1310.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1310.rest = VEncodePointer(&_V10_Dpair_D1309, VPOINTER_PAIR);
  _V10_Dpair_D1309.first = VEncodePointer(&_V10_Dpair_D1308, VPOINTER_PAIR);
  _V10_Dpair_D1309.rest = VNULL;
  _V10_Dpair_D1308.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1308.rest = VEncodePointer(&_V10_Dpair_D1305, VPOINTER_PAIR);
  _V10_Dpair_D1307.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1307.rest = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D1306.first = VEncodePointer(&_V10_Dpair_D1305, VPOINTER_PAIR);
  _V10_Dpair_D1306.rest = VNULL;
  _V10_Dpair_D1305.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1305.rest = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1304.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1304.rest = VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR);
  _V10_Dpair_D1303.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1303.rest = VEncodePointer(&_V10_Dpair_D1302, VPOINTER_PAIR);
  _V10_Dpair_D1302.first = VEncodePointer(&_V10_Dpair_D1301, VPOINTER_PAIR);
  _V10_Dpair_D1302.rest = VNULL;
  _V10_Dpair_D1301.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1301.rest = VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR);
  _V10_Dpair_D1300.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1300.rest = VEncodePointer(&_V10_Dpair_D1299, VPOINTER_PAIR);
  _V10_Dpair_D1299.first = VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR);
  _V10_Dpair_D1299.rest = VNULL;
  _V10_Dpair_D1298.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1298.rest = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1297.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1297.rest = VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR);
  _V10_Dpair_D1296.first = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1296.rest = VNULL;
  _V10_Dpair_D1295.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1295.rest = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1294.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1294.rest = VEncodePointer(&_V10_Dpair_D1293, VPOINTER_PAIR);
  _V10_Dpair_D1293.first = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1293.rest = VNULL;
  _V10_Dpair_D1292.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1292.rest = VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR);
  _V10_Dpair_D1291.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1291.rest = VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR);
  _V10_Dpair_D1290.first = VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR);
  _V10_Dpair_D1290.rest = VNULL;
  _V10_Dpair_D1289.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1289.rest = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1288.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1288.rest = VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR);
  _V10_Dpair_D1286.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1286.rest = VEncodePointer(&_V10_Dpair_D1285, VPOINTER_PAIR);
  _V10_Dpair_D1285.first = VEncodePointer(&_V10_Dpair_D1284, VPOINTER_PAIR);
  _V10_Dpair_D1285.rest = VNULL;
  _V10_Dpair_D1284.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1284.rest = VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR);
  _V10_Dpair_D1283.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1283.rest = VEncodePointer(&_V10_Dpair_D1282, VPOINTER_PAIR);
  _V10_Dpair_D1282.first = VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR);
  _V10_Dpair_D1282.rest = VNULL;
  _V10_Dpair_D1281.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1281.rest = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1280.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1280.rest = VEncodePointer(&_V10_Dpair_D1275, VPOINTER_PAIR);
  _V10_Dpair_D1279.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1279.rest = VEncodePointer(&_V10_Dpair_D1278, VPOINTER_PAIR);
  _V10_Dpair_D1278.first = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1278.rest = VNULL;
  _V10_Dpair_D1277.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1277.rest = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1276.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1276.rest = VEncodePointer(&_V10_Dpair_D1275, VPOINTER_PAIR);
  _V10_Dpair_D1275.first = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1275.rest = VNULL;
  _V10_Dpair_D1274.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1274.rest = VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR);
  _V10_Dpair_D1273.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1273.rest = VEncodePointer(&_V10_Dpair_D1272, VPOINTER_PAIR);
  _V10_Dpair_D1272.first = VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR);
  _V10_Dpair_D1272.rest = VNULL;
  _V10_Dpair_D1271.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1271.rest = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1270.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1270.rest = VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR);
  _V10_Dpair_D1269.first = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1269.rest = VNULL;
  _V10_Dpair_D1268.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1268.rest = VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR);
  _V10_Dpair_D1267.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1267.rest = VEncodePointer(&_V10_Dpair_D1259, VPOINTER_PAIR);
  _V10_Dpair_D1266.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1266.rest = VEncodePointer(&_V10_Dpair_D1265, VPOINTER_PAIR);
  _V10_Dpair_D1265.first = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1265.rest = VNULL;
  _V10_Dpair_D1264.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1264.rest = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1263.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1263.rest = VEncodePointer(&_V10_Dpair_D1262, VPOINTER_PAIR);
  _V10_Dpair_D1262.first = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1262.rest = VNULL;
  _V10_Dpair_D1261.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1261.rest = VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR);
  _V10_Dpair_D1260.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1260.rest = VEncodePointer(&_V10_Dpair_D1259, VPOINTER_PAIR);
  _V10_Dpair_D1259.first = VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR);
  _V10_Dpair_D1259.rest = VNULL;
  _V10_Dpair_D1258.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1258.rest = VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR);
  _V10_Dpair_D1257.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1257.rest = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1256.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1256.rest = VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR);
  _V10_Dpair_D1255.first = VEncodePointer(&_V10_Dpair_D1254, VPOINTER_PAIR);
  _V10_Dpair_D1255.rest = VNULL;
  _V10_Dpair_D1254.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1254.rest = VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR);
  _V10_Dpair_D1253.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1253.rest = VEncodePointer(&_V10_Dpair_D1252, VPOINTER_PAIR);
  _V10_Dpair_D1252.first = VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR);
  _V10_Dpair_D1252.rest = VNULL;
  _V10_Dpair_D1251.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1251.rest = VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR);
  _V10_Dpair_D1250.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1250.rest = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1249.first = VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR);
  _V10_Dpair_D1249.rest = VNULL;
  _V10_Dpair_D1248.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1248.rest = VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR);
  _V10_Dpair_D1247.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1247.rest = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1246.first = VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR);
  _V10_Dpair_D1246.rest = VNULL;
  _V10_Dpair_D1245.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1245.rest = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1243.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1243.rest = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VNULL;
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1240.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1240.rest = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1239.first = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1239.rest = VNULL;
  _V10_Dpair_D1238.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1238.rest = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1237.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1237.rest = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1236.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1236.rest = VNULL;
  _V10_Dpair_D1235.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1235.rest = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1234.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1234.rest = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1233.first = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1233.rest = VNULL;
  _V10_Dpair_D1232.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1232.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1231.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1231.rest = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1230.first = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1230.rest = VNULL;
  _V10_Dpair_D1229.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1229.rest = VEncodePointer(&_V10_Dpair_D1226, VPOINTER_PAIR);
  _V10_Dpair_D1228.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1228.rest = VEncodePointer(&_V10_Dpair_D1227, VPOINTER_PAIR);
  _V10_Dpair_D1227.first = VEncodePointer(&_V10_Dpair_D1226, VPOINTER_PAIR);
  _V10_Dpair_D1227.rest = VNULL;
  _V10_Dpair_D1226.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1226.rest = VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR);
  _V10_Dpair_D1225.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1225.rest = VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR);
  _V10_Dpair_D1220.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1220.rest = VEncodePointer(&_V10_Dpair_D1219, VPOINTER_PAIR);
  _V10_Dpair_D1219.first = VEncodePointer(&_V10_Dpair_D1218, VPOINTER_PAIR);
  _V10_Dpair_D1219.rest = VNULL;
  _V10_Dpair_D1218.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1218.rest = VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR);
  _V10_Dpair_D1217.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1217.rest = VEncodePointer(&_V10_Dpair_D1216, VPOINTER_PAIR);
  _V10_Dpair_D1216.first = VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR);
  _V10_Dpair_D1216.rest = VNULL;
  _V10_Dpair_D1215.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1215.rest = VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR);
  _V10_Dpair_D1214.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1214.rest = VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR);
  _V10_Dpair_D1212.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1212.rest = VEncodePointer(&_V10_Dpair_D1211, VPOINTER_PAIR);
  _V10_Dpair_D1211.first = VEncodePointer(&_V10_Dpair_D1210, VPOINTER_PAIR);
  _V10_Dpair_D1211.rest = VNULL;
  _V10_Dpair_D1210.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1210.rest = VEncodePointer(&_V10_Dpair_D1207, VPOINTER_PAIR);
  _V10_Dpair_D1209.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1209.rest = VEncodePointer(&_V10_Dpair_D1208, VPOINTER_PAIR);
  _V10_Dpair_D1208.first = VEncodePointer(&_V10_Dpair_D1207, VPOINTER_PAIR);
  _V10_Dpair_D1208.rest = VNULL;
  _V10_Dpair_D1207.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1207.rest = VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR);
  _V10_Dpair_D1206.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1206.rest = VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR);
  _V10_Dpair_D1205.first = VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR);
  _V10_Dpair_D1205.rest = VNULL;
  _V10_Dpair_D1204.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1204.rest = VEncodePointer(&_V10_Dpair_D1200, VPOINTER_PAIR);
  _V10_Dpair_D1203.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1203.rest = VEncodePointer(&_V10_Dpair_D1201, VPOINTER_PAIR);
  _V10_Dpair_D1202.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1202.rest = VEncodePointer(&_V10_Dpair_D1201, VPOINTER_PAIR);
  _V10_Dpair_D1201.first = VEncodePointer(&_V10_Dpair_D1200, VPOINTER_PAIR);
  _V10_Dpair_D1201.rest = VNULL;
  _V10_Dpair_D1200.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1200.rest = VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR);
  _V10_Dpair_D1199.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1199.rest = VEncodePointer(&_V10_Dpair_D1198, VPOINTER_PAIR);
  _V10_Dpair_D1198.first = VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR);
  _V10_Dpair_D1198.rest = VNULL;
  _V10_Dpair_D1197.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1197.rest = VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR);
  _V10_Dpair_D1196.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1196.rest = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1195.first = VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR);
  _V10_Dpair_D1195.rest = VNULL;
  _V10_Dpair_D1194.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1194.rest = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1193.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1193.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1190.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1190.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1189.first = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1189.rest = VNULL;
  _V10_Dpair_D1188.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1188.rest = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1187.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1187.rest = VEncodePointer(&_V10_Dpair_D1186, VPOINTER_PAIR);
  _V10_Dpair_D1186.first = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1186.rest = VNULL;
  _V10_Dpair_D1185.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1185.rest = VEncodePointer(&_V10_Dpair_D1182, VPOINTER_PAIR);
  _V10_Dpair_D1184.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1184.rest = VEncodePointer(&_V10_Dpair_D1183, VPOINTER_PAIR);
  _V10_Dpair_D1183.first = VEncodePointer(&_V10_Dpair_D1182, VPOINTER_PAIR);
  _V10_Dpair_D1183.rest = VNULL;
  _V10_Dpair_D1182.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1182.rest = VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR);
  _V10_Dpair_D1181.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1181.rest = VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR);
  _V10_Dpair_D1180.first = VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR);
  _V10_Dpair_D1180.rest = VNULL;
  _V10_Dpair_D1179.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1179.rest = VEncodePointer(&_V10_Dpair_D1176, VPOINTER_PAIR);
  _V10_Dpair_D1178.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1178.rest = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1177.first = VEncodePointer(&_V10_Dpair_D1176, VPOINTER_PAIR);
  _V10_Dpair_D1177.rest = VNULL;
  _V10_Dpair_D1176.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1176.rest = VEncodePointer(&_V10_Dpair_D1173, VPOINTER_PAIR);
  _V10_Dpair_D1175.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1175.rest = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1174.first = VEncodePointer(&_V10_Dpair_D1173, VPOINTER_PAIR);
  _V10_Dpair_D1174.rest = VNULL;
  _V10_Dpair_D1173.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1173.rest = VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR);
  _V10_Dpair_D1172.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1172.rest = VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR);
  _V10_Dpair_D1171.first = VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR);
  _V10_Dpair_D1171.rest = VNULL;
  _V10_Dpair_D1170.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1170.rest = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1169.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1169.rest = VEncodePointer(&_V10_Dpair_D1168, VPOINTER_PAIR);
  _V10_Dpair_D1168.first = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1168.rest = VNULL;
  _V10_Dpair_D1167.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1167.rest = VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR);
  _V10_Dpair_D1166.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1166.rest = VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR);
  _V10_Dpair_D1165.first = VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR);
  _V10_Dpair_D1165.rest = VNULL;
  _V10_Dpair_D1164.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1164.rest = VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR);
  _V10_Dpair_D1163.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1163.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1162.first = VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR);
  _V10_Dpair_D1162.rest = VNULL;
  _V10_Dpair_D1161.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1161.rest = VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR);
  _V10_Dpair_D1160.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1160.rest = VEncodePointer(&_V10_Dpair_D1159, VPOINTER_PAIR);
  _V10_Dpair_D1159.first = VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR);
  _V10_Dpair_D1159.rest = VNULL;
  _V10_Dpair_D1158.first = VEncodePointer(&_V10_Dpair_D1152, VPOINTER_PAIR);
  _V10_Dpair_D1158.rest = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1157.first = VEncodePointer(&_V10_Dpair_D1154, VPOINTER_PAIR);
  _V10_Dpair_D1157.rest = VEncodePointer(&_V10_Dpair_D1156, VPOINTER_PAIR);
  _V10_Dpair_D1156.first = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1156.rest = VNULL;
  _V10_Dpair_D1155.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1155.rest = VEncodePointer(&_V10_Dpair_D1149, VPOINTER_PAIR);
  _V10_Dpair_D1154.first = VEncodeBool(false);
  _V10_Dpair_D1154.rest = VEncodePointer(&_V10_Dpair_D1153, VPOINTER_PAIR);
  _V10_Dpair_D1153.first = VEncodePointer(&_V10_Dpair_D1152, VPOINTER_PAIR);
  _V10_Dpair_D1153.rest = VNULL;
  _V10_Dpair_D1152.first = _V0x_D51;
  _V10_Dpair_D1152.rest = VNULL;
  _V10_Dpair_D1151.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1151.rest = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1150.first = VEncodePointer(&_V10_Dpair_D1149, VPOINTER_PAIR);
  _V10_Dpair_D1150.rest = VNULL;
  _V10_Dpair_D1149.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1149.rest = VEncodePointer(&_V10_Dpair_D1146, VPOINTER_PAIR);
  _V10_Dpair_D1148.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1148.rest = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1147.first = VEncodePointer(&_V10_Dpair_D1146, VPOINTER_PAIR);
  _V10_Dpair_D1147.rest = VNULL;
  _V10_Dpair_D1146.first = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D1146.rest = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1145.first = VEncodePointer(&_V10_Dpair_D1142, VPOINTER_PAIR);
  _V10_Dpair_D1145.rest = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1144.first = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1144.rest = VNULL;
  _V10_Dpair_D1143.first = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D1143.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D1142.first = VEncodePointer(&_V10_Dpair_D1140, VPOINTER_PAIR);
  _V10_Dpair_D1142.rest = VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR);
  _V10_Dpair_D1141.first = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D1141.rest = VNULL;
  _V10_Dpair_D1140.first = _V10_Dloop_D52;
  _V10_Dpair_D1140.rest = VNULL;
  _V10_Dpair_D1138.first = VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR);
  _V10_Dpair_D1138.rest = VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR);
  _V10_Dpair_D1137.first = VEncodeBool(false);
  _V10_Dpair_D1137.rest = VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR);
  _V10_Dpair_D1136.first = VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR);
  _V10_Dpair_D1136.rest = VNULL;
  _V10_Dpair_D1135.first = _V0ret_D45;
  _V10_Dpair_D1135.rest = VNULL;
  _V10_Dpair_D1133.first = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D1133.rest = VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR);
  _V10_Dpair_D1132.first = VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR);
  _V10_Dpair_D1132.rest = VNULL;
  _V10_Dpair_D1131.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1131.rest = VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR);
  _V10_Dpair_D1130.first = VEncodeBool(false);
  _V10_Dpair_D1130.rest = VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR);
  _V10_Dpair_D1129.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1129.rest = VNULL;
  _V10_Dpair_D1128.first = _V0_Mk;
  _V10_Dpair_D1128.rest = VEncodePointer(&_V10_Dpair_D1127, VPOINTER_PAIR);
  _V10_Dpair_D1127.first = _V0e;
  _V10_Dpair_D1127.rest = VNULL;
  _V10_Dpair_D1126.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1126.rest = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1125.first = VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR);
  _V10_Dpair_D1125.rest = VNULL;
  _V10_Dpair_D1124.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1124.rest = VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR);
  _V10_Dpair_D1123.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1123.rest = VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR);
  _V10_Dpair_D1122.first = VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR);
  _V10_Dpair_D1122.rest = VNULL;
  _V10_Dpair_D1121.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1121.rest = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1120.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1120.rest = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1119.first = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1119.rest = VNULL;
  _V10_Dpair_D1118.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1118.rest = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1117.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1117.rest = VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR);
  _V10_Dpair_D1116.first = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1116.rest = VNULL;
  _V10_Dpair_D1115.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1115.rest = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1114.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1114.rest = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1113.first = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1113.rest = VNULL;
  _V10_Dpair_D1112.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1112.rest = VEncodePointer(&_V10_Dpair_D1109, VPOINTER_PAIR);
  _V10_Dpair_D1111.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1111.rest = VEncodePointer(&_V10_Dpair_D1110, VPOINTER_PAIR);
  _V10_Dpair_D1110.first = VEncodePointer(&_V10_Dpair_D1109, VPOINTER_PAIR);
  _V10_Dpair_D1110.rest = VNULL;
  _V10_Dpair_D1109.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1109.rest = VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR);
  _V10_Dpair_D1108.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1108.rest = VEncodePointer(&_V10_Dpair_D1107, VPOINTER_PAIR);
  _V10_Dpair_D1107.first = VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR);
  _V10_Dpair_D1107.rest = VNULL;
  _V10_Dpair_D1106.first = VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR);
  _V10_Dpair_D1106.rest = VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR);
  _V10_Dpair_D1105.first = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1105.rest = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1104.first = VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR);
  _V10_Dpair_D1104.rest = VNULL;
  _V10_Dpair_D1103.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1103.rest = VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR);
  _V10_Dpair_D1102.first = VEncodeBool(false);
  _V10_Dpair_D1102.rest = VEncodePointer(&_V10_Dpair_D1101, VPOINTER_PAIR);
  _V10_Dpair_D1101.first = VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR);
  _V10_Dpair_D1101.rest = VNULL;
  _V10_Dpair_D1100.first = _V0keyval_D44;
  _V10_Dpair_D1100.rest = VNULL;
  _V10_Dpair_D1099.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1099.rest = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1098.first = VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR);
  _V10_Dpair_D1098.rest = VNULL;
  _V10_Dpair_D1097.first = VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR);
  _V10_Dpair_D1097.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D1096.first = VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR);
  _V10_Dpair_D1096.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D1095.first = VEncodeBool(false);
  _V10_Dpair_D1095.rest = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1094.first = VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR);
  _V10_Dpair_D1094.rest = VNULL;
  _V10_Dpair_D1093.first = _V0_Mk;
  _V10_Dpair_D1093.rest = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1092.first = _V0err;
  _V10_Dpair_D1092.rest = VNULL;
  _V10_Dpair_D1062.first = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = VEncodeBool(false);
  _V10_Dpair_D1061.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1060.first = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1060.rest = VNULL;
  _V10_Dpair_D1059.first = _V0_Mk;
  _V10_Dpair_D1059.rest = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1058.first = _V0target;
  _V10_Dpair_D1058.rest = VNULL;
  _V10_Dpair_D1055.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1055.rest = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1053.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1053.rest = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1052.first = VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR);
  _V10_Dpair_D1052.rest = VNULL;
  _V10_Dpair_D1051.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1051.rest = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1050.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1050.rest = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1049.first = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1049.rest = VNULL;
  _V10_Dpair_D1048.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1048.rest = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1047.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1047.rest = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1046.first = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1046.rest = VNULL;
  _V10_Dpair_D1045.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1045.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1044.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1043.rest = VNULL;
  _V10_Dpair_D1042.first = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1042.rest = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1041.first = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1041.rest = VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR);
  _V10_Dpair_D1040.first = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1040.rest = VNULL;
  _V10_Dpair_D1039.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1039.rest = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1038.first = VEncodeBool(false);
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR);
  _V10_Dpair_D1037.first = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1037.rest = VNULL;
  _V10_Dpair_D1036.first = _V0_Mk;
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = _V0dep;
  _V10_Dpair_D1035.rest = VNULL;
  _V10_Dpair_D1034.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1033.rest = VNULL;
  _V10_Dpair_D1032.first = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR);
  _V10_Dpair_D1031.rest = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1030.first = VEncodeBool(false);
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1029.rest = VNULL;
  _V10_Dpair_D1028.first = _V0port;
  _V10_Dpair_D1028.rest = VNULL;
  _V10_Dpair_D1027.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1027.rest = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1026.first = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1026.rest = VNULL;
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1024.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1024.rest = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1023.first = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1023.rest = VNULL;
  _V10_Dpair_D1022.first = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D1022.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1021.first = VEncodeBool(false);
  _V10_Dpair_D1021.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1020.first = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1020.rest = VNULL;
  _V10_Dpair_D1019.first = _V0deps;
  _V10_Dpair_D1019.rest = VNULL;
  _V10_Dpair_D1018.first = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1017.rest = VNULL;
  _V10_Dpair_D1016.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1014.rest = VNULL;
  _V10_Dpair_D1013.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1012.rest = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D1010.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1010.rest = VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR);
  _V10_Dpair_D1009.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1009.rest = VNULL;
  _V10_Dpair_D1008.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1008.rest = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1007.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1007.rest = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1006.first = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1006.rest = VNULL;
  _V10_Dpair_D1005.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1005.rest = VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR);
  _V10_Dpair_D1004.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1004.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1003.first = VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR);
  _V10_Dpair_D1003.rest = VNULL;
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1000.first = VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR);
  _V10_Dpair_D1000.rest = VNULL;
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D998.rest = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D997.first = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D997.rest = VNULL;
  _V10_Dpair_D996.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D996.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D995.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D995.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D994.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D994.rest = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D993.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D993.rest = VNULL;
  _V10_Dpair_D992.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D992.rest = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D991.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D991.rest = VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR);
  _V10_Dpair_D990.first = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D990.rest = VNULL;
  _V10_Dpair_D989.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D989.rest = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D988.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D988.rest = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D987.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D987.rest = VNULL;
  _V10_Dpair_D986.first = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D986.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D985.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D985.rest = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D984.first = VEncodeBool(false);
  _V10_Dpair_D984.rest = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D983.first = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D983.rest = VNULL;
  _V10_Dpair_D982.first = _V0_Mk;
  _V10_Dpair_D982.rest = VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR);
  _V10_Dpair_D981.first = _V0x_D33;
  _V10_Dpair_D981.rest = VNULL;
  _V10_Dpair_D980.first = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D980.rest = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D979.first = VEncodeBool(false);
  _V10_Dpair_D979.rest = VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR);
  _V10_Dpair_D978.first = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D978.rest = VNULL;
  _V10_Dpair_D977.first = _V0_Mk;
  _V10_Dpair_D977.rest = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D976.first = _V0x;
  _V10_Dpair_D976.rest = VNULL;
  _V10_Dpair_D975.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D975.rest = VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR);
  _V10_Dpair_D974.first = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D974.rest = VNULL;
  _V10_Dpair_D973.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D973.rest = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D972.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D972.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D971.first = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D971.rest = VNULL;
  _V10_Dpair_D970.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D970.rest = VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR);
  _V10_Dpair_D969.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D969.rest = VEncodePointer(&_V10_Dpair_D968, VPOINTER_PAIR);
  _V10_Dpair_D968.first = VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR);
  _V10_Dpair_D968.rest = VNULL;
  _V10_Dpair_D967.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D967.rest = VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR);
  _V10_Dpair_D966.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D966.rest = VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR);
  _V10_Dpair_D965.first = VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR);
  _V10_Dpair_D965.rest = VNULL;
  _V10_Dpair_D964.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D964.rest = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D962.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D962.rest = VEncodePointer(&_V10_Dpair_D961, VPOINTER_PAIR);
  _V10_Dpair_D961.first = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D961.rest = VNULL;
  _V10_Dpair_D960.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D960.rest = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D959.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D959.rest = VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR);
  _V10_Dpair_D958.first = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D958.rest = VNULL;
  _V10_Dpair_D957.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D957.rest = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D956.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D956.rest = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D955.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D955.rest = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D954.first = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D954.rest = VNULL;
  _V10_Dpair_D953.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D953.rest = VEncodePointer(&_V10_Dpair_D948, VPOINTER_PAIR);
  _V10_Dpair_D952.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D952.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D950.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D950.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D949.first = VEncodePointer(&_V10_Dpair_D948, VPOINTER_PAIR);
  _V10_Dpair_D949.rest = VNULL;
  _V10_Dpair_D948.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D948.rest = VEncodePointer(&_V10_Dpair_D945, VPOINTER_PAIR);
  _V10_Dpair_D947.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D947.rest = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D946.first = VEncodePointer(&_V10_Dpair_D945, VPOINTER_PAIR);
  _V10_Dpair_D946.rest = VNULL;
  _V10_Dpair_D945.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D945.rest = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D944.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D944.rest = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D943.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D943.rest = VNULL;
  _V10_Dpair_D942.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D942.rest = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D941.first = VEncodePointer(&_V10_Dpair_D938, VPOINTER_PAIR);
  _V10_Dpair_D941.rest = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D940.first = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D940.rest = VNULL;
  _V10_Dpair_D939.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D939.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D938.first = VEncodeBool(false);
  _V10_Dpair_D938.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D937.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D937.rest = VNULL;
  _V10_Dpair_D936.first = _V0headers;
  _V10_Dpair_D936.rest = VNULL;
  _V10_Dpair_D935.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D935.rest = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D934.first = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D934.rest = VNULL;
  _V10_Dpair_D933.first = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D933.rest = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D932.first = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR);
  _V10_Dpair_D931.first = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D931.rest = VNULL;
  _V10_Dpair_D930.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D930.rest = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D929.first = VEncodeBool(false);
  _V10_Dpair_D929.rest = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D928.first = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D928.rest = VNULL;
  _V10_Dpair_D927.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D927.rest = VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR);
  _V10_Dpair_D926.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D926.rest = VNULL;
  _V10_Dpair_D925.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D925.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D924.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D924.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D923.first = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D923.rest = VNULL;
  _V10_Dpair_D922.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D922.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D921.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D921.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D919.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D919.rest = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D918.first = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D918.rest = VNULL;
  _V10_Dpair_D917.first = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D917.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D916.first = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D916.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D915.first = VEncodeBool(false);
  _V10_Dpair_D915.rest = VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR);
  _V10_Dpair_D914.first = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D914.rest = VNULL;
  _V10_Dpair_D913.first = _V0_Mk;
  _V10_Dpair_D913.rest = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D912.first = _V0f;
  _V10_Dpair_D912.rest = VNULL;
  _V10_Dpair_D911.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D911.rest = VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR);
  _V10_Dpair_D910.first = VEncodePointer(&_V10_Dpair_D909, VPOINTER_PAIR);
  _V10_Dpair_D910.rest = VNULL;
  _V10_Dpair_D909.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D909.rest = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D908.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D908.rest = VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR);
  _V10_Dpair_D907.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D907.rest = VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR);
  _V10_Dpair_D906.first = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D906.rest = VNULL;
  _V10_Dpair_D905.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D905.rest = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D904.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D904.rest = VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR);
  _V10_Dpair_D903.first = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D903.rest = VNULL;
  _V10_Dpair_D902.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D901.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D901.rest = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D900.first = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D900.rest = VNULL;
  _V10_Dpair_D899.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D899.rest = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D898.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D898.rest = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D897.first = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D897.rest = VNULL;
  _V10_Dpair_D896.first = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D896.rest = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D895.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D895.rest = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D894.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D894.rest = VNULL;
  _V10_Dpair_D893.first = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D892.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D891.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D891.rest = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D890.first = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D890.rest = VNULL;
  _V10_Dpair_D889.first = _V0_Mk;
  _V10_Dpair_D889.rest = VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR);
  _V10_Dpair_D888.first = _V0args;
  _V10_Dpair_D888.rest = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D887.first = _V0ct;
  _V10_Dpair_D887.rest = VNULL;
  _V10_Dpair_D886.first = _V10_Dloop_D29;
  _V10_Dpair_D886.rest = VNULL;
  _V10_Dpair_D885.first = VEncodePointer(&_V10_Dpair_D739, VPOINTER_PAIR);
  _V10_Dpair_D885.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D882.first = VEncodePointer(&_V10_Dpair_D879, VPOINTER_PAIR);
  _V10_Dpair_D882.rest = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D881.first = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D881.rest = VNULL;
  _V10_Dpair_D880.first = VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR);
  _V10_Dpair_D880.rest = VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR);
  _V10_Dpair_D879.first = VEncodeBool(false);
  _V10_Dpair_D879.rest = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D878.first = VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR);
  _V10_Dpair_D878.rest = VNULL;
  _V10_Dpair_D877.first = _V0ret;
  _V10_Dpair_D877.rest = VNULL;
  _V10_Dpair_D876.first = VEncodePointer(&_V10_Dpair_D873, VPOINTER_PAIR);
  _V10_Dpair_D876.rest = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D875.first = VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR);
  _V10_Dpair_D875.rest = VNULL;
  _V10_Dpair_D874.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D874.rest = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D873.first = VEncodeBool(false);
  _V10_Dpair_D873.rest = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D872.first = VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR);
  _V10_Dpair_D872.rest = VNULL;
  _V10_Dpair_D871.first = _V0proc;
  _V10_Dpair_D871.rest = VNULL;
  _V10_Dpair_D870.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D870.rest = VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR);
  _V10_Dpair_D869.first = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D869.rest = VNULL;
  _V10_Dpair_D868.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D868.rest = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D867.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D867.rest = VNULL;
  _V10_Dpair_D866.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D866.rest = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D865.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D865.rest = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D864.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D864.rest = VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR);
  _V10_Dpair_D863.first = VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR);
  _V10_Dpair_D863.rest = VNULL;
  _V10_Dpair_D862.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D862.rest = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D861.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D861.rest = VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR);
  _V10_Dpair_D860.first = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D860.rest = VNULL;
  _V10_Dpair_D859.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D859.rest = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D858.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D858.rest = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D857.first = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D857.rest = VNULL;
  _V10_Dpair_D856.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D856.rest = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D855.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D855.rest = VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR);
  _V10_Dpair_D854.first = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D854.rest = VNULL;
  _V10_Dpair_D853.first = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D853.rest = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D852.first = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D852.rest = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D851.first = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D851.rest = VNULL;
  _V10_Dpair_D850.first = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D850.rest = VEncodePointer(&_V10_Dpair_D849, VPOINTER_PAIR);
  _V10_Dpair_D849.first = VEncodePointer(&_V10_Dpair_D843, VPOINTER_PAIR);
  _V10_Dpair_D849.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D848.first = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D848.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D847.first = _V10_Dloop_D20;
  _V10_Dpair_D847.rest = VNULL;
  _V10_Dpair_D846.first = VEncodePointer(&_V10_Dpair_D845, VPOINTER_PAIR);
  _V10_Dpair_D846.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D845.first = VEncodeBool(false);
  _V10_Dpair_D845.rest = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D844.first = VEncodePointer(&_V10_Dpair_D843, VPOINTER_PAIR);
  _V10_Dpair_D844.rest = VNULL;
  _V10_Dpair_D843.first = _V0_Mk;
  _V10_Dpair_D843.rest = VEncodePointer(&_V10_Dpair_D842, VPOINTER_PAIR);
  _V10_Dpair_D842.first = _V0str;
  _V10_Dpair_D842.rest = VNULL;
  _V10_Dpair_D840.first = VEncodePointer(&_V10_Dpair_D839, VPOINTER_PAIR);
  _V10_Dpair_D840.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D839.first = VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR);
  _V10_Dpair_D839.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D838.first = _V10_Dloop_D17;
  _V10_Dpair_D838.rest = VNULL;
  _V10_Dpair_D837.first = VEncodePointer(&_V10_Dpair_D836, VPOINTER_PAIR);
  _V10_Dpair_D837.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D836.first = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D836.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D835.first = _V10_Dloop_D14;
  _V10_Dpair_D835.rest = VNULL;
  _V10_Dpair_D834.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D834.rest = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D833.first = VEncodePointer(&_V10_Dpair_D832, VPOINTER_PAIR);
  _V10_Dpair_D833.rest = VNULL;
  _V10_Dpair_D832.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D832.rest = VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR);
  _V10_Dpair_D831.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D831.rest = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D830.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D830.rest = VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR);
  _V10_Dpair_D829.first = VEncodePointer(&_V10_Dpair_D828, VPOINTER_PAIR);
  _V10_Dpair_D829.rest = VNULL;
  _V10_Dpair_D828.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D828.rest = VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR);
  _V10_Dpair_D827.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D827.rest = VEncodePointer(&_V10_Dpair_D826, VPOINTER_PAIR);
  _V10_Dpair_D826.first = VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR);
  _V10_Dpair_D826.rest = VNULL;
  _V10_Dpair_D825.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D825.rest = VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR);
  _V10_Dpair_D824.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D824.rest = VEncodePointer(&_V10_Dpair_D823, VPOINTER_PAIR);
  _V10_Dpair_D823.first = VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR);
  _V10_Dpair_D823.rest = VNULL;
  _V10_Dpair_D822.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D822.rest = VEncodePointer(&_V10_Dpair_D819, VPOINTER_PAIR);
  _V10_Dpair_D821.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D821.rest = VEncodePointer(&_V10_Dpair_D820, VPOINTER_PAIR);
  _V10_Dpair_D820.first = VEncodePointer(&_V10_Dpair_D819, VPOINTER_PAIR);
  _V10_Dpair_D820.rest = VNULL;
  _V10_Dpair_D819.first = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D819.rest = VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR);
  _V10_Dpair_D818.first = VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR);
  _V10_Dpair_D818.rest = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D817.first = VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR);
  _V10_Dpair_D817.rest = VNULL;
  _V10_Dpair_D816.first = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D816.rest = VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR);
  _V10_Dpair_D815.first = VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR);
  _V10_Dpair_D815.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D814.first = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D814.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D813.first = _V10_Dloop_D11;
  _V10_Dpair_D813.rest = VNULL;
  _V10_Dpair_D812.first = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D812.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D811.first = VEncodeBool(false);
  _V10_Dpair_D811.rest = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D810.first = VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR);
  _V10_Dpair_D810.rest = VNULL;
  _V10_Dpair_D809.first = _V0_Mk;
  _V10_Dpair_D809.rest = VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR);
  _V10_Dpair_D808.first = _V0file;
  _V10_Dpair_D808.rest = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D807.first = _V0new;
  _V10_Dpair_D807.rest = VNULL;
  _V10_Dpair_D806.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D806.rest = VEncodePointer(&_V10_Dpair_D805, VPOINTER_PAIR);
  _V10_Dpair_D805.first = VEncodePointer(&_V10_Dpair_D804, VPOINTER_PAIR);
  _V10_Dpair_D805.rest = VNULL;
  _V10_Dpair_D804.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D804.rest = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D803.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D803.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D802.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D802.rest = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D801.first = VEncodePointer(&_V10_Dpair_D800, VPOINTER_PAIR);
  _V10_Dpair_D801.rest = VNULL;
  _V10_Dpair_D800.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D800.rest = VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR);
  _V10_Dpair_D799.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D799.rest = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D798.first = VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR);
  _V10_Dpair_D798.rest = VNULL;
  _V10_Dpair_D797.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D797.rest = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D796.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D796.rest = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D795.first = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D795.rest = VNULL;
  _V10_Dpair_D794.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D794.rest = VEncodePointer(&_V10_Dpair_D791, VPOINTER_PAIR);
  _V10_Dpair_D793.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D793.rest = VEncodePointer(&_V10_Dpair_D792, VPOINTER_PAIR);
  _V10_Dpair_D792.first = VEncodePointer(&_V10_Dpair_D791, VPOINTER_PAIR);
  _V10_Dpair_D792.rest = VNULL;
  _V10_Dpair_D791.first = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D791.rest = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D790.first = VEncodeBool(false);
  _V10_Dpair_D790.rest = VEncodePointer(&_V10_Dpair_D789, VPOINTER_PAIR);
  _V10_Dpair_D789.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D789.rest = VNULL;
  _V10_Dpair_D788.first = _V0_Mp;
  _V10_Dpair_D788.rest = VNULL;
  _V10_Dpair_D787.first = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D787.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D786.first = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D786.rest = VNULL;
  _V10_Dpair_D785.first = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D785.rest = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D784.first = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D784.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D783.first = _V0loop;
  _V10_Dpair_D783.rest = VNULL;
  _V10_Dpair_D782.first = VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR);
  _V10_Dpair_D782.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D781.first = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D781.rest = VNULL;
  _V10_Dpair_D780.first = _V0_Mk;
  _V10_Dpair_D780.rest = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D779.first = _V0i;
  _V10_Dpair_D779.rest = VNULL;
  _V10_Dpair_D778.first = _V10_Dloop_D7;
  _V10_Dpair_D778.rest = VNULL;
  _V10_Dpair_D777.first = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D777.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D776.first = VEncodeBool(false);
  _V10_Dpair_D776.rest = VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR);
  _V10_Dpair_D775.first = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D775.rest = VNULL;
  _V10_Dpair_D774.first = _V0_Mk;
  _V10_Dpair_D774.rest = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D773.first = _V0file;
  _V10_Dpair_D773.rest = VNULL;
  _V10_Dpair_D772.first = VEncodePointer(&_V10_Dpair_D768, VPOINTER_PAIR);
  _V10_Dpair_D772.rest = VEncodePointer(&_V10_Dpair_D771, VPOINTER_PAIR);
  _V10_Dpair_D771.first = VEncodePointer(&_V10_Dpair_D770, VPOINTER_PAIR);
  _V10_Dpair_D771.rest = VNULL;
  _V10_Dpair_D770.first = _V0unquote;
  _V10_Dpair_D770.rest = VEncodePointer(&_V10_Dpair_D769, VPOINTER_PAIR);
  _V10_Dpair_D769.first = _V0unmangled__env;
  _V10_Dpair_D769.rest = VNULL;
  _V10_Dpair_D768.first = VEncodeBool(false);
  _V10_Dpair_D768.rest = VEncodePointer(&_V10_Dpair_D767, VPOINTER_PAIR);
  _V10_Dpair_D767.first = _V0_U;
  _V10_Dpair_D767.rest = VNULL;
  _V10_Dpair_D765.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D765.rest = VEncodePointer(&_V10_Dpair_D764, VPOINTER_PAIR);
  _V10_Dpair_D764.first = VEncodePointer(&_V10_Dpair_D763, VPOINTER_PAIR);
  _V10_Dpair_D764.rest = VNULL;
  _V10_Dpair_D763.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D763.rest = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D762.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D762.rest = VEncodePointer(&_V10_Dpair_D761, VPOINTER_PAIR);
  _V10_Dpair_D761.first = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D761.rest = VNULL;
  _V10_Dpair_D760.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D760.rest = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D759.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D759.rest = VEncodePointer(&_V10_Dpair_D758, VPOINTER_PAIR);
  _V10_Dpair_D758.first = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D758.rest = VNULL;
  _V10_Dpair_D757.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D757.rest = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D756.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D756.rest = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D755.first = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D755.rest = VNULL;
  _V10_Dpair_D754.first = VEncodePointer(&_V10_Dpair_D743, VPOINTER_PAIR);
  _V10_Dpair_D754.rest = VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR);
  _V10_Dpair_D753.first = VEncodeBool(false);
  _V10_Dpair_D753.rest = VEncodePointer(&_V10_Dpair_D752, VPOINTER_PAIR);
  _V10_Dpair_D752.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D752.rest = VNULL;
  _V10_Dpair_D751.first = _V0_Mk;
  _V10_Dpair_D751.rest = VNULL;
  _V10_Dpair_D750.first = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D750.rest = VEncodePointer(&_V10_Dpair_D749, VPOINTER_PAIR);
  _V10_Dpair_D749.first = VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR);
  _V10_Dpair_D749.rest = VNULL;
  _V10_Dpair_D748.first = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D748.rest = VEncodePointer(&_V10_Dpair_D740, VPOINTER_PAIR);
  _V10_Dpair_D747.first = _V0_Mk;
  _V10_Dpair_D747.rest = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D746.first = _V0args;
  _V10_Dpair_D746.rest = VNULL;
  _V10_Dpair_D745.first = VEncodeBool(false);
  _V10_Dpair_D745.rest = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D744.first = VEncodePointer(&_V10_Dpair_D743, VPOINTER_PAIR);
  _V10_Dpair_D744.rest = VNULL;
  _V10_Dpair_D743.first = _V0end;
  _V10_Dpair_D743.rest = VNULL;
  _V10_Dpair_D742.first = VEncodePointer(&_V10_Dpair_D739, VPOINTER_PAIR);
  _V10_Dpair_D742.rest = VEncodePointer(&_V10_Dpair_D741, VPOINTER_PAIR);
  _V10_Dpair_D741.first = VEncodePointer(&_V10_Dpair_D740, VPOINTER_PAIR);
  _V10_Dpair_D741.rest = VNULL;
  _V10_Dpair_D740.first = VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR);
  _V10_Dpair_D740.rest = VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR);
  _V10_Dpair_D739.first = VEncodeBool(false);
  _V10_Dpair_D739.rest = VEncodePointer(&_V10_Dpair_D738, VPOINTER_PAIR);
  _V10_Dpair_D738.first = VEncodePointer(&_V10_Dpair_D737, VPOINTER_PAIR);
  _V10_Dpair_D738.rest = VNULL;
  _V10_Dpair_D737.first = _V0_Mk;
  _V10_Dpair_D737.rest = _V0args;
  _V10_Dpair_D736.first = VEncodePointer(&_V10_Dpair_D733, VPOINTER_PAIR);
  _V10_Dpair_D736.rest = VEncodePointer(&_V10_Dpair_D735, VPOINTER_PAIR);
  _V10_Dpair_D735.first = VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR);
  _V10_Dpair_D735.rest = VNULL;
  _V10_Dpair_D734.first = VEncodePointer(&_V10_Dpair_D727, VPOINTER_PAIR);
  _V10_Dpair_D734.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D733.first = VEncodeBool(false);
  _V10_Dpair_D733.rest = VEncodePointer(&_V10_Dpair_D732, VPOINTER_PAIR);
  _V10_Dpair_D732.first = VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR);
  _V10_Dpair_D732.rest = VNULL;
  _V10_Dpair_D731.first = _V0start;
  _V10_Dpair_D731.rest = VNULL;
  _V10_Dpair_D730.first = VEncodePointer(&_V10_Dpair_D729, VPOINTER_PAIR);
  _V10_Dpair_D730.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D729.first = VEncodeBool(false);
  _V10_Dpair_D729.rest = VEncodePointer(&_V10_Dpair_D728, VPOINTER_PAIR);
  _V10_Dpair_D728.first = VEncodePointer(&_V10_Dpair_D727, VPOINTER_PAIR);
  _V10_Dpair_D728.rest = VNULL;
  _V10_Dpair_D727.first = _V0_Mk;
  _V10_Dpair_D727.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D726.first = _V0label;
  _V10_Dpair_D726.rest = VEncodePointer(&_V10_Dpair_D725, VPOINTER_PAIR);
  _V10_Dpair_D725.first = _V0thunk;
  _V10_Dpair_D725.rest = VNULL;
  _V10_Dpair_D723.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D723.rest = VEncodePointer(&_V10_Dpair_D722, VPOINTER_PAIR);
  _V10_Dpair_D722.first = VEncodePointer(&_V10_Dpair_D721, VPOINTER_PAIR);
  _V10_Dpair_D722.rest = VNULL;
  _V10_Dpair_D721.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D721.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D701.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D701.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D700.first = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D700.rest = VNULL;
  _V10_Dpair_D699.first = VEncodeBool(false);
  _V10_Dpair_D699.rest = VEncodePointer(&_V10_Dpair_D698, VPOINTER_PAIR);
  _V10_Dpair_D698.first = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D698.rest = VNULL;
  _V10_Dpair_D697.first = _V0_Mx;
  _V10_Dpair_D697.rest = VNULL;
  _V10_Dpair_D696.first = VEncodePointer(&_V10_Dpair_D694, VPOINTER_PAIR);
  _V10_Dpair_D696.rest = VEncodePointer(&_V10_Dpair_D695, VPOINTER_PAIR);
  _V10_Dpair_D695.first = VNULL;
  _V10_Dpair_D695.rest = VNULL;
  _V10_Dpair_D694.first = VEncodeBool(false);
  _V10_Dpair_D694.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D693.first = VEncodePointer(&_V10_Dpair_D692, VPOINTER_PAIR);
  _V10_Dpair_D693.rest = VNULL;
  _V10_Dpair_D692.first = _V0_Mnext;
  _V10_Dpair_D692.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)global_V0k1, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda1, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k2, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda2, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k3, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda3, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k4, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda4, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k5, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda5, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k6, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda6, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k7, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda7, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k8, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda8, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k9, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda9, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k10, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda10, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k11, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda11, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k12, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda12, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k13, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda13, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k14, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda14, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k15, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda15, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k16, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda16, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k17, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda17, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda18, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda19, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda20, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda21, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda22, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda23, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda24, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda25, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda26, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda27, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda28, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda29, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda30, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda31, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda32, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda33, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda34, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda35, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda36, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda37, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda38, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda39, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda40, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k19, VEncodePointer(&_V10_Dpair_D723, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k18, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda41, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda42, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda43, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda44, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k20, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda45, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0k26, VEncodePointer(&_V10_Dpair_D765, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0k25, VEncodePointer(&_V10_Dpair_D762, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0k24, VEncodePointer(&_V10_Dpair_D759, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0k23, VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0k27, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0k22, VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0lambda48, VEncodePointer(&_V10_Dpair_D742, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0k21, VEncodePointer(&_V10_Dpair_D736, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0benchmark_V0lambda47, VEncodePointer(&_V10_Dpair_D730, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda46, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D7_V0k31, VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D7_V0k30, VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D7_V0k29, VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D7_V0k28, VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D7, VEncodePointer(&_V10_Dpair_D787, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0extension_V0k33, VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0extension_V0k32, VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0extension_V0lambda50, VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda49, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D11_V0k37, VEncodePointer(&_V10_Dpair_D830, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D11_V0k38, VEncodePointer(&_V10_Dpair_D830, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D11_V0k36, VEncodePointer(&_V10_Dpair_D827, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D11_V0k35, VEncodePointer(&_V10_Dpair_D824, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D11_V0k34, VEncodePointer(&_V10_Dpair_D821, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D11, VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0change__extension_V0k40, VEncodePointer(&_V10_Dpair_D834, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0change__extension_V0k39, VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0change__extension_V0lambda52, VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda51, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D14_V0k44, VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D14_V0k45, VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D14_V0k43, VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D14_V0k42, VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D14_V0k41, VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D14, VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0basename_V0k47, VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0basename_V0k46, VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0basename_V0lambda54, VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda53, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D17_V0k51, VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D17_V0k52, VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D17_V0k50, VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D17_V0k49, VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D17_V0k48, VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D17, VEncodePointer(&_V10_Dpair_D840, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0basepath_V0k54, VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0basepath_V0k53, VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0basepath_V0lambda56, VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda55, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D20_V0k59, VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D20_V0k58, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D20_V0k60, VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D20_V0k57, VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D20_V0k56, VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D20_V0k55, VEncodePointer(&_V10_Dpair_D855, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D20, VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0decomma_V0k62, VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0decomma_V0k61, VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0decomma_V0lambda58, VEncodePointer(&_V10_Dpair_D846, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda57, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realpath_V0k66, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realpath_V0k65, VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realpath_V0k64, VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realpath_V0k63, VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realpath_V0lambda60, VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda59, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realbasepath_V0k70, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realbasepath_V0k69, VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realbasepath_V0k68, VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realbasepath_V0k67, VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0realbasepath_V0lambda62, VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda61, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D29_V0k74, VEncodePointer(&_V10_Dpair_D907, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D29_V0k76, VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D29_V0k75, VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D29_V0k73, VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D29_V0k72, VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D29_V0k71, VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D29, VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0count__true_V0lambda64, VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda63, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0delete__file_V0k77, VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0delete__file_V0lambda66, VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda65, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k85, VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k88, VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k91, VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k96, VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k95, VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k97, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k94, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k93, VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0lambda69, VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k92, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k90, VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k89, VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k87, VEncodePointer(&_V10_Dpair_D952, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k86, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k84, VEncodePointer(&_V10_Dpair_D947, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k83, VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k82, VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0lambda70, VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k81, VEncodePointer(&_V10_Dpair_D935, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k100, VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k99, VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k98, VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0lambda71, VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k80, VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k79, VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0k78, VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__header_V0lambda68, VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda67, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k106, VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k105, VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k104, VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k103, VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k102, VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k112, VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k119, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k118, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k123, VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k125, VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k124, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k122, VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k121, VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k120, VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0lambda74, VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k117, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k116, VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k115, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k114, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0lambda75, VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k113, VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k111, VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k110, VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k109, VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k108, VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k107, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0k101, VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0gen__makefile_V0lambda73, VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda72, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k152, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k151, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k150, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k149, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k148, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k147, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k146, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k145, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k144, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k143, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k142, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k141, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k140, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k139, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k138, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k137, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k136, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k135, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k134, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k133, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k132, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k131, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k130, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k129, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k128, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k127, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0k126, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__help_V0lambda77, VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda76, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__version_V0k155, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__version_V0k154, VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__version_V0k153, VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0display__version_V0lambda79, VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda78, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0lambda82, VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k166, VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k165, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k164, VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k163, VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k162, VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k170, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k169, VEncodePointer(&_V10_Dpair_D1138, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k168, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k167, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k161, VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k160, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k159, VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k158, VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k157, VEncodePointer(&_V10_Dpair_D1105, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0k156, VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0handle__exception_V0lambda81, VEncodePointer(&_V10_Dpair_D1096, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda80, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k180, VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k179, VEncodePointer(&_V10_Dpair_D1175, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k186, VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k185, VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k184, VEncodePointer(&_V10_Dpair_D1184, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k192, VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k191, VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k190, VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k198, VEncodePointer(&_V10_Dpair_D1212, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k197, VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k196, VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k201, VEncodePointer(&_V10_Dpair_D1220, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k200, VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k202, VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k199, VEncodePointer(&_V10_Dpair_D1214, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k195, VEncodePointer(&_V10_Dpair_D1203, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k194, VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k193, VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k189, VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k188, VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k187, VEncodePointer(&_V10_Dpair_D1184, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k183, VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k182, VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k181, VEncodePointer(&_V10_Dpair_D1175, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k178, VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k177, VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k176, VEncodePointer(&_V10_Dpair_D1166, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k209, VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k214, VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k213, VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k212, VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k211, VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k218, VEncodePointer(&_V10_Dpair_D1266, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k217, VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k216, VEncodePointer(&_V10_Dpair_D1260, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k224, VEncodePointer(&_V10_Dpair_D1279, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k223, VEncodePointer(&_V10_Dpair_D1276, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k227, VEncodePointer(&_V10_Dpair_D1286, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k226, VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k225, VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k222, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k221, VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k220, VEncodePointer(&_V10_Dpair_D1270, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k234, VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k233, VEncodePointer(&_V10_Dpair_D1300, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k232, VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k237, VEncodePointer(&_V10_Dpair_D1310, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k236, VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k235, VEncodePointer(&_V10_Dpair_D1304, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k231, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k230, VEncodePointer(&_V10_Dpair_D1294, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k229, VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k243, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k246, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k254, VEncodePointer(&_V10_Dpair_D1354, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k253, VEncodePointer(&_V10_Dpair_D1351, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k252, VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k257, VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k264, VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k263, VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k262, VEncodePointer(&_V10_Dpair_D1372, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k267, VEncodePointer(&_V10_Dpair_D1385, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k275, VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k274, VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k273, VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k272, VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k279, VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k278, VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k277, VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k276, VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k271, VEncodePointer(&_V10_Dpair_D1393, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k270, VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k269, VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k268, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k266, VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k265, VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k261, VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k260, VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k259, VEncodePointer(&_V10_Dpair_D1363, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k258, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k256, VEncodePointer(&_V10_Dpair_D1358, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k255, VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k251, VEncodePointer(&_V10_Dpair_D1345, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k250, VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k249, VEncodePointer(&_V10_Dpair_D1339, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k248, VEncodePointer(&_V10_Dpair_D1336, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k247, VEncodePointer(&_V10_Dpair_D1333, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k245, VEncodePointer(&_V10_Dpair_D1330, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k244, VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k242, VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k241, VEncodePointer(&_V10_Dpair_D1321, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k240, VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k239, VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k281, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k283, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k287, VEncodePointer(&_V10_Dpair_D1426, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k286, VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k291, VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k290, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k289, VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k293, VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k295, VEncodePointer(&_V10_Dpair_D1442, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k300, VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k299, VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k304, VEncodePointer(&_V10_Dpair_D1465, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k303, VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k302, VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k301, VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k298, VEncodePointer(&_V10_Dpair_D1449, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k297, VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k296, VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k294, VEncodePointer(&_V10_Dpair_D1439, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k292, VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k288, VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k285, VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k284, VEncodePointer(&_V10_Dpair_D1417, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k282, VEncodePointer(&_V10_Dpair_D1414, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k280, VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k238, VEncodePointer(&_V10_Dpair_D1312, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k228, VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k219, VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k215, VEncodePointer(&_V10_Dpair_D1257, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k210, VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k208, VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k207, VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k206, VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k205, VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k204, VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k203, VEncodePointer(&_V10_Dpair_D1225, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k175, VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k306, VEncodePointer(&_V10_Dpair_D1467, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k305, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k174, VEncodePointer(&_V10_Dpair_D1160, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k173, VEncodePointer(&_V10_Dpair_D1157, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k172, VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52_V0k171, VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D52, VEncodePointer(&_V10_Dpair_D1145, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k315, VEncodePointer(&_V10_Dpair_D1491, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k314, VEncodePointer(&_V10_Dpair_D1487, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k313, VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k316, VEncodePointer(&_V10_Dpair_D1495, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k312, VEncodePointer(&_V10_Dpair_D1480, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k311, VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k320, VEncodePointer(&_V10_Dpair_D1502, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k323, VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k325, VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k327, VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k330, VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k329, VEncodePointer(&_V10_Dpair_D1516, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k332, VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k334, VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k338, VEncodePointer(&_V10_Dpair_D1534, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k337, VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k336, VEncodePointer(&_V10_Dpair_D1528, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k340, VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k342, VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k346, VEncodePointer(&_V10_Dpair_D1549, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k345, VEncodePointer(&_V10_Dpair_D1546, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k344, VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k348, VEncodePointer(&_V10_Dpair_D1553, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k354, VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k353, VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k356, VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k355, VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k358, VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k357, VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k360, VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k359, VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k362, VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k361, VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k352, VEncodePointer(&_V10_Dpair_D1561, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k363, VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k351, VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k366, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k365, VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k368, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k367, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k364, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k350, VEncodePointer(&_V10_Dpair_D1555, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k349, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k347, VEncodePointer(&_V10_Dpair_D1550, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k343, VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k341, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k339, VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k335, VEncodePointer(&_V10_Dpair_D1525, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k333, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k331, VEncodePointer(&_V10_Dpair_D1520, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k328, VEncodePointer(&_V10_Dpair_D1513, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k326, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k324, VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k322, VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k321, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k319, VEncodePointer(&_V10_Dpair_D1499, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k318, VEncodePointer(&_V10_Dpair_D1496, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k317, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k310, VEncodePointer(&_V10_Dpair_D1474, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k309, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k308, VEncodePointer(&_V10_Dpair_D1471, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k307, VEncodePointer(&_V10_Dpair_D1468, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda84, VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda83, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k370, VEncodePointer(&_V10_Dpair_D1629, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k373, VEncodePointer(&_V10_Dpair_D1643, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k376, VEncodePointer(&_V10_Dpair_D1654, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k385, VEncodePointer(&_V10_Dpair_D1685, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k384, VEncodePointer(&_V10_Dpair_D1682, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k383, VEncodePointer(&_V10_Dpair_D1679, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k382, VEncodePointer(&_V10_Dpair_D1676, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k381, VEncodePointer(&_V10_Dpair_D1671, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k380, VEncodePointer(&_V10_Dpair_D1668, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k379, VEncodePointer(&_V10_Dpair_D1665, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k378, VEncodePointer(&_V10_Dpair_D1662, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k377, VEncodePointer(&_V10_Dpair_D1659, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k375, VEncodePointer(&_V10_Dpair_D1651, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k374, VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k372, VEncodePointer(&_V10_Dpair_D1640, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k371, VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k369, VEncodePointer(&_V10_Dpair_D1626, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda85, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda86, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda87, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda88, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k387, VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Did_D64, VEncodePointer(&_V10_Dpair_D1702, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k390, VEncodePointer(&_V10_Dpair_D1703, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k394, VEncodePointer(&_V10_Dpair_D1716, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k393, VEncodePointer(&_V10_Dpair_D1713, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda91, VEncodePointer(&_V10_Dpair_D1710, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k392, VEncodePointer(&_V10_Dpair_D1707, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k397, VEncodePointer(&_V10_Dpair_D1721, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k401, VEncodePointer(&_V10_Dpair_D1734, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k400, VEncodePointer(&_V10_Dpair_D1731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda92, VEncodePointer(&_V10_Dpair_D1728, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k399, VEncodePointer(&_V10_Dpair_D1725, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k406, VEncodePointer(&_V10_Dpair_D1745, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k405, VEncodePointer(&_V10_Dpair_D1741, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k410, VEncodePointer(&_V10_Dpair_D1754, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k412, VEncodePointer(&_V10_Dpair_D1758, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k414, VEncodePointer(&_V10_Dpair_D1764, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k416, VEncodePointer(&_V10_Dpair_D1769, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k425, VEncodePointer(&_V10_Dpair_D1786, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k427, VEncodePointer(&_V10_Dpair_D1790, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k430, VEncodePointer(&_V10_Dpair_D1795, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D101_V0k436, VEncodePointer(&_V10_Dpair_D1822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D101_V0k435, VEncodePointer(&_V10_Dpair_D1819, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D101_V0k434, VEncodePointer(&_V10_Dpair_D1816, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D101_V0k433, VEncodePointer(&_V10_Dpair_D1813, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D101_V0k432, VEncodePointer(&_V10_Dpair_D1810, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D101, VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k445, VEncodePointer(&_V10_Dpair_D1842, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k444, VEncodePointer(&_V10_Dpair_D1839, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k443, VEncodePointer(&_V10_Dpair_D1836, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k442, VEncodePointer(&_V10_Dpair_D1833, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k448, VEncodePointer(&_V10_Dpair_D1849, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k451, VEncodePointer(&_V10_Dpair_D1860, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k455, VEncodePointer(&_V10_Dpair_D1871, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k454, VEncodePointer(&_V10_Dpair_D1867, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k458, VEncodePointer(&_V10_Dpair_D1881, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k457, VEncodePointer(&_V10_Dpair_D1877, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k468, VEncodePointer(&_V10_Dpair_D1898, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k470, VEncodePointer(&_V10_Dpair_D1899, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k469, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k467, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k466, VEncodePointer(&_V10_Dpair_D1895, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k465, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k471, VEncodePointer(&_V10_Dpair_D1907, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda93, VEncodePointer(&_V10_Dpair_D1904, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k464, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k472, VEncodePointer(&_V10_Dpair_D1911, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda94, VEncodePointer(&_V10_Dpair_D1908, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k463, VEncodePointer(&_V10_Dpair_D1892, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k462, VEncodePointer(&_V10_Dpair_D1889, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k461, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k460, VEncodePointer(&_V10_Dpair_D1886, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k459, VEncodePointer(&_V10_Dpair_D1883, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k456, VEncodePointer(&_V10_Dpair_D1874, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k453, VEncodePointer(&_V10_Dpair_D1864, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k452, VEncodePointer(&_V10_Dpair_D1861, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k450, VEncodePointer(&_V10_Dpair_D1857, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k449, VEncodePointer(&_V10_Dpair_D1851, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k447, VEncodePointer(&_V10_Dpair_D1846, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k478, VEncodePointer(&_V10_Dpair_D1925, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k477, VEncodePointer(&_V10_Dpair_D1922, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k476, VEncodePointer(&_V10_Dpair_D1919, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k475, VEncodePointer(&_V10_Dpair_D1916, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k480, VEncodePointer(&_V10_Dpair_D1929, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k487, VEncodePointer(&_V10_Dpair_D1945, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k486, VEncodePointer(&_V10_Dpair_D1942, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k485, VEncodePointer(&_V10_Dpair_D1939, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k484, VEncodePointer(&_V10_Dpair_D1936, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k483, VEncodePointer(&_V10_Dpair_D1933, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k488, VEncodePointer(&_V10_Dpair_D1946, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k482, VEncodePointer(&_V10_Dpair_D1930, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k481, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k479, VEncodePointer(&_V10_Dpair_D1926, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k474, VEncodePointer(&_V10_Dpair_D1913, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k473, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k446, VEncodePointer(&_V10_Dpair_D1843, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k441, VEncodePointer(&_V10_Dpair_D1830, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k440, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k494, VEncodePointer(&_V10_Dpair_D1980, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k493, VEncodePointer(&_V10_Dpair_D1977, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k492, VEncodePointer(&_V10_Dpair_D1974, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k496, VEncodePointer(&_V10_Dpair_D1984, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k499, VEncodePointer(&_V10_Dpair_D1988, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k498, VEncodePointer(&_V10_Dpair_D1985, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k497, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k495, VEncodePointer(&_V10_Dpair_D1981, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k491, VEncodePointer(&_V10_Dpair_D1971, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k490, VEncodePointer(&_V10_Dpair_D1966, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k489, VEncodePointer(&_V10_Dpair_D1963, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda96, VEncodePointer(&_V10_Dpair_D1957, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda95, VEncodePointer(&_V10_Dpair_D1948, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k439, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k438, VEncodePointer(&_V10_Dpair_D1827, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k437, VEncodePointer(&_V10_Dpair_D1824, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k431, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k429, VEncodePointer(&_V10_Dpair_D1792, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k428, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k426, VEncodePointer(&_V10_Dpair_D1787, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k424, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k423, VEncodePointer(&_V10_Dpair_D1783, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k500, VEncodePointer(&_V10_Dpair_D1998, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k501, VEncodePointer(&_V10_Dpair_D1999, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda97, VEncodePointer(&_V10_Dpair_D1995, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k422, VEncodePointer(&_V10_Dpair_D1780, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k511, VEncodePointer(&_V10_Dpair_D2052, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k512, VEncodePointer(&_V10_Dpair_D2053, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k510, VEncodePointer(&_V10_Dpair_D2049, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k509, VEncodePointer(&_V10_Dpair_D2046, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k508, VEncodePointer(&_V10_Dpair_D2043, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k513, VEncodePointer(&_V10_Dpair_D2058, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0lambda100, VEncodePointer(&_V10_Dpair_D2055, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k518, VEncodePointer(&_V10_Dpair_D2073, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k517, VEncodePointer(&_V10_Dpair_D2070, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k519, VEncodePointer(&_V10_Dpair_D2077, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0lambda101, VEncodePointer(&_V10_Dpair_D2074, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k516, VEncodePointer(&_V10_Dpair_D2067, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k515, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k514, VEncodePointer(&_V10_Dpair_D2064, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k521, VEncodePointer(&_V10_Dpair_D2084, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k520, VEncodePointer(&_V10_Dpair_D2081, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0lambda102, VEncodePointer(&_V10_Dpair_D2078, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k522, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0lambda103, VEncodePointer(&_V10_Dpair_D2090, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80_V0k507, VEncodePointer(&_V10_Dpair_D2038, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dloop_D80, VEncodePointer(&_V10_Dpair_D2035, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k523, VEncodePointer(&_V10_Dpair_D2091, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k506, VEncodePointer(&_V10_Dpair_D2024, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k536, VEncodePointer(&_V10_Dpair_D2135, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k535, VEncodePointer(&_V10_Dpair_D2132, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k534, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k533, VEncodePointer(&_V10_Dpair_D2129, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k532, VEncodePointer(&_V10_Dpair_D2126, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k531, VEncodePointer(&_V10_Dpair_D2123, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k540, VEncodePointer(&_V10_Dpair_D2132, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k539, VEncodePointer(&_V10_Dpair_D2129, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k538, VEncodePointer(&_V10_Dpair_D2126, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k537, VEncodePointer(&_V10_Dpair_D2123, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda104, VEncodePointer(&_V10_Dpair_D2120, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k530, VEncodePointer(&_V10_Dpair_D2116, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k542, VEncodePointer(&_V10_Dpair_D2143, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k541, VEncodePointer(&_V10_Dpair_D2140, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda106, VEncodePointer(&_V10_Dpair_D2148, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda105, VEncodePointer(&_V10_Dpair_D2137, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k529, VEncodePointer(&_V10_Dpair_D2110, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k528, VEncodePointer(&_V10_Dpair_D2107, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k544, VEncodePointer(&_V10_Dpair_D2163, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k547, VEncodePointer(&_V10_Dpair_D2170, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k546, VEncodePointer(&_V10_Dpair_D2167, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k545, VEncodePointer(&_V10_Dpair_D2164, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k543, VEncodePointer(&_V10_Dpair_D2160, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda108, VEncodePointer(&_V10_Dpair_D2157, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda107, VEncodePointer(&_V10_Dpair_D2150, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k527, VEncodePointer(&_V10_Dpair_D2101, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k526, VEncodePointer(&_V10_Dpair_D2098, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k549, VEncodePointer(&_V10_Dpair_D2181, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda110, VEncodePointer(&_V10_Dpair_D2178, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k548, VEncodePointer(&_V10_Dpair_D2175, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda109, VEncodePointer(&_V10_Dpair_D2172, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k525, VEncodePointer(&_V10_Dpair_D2092, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k524, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k505, VEncodePointer(&_V10_Dpair_D2021, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda112, VEncodePointer(&_V10_Dpair_D2186, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k551, VEncodePointer(&_V10_Dpair_D2192, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k550, VEncodePointer(&_V10_Dpair_D2189, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda113, VEncodePointer(&_V10_Dpair_D2186, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda111, VEncodePointer(&_V10_Dpair_D2183, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k504, VEncodePointer(&_V10_Dpair_D2015, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k552, VEncodePointer(&_V10_Dpair_D2197, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda114, VEncodePointer(&_V10_Dpair_D2194, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k503, VEncodePointer(&_V10_Dpair_D2012, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda99, VEncodePointer(&_V10_Dpair_D2006, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k502, VEncodePointer(&_V10_Dpair_D2003, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda98, VEncodePointer(&_V10_Dpair_D2000, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k421, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k420, VEncodePointer(&_V10_Dpair_D1777, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k419, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k418, VEncodePointer(&_V10_Dpair_D1774, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k417, VEncodePointer(&_V10_Dpair_D1771, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k415, VEncodePointer(&_V10_Dpair_D1766, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k413, VEncodePointer(&_V10_Dpair_D1761, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k411, VEncodePointer(&_V10_Dpair_D1755, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k409, VEncodePointer(&_V10_Dpair_D1751, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k408, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k407, VEncodePointer(&_V10_Dpair_D1748, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k404, VEncodePointer(&_V10_Dpair_D1738, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k403, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k402, VEncodePointer(&_V10_Dpair_D1735, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k398, VEncodePointer(&_V10_Dpair_D1722, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k396, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k395, VEncodePointer(&_V10_Dpair_D1718, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k391, VEncodePointer(&_V10_Dpair_D1704, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k389, VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k388, VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k386, VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda90, VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda89, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k554, VEncodePointer(&_V10_Dpair_D1629, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k556, VEncodePointer(&_V10_Dpair_D2202, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k557, VEncodePointer(&_V10_Dpair_D2203, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k555, VEncodePointer(&_V10_Dpair_D2199, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0k553, VEncodePointer(&_V10_Dpair_D1626, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)global_V0lambda115, VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR));
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda49, self)), 1,
      _k);
}
static void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda51, self)), 1,
      _k);
}
static void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda53, self)), 1,
      _k);
}
static void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda55, self)), 1,
      _k);
}
static void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda57, self)), 1,
      _k);
}
static void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda59, self)), 1,
      _k);
}
static void toplevel52(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda61, self)), 1,
      _k);
}
static void toplevel53(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda63, self)), 1,
      _k);
}
static void toplevel54(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda65, self)), 1,
      _k);
}
static void toplevel55(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda67, self)), 1,
      _k);
}
static void toplevel56(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda72, self)), 1,
      _k);
}
static void toplevel57(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda76, self)), 1,
      _k);
}
static void toplevel58(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda78, self)), 1,
      _k);
}
static void toplevel59(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda80, self)), 1,
      _k);
}
static void toplevel60(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda83, self)), 1,
      _k);
}
static void toplevel61(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda85, self)), 1,
      _k);
}
static void toplevel62(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda86, self)), 1,
      _k);
}
static void toplevel63(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda87, self)), 1,
      _k);
}
static void toplevel64(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda88, self)), 1,
      _k);
}
static void toplevel65(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda89, self)), 1,
      _k);
}
static void toplevel66(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda115, self)), 1,
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
