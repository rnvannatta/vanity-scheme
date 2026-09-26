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

VEnv * _V60_V0vanity_V0compiler_V0verify;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1263 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1262 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "_V0vanity_V0hashtable_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1261 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1260 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1259 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1258 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0current__hash;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0current__hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "current-hash" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0list_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list\?" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0boolean_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0boolean_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "boolean\?" };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "free-variables" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1257 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0verify_V20" };
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
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1237 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "toplevel-only (define sym expr)" };
static VPair _V10_Dpair_D1236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1235 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "toplevel-only (import libspec)" };
static VPair _V10_Dpair_D1234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D1233 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "toplevel-only (##foreign.declare \"decl\")" };
static VPair _V10_Dpair_D1232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D1231 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "toplevel-only (##vcore.declare \"cname\" lambda)" };
static VPair _V10_Dpair_D1230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1229 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "(##foreign.function \"C\" decl ret name argtypes ...)" };
static VPair _V10_Dpair_D1228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1227 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "(##basic-intrinsic \"VName\" nargs)" };
static VPair _V10_Dpair_D1226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1225 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "(##intrinsic \"VName\" min) or (##intrinsic \"VName\" min max/+)" };
static VPair _V10_Dpair_D1224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "(set! sym expr)" };
static VPair _V10_Dpair_D1222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "(##letrec path ((sym expr) ...) body)" };
static VPair _V10_Dpair_D1220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "(letrec ((sym expr) ...) body)" };
static VPair _V10_Dpair_D1218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1217 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "(or first second)" };
static VPair _V10_Dpair_D1216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1215 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "(begin first second)" };
static VPair _V10_Dpair_D1214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1213 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "(if test then else)" };
static VPair _V10_Dpair_D1212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1211 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "(##qualified-case-lambda name static\? (formals body) ...)" };
static VPair _V10_Dpair_D1210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D1209 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "(##qualified-lambda name static\? formals body)" };
static VPair _V10_Dpair_D1208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1207 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "(case-lambda (formals body) ...)" };
static VPair _V10_Dpair_D1206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1205 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "(lambda formals body)" };
static VPair _V10_Dpair_D1204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1203 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "(quote datum)" };
VWEAK VWORD _V0verify__expanded;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0verify__expanded = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "verify-expanded" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1202 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "vsc: verify: ~A: " };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1201 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " in " };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1200 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "verify: malformed forms in post-expansion IR" };
static VPair _V10_Dpair_D1199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1198 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "improper toplevel form list" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D1197 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "##foreign.declare payload is not a string" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1196 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "##vcore.declare payload is not a lambda or case-lambda" };
static struct { VBlob sym; char bytes[91]; } _V10_Dstring_D1195 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 91 }, "##vcore.function payload in ##vcore.declare is miscompiled by cps (see EXPAND_WRINKLES.md)" };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.function" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D1194 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "free variable in ##vcore.declare payload" };
static VPair _V10_Dpair_D1193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1189 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "##vcore.declare name is not a string" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1188 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "n-ary import, expander must split into one import per libspec" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1187 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "empty import" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1186 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "improper import" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1185 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "toplevel define of a builtin intrinsic" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1184 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "toplevel define of a reserved symbol" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1183 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "toplevel define name is not a symbol" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V0toplevel__form;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0toplevel__form = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "toplevel-form" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1182 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1181 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "quote or set! form in application operator position" };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1178 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "application operator is not a symbol or combination" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1177 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "improper application" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1176 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "malformed special form, expected " };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1175 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "define-library must be fully expanded away" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[91]; } _V10_Dstring_D1174 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 91 }, "malformed ##foreign.function, expected (##foreign.function \"C\" decl ret name argtypes ...)" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D1173 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "malformed ##basic-intrinsic, expected exactly 2 operands" };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1172 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "malformed ##basic-intrinsic, expected (##basic-intrinsic \"VName\" nargs)" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[48]; } _V10_Dstring_D1171 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 48 }, "malformed ##intrinsic, expected 2 or 3 operands" };
static struct { VBlob sym; char bytes[64]; } _V10_Dstring_D1170 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 64 }, "malformed ##intrinsic, expected (##intrinsic \"VName\" min max/+)" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1169 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "malformed ##intrinsic, expected (##intrinsic \"VName\" min)" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1168 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "set! target is a builtin intrinsic" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1167 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "set! target is a reserved symbol" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1166 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "set! target is not a symbol" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
static struct { VBlob sym; char bytes[59]; } _V10_Dstring_D1165 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 59 }, "malformed ##letrec path, expected a proper list of symbols" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D1164 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "malformed ##qualified-case-lambda name, expected a proper list of symbols" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1163 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "##qualified-case-lambda static\? is not a boolean" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
static struct { VBlob sym; char bytes[69]; } _V10_Dstring_D1162 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 69 }, "malformed ##qualified-lambda name, expected a proper list of symbols" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1161 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "##qualified-lambda static\? is not a boolean" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1160 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "stray () in expression position" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1159 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "reserved symbol in expression position" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1158 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "malformed library name, expected a proper list of symbols" };
static struct { VBlob sym; char bytes[71]; } _V10_Dstring_D1157 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 71 }, "string library names are deprecated, expected a proper list of symbols" };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1156 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "malformed rename import" };
VWEAK VWORD _V0prefix;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0prefix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "prefix" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1155 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "malformed prefix import" };
VWEAK VWORD _V0except;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0except = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "except" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1154 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "malformed except import" };
VWEAK VWORD _V0only;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0only = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "only" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1153 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "malformed only import" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1152 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "improper letrec binding list" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1151 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "malformed letrec binding, expected (sym expr)" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1150 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "letrec binding name is not a symbol" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1149 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "improper case-lambda clause list" };
static struct { VBlob sym; char bytes[54]; } _V10_Dstring_D1148 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "malformed case-lambda clause, expected (formals body)" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1147 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "malformed lambda formals" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1146 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "non-symbol in lambda formals" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1145 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "duplicate binder after alpha-conversion" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1144 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "builtin intrinsic cannot be bound" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1143 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "reserved symbol cannot be bound" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0builtin_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0arity_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded, _var0, _var1);
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.808) ((##vcore.cons (bruijn ##.%x.352 1 0) (bruijn ##.violations.138 3 0))) (set! (bruijn ##.%k.350 2 0) (bruijn ##.violations.138 3 0) (bruijn ##.%x.808 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->vars[0],
      VEncodeInt(3l), VEncodeInt(0l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140, got ~D~N"
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
  // ((bruijn ##.list.114 5 21) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140_V0k9) (bruijn ##.msg.151 0 1) (bruijn ##.form.152 0 2) (bruijn ##.ctx.153 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 21)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140_V0k9, self)))),
      _var1,
      _var2,
      _var3);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.356 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 4 2) (bruijn ##.%k.353 3 0) (##string ##.string.1145) (bruijn ##.sym.154 3 1) (bruijn ##.ctx.155 3 2)) ((bruijn ##.hash-table-set!.113 8 20) (bruijn ##.%k.353 3 0) (bruijn ##.binders.139 4 1) (bruijn ##.sym.154 3 1) #t))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1145.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 20)), 4,
      statics->up->up->vars[0],
      statics->up->up->up->vars[1],
      statics->up->up->vars[1],
      VEncodeBool(true));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.357 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.355 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 3 2) (bruijn ##.%k.353 2 0) (##string ##.string.1144) (bruijn ##.sym.154 2 1) (bruijn ##.ctx.155 2 2)) ((bruijn ##.hash-table-ref.112 7 19) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k12) (bruijn ##.binders.139 3 1) (bruijn ##.sym.154 2 1) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0lambda3)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1144.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 19)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k12, self)))),
      statics->up->up->vars[1],
      statics->up->vars[1],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0lambda3, self)))));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.354 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 2 2) (bruijn ##.%k.353 1 0) (##string ##.string.1143) (bruijn ##.sym.154 1 1) (bruijn ##.ctx.155 1 2)) (##qualified-call (vanity compiler verify builtin?) #t (bruijn ##.builtin?.134 5 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k11) (bruijn ##.sym.154 1 1)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1143.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k11, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0builtin_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0builtin_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.135 4 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k10) (bruijn ##.sym.154 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141_V0k10, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.813 1 1) (basic-block 1 1 (##.%x.815) ((##vcore.car (bruijn ##.f.159 6 1))) (##qualified-call (vanity compiler verify verify-expanded ##.note-binder!.141) #f (bruijn ##.note-binder!.141 9 3) (bruijn ##.%k.365 1 0) (bruijn ##.%x.815 0 0) (bruijn ##.ctx.157 8 2))) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 8 2) (bruijn ##.%k.365 0 0) (##string ##.string.1146) (bruijn ##.formals.156 7 1) (bruijn ##.ctx.157 7 2)))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1146.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158_V0k14(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.814) ((##vcore.cdr (bruijn ##.f.159 5 1))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.142 ##.loop.158) #f (bruijn ##.loop.158 6 0) (bruijn ##.%k.359 5 0) (bruijn ##.%x.814 0 0)))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.809) ((##vcore.null? (bruijn ##.f.159 1 1))) (if (bruijn ##.%p.809 0 0) ((bruijn ##.%k.359 1 0) #t) (basic-block 1 1 (##.%p.810) ((##vcore.symbol? (bruijn ##.f.159 2 1))) (if (bruijn ##.%p.810 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.note-binder!.141) #f (bruijn ##.note-binder!.141 5 3) (bruijn ##.%k.359 2 0) (bruijn ##.f.159 2 1) (bruijn ##.ctx.157 4 2)) (basic-block 1 1 (##.%p.811) ((##vcore.pair? (bruijn ##.f.159 3 1))) (if (bruijn ##.%p.811 0 0) (basic-block 2 2 (##.%x.812 ##.%p.813) ((##vcore.car (bruijn ##.f.159 4 1)) (##vcore.symbol? (bruijn ##.%x.812 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158_V0k13) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158_V0k14))) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 6 2) (bruijn ##.%k.359 3 0) (##string ##.string.1147) (bruijn ##.formals.156 5 1) (bruijn ##.ctx.157 5 2))))))))
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
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158_V0k14, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1147.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158")) (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.142 ##.loop.158) #f (bruijn ##.loop.158 0 0) (bruijn ##.%k.358 1 0) (bruijn ##.formals.156 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142_V10_Dloop_D158(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.375 0 0) (bruijn ##.%k.372 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k17(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 7 10) (bruijn ##.%k.376 0 0) (bruijn ##.body.820 1 0) (bruijn ##.ctx.161 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.142) #f (bruijn ##.verify-formals.142 7 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k17) (bruijn ##.formals.817 2 0) (bruijn ##.ctx.161 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k17, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.816 1 0) (basic-block 3 3 (##.formals.817 ##.expr.4.818 ##.%p.819) ((##vcore.car (bruijn ##.clause.160 4 1)) (##vcore.cdr (bruijn ##.clause.160 4 1)) (##vcore.pair? (bruijn ##.expr.4.818 0 1))) (if (bruijn ##.%p.819 0 2) (basic-block 3 3 (##.body.820 ##.%x.821 ##.%p.822) ((##vcore.car (bruijn ##.expr.4.818 1 1)) (##vcore.cdr (bruijn ##.expr.4.818 1 1)) (##vcore.null? (bruijn ##.%x.821 0 1))) (if (bruijn ##.%p.822 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda5) (bruijn ##.kk.1.162 4 1)) ((bruijn ##.%k.372 2 0) #f))) ((bruijn ##.%k.372 1 0) #f))) ((bruijn ##.%k.372 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda5, self)))),
      statics->up->up->up->vars[1]);
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 4 2) (bruijn ##.%k.370 0 0) (##string ##.string.1148) (bruijn ##.clause.160 3 1) (bruijn ##.ctx.161 3 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1148.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.369 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda6) (bruijn ##.kk.1.162 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda6, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.816) ((##vcore.pair? (bruijn ##.clause.160 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k15) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0k18, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.368 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-clause.143) #f (bruijn ##.verify-clause.143 3 5) (bruijn ##.%k.380 0 0) (bruijn ##.c.170 0 1) (bruijn ##.ctx.169 2 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[5]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.379 0 0) ((bruijn ##.for-each.93 6 0) (bruijn ##.%k.378 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0lambda7) (bruijn ##.clauses.168 1 1)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 2 2) (bruijn ##.%k.378 1 0) (##string ##.string.1149) (bruijn ##.clauses.168 1 1) (bruijn ##.ctx.169 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0lambda7, self)))),
      statics->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1149.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.list?.111 5 18) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0k19) (bruijn ##.clauses.168 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144_V0k19, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.390 0 0) (bruijn ##.%k.387 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.830 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.note-binder!.141) #f (bruijn ##.note-binder!.141 11 3) (bruijn ##.%k.393 0 0) (bruijn ##.x.824 4 0) (bruijn ##.ctx.172 10 2)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 11 2) (bruijn ##.%k.393 0 0) (##string ##.string.1150) (bruijn ##.b.173 8 1) (bruijn ##.ctx.172 10 2)))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1150.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 10 10) (bruijn ##.%k.391 1 0) (bruijn ##.val.827 2 0) (bruijn ##.ctx.172 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.830) ((##vcore.symbol? (bruijn ##.x.824 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k23) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k24)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k24, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.823 1 0) (basic-block 3 3 (##.x.824 ##.expr.8.825 ##.%p.826) ((##vcore.car (bruijn ##.b.173 4 1)) (##vcore.cdr (bruijn ##.b.173 4 1)) (##vcore.pair? (bruijn ##.expr.8.825 0 1))) (if (bruijn ##.%p.826 0 2) (basic-block 3 3 (##.val.827 ##.%x.828 ##.%p.829) ((##vcore.car (bruijn ##.expr.8.825 1 1)) (##vcore.cdr (bruijn ##.expr.8.825 1 1)) (##vcore.null? (bruijn ##.%x.828 0 1))) (if (bruijn ##.%p.829 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k22) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda10) (bruijn ##.kk.5.174 4 1)) ((bruijn ##.%k.387 2 0) #f))) ((bruijn ##.%k.387 1 0) #f))) ((bruijn ##.%k.387 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda10, self)))),
      statics->up->up->up->vars[1]);
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 6 2) (bruijn ##.%k.385 0 0) (##string ##.string.1151) (bruijn ##.b.173 3 1) (bruijn ##.ctx.172 5 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1151.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.384 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda11) (bruijn ##.kk.5.174 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda11, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.823) ((##vcore.pair? (bruijn ##.b.173 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k21) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k25)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k25, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.383 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda9, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.382 0 0) ((bruijn ##.for-each.93 6 0) (bruijn ##.%k.381 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda8) (bruijn ##.bindings.171 1 1)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 2 2) (bruijn ##.%k.381 1 0) (##string ##.string.1152) (bruijn ##.bindings.171 1 1) (bruijn ##.ctx.172 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0lambda8, self)))),
      statics->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1152.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.list?.111 5 18) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k20) (bruijn ##.bindings.171 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145_V0k20, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.831 1 0) (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.132 6 1) (bruijn ##.%k.399 0 0) (bruijn ##.path.180 2 1)) ((bruijn ##.%k.399 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.832) ((##vcore.not (bruijn ##.%x.397 1 0))) (if (bruijn ##.%p.832 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 4 2) (bruijn ##.%k.395 3 0) (bruijn ##.what.181 3 2) (bruijn ##.path.180 3 1) (bruijn ##.ctx.182 3 3)) ((bruijn ##.%k.395 3 0) #f)))
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
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146, got ~D~N"
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
  // (basic-block 1 1 (##.%p.831) ((##vcore.pair? (bruijn ##.path.180 1 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k26) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146_V0k27, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.458 0 0) (bruijn ##.%k.455 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.880) ((##vcore.not (bruijn ##.%x.461 1 0))) (if (bruijn ##.%p.880 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 11 2) (bruijn ##.%k.459 2 0) (##string ##.string.1153) (bruijn ##.spec.183 10 1) (bruijn ##.ctx.184 10 2)) ((bruijn ##.%k.459 2 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1153.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.132 12 1) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k32) (bruijn ##.syms.879 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k32, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147) #f (bruijn ##.verify-libspec.147 9 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k31) (bruijn ##.lib.878 1 0) (bruijn ##.ctx.184 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k31, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.456 0 0) (basic-block 2 2 (##.expr.12.876 ##.%p.877) ((##vcore.cdr (bruijn ##.spec.183 6 1)) (##vcore.pair? (bruijn ##.expr.12.876 0 0))) (if (bruijn ##.%p.877 0 1) (basic-block 2 2 (##.lib.878 ##.syms.879) ((##vcore.car (bruijn ##.expr.12.876 1 0)) (##vcore.cdr (bruijn ##.expr.12.876 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k30) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda13) (bruijn ##.kk.9.185 6 1))) ((bruijn ##.%k.455 3 0) #f))) ((bruijn ##.%k.455 2 0) #f))
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
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k30, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda13, self)))),
      VGetArg(statics, 6-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.833 1 0) (basic-block 1 1 (##.%x.875) ((##vcore.car (bruijn ##.spec.183 4 1))) ((bruijn ##.equal?.110 9 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k29) 'only (bruijn ##.%x.875 0 0))) ((bruijn ##.%k.455 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k29, self)))),
      _V0only,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.449 0 0) (bruijn ##.%k.446 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.874) ((##vcore.not (bruijn ##.%x.452 1 0))) (if (bruijn ##.%p.874 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 12 2) (bruijn ##.%k.450 2 0) (##string ##.string.1154) (bruijn ##.spec.183 11 1) (bruijn ##.ctx.184 11 2)) ((bruijn ##.%k.450 2 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1154.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.132 13 1) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k38) (bruijn ##.syms.873 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k38, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147) #f (bruijn ##.verify-libspec.147 10 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k37) (bruijn ##.lib.872 1 0) (bruijn ##.ctx.184 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k37, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.447 0 0) (basic-block 2 2 (##.expr.14.870 ##.%p.871) ((##vcore.cdr (bruijn ##.spec.183 7 1)) (##vcore.pair? (bruijn ##.expr.14.870 0 0))) (if (bruijn ##.%p.871 0 1) (basic-block 2 2 (##.lib.872 ##.syms.873) ((##vcore.car (bruijn ##.expr.14.870 1 0)) (##vcore.cdr (bruijn ##.expr.14.870 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k36) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda14) (bruijn ##.kk.9.185 7 1))) ((bruijn ##.%k.446 3 0) #f))) ((bruijn ##.%k.446 2 0) #f))
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
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda14, self)))),
      VGetArg(statics, 7-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.834 1 0) (basic-block 1 1 (##.%x.869) ((##vcore.car (bruijn ##.spec.183 5 1))) ((bruijn ##.equal?.110 10 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k35) 'except (bruijn ##.%x.869 0 0))) ((bruijn ##.%k.446 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k35, self)))),
      _V0except,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.439 0 0) (bruijn ##.%k.434 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k43(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.867 ##.%p.868) ((##vcore.symbol? (bruijn ##.sym.864 2 0)) (##vcore.not (bruijn ##.%x.867 0 0))) (if (bruijn ##.%p.868 0 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 13 2) (bruijn ##.%k.440 1 0) (##string ##.string.1155) (bruijn ##.spec.183 12 1) (bruijn ##.ctx.184 12 2)) ((bruijn ##.%k.440 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1155.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147) #f (bruijn ##.verify-libspec.147 12 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k43) (bruijn ##.lib.861 2 0) (bruijn ##.ctx.184 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k43, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.435 0 0) (basic-block 2 2 (##.expr.16.859 ##.%p.860) ((##vcore.cdr (bruijn ##.spec.183 8 1)) (##vcore.pair? (bruijn ##.expr.16.859 0 0))) (if (bruijn ##.%p.860 0 1) (basic-block 3 3 (##.lib.861 ##.expr.17.862 ##.%p.863) ((##vcore.car (bruijn ##.expr.16.859 1 0)) (##vcore.cdr (bruijn ##.expr.16.859 1 0)) (##vcore.pair? (bruijn ##.expr.17.862 0 1))) (if (bruijn ##.%p.863 0 2) (basic-block 3 3 (##.sym.864 ##.%x.865 ##.%p.866) ((##vcore.car (bruijn ##.expr.17.862 1 1)) (##vcore.cdr (bruijn ##.expr.17.862 1 1)) (##vcore.null? (bruijn ##.%x.865 0 1))) (if (bruijn ##.%p.866 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k42) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda15) (bruijn ##.kk.9.185 9 1)) ((bruijn ##.%k.434 5 0) #f))) ((bruijn ##.%k.434 4 0) #f))) ((bruijn ##.%k.434 3 0) #f))) ((bruijn ##.%k.434 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda15, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.835 1 0) (basic-block 1 1 (##.%x.858) ((##vcore.car (bruijn ##.spec.183 6 1))) ((bruijn ##.equal?.110 11 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k41) 'prefix (bruijn ##.%x.858 0 0))) ((bruijn ##.%k.434 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k41, self)))),
      _V0prefix,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.412 0 0) (bruijn ##.%k.409 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.420 0 0) (basic-block 1 1 (##.%x.847) ((##vcore.cdr (bruijn ##.rs.205 3 1))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147 ##.loop.204) #f (bruijn ##.loop.204 4 0) (bruijn ##.%k.418 3 0) (bruijn ##.%x.847 0 0))) ((bruijn ##.%k.418 2 0) #f))
if(VDecodeBool(
_var0)) {
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.428 0 0) (bruijn ##.%k.425 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.856) ((##vcore.symbol? (bruijn ##.a.850 3 0))) (if (bruijn ##.%p.856 0 0) (basic-block 1 1 (##.%r.857) ((##vcore.symbol? (bruijn ##.b.853 3 0))) ((bruijn ##.%k.429 2 0) (bruijn ##.%r.857 0 0))) ((bruijn ##.%k.429 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.849 1 1) (basic-block 3 3 (##.a.850 ##.expr.23.851 ##.%p.852) ((##vcore.car (bruijn ##.input.21.848 2 0)) (##vcore.cdr (bruijn ##.input.21.848 2 0)) (##vcore.pair? (bruijn ##.expr.23.851 0 1))) (if (bruijn ##.%p.852 0 2) (basic-block 3 3 (##.b.853 ##.%x.854 ##.%p.855) ((##vcore.car (bruijn ##.expr.23.851 1 1)) (##vcore.cdr (bruijn ##.expr.23.851 1 1)) (##vcore.null? (bruijn ##.%x.854 0 1))) (if (bruijn ##.%p.855 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k53) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda18) (bruijn ##.kk.20.206 4 1)) ((bruijn ##.%k.425 2 0) #f))) ((bruijn ##.%k.425 1 0) #f))) ((bruijn ##.%k.425 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k53, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda18, self)))),
      statics->up->up->up->vars[1]);
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.423 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k54(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.422 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda19) (bruijn ##.kk.20.206 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda19, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.21.848 ##.%p.849) ((##vcore.car (bruijn ##.rs.205 3 1)) (##vcore.pair? (bruijn ##.input.21.848 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k52) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k54)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k52, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k54, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.846) ((##vcore.null? (bruijn ##.rs.205 1 1))) (if (bruijn ##.%p.846 0 0) ((bruijn ##.%k.418 1 0) (bruijn ##.%p.846 0 0)) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k51) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda17))))
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
      self->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0k51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204_V0lambda17, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.416 1 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204")) (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147 ##.loop.204) #f (bruijn ##.loop.204 0 0) (bruijn ##.%k.417 1 0) (bruijn ##.renames.844 4 1))) ((bruijn ##.%k.417 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V10_Dloop_D204(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.845) ((##vcore.not (bruijn ##.%x.415 1 0))) (if (bruijn ##.%p.845 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 15 2) (bruijn ##.%k.413 3 0) (##string ##.string.1156) (bruijn ##.spec.183 14 1) (bruijn ##.ctx.184 14 2)) ((bruijn ##.%k.413 3 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1156.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k50) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k55))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k55, self)))));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.list?.111 16 18) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k49) (bruijn ##.renames.844 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k49, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147) #f (bruijn ##.verify-libspec.147 12 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k48) (bruijn ##.lib.843 1 0) (bruijn ##.ctx.184 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k48, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.410 0 0) (basic-block 2 2 (##.expr.19.841 ##.%p.842) ((##vcore.cdr (bruijn ##.spec.183 9 1)) (##vcore.pair? (bruijn ##.expr.19.841 0 0))) (if (bruijn ##.%p.842 0 1) (basic-block 2 2 (##.lib.843 ##.renames.844) ((##vcore.car (bruijn ##.expr.19.841 1 0)) (##vcore.cdr (bruijn ##.expr.19.841 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k47) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda16) (bruijn ##.kk.9.185 9 1))) ((bruijn ##.%k.409 3 0) #f))) ((bruijn ##.%k.409 2 0) #f))
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
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda16, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.836 1 0) (basic-block 1 1 (##.%x.840) ((##vcore.car (bruijn ##.spec.183 7 1))) ((bruijn ##.equal?.110 12 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k46) 'rename (bruijn ##.%x.840 0 0))) ((bruijn ##.%k.409 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k46, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.838 1 0) (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.132 13 1) (bruijn ##.%k.407 0 0) (bruijn ##.spec.183 9 1)) ((bruijn ##.%k.407 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.839) ((##vcore.not (bruijn ##.%x.405 1 0))) (if (bruijn ##.%p.839 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 11 2) (bruijn ##.%k.402 4 0) (##string ##.string.1158) (bruijn ##.spec.183 10 1) (bruijn ##.ctx.184 10 2)) ((bruijn ##.%k.402 4 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1158.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.837) ((##vcore.string? (bruijn ##.spec.183 7 1))) (if (bruijn ##.%p.837 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 8 2) (bruijn ##.%k.402 1 0) (##string ##.string.1157) (bruijn ##.spec.183 7 1) (bruijn ##.ctx.184 7 2)) (basic-block 1 1 (##.%p.838) ((##vcore.pair? (bruijn ##.spec.183 8 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k57) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k58)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1157.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k58, self)))));
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k56(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.401 4 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda20) (bruijn ##.kk.9.185 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda20, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.836) ((##vcore.pair? (bruijn ##.spec.183 5 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k45) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k56, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.835) ((##vcore.pair? (bruijn ##.spec.183 4 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k40) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k44)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k40, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k44, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.834) ((##vcore.pair? (bruijn ##.spec.183 3 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k34) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k39)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k39, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.833) ((##vcore.pair? (bruijn ##.spec.183 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k28) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k33)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k28, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0k33, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.400 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147_V0lambda12, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.465 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 3 2) (bruijn ##.%k.463 2 0) (##string ##.string.1159) (bruijn ##.expr.212 2 1) (bruijn ##.ctx.213 2 2)) ((bruijn ##.%k.463 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1159.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.668 0 0) (bruijn ##.%k.664 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.669 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.665 0 0) (basic-block 2 2 (##.expr.27.1050 ##.%p.1051) ((##vcore.cdr (bruijn ##.expr.212 9 1)) (##vcore.pair? (bruijn ##.expr.27.1050 0 0))) (if (bruijn ##.%p.1051 0 1) (basic-block 2 2 (##.%x.1052 ##.%p.1053) ((##vcore.cdr (bruijn ##.expr.27.1050 1 0)) (##vcore.null? (bruijn ##.%x.1052 0 0))) (if (bruijn ##.%p.1053 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k62) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda22) (bruijn ##.kk.24.214 6 1)) ((bruijn ##.%k.664 4 0) #f))) ((bruijn ##.%k.664 3 0) #f))) ((bruijn ##.%k.664 2 0) #f))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k62, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda22, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.885 1 0) (basic-block 1 1 (##.%x.1049) ((##vcore.car (bruijn ##.expr.212 7 1))) ((bruijn ##.equal?.110 12 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k61) 'quote (bruijn ##.%x.1049 0 0))) ((bruijn ##.%k.664 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k61, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.659 0 0) (bruijn ##.%k.654 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 14 10) (bruijn ##.%k.660 0 0) (bruijn ##.body.1046 1 0) (bruijn ##.ctx.213 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.142) #f (bruijn ##.verify-formals.142 14 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k67) (bruijn ##.formals.1043 2 0) (bruijn ##.ctx.213 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k67, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.655 0 0) (basic-block 2 2 (##.expr.29.1041 ##.%p.1042) ((##vcore.cdr (bruijn ##.expr.212 10 1)) (##vcore.pair? (bruijn ##.expr.29.1041 0 0))) (if (bruijn ##.%p.1042 0 1) (basic-block 3 3 (##.formals.1043 ##.expr.30.1044 ##.%p.1045) ((##vcore.car (bruijn ##.expr.29.1041 1 0)) (##vcore.cdr (bruijn ##.expr.29.1041 1 0)) (##vcore.pair? (bruijn ##.expr.30.1044 0 1))) (if (bruijn ##.%p.1045 0 2) (basic-block 3 3 (##.body.1046 ##.%x.1047 ##.%p.1048) ((##vcore.car (bruijn ##.expr.30.1044 1 1)) (##vcore.cdr (bruijn ##.expr.30.1044 1 1)) (##vcore.null? (bruijn ##.%x.1047 0 1))) (if (bruijn ##.%p.1048 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k66) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda23) (bruijn ##.kk.24.214 8 1)) ((bruijn ##.%k.654 5 0) #f))) ((bruijn ##.%k.654 4 0) #f))) ((bruijn ##.%k.654 3 0) #f))) ((bruijn ##.%k.654 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k66, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda23, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.886 1 0) (basic-block 1 1 (##.%x.1040) ((##vcore.car (bruijn ##.expr.212 8 1))) ((bruijn ##.equal?.110 13 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k65) 'lambda (bruijn ##.%x.1040 0 0))) ((bruijn ##.%k.654 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k65, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.650 0 0) (bruijn ##.%k.648 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-clauses.144) #f (bruijn ##.verify-clauses.144 13 6) (bruijn ##.%k.651 0 0) (bruijn ##.clauses.1039 1 0) (bruijn ##.ctx.213 12 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 6));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.649 0 0) (basic-block 1 1 (##.clauses.1039) ((##vcore.cdr (bruijn ##.expr.212 11 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k71) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda24) (bruijn ##.kk.24.214 7 1))) ((bruijn ##.%k.648 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k71, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda24, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.887 1 0) (basic-block 1 1 (##.%x.1038) ((##vcore.car (bruijn ##.expr.212 9 1))) ((bruijn ##.equal?.110 14 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k70) 'case-lambda (bruijn ##.%x.1038 0 0))) ((bruijn ##.%k.648 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k70, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.640 0 0) (bruijn ##.%k.633 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1037 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 21 2) (bruijn ##.%k.643 0 0) (##string ##.string.1161) (bruijn ##.expr.212 20 1) (bruijn ##.ctx.213 20 2)) ((bruijn ##.%k.643 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1161.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 20-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k80(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 20 10) (bruijn ##.%k.641 2 0) (bruijn ##.body.1034 3 0) (bruijn ##.ctx.213 19 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k79(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.142) #f (bruijn ##.verify-formals.142 20 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k80) (bruijn ##.formals.1031 4 0) (bruijn ##.ctx.213 19 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k80, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1037) ((##vcore.not (bruijn ##.%x.644 1 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k78) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k79)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k79, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k76(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.boolean?.105 22 12) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k77) (bruijn ##.static?.1028 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k77, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-path.146) #f (bruijn ##.verify-path.146 18 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k76) (bruijn ##.name.1025 4 0) (##string ##.string.1162) (bruijn ##.ctx.213 17 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k76, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D1162.sym, VPOINTER_OTHER);
    VWORD _arg3 = 
      VGetArg(statics, 17-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.634 0 0) (basic-block 2 2 (##.expr.33.1023 ##.%p.1024) ((##vcore.cdr (bruijn ##.expr.212 12 1)) (##vcore.pair? (bruijn ##.expr.33.1023 0 0))) (if (bruijn ##.%p.1024 0 1) (basic-block 3 3 (##.name.1025 ##.expr.34.1026 ##.%p.1027) ((##vcore.car (bruijn ##.expr.33.1023 1 0)) (##vcore.cdr (bruijn ##.expr.33.1023 1 0)) (##vcore.pair? (bruijn ##.expr.34.1026 0 1))) (if (bruijn ##.%p.1027 0 2) (basic-block 3 3 (##.static?.1028 ##.expr.35.1029 ##.%p.1030) ((##vcore.car (bruijn ##.expr.34.1026 1 1)) (##vcore.cdr (bruijn ##.expr.34.1026 1 1)) (##vcore.pair? (bruijn ##.expr.35.1029 0 1))) (if (bruijn ##.%p.1030 0 2) (basic-block 3 3 (##.formals.1031 ##.expr.36.1032 ##.%p.1033) ((##vcore.car (bruijn ##.expr.35.1029 1 1)) (##vcore.cdr (bruijn ##.expr.35.1029 1 1)) (##vcore.pair? (bruijn ##.expr.36.1032 0 1))) (if (bruijn ##.%p.1033 0 2) (basic-block 3 3 (##.body.1034 ##.%x.1035 ##.%p.1036) ((##vcore.car (bruijn ##.expr.36.1032 1 1)) (##vcore.cdr (bruijn ##.expr.36.1032 1 1)) (##vcore.null? (bruijn ##.%x.1035 0 1))) (if (bruijn ##.%p.1036 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k75) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda25) (bruijn ##.kk.24.214 12 1)) ((bruijn ##.%k.633 7 0) #f))) ((bruijn ##.%k.633 6 0) #f))) ((bruijn ##.%k.633 5 0) #f))) ((bruijn ##.%k.633 4 0) #f))) ((bruijn ##.%k.633 3 0) #f))) ((bruijn ##.%k.633 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k75, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda25, self)))),
      VGetArg(statics, 12-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.888 1 0) (basic-block 1 1 (##.%x.1022) ((##vcore.car (bruijn ##.expr.212 10 1))) ((bruijn ##.equal?.110 15 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k74) '##qualified-lambda (bruijn ##.%x.1022 0 0))) ((bruijn ##.%k.633 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k74, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.626 0 0) (bruijn ##.%k.622 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1021 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 20 2) (bruijn ##.%k.629 0 0) (##string ##.string.1163) (bruijn ##.expr.212 19 1) (bruijn ##.ctx.213 19 2)) ((bruijn ##.%k.629 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1163.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k88(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-clauses.144) #f (bruijn ##.verify-clauses.144 19 6) (bruijn ##.%k.627 2 0) (bruijn ##.clauses.1020 3 1) (bruijn ##.ctx.213 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 6));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1021) ((##vcore.not (bruijn ##.%x.630 1 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k87) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k87, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k88, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k85(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.boolean?.105 21 12) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k86) (bruijn ##.static?.1019 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k86, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-path.146) #f (bruijn ##.verify-path.146 17 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k85) (bruijn ##.name.1016 2 0) (##string ##.string.1164) (bruijn ##.ctx.213 16 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k85, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D1164.sym, VPOINTER_OTHER);
    VWORD _arg3 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.623 0 0) (basic-block 2 2 (##.expr.38.1014 ##.%p.1015) ((##vcore.cdr (bruijn ##.expr.212 13 1)) (##vcore.pair? (bruijn ##.expr.38.1014 0 0))) (if (bruijn ##.%p.1015 0 1) (basic-block 3 3 (##.name.1016 ##.expr.39.1017 ##.%p.1018) ((##vcore.car (bruijn ##.expr.38.1014 1 0)) (##vcore.cdr (bruijn ##.expr.38.1014 1 0)) (##vcore.pair? (bruijn ##.expr.39.1017 0 1))) (if (bruijn ##.%p.1018 0 2) (basic-block 2 2 (##.static?.1019 ##.clauses.1020) ((##vcore.car (bruijn ##.expr.39.1017 1 1)) (##vcore.cdr (bruijn ##.expr.39.1017 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k84) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda26) (bruijn ##.kk.24.214 11 1))) ((bruijn ##.%k.622 4 0) #f))) ((bruijn ##.%k.622 3 0) #f))) ((bruijn ##.%k.622 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k84, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda26, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.889 1 0) (basic-block 1 1 (##.%x.1013) ((##vcore.car (bruijn ##.expr.212 11 1))) ((bruijn ##.equal?.110 16 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k83) '##qualified-case-lambda (bruijn ##.%x.1013 0 0))) ((bruijn ##.%k.622 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k83, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.617 0 0) (bruijn ##.%k.611 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 19 10) (bruijn ##.%k.618 0 0) (bruijn ##.y.1010 1 0) (bruijn ##.ctx.213 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k93(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 19 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k94) (bruijn ##.x.1007 2 0) (bruijn ##.ctx.213 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k94, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 19 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k93) (bruijn ##.p.1004 3 0) (bruijn ##.ctx.213 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k93, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.612 0 0) (basic-block 2 2 (##.expr.41.1002 ##.%p.1003) ((##vcore.cdr (bruijn ##.expr.212 14 1)) (##vcore.pair? (bruijn ##.expr.41.1002 0 0))) (if (bruijn ##.%p.1003 0 1) (basic-block 3 3 (##.p.1004 ##.expr.42.1005 ##.%p.1006) ((##vcore.car (bruijn ##.expr.41.1002 1 0)) (##vcore.cdr (bruijn ##.expr.41.1002 1 0)) (##vcore.pair? (bruijn ##.expr.42.1005 0 1))) (if (bruijn ##.%p.1006 0 2) (basic-block 3 3 (##.x.1007 ##.expr.43.1008 ##.%p.1009) ((##vcore.car (bruijn ##.expr.42.1005 1 1)) (##vcore.cdr (bruijn ##.expr.42.1005 1 1)) (##vcore.pair? (bruijn ##.expr.43.1008 0 1))) (if (bruijn ##.%p.1009 0 2) (basic-block 3 3 (##.y.1010 ##.%x.1011 ##.%p.1012) ((##vcore.car (bruijn ##.expr.43.1008 1 1)) (##vcore.cdr (bruijn ##.expr.43.1008 1 1)) (##vcore.null? (bruijn ##.%x.1011 0 1))) (if (bruijn ##.%p.1012 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k92) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda27) (bruijn ##.kk.24.214 13 1)) ((bruijn ##.%k.611 6 0) #f))) ((bruijn ##.%k.611 5 0) #f))) ((bruijn ##.%k.611 4 0) #f))) ((bruijn ##.%k.611 3 0) #f))) ((bruijn ##.%k.611 2 0) #f))
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k92, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda27, self)))),
      VGetArg(statics, 13-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.890 1 0) (basic-block 1 1 (##.%x.1001) ((##vcore.car (bruijn ##.expr.212 12 1))) ((bruijn ##.equal?.110 17 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k91) 'if (bruijn ##.%x.1001 0 0))) ((bruijn ##.%k.611 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k91, self)))),
      _V0if,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.606 0 0) (bruijn ##.%k.601 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k99(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 19 10) (bruijn ##.%k.607 0 0) (bruijn ##.y.998 1 0) (bruijn ##.ctx.213 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 19 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k99) (bruijn ##.x.995 2 0) (bruijn ##.ctx.213 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k99, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.602 0 0) (basic-block 2 2 (##.expr.45.993 ##.%p.994) ((##vcore.cdr (bruijn ##.expr.212 15 1)) (##vcore.pair? (bruijn ##.expr.45.993 0 0))) (if (bruijn ##.%p.994 0 1) (basic-block 3 3 (##.x.995 ##.expr.46.996 ##.%p.997) ((##vcore.car (bruijn ##.expr.45.993 1 0)) (##vcore.cdr (bruijn ##.expr.45.993 1 0)) (##vcore.pair? (bruijn ##.expr.46.996 0 1))) (if (bruijn ##.%p.997 0 2) (basic-block 3 3 (##.y.998 ##.%x.999 ##.%p.1000) ((##vcore.car (bruijn ##.expr.46.996 1 1)) (##vcore.cdr (bruijn ##.expr.46.996 1 1)) (##vcore.null? (bruijn ##.%x.999 0 1))) (if (bruijn ##.%p.1000 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k98) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda28) (bruijn ##.kk.24.214 13 1)) ((bruijn ##.%k.601 5 0) #f))) ((bruijn ##.%k.601 4 0) #f))) ((bruijn ##.%k.601 3 0) #f))) ((bruijn ##.%k.601 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k98, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda28, self)))),
      VGetArg(statics, 13-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.891 1 0) (basic-block 1 1 (##.%x.992) ((##vcore.car (bruijn ##.expr.212 13 1))) ((bruijn ##.equal?.110 18 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k97) 'begin (bruijn ##.%x.992 0 0))) ((bruijn ##.%k.601 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k97, self)))),
      _V0begin,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.596 0 0) (bruijn ##.%k.591 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k104(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 20 10) (bruijn ##.%k.597 0 0) (bruijn ##.y.989 1 0) (bruijn ##.ctx.213 19 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 20 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k104) (bruijn ##.x.986 2 0) (bruijn ##.ctx.213 19 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k104, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.592 0 0) (basic-block 2 2 (##.expr.48.984 ##.%p.985) ((##vcore.cdr (bruijn ##.expr.212 16 1)) (##vcore.pair? (bruijn ##.expr.48.984 0 0))) (if (bruijn ##.%p.985 0 1) (basic-block 3 3 (##.x.986 ##.expr.49.987 ##.%p.988) ((##vcore.car (bruijn ##.expr.48.984 1 0)) (##vcore.cdr (bruijn ##.expr.48.984 1 0)) (##vcore.pair? (bruijn ##.expr.49.987 0 1))) (if (bruijn ##.%p.988 0 2) (basic-block 3 3 (##.y.989 ##.%x.990 ##.%p.991) ((##vcore.car (bruijn ##.expr.49.987 1 1)) (##vcore.cdr (bruijn ##.expr.49.987 1 1)) (##vcore.null? (bruijn ##.%x.990 0 1))) (if (bruijn ##.%p.991 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k103) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda29) (bruijn ##.kk.24.214 14 1)) ((bruijn ##.%k.591 5 0) #f))) ((bruijn ##.%k.591 4 0) #f))) ((bruijn ##.%k.591 3 0) #f))) ((bruijn ##.%k.591 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k103, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda29, self)))),
      VGetArg(statics, 14-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.892 1 0) (basic-block 1 1 (##.%x.983) ((##vcore.car (bruijn ##.expr.212 14 1))) ((bruijn ##.equal?.110 19 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k102) 'or (bruijn ##.%x.983 0 0))) ((bruijn ##.%k.591 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k102, self)))),
      _V0or,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.586 0 0) (bruijn ##.%k.581 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k109(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 21 10) (bruijn ##.%k.587 0 0) (bruijn ##.body.980 1 0) (bruijn ##.ctx.213 20 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-bindings.145) #f (bruijn ##.verify-bindings.145 21 7) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k109) (bruijn ##.bindings.977 2 0) (bruijn ##.ctx.213 20 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k109, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.582 0 0) (basic-block 2 2 (##.expr.51.975 ##.%p.976) ((##vcore.cdr (bruijn ##.expr.212 17 1)) (##vcore.pair? (bruijn ##.expr.51.975 0 0))) (if (bruijn ##.%p.976 0 1) (basic-block 3 3 (##.bindings.977 ##.expr.52.978 ##.%p.979) ((##vcore.car (bruijn ##.expr.51.975 1 0)) (##vcore.cdr (bruijn ##.expr.51.975 1 0)) (##vcore.pair? (bruijn ##.expr.52.978 0 1))) (if (bruijn ##.%p.979 0 2) (basic-block 3 3 (##.body.980 ##.%x.981 ##.%p.982) ((##vcore.car (bruijn ##.expr.52.978 1 1)) (##vcore.cdr (bruijn ##.expr.52.978 1 1)) (##vcore.null? (bruijn ##.%x.981 0 1))) (if (bruijn ##.%p.982 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k108) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda30) (bruijn ##.kk.24.214 15 1)) ((bruijn ##.%k.581 5 0) #f))) ((bruijn ##.%k.581 4 0) #f))) ((bruijn ##.%k.581 3 0) #f))) ((bruijn ##.%k.581 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k108, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda30, self)))),
      VGetArg(statics, 15-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.893 1 0) (basic-block 1 1 (##.%x.974) ((##vcore.car (bruijn ##.expr.212 15 1))) ((bruijn ##.equal?.110 20 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k107) 'letrec (bruijn ##.%x.974 0 0))) ((bruijn ##.%k.581 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k107, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.576 0 0) (bruijn ##.%k.570 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 23 10) (bruijn ##.%k.577 0 0) (bruijn ##.body.971 1 0) (bruijn ##.ctx.213 22 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k114(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-bindings.145) #f (bruijn ##.verify-bindings.145 23 7) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k115) (bruijn ##.bindings.968 2 0) (bruijn ##.ctx.213 22 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k115, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-path.146) #f (bruijn ##.verify-path.146 23 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k114) (bruijn ##.path.965 3 0) (##string ##.string.1165) (bruijn ##.ctx.213 22 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k114, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D1165.sym, VPOINTER_OTHER);
    VWORD _arg3 = 
      VGetArg(statics, 22-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.571 0 0) (basic-block 2 2 (##.expr.54.963 ##.%p.964) ((##vcore.cdr (bruijn ##.expr.212 18 1)) (##vcore.pair? (bruijn ##.expr.54.963 0 0))) (if (bruijn ##.%p.964 0 1) (basic-block 3 3 (##.path.965 ##.expr.55.966 ##.%p.967) ((##vcore.car (bruijn ##.expr.54.963 1 0)) (##vcore.cdr (bruijn ##.expr.54.963 1 0)) (##vcore.pair? (bruijn ##.expr.55.966 0 1))) (if (bruijn ##.%p.967 0 2) (basic-block 3 3 (##.bindings.968 ##.expr.56.969 ##.%p.970) ((##vcore.car (bruijn ##.expr.55.966 1 1)) (##vcore.cdr (bruijn ##.expr.55.966 1 1)) (##vcore.pair? (bruijn ##.expr.56.969 0 1))) (if (bruijn ##.%p.970 0 2) (basic-block 3 3 (##.body.971 ##.%x.972 ##.%p.973) ((##vcore.car (bruijn ##.expr.56.969 1 1)) (##vcore.cdr (bruijn ##.expr.56.969 1 1)) (##vcore.null? (bruijn ##.%x.972 0 1))) (if (bruijn ##.%p.973 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k113) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda31) (bruijn ##.kk.24.214 17 1)) ((bruijn ##.%k.570 6 0) #f))) ((bruijn ##.%k.570 5 0) #f))) ((bruijn ##.%k.570 4 0) #f))) ((bruijn ##.%k.570 3 0) #f))) ((bruijn ##.%k.570 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k113, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda31, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.894 1 0) (basic-block 1 1 (##.%x.962) ((##vcore.car (bruijn ##.expr.212 16 1))) ((bruijn ##.equal?.110 21 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k112) '##letrec (bruijn ##.%x.962 0 0))) ((bruijn ##.%k.570 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k112, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.560 0 0) (bruijn ##.%k.555 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.565 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 27 2) (bruijn ##.%k.563 2 0) (##string ##.string.1168) (bruijn ##.expr.212 26 1) (bruijn ##.ctx.213 26 2)) ((bruijn ##.%k.563 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1168.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.564 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 26 2) (bruijn ##.%k.563 1 0) (##string ##.string.1167) (bruijn ##.expr.212 25 1) (bruijn ##.ctx.213 25 2)) (##qualified-call (vanity compiler verify builtin?) #t (bruijn ##.builtin?.134 29 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k122) (bruijn ##.sym.954 5 0)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1167.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 25-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k122, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0builtin_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0builtin_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.961 1 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 25 2) (bruijn ##.%k.563 0 0) (##string ##.string.1166) (bruijn ##.expr.212 24 1) (bruijn ##.ctx.213 24 2)) (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.135 28 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k121) (bruijn ##.sym.954 4 0)))
if(VDecodeBool(
statics->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1166.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 24-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k121, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k123(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 24 10) (bruijn ##.%k.561 1 0) (bruijn ##.val.957 2 0) (bruijn ##.ctx.213 23 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 23-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.960 ##.%p.961) ((##vcore.symbol? (bruijn ##.sym.954 3 0)) (##vcore.not (bruijn ##.%x.960 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k120) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k123)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k120, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k123, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.556 0 0) (basic-block 2 2 (##.expr.58.952 ##.%p.953) ((##vcore.cdr (bruijn ##.expr.212 19 1)) (##vcore.pair? (bruijn ##.expr.58.952 0 0))) (if (bruijn ##.%p.953 0 1) (basic-block 3 3 (##.sym.954 ##.expr.59.955 ##.%p.956) ((##vcore.car (bruijn ##.expr.58.952 1 0)) (##vcore.cdr (bruijn ##.expr.58.952 1 0)) (##vcore.pair? (bruijn ##.expr.59.955 0 1))) (if (bruijn ##.%p.956 0 2) (basic-block 3 3 (##.val.957 ##.%x.958 ##.%p.959) ((##vcore.car (bruijn ##.expr.59.955 1 1)) (##vcore.cdr (bruijn ##.expr.59.955 1 1)) (##vcore.null? (bruijn ##.%x.958 0 1))) (if (bruijn ##.%p.959 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k119) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda32) (bruijn ##.kk.24.214 17 1)) ((bruijn ##.%k.555 5 0) #f))) ((bruijn ##.%k.555 4 0) #f))) ((bruijn ##.%k.555 3 0) #f))) ((bruijn ##.%k.555 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k119, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda32, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.895 1 0) (basic-block 1 1 (##.%x.951) ((##vcore.car (bruijn ##.expr.212 17 1))) ((bruijn ##.equal?.110 22 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k118) 'set! (bruijn ##.%x.951 0 0))) ((bruijn ##.%k.555 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k118, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.523 0 0) (bruijn ##.%k.521 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.546 0 0) (bruijn ##.%k.543 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.949 1 0) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.133 33 2) (bruijn ##.%k.551 0 0) (bruijn ##.min.946 3 0)) ((bruijn ##.%k.551 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0arity_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0arity_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.950) ((##vcore.not (bruijn ##.%x.549 1 0))) (if (bruijn ##.%p.950 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 31 2) (bruijn ##.%k.547 3 0) (##string ##.string.1169) (bruijn ##.expr.212 30 1) (bruijn ##.ctx.213 30 2)) ((bruijn ##.%k.547 3 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 31-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1169.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 30-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 30-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.949) ((##vcore.string? (bruijn ##.name.943 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k130) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k131)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k131, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.928 1 0) (basic-block 3 3 (##.name.943 ##.expr.67.944 ##.%p.945) ((##vcore.car (bruijn ##.rest.927 5 0)) (##vcore.cdr (bruijn ##.rest.927 5 0)) (##vcore.pair? (bruijn ##.expr.67.944 0 1))) (if (bruijn ##.%p.945 0 2) (basic-block 3 3 (##.min.946 ##.%x.947 ##.%p.948) ((##vcore.car (bruijn ##.expr.67.944 1 1)) (##vcore.cdr (bruijn ##.expr.67.944 1 1)) (##vcore.null? (bruijn ##.%x.947 0 1))) (if (bruijn ##.%p.948 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k129) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda35) (bruijn ##.kk.64.276 4 1)) ((bruijn ##.%k.543 2 0) #f))) ((bruijn ##.%k.543 1 0) #f))) ((bruijn ##.%k.543 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k129, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda35, self)))),
      statics->up->up->up->vars[1]);
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.532 0 0) (bruijn ##.%k.528 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.540 0 0) (basic-block 1 1 (##.%r.942) ((##vcore.>= (bruijn ##.max.936 7 0) (bruijn ##.min.933 8 0))) ((bruijn ##.%k.537 4 0) (bruijn ##.%r.942 0 0))) ((bruijn ##.%k.537 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 8-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.538 0 0) (basic-block 1 1 (##.%p.941) ((##vcore.eq? (bruijn ##.max.936 5 0) '+)) (if (bruijn ##.%p.941 0 0) ((bruijn ##.%k.537 2 0) (bruijn ##.%p.941 0 0)) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.133 37 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k137) (bruijn ##.max.936 5 0)))) ((bruijn ##.%k.537 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      _V0_P);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k137, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0arity_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0arity_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.939 1 0) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.133 35 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k136) (bruijn ##.min.933 4 0)) ((bruijn ##.%k.537 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k136, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0arity_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0arity_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.940) ((##vcore.not (bruijn ##.%x.535 1 0))) (if (bruijn ##.%p.940 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 33 2) (bruijn ##.%k.533 3 0) (##string ##.string.1170) (bruijn ##.expr.212 32 1) (bruijn ##.ctx.213 32 2)) ((bruijn ##.%k.533 3 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 33-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1170.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 32-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 32-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.939) ((##vcore.string? (bruijn ##.name.930 4 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k135) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k138)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k138, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.929 1 0) (basic-block 3 3 (##.name.930 ##.expr.69.931 ##.%p.932) ((##vcore.car (bruijn ##.rest.927 6 0)) (##vcore.cdr (bruijn ##.rest.927 6 0)) (##vcore.pair? (bruijn ##.expr.69.931 0 1))) (if (bruijn ##.%p.932 0 2) (basic-block 3 3 (##.min.933 ##.expr.70.934 ##.%p.935) ((##vcore.car (bruijn ##.expr.69.931 1 1)) (##vcore.cdr (bruijn ##.expr.69.931 1 1)) (##vcore.pair? (bruijn ##.expr.70.934 0 1))) (if (bruijn ##.%p.935 0 2) (basic-block 3 3 (##.max.936 ##.%x.937 ##.%p.938) ((##vcore.car (bruijn ##.expr.70.934 1 1)) (##vcore.cdr (bruijn ##.expr.70.934 1 1)) (##vcore.null? (bruijn ##.%x.937 0 1))) (if (bruijn ##.%p.938 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k134) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda36) (bruijn ##.kk.64.276 6 1)) ((bruijn ##.%k.528 3 0) #f))) ((bruijn ##.%k.528 2 0) #f))) ((bruijn ##.%k.528 1 0) #f))) ((bruijn ##.%k.528 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k134, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda36, self)))),
      VGetArg(statics, 6-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 26 2) (bruijn ##.%k.526 0 0) (##string ##.string.1171) (bruijn ##.expr.212 25 1) (bruijn ##.ctx.213 25 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1171.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 25-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.525 2 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda37) (bruijn ##.kk.64.276 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda37, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.929) ((##vcore.pair? (bruijn ##.rest.927 4 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k133) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k133, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k139, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.928) ((##vcore.pair? (bruijn ##.rest.927 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k128) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k132)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k128, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k132, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.524 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda34, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.522 0 0) (basic-block 1 1 (##.rest.927) ((##vcore.cdr (bruijn ##.expr.212 20 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k127) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda33) (bruijn ##.kk.24.214 16 1))) ((bruijn ##.%k.521 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k127, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda33, self)))),
      VGetArg(statics, 16-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.896 1 0) (basic-block 1 1 (##.%x.926) ((##vcore.car (bruijn ##.expr.212 18 1))) ((bruijn ##.equal?.110 23 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k126) '##intrinsic (bruijn ##.%x.926 0 0))) ((bruijn ##.%k.521 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k126, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.504 0 0) (bruijn ##.%k.502 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.512 0 0) (bruijn ##.%k.509 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.924 1 0) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.133 34 2) (bruijn ##.%k.517 0 0) (bruijn ##.n.921 3 0)) ((bruijn ##.%k.517 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0arity_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0arity_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.925) ((##vcore.not (bruijn ##.%x.515 1 0))) (if (bruijn ##.%p.925 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 32 2) (bruijn ##.%k.513 3 0) (##string ##.string.1172) (bruijn ##.expr.212 31 1) (bruijn ##.ctx.213 31 2)) ((bruijn ##.%k.513 3 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 32-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1172.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 31-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 31-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.924) ((##vcore.string? (bruijn ##.name.918 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k146) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k147)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k146, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k147, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.917 1 0) (basic-block 3 3 (##.name.918 ##.expr.74.919 ##.%p.920) ((##vcore.car (bruijn ##.rest.916 5 0)) (##vcore.cdr (bruijn ##.rest.916 5 0)) (##vcore.pair? (bruijn ##.expr.74.919 0 1))) (if (bruijn ##.%p.920 0 2) (basic-block 3 3 (##.n.921 ##.%x.922 ##.%p.923) ((##vcore.car (bruijn ##.expr.74.919 1 1)) (##vcore.cdr (bruijn ##.expr.74.919 1 1)) (##vcore.null? (bruijn ##.%x.922 0 1))) (if (bruijn ##.%p.923 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k145) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda40) (bruijn ##.kk.71.290 4 1)) ((bruijn ##.%k.509 2 0) #f))) ((bruijn ##.%k.509 1 0) #f))) ((bruijn ##.%k.509 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k145, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda40, self)))),
      statics->up->up->up->vars[1]);
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 26 2) (bruijn ##.%k.507 0 0) (##string ##.string.1173) (bruijn ##.expr.212 25 1) (bruijn ##.ctx.213 25 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1173.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 25-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.506 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda41) (bruijn ##.kk.71.290 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda41, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.917) ((##vcore.pair? (bruijn ##.rest.916 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k144) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k148)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k144, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k148, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.505 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda39))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda39, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.503 0 0) (basic-block 1 1 (##.rest.916) ((##vcore.cdr (bruijn ##.expr.212 21 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k143) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda38) (bruijn ##.kk.24.214 17 1))) ((bruijn ##.%k.502 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k143, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda38, self)))),
      VGetArg(statics, 17-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.897 1 0) (basic-block 1 1 (##.%x.915) ((##vcore.car (bruijn ##.expr.212 19 1))) ((bruijn ##.equal?.110 24 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k142) '##basic-intrinsic (bruijn ##.%x.915 0 0))) ((bruijn ##.%k.502 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k142, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.491 0 0) (bruijn ##.%k.489 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.912) ((##vcore.>= (bruijn ##.%x.499 1 0) 4)) (if (bruijn ##.%p.912 0 0) (basic-block 2 2 (##.%x.913 ##.%r.914) ((##vcore.car (bruijn ##.rest.910 6 0)) (##vcore.string? (bruijn ##.%x.913 0 0))) ((bruijn ##.%k.496 3 0) (bruijn ##.%r.914 0 1))) ((bruijn ##.%k.496 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[0],
      VEncodeInt(4l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.495 1 0) ((bruijn ##.length.101 30 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k155) (bruijn ##.rest.910 3 0)) ((bruijn ##.%k.496 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k155, self)))),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.911) ((##vcore.not (bruijn ##.%x.494 1 0))) (if (bruijn ##.%p.911 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 27 2) (bruijn ##.%k.492 3 0) (##string ##.string.1174) (bruijn ##.expr.212 26 1) (bruijn ##.ctx.213 26 2)) ((bruijn ##.%k.492 3 0) #f)))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1174.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k154) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k156))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k154, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k156, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list?.111 28 18) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k153) (bruijn ##.rest.910 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k153, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.490 0 0) (basic-block 1 1 (##.rest.910) ((##vcore.cdr (bruijn ##.expr.212 22 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k152) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda42) (bruijn ##.kk.24.214 18 1))) ((bruijn ##.%k.489 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 22-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k152, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda42, self)))),
      VGetArg(statics, 18-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.898 1 0) (basic-block 1 1 (##.%x.909) ((##vcore.car (bruijn ##.expr.212 20 1))) ((bruijn ##.equal?.110 25 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k151) '##foreign.function (bruijn ##.%x.909 0 0))) ((bruijn ##.%k.489 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k151, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.471 0 0) (bruijn ##.%k.470 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 27 2) (bruijn ##.%k.472 4 0) (bruijn ##.%x.474 0 0) (bruijn ##.expr.212 26 1) (bruijn ##.ctx.213 26 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.904 1 0) ((bruijn ##.%k.486 0 0) (bruijn ##.%p.904 1 0)) (basic-block 1 1 (##.%r.908) ((##vcore.pair? (bruijn ##.f.900 8 0))) ((bruijn ##.%k.486 1 0) (bruijn ##.%r.908 0 0))))
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
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.906 1 0) (basic-block 1 1 (##.%x.907) ((##vcore.car (bruijn ##.f.900 11 0))) ((bruijn ##.memv.106 37 13) (bruijn ##.%k.482 1 0) (bruijn ##.%x.907 0 0) '(##pair ##.pair.1180))) ((bruijn ##.%k.482 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 13)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.479 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 33 2) (bruijn ##.%k.480 0 0) (##string ##.string.1181) (bruijn ##.expr.212 32 1) (bruijn ##.ctx.213 32 2)) ((bruijn ##.%k.480 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 33-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1181.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 32-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 32-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 33 10) (bruijn ##.%k.478 0 0) (bruijn ##.e.302 0 1) (bruijn ##.ctx.213 32 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 33-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 32-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k168(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.93 36 0) (bruijn ##.%k.472 9 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda44) (bruijn ##.expr.212 31 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda44, self)))),
      VGetArg(statics, 31-1, 1));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k167) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k168))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k167, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k168, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.905) ((##vcore.not (bruijn ##.%x.484 1 0))) (if (bruijn ##.%p.905 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 30 2) (bruijn ##.%k.472 7 0) (##string ##.string.1178) (bruijn ##.expr.212 29 1) (bruijn ##.ctx.213 29 2)) (basic-block 1 1 (##.%p.906) ((##vcore.pair? (bruijn ##.f.900 9 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k165) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k166)))))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 30-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1178.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 29-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 29-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k165, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k166, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.903) ((##vcore.not (bruijn ##.%x.487 1 0))) (if (bruijn ##.%p.903 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 27 2) (bruijn ##.%k.472 4 0) (##string ##.string.1177) (bruijn ##.expr.212 26 1) (bruijn ##.ctx.213 26 2)) (basic-block 1 1 (##.%p.904) ((##vcore.symbol? (bruijn ##.f.900 6 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k163) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k164)))))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1177.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k164, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.75.300 0 0) (basic-block 1 1 (##.%x.902) ((##vcore.cdr (bruijn ##.x.75.300 1 0))) ((bruijn ##.string-append.107 30 14) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k161) (##string ##.string.1176) (bruijn ##.%x.902 0 0))) ((bruijn ##.list?.111 29 18) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k162) (bruijn ##.expr.212 24 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k161, self)))),
      VEncodePointer(&_V10_Dstring_D1176.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k162, self)))),
      VGetArg(statics, 24-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.901) ((##vcore.eq? (bruijn ##.f.900 2 0) 'define-library)) (if (bruijn ##.%p.901 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 24 2) (bruijn ##.%k.472 1 0) (##string ##.string.1175) (bruijn ##.expr.212 23 1) (bruijn ##.ctx.213 23 2)) ((bruijn ##.assv.108 28 15) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k160) (bruijn ##.f.900 2 0) (bruijn ##.reserved-shapes.136 27 5))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0define__library);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1175.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 23-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k160, self)))),
      statics->up->vars[0],
      VGetArg(statics, 27-1, 5));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.899 1 0) (basic-block 1 1 (##.f.900) ((##vcore.car (bruijn ##.expr.212 21 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k159) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda43) (bruijn ##.kk.24.214 17 1))) ((bruijn ##.%k.470 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k159, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda43, self)))),
      VGetArg(statics, 17-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k169(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.109 24 16) (bruijn ##.%k.468 15 0) (##string ##.string.1182))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 16)), 2,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D1182.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k157(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.899) ((##vcore.pair? (bruijn ##.expr.212 19 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k158) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k169)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k169, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.898) ((##vcore.pair? (bruijn ##.expr.212 18 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k150) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k157)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k150, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k157, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.897) ((##vcore.pair? (bruijn ##.expr.212 17 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k141) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k149)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k141, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k149, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.896) ((##vcore.pair? (bruijn ##.expr.212 16 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k125) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k140)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k125, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k140, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.895) ((##vcore.pair? (bruijn ##.expr.212 15 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k117) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k124)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k124, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k110(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.894) ((##vcore.pair? (bruijn ##.expr.212 14 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k111) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k116)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k111, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k116, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.893) ((##vcore.pair? (bruijn ##.expr.212 13 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k106) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k110)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k110, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.892) ((##vcore.pair? (bruijn ##.expr.212 12 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k101) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k105)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k105, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k95(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.891) ((##vcore.pair? (bruijn ##.expr.212 11 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k96) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k96, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k100, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k89(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.890) ((##vcore.pair? (bruijn ##.expr.212 10 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k90) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k95)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k90, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k95, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k81(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.889) ((##vcore.pair? (bruijn ##.expr.212 9 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k82) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k89)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k89, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.888) ((##vcore.pair? (bruijn ##.expr.212 8 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k73) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k81)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k73, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k81, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k68(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.887) ((##vcore.pair? (bruijn ##.expr.212 7 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k69) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k72)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k69, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k72, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k63(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.886) ((##vcore.pair? (bruijn ##.expr.212 6 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k64) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k68)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k64, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k68, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.885) ((##vcore.pair? (bruijn ##.expr.212 5 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k60) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k63)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k60, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k63, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.881) ((##vcore.symbol? (bruijn ##.expr.212 1 1))) (if (bruijn ##.%p.881 0 0) (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.135 5 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k59) (bruijn ##.expr.212 1 1)) (basic-block 1 1 (##.%p.882) ((##vcore.null? (bruijn ##.expr.212 2 1))) (if (bruijn ##.%p.882 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 3 2) (bruijn ##.%k.463 2 0) (##string ##.string.1160) (bruijn ##.expr.212 2 1) (bruijn ##.ctx.213 2 2)) (basic-block 2 2 (##.%x.883 ##.%p.884) ((##vcore.pair? (bruijn ##.expr.212 3 1)) (##vcore.not (bruijn ##.%x.883 0 0))) (if (bruijn ##.%p.884 0 1) ((bruijn ##.%k.463 3 0) #t) (##vcore.call/cc (bruijn ##.%k.463 3 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda21))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0k59, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1160.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148_V0lambda21, self)))));
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.692 0 0) (bruijn ##.%k.689 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1071 ##.%x.1072 ##.%x.1073 ##.%x.1074 ##.%r.1075) ((##vcore.cons (bruijn ##.x.1070 2 0) '()) (##vcore.cons 'define (bruijn ##.%x.1071 0 0)) (##vcore.cons (bruijn ##.%x.1072 0 1) '()) (##vcore.cons (bruijn ##.n.304 9 2) (bruijn ##.%x.1073 0 2)) (##vcore.cons 'toplevel-form (bruijn ##.%x.1074 0 3))) ((bruijn ##.%k.693 1 0) (bruijn ##.%r.1075 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0define,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0toplevel__form,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.690 0 0) (basic-block 2 2 (##.expr.79.1068 ##.%p.1069) ((##vcore.cdr (bruijn ##.form.303 6 1)) (##vcore.pair? (bruijn ##.expr.79.1068 0 0))) (if (bruijn ##.%p.1069 0 1) (basic-block 1 1 (##.x.1070) ((##vcore.car (bruijn ##.expr.79.1068 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k172) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda46) (bruijn ##.kk.76.305 6 1))) ((bruijn ##.%k.689 3 0) #f))) ((bruijn ##.%k.689 2 0) #f))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k172, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda46, self)))),
      VGetArg(statics, 6-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1054 1 0) (basic-block 1 1 (##.%x.1067) ((##vcore.car (bruijn ##.form.303 4 1))) ((bruijn ##.equal?.110 9 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k171) 'define (bruijn ##.%x.1067 0 0))) ((bruijn ##.%k.689 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k171, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.681 0 0) (bruijn ##.%k.678 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1062 ##.%x.1063 ##.%x.1064 ##.%x.1065 ##.%r.1066) ((##vcore.cons (bruijn ##.f.1061 2 0) '()) (##vcore.cons '##vcore.declare (bruijn ##.%x.1062 0 0)) (##vcore.cons (bruijn ##.%x.1063 0 1) '()) (##vcore.cons (bruijn ##.n.304 10 2) (bruijn ##.%x.1064 0 2)) (##vcore.cons 'toplevel-form (bruijn ##.%x.1065 0 3))) ((bruijn ##.%k.682 1 0) (bruijn ##.%r.1066 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddeclare,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 2),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0toplevel__form,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.679 0 0) (basic-block 2 2 (##.expr.81.1059 ##.%p.1060) ((##vcore.cdr (bruijn ##.form.303 7 1)) (##vcore.pair? (bruijn ##.expr.81.1059 0 0))) (if (bruijn ##.%p.1060 0 1) (basic-block 1 1 (##.f.1061) ((##vcore.car (bruijn ##.expr.81.1059 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k176) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda47) (bruijn ##.kk.76.305 7 1))) ((bruijn ##.%k.678 3 0) #f))) ((bruijn ##.%k.678 2 0) #f))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k176, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda47, self)))),
      VGetArg(statics, 7-1, 1));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1055 1 0) (basic-block 1 1 (##.%x.1058) ((##vcore.car (bruijn ##.form.303 5 1))) ((bruijn ##.equal?.110 10 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k175) '##vcore.declare (bruijn ##.%x.1058 0 0))) ((bruijn ##.%k.678 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k175, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1056 ##.%r.1057) ((##vcore.cons (bruijn ##.n.304 5 2) '()) (##vcore.cons 'toplevel-form (bruijn ##.%x.1056 0 0))) ((bruijn ##.%k.675 1 0) (bruijn ##.%r.1057 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0toplevel__form,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k177(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.674 2 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda48) (bruijn ##.kk.76.305 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda48, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k173(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1055) ((##vcore.pair? (bruijn ##.form.303 3 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k174) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k177)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k174, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k177, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1054) ((##vcore.pair? (bruijn ##.form.303 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k170) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k173)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0k173, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.673 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149_V0lambda45, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.760 0 0) (bruijn ##.%k.755 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.765 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 16 2) (bruijn ##.%k.763 2 0) (##string ##.string.1185) (bruijn ##.form.313 15 1) (bruijn ##.ctx.315 13 0)) ((bruijn ##.%k.763 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1185.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.764 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 15 2) (bruijn ##.%k.763 1 0) (##string ##.string.1184) (bruijn ##.form.313 14 1) (bruijn ##.ctx.315 12 0)) (##qualified-call (vanity compiler verify builtin?) #t (bruijn ##.builtin?.134 18 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k184) (bruijn ##.x.1117 5 0)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1184.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k184, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0builtin_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0builtin_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1124 1 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 14 2) (bruijn ##.%k.763 0 0) (##string ##.string.1183) (bruijn ##.form.313 13 1) (bruijn ##.ctx.315 11 0)) (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.135 17 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k183) (bruijn ##.x.1117 4 0)))
if(VDecodeBool(
statics->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1183.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k183, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k185(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 13 10) (bruijn ##.%k.761 1 0) (bruijn ##.val.1120 2 0) (bruijn ##.ctx.315 10 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1123 ##.%p.1124) ((##vcore.symbol? (bruijn ##.x.1117 3 0)) (##vcore.not (bruijn ##.%x.1123 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k182) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k185)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k182, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k185, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.756 0 0) (basic-block 2 2 (##.expr.85.1115 ##.%p.1116) ((##vcore.cdr (bruijn ##.form.313 8 1)) (##vcore.pair? (bruijn ##.expr.85.1115 0 0))) (if (bruijn ##.%p.1116 0 1) (basic-block 3 3 (##.x.1117 ##.expr.86.1118 ##.%p.1119) ((##vcore.car (bruijn ##.expr.85.1115 1 0)) (##vcore.cdr (bruijn ##.expr.85.1115 1 0)) (##vcore.pair? (bruijn ##.expr.86.1118 0 1))) (if (bruijn ##.%p.1119 0 2) (basic-block 3 3 (##.val.1120 ##.%x.1121 ##.%p.1122) ((##vcore.car (bruijn ##.expr.86.1118 1 1)) (##vcore.cdr (bruijn ##.expr.86.1118 1 1)) (##vcore.null? (bruijn ##.%x.1121 0 1))) (if (bruijn ##.%p.1122 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k181) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda50) (bruijn ##.kk.82.316 7 1)) ((bruijn ##.%k.755 5 0) #f))) ((bruijn ##.%k.755 4 0) #f))) ((bruijn ##.%k.755 3 0) #f))) ((bruijn ##.%k.755 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k181, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda50, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1076 1 0) (basic-block 1 1 (##.%x.1114) ((##vcore.car (bruijn ##.form.313 6 1))) ((bruijn ##.equal?.110 11 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k180) 'define (bruijn ##.%x.1114 0 0))) ((bruijn ##.%k.755 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k180, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.743 0 0) (bruijn ##.%k.741 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147) #f (bruijn ##.verify-libspec.147 16 9) (bruijn ##.%k.748 0 0) (bruijn ##.l.325 0 1) (bruijn ##.ctx.315 13 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k191(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.93 19 0) (bruijn ##.%k.744 4 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda52) (bruijn ##.libs.1107 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda52, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1108) ((##vcore.not (bruijn ##.%x.752 1 0))) (if (bruijn ##.%p.1108 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 13 2) (bruijn ##.%k.744 2 0) (##string ##.string.1186) (bruijn ##.form.313 12 1) (bruijn ##.ctx.315 10 0)) (basic-block 1 1 (##.%p.1109) ((##vcore.null? (bruijn ##.libs.1107 4 0))) (if (bruijn ##.%p.1109 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 14 2) (bruijn ##.%k.744 3 0) (##string ##.string.1187) (bruijn ##.form.313 13 1) (bruijn ##.ctx.315 11 0)) (basic-block 3 3 (##.%x.1110 ##.%x.1111 ##.%p.1112) ((##vcore.cdr (bruijn ##.libs.1107 5 0)) (##vcore.null? (bruijn ##.%x.1110 0 0)) (##vcore.not (bruijn ##.%x.1111 0 1))) (if (bruijn ##.%p.1112 0 2) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 15 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k191) (##string ##.string.1188) (bruijn ##.form.313 14 1) (bruijn ##.ctx.315 12 0)) (basic-block 1 1 (##.%x.1113) ((##vcore.car (bruijn ##.libs.1107 6 0))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.147) #f (bruijn ##.verify-libspec.147 16 9) (bruijn ##.%k.744 5 0) (bruijn ##.%x.1113 0 0) (bruijn ##.ctx.315 13 0)))))))))
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
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1186.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1187.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k191, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1188.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list?.111 15 18) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k190) (bruijn ##.libs.1107 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k190, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.742 0 0) (basic-block 1 1 (##.libs.1107) ((##vcore.cdr (bruijn ##.form.313 9 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k189) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda51) (bruijn ##.kk.82.316 6 1))) ((bruijn ##.%k.741 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k189, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda51, self)))),
      VGetArg(statics, 6-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1077 1 0) (basic-block 1 1 (##.%x.1106) ((##vcore.car (bruijn ##.form.313 7 1))) ((bruijn ##.equal?.110 12 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k188) 'import (bruijn ##.%x.1106 0 0))) ((bruijn ##.%k.741 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k188, self)))),
      _V0import,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.721 0 0) (bruijn ##.%k.716 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1098 1 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 16 2) (bruijn ##.%k.736 0 0) (##string ##.string.1189) (bruijn ##.form.313 15 1) (bruijn ##.ctx.315 13 0)) ((bruijn ##.%k.736 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1189.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1099 1 0) (basic-block 1 1 (##.%x.1105) ((##vcore.car (bruijn ##.lam.1094 5 0))) ((bruijn ##.memv.106 22 13) (bruijn ##.%k.733 1 0) (bruijn ##.%x.1105 0 0) '(##pair ##.pair.1193))) ((bruijn ##.%k.733 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 13)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1101) ((##vcore.car (bruijn ##.fv.332 1 1))) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 22 2) (bruijn ##.%k.725 1 0) (##string ##.string.1194) (bruijn ##.%x.1101 0 0) (bruijn ##.ctx.315 19 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1194.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 19-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.93 24 0) (bruijn ##.%k.722 6 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda55) (bruijn ##.%x.727 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda55, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k200(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1100) ((##vcore.eq? (bruijn ##.before.331 1 0) (bruijn ##.violations.138 19 0))) (if (bruijn ##.%p.1100 0 0) ((bruijn ##.free-variables.104 23 11) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k201) (bruijn ##.lam.1094 6 0)) ((bruijn ##.%k.722 5 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 19-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k201, self)))),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 18 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k200) (bruijn ##.lam.1094 5 0) (bruijn ##.ctx.315 15 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k200, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1102 1 0) (basic-block 2 2 (##.%x.1103 ##.%r.1104) ((##vcore.car (bruijn ##.lam.1094 7 0)) (##vcore.eq? (bruijn ##.%x.1103 0 0) '##vcore.function)) ((bruijn ##.%k.730 1 0) (bruijn ##.%r.1104 0 1))) ((bruijn ##.%k.730 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V10vcore_Dfunction);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.728 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 19 2) (bruijn ##.%k.722 5 0) (##string ##.string.1195) (bruijn ##.form.313 18 1) (bruijn ##.ctx.315 16 0)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 19 2) (bruijn ##.%k.722 5 0) (##string ##.string.1196) (bruijn ##.form.313 18 1) (bruijn ##.ctx.315 16 0)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1195.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 16-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1196.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 16-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.723 0 0) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda54) (bruijn ##.violations.138 17 0)) (basic-block 1 1 (##.%p.1102) ((##vcore.pair? (bruijn ##.lam.1094 5 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k202) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k203))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda54, self)), 1,
      VGetArg(statics, 17-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k203, self)))));
    }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k197(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1099) ((##vcore.pair? (bruijn ##.lam.1094 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k198) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k199)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k198, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k199, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1097 ##.%p.1098) ((##vcore.string? (bruijn ##.str.1091 3 0)) (##vcore.not (bruijn ##.%x.1097 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k196) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k197)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k196, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k197, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.717 0 0) (basic-block 2 2 (##.expr.89.1089 ##.%p.1090) ((##vcore.cdr (bruijn ##.form.313 10 1)) (##vcore.pair? (bruijn ##.expr.89.1089 0 0))) (if (bruijn ##.%p.1090 0 1) (basic-block 3 3 (##.str.1091 ##.expr.90.1092 ##.%p.1093) ((##vcore.car (bruijn ##.expr.89.1089 1 0)) (##vcore.cdr (bruijn ##.expr.89.1089 1 0)) (##vcore.pair? (bruijn ##.expr.90.1092 0 1))) (if (bruijn ##.%p.1093 0 2) (basic-block 3 3 (##.lam.1094 ##.%x.1095 ##.%p.1096) ((##vcore.car (bruijn ##.expr.90.1092 1 1)) (##vcore.cdr (bruijn ##.expr.90.1092 1 1)) (##vcore.null? (bruijn ##.%x.1095 0 1))) (if (bruijn ##.%p.1096 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k195) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda53) (bruijn ##.kk.82.316 9 1)) ((bruijn ##.%k.716 5 0) #f))) ((bruijn ##.%k.716 4 0) #f))) ((bruijn ##.%k.716 3 0) #f))) ((bruijn ##.%k.716 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k195, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda53, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1078 1 0) (basic-block 1 1 (##.%x.1088) ((##vcore.car (bruijn ##.form.313 8 1))) ((bruijn ##.equal?.110 13 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k194) '##vcore.declare (bruijn ##.%x.1088 0 0))) ((bruijn ##.%k.716 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k194, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.709 0 0) (bruijn ##.%k.705 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1086 ##.%p.1087) ((##vcore.string? (bruijn ##.str.1083 2 0)) (##vcore.not (bruijn ##.%x.1086 0 0))) (if (bruijn ##.%p.1087 0 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 15 2) (bruijn ##.%k.710 1 0) (##string ##.string.1197) (bruijn ##.form.313 14 1) (bruijn ##.ctx.315 12 0)) ((bruijn ##.%k.710 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1197.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.706 0 0) (basic-block 2 2 (##.expr.92.1081 ##.%p.1082) ((##vcore.cdr (bruijn ##.form.313 11 1)) (##vcore.pair? (bruijn ##.expr.92.1081 0 0))) (if (bruijn ##.%p.1082 0 1) (basic-block 3 3 (##.str.1083 ##.%x.1084 ##.%p.1085) ((##vcore.car (bruijn ##.expr.92.1081 1 0)) (##vcore.cdr (bruijn ##.expr.92.1081 1 0)) (##vcore.null? (bruijn ##.%x.1084 0 1))) (if (bruijn ##.%p.1085 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k207) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda56) (bruijn ##.kk.82.316 9 1)) ((bruijn ##.%k.705 4 0) #f))) ((bruijn ##.%k.705 3 0) #f))) ((bruijn ##.%k.705 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k207, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda56, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1079 1 0) (basic-block 1 1 (##.%x.1080) ((##vcore.car (bruijn ##.form.313 9 1))) ((bruijn ##.equal?.110 14 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k206) '##foreign.declare (bruijn ##.%x.1080 0 0))) ((bruijn ##.%k.705 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k206, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k210(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.109 13 16) (bruijn ##.%k.701 5 0) (##string ##.string.1182))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1182.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.702 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k210))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k210, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.148) #f (bruijn ##.verify-expr.148 9 10) (bruijn ##.%k.703 0 0) (bruijn ##.form.313 8 1) (bruijn ##.ctx.315 6 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k208(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k209) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda57) (bruijn ##.kk.82.316 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k209, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda57, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k204(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1079) ((##vcore.pair? (bruijn ##.form.313 7 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k205) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k208)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k205, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k208, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k192(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1078) ((##vcore.pair? (bruijn ##.form.313 6 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k193) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k204)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k204, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k186(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1077) ((##vcore.pair? (bruijn ##.form.313 5 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k187) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k192)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k187, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k192, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1076) ((##vcore.pair? (bruijn ##.form.313 4 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k179) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k186)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k179, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k186, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.700 1 0)) (##vcore.call/cc (bruijn ##.%k.699 2 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda49)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0lambda49, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler verify verify-expanded ##.toplevel-ctx.149) #f (bruijn ##.toplevel-ctx.149 1 11) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k178) (bruijn ##.form.313 0 1) (bruijn ##.n.314 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[11]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150_V0k178, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337_V0k211(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1128 ##.%x.1129) ((##vcore.cdr (bruijn ##.forms.338 4 1)) (##vcore.+ (bruijn ##.n.339 4 2) 1)) (##qualified-call (vanity compiler verify verify-expanded ##.loop.337) #f (bruijn ##.loop.337 5 0) (bruijn ##.%k.781 4 0) (bruijn ##.%x.1128 0 0) (bruijn ##.%x.1129 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1125) ((##vcore.null? (bruijn ##.forms.338 1 1))) (if (bruijn ##.%p.1125 0 0) ((bruijn ##.%k.781 1 0) #t) (basic-block 1 1 (##.%p.1126) ((##vcore.pair? (bruijn ##.forms.338 2 1))) (if (bruijn ##.%p.1126 0 0) (basic-block 1 1 (##.%x.1127) ((##vcore.car (bruijn ##.forms.338 3 1))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-toplevel.150) #f (bruijn ##.verify-toplevel.150 5 12) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337_V0k211) (bruijn ##.%x.1127 0 0) (bruijn ##.n.339 3 2))) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.140) #f (bruijn ##.bad!.140 4 2) (bruijn ##.%k.781 2 0) (##string ##.string.1198) (bruijn ##.forms.338 2 1) '(##pair ##.pair.1199))))))
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
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337_V0k211, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1198.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.102 8 9) (bruijn ##.%k.348 6 0) (##string ##.string.1200) (bruijn ##.%x.770 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1200.sym, VPOINTER_OTHER),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k214(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.length.101 7 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215) (bruijn ##.violations.340 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.94 16 1) (bruijn ##.%k.771 8 0) (bruijn ##.%x.772 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 2,
      VGetArg(statics, 8-1, 0),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k225(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.95 15 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k226))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k226, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.97 15 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k225) (bruijn ##.%x.773 1 0) (bruijn ##.%x.774 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k225, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.95 14 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k224))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k224, self)))));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k222(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.96 13 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223) (bruijn ##.v.341 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.98 13 5) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k222) (##string ##.string.1201) (bruijn ##.%x.775 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k222, self)))),
      VEncodePointer(&_V10_Dstring_D1201.sym, VPOINTER_OTHER),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k220(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.95 12 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k221))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k221, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.97 12 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k220) (bruijn ##.%x.776 1 0) (bruijn ##.%x.777 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k220, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.95 11 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k219))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k219, self)))));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k217(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadr.99 10 6) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k218) (bruijn ##.v.341 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k218, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1132) ((##vcore.car (bruijn ##.v.341 2 1))) ((bruijn ##.format.100 10 7) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k217) (bruijn ##.%x.778 1 0) (##string ##.string.1202) (bruijn ##.%x.1132 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k217, self)))),
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1202.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-error-port.95 8 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k216))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k216, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1130 ##.%p.1131) ((##vcore.null? (bruijn ##.violations.340 1 0)) (##vcore.not (bruijn ##.%x.1130 0 0))) (if (bruijn ##.%p.1131 0 1) ((bruijn ##.for-each.93 7 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k214) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda58) (bruijn ##.violations.340 1 0)) ((bruijn ##.%k.348 5 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k214, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda58, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k212(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.103 5 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k213) (bruijn ##.violations.138 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k213, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 13 ('() (bruijn ##.%x.349 1 0) (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337")) (##qualified-call (vanity compiler verify verify-expanded ##.loop.337) #f (bruijn ##.loop.337 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k212) (bruijn ##.toplevel-forms.137 3 1) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = VNULL;
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D140, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D141, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D142, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D143, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D144, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D145, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D146, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D147, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D148, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D149, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D150, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k212, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D337(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.make-hash-table.115 2 22) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k8) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.116 2 23))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[22]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k8, self)))),
      _V40_V10vcore_Deq_Q,
      statics->up->vars[23]);
}
void _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1133) ((##vcore.null? (bruijn ##.x.342 1 1))) (if (bruijn ##.%p.1133 0 0) ((bruijn ##.%k.787 1 0) #t) (basic-block 1 1 (##.%p.1134) ((##vcore.pair? (bruijn ##.x.342 2 1))) (if (bruijn ##.%p.1134 0 0) (basic-block 2 2 (##.%x.1135 ##.%p.1136) ((##vcore.car (bruijn ##.x.342 3 1)) (##vcore.symbol? (bruijn ##.%x.1135 0 0))) (if (bruijn ##.%p.1136 0 1) (basic-block 1 1 (##.%x.1137) ((##vcore.cdr (bruijn ##.x.342 4 1))) (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.132 5 1) (bruijn ##.%k.787 4 0) (bruijn ##.%x.1137 0 0))) ((bruijn ##.%k.787 3 0) #f))) ((bruijn ##.%k.787 2 0) #f)))))
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
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
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
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0arity_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0arity_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1138) ((##vcore.int? (bruijn ##.x.343 1 1))) (if (bruijn ##.%p.1138 0 0) (basic-block 1 1 (##.%r.1139) ((##vcore.>= (bruijn ##.x.343 2 1) 0)) ((bruijn ##.%k.793 2 0) (bruijn ##.%r.1139 0 0))) ((bruijn ##.%k.793 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.796 0 0) ((bruijn ##.%k.795 1 0) #t) ((bruijn ##.%k.795 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0builtin_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0builtin_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.lookup-intrinsic-name.117 2 24) (close _V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k227) (bruijn ##.x.344 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[24]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k227, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.799 0 0) ((bruijn ##.%k.797 2 0) #t) ((bruijn ##.%k.797 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1140) ((##vcore.eq? (bruijn ##.x.345 1 1) 'define-library)) (if (bruijn ##.%p.1140 0 0) ((bruijn ##.%k.797 1 0) (bruijn ##.%p.1140 0 0)) ((bruijn ##.assv.108 3 15) (close _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k228) (bruijn ##.x.345 1 1) (bruijn ##.reserved-shapes.136 2 5))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V0define__library);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k228, self)))),
      statics->vars[1],
      statics->up->vars[5]);
}
    }
}
static void _V0vanity_V0compiler_V0verify_V20_V0k229(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1141 ##.%r.1142) ((##vcore.cons 'verify-expanded (bruijn ##.verify-expanded.131 1 0)) (##vcore.cons (bruijn ##.%x.1141 0 0) '())) ((bruijn ##.%k.347 10 0) (bruijn ##.%r.1142 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0verify__expanded,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V0vanity_V0compiler_V0verify_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24) {
 if(argc != 25) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0lambda2, got ~D~N"
  "-- expected 25~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[25]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 25, 25, statics);
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
  // (##letrec (vanity compiler verify) 6 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0arity_Q" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0builtin_Q" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q" (vanity compiler verify)) #f) (set! (close _V0vanity_V0compiler_V0verify_V20_V0k229) (bruijn ##.reserved-shapes.136 0 5) '(##pair ##.pair.1256)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0verify = self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded, _V60_V0vanity_V0compiler_V0verify))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0arity_Q, _V60_V0vanity_V0compiler_V0verify))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0builtin_Q, _V60_V0vanity_V0compiler_V0verify))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _V60_V0vanity_V0compiler_V0verify))));
    self->vars[5] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0verify_V20", &_V60_V0vanity_V0compiler_V0verify);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k229, self)))),
      VEncodeInt(0l), VEncodeInt(5l),
      VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR)
    );
    }
}
static void _V0vanity_V0compiler_V0verify_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0verify_V20_V0lambda2) (##string ##.string.1257) (bruijn ##.%x.801 0 0) 'for-each 'newline 'current-error-port 'caddr 'write 'display 'cadr 'format 'length 'compiler-error 'reverse 'free-variables 'boolean? 'memv 'string-append 'assv 'error 'equal? 'list? 'hash-table-ref 'hash-table-set! 'list 'make-hash-table 'current-hash 'lookup-intrinsic-name)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 28,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D1257.sym, VPOINTER_OTHER),
      _var0,
      _V0for__each,
      _V0newline,
      _V0current__error__port,
      _V0caddr,
      _V0write,
      _V0display,
      _V0cadr,
      _V0format,
      _V0length,
      _V0compiler__error,
      _V0reverse,
      _V0free__variables,
      _V0boolean_Q,
      _V0memv,
      _V0string__append,
      _V0assv,
      _V0error,
      _V0equal_Q,
      _V0list_Q,
      _V0hash__table__ref,
      _V0hash__table__set_B,
      _V0list,
      _V0make__hash__table,
      _V0current__hash,
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0verify_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0verify_V20_V0k7) (bruijn ##.%x.802 5 0) (bruijn ##.%x.803 4 0) (bruijn ##.%x.804 3 0) (bruijn ##.%x.805 2 0) (bruijn ##.%x.806 1 0) (bruijn ##.%x.807 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 7,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k7, self)))),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0verify_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k6) (##string ##.string.1258))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1258.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0verify_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k5) (##string ##.string.1259))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1259.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0verify_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k4) (##string ##.string.1260))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1260.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0verify_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k3) (##string ##.string.1261))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1261.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0verify_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k2) (##string ##.string.1262))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1262.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0verify_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k1) (##string ##.string.1263))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1263.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0verify_V20 = (VFunc)_V0vanity_V0compiler_V0verify_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0current__hash = VEncodePointer(VInternSymbol(-1388026837, &_VW_V0current__hash.sym), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VInternSymbol(-2146525516, &_VW_V0make__hash__table.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VInternSymbol(-799540310, &_VW_V0hash__table__set_B.sym), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VInternSymbol(987278019, &_VW_V0hash__table__ref.sym), VPOINTER_OTHER);
  _V0list_Q = VEncodePointer(VInternSymbol(746894953, &_VW_V0list_Q.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0boolean_Q = VEncodePointer(VInternSymbol(746476144, &_VW_V0boolean_Q.sym), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VInternSymbol(1452788755, &_VW_V0free__variables.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0verify__expanded = VEncodePointer(VInternSymbol(-2000907854, &_VW_V0verify__expanded.sym), VPOINTER_OTHER);
  _V0toplevel = VEncodePointer(VInternSymbol(1376451653, &_VW_V0toplevel.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V10vcore_Dfunction = VEncodePointer(VInternSymbol(995907794, &_VW_V10vcore_Dfunction.sym), VPOINTER_OTHER);
  _V0import = VEncodePointer(VInternSymbol(268366565, &_VW_V0import.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V0toplevel__form = VEncodePointer(VInternSymbol(1000004804, &_VW_V0toplevel__form.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VInternSymbol(410494053, &_VW_V0define__library.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0rename = VEncodePointer(VInternSymbol(1807760215, &_VW_V0rename.sym), VPOINTER_OTHER);
  _V0prefix = VEncodePointer(VInternSymbol(1117607804, &_VW_V0prefix.sym), VPOINTER_OTHER);
  _V0except = VEncodePointer(VInternSymbol(-444186265, &_VW_V0except.sym), VPOINTER_OTHER);
  _V0only = VEncodePointer(VInternSymbol(1014778380, &_VW_V0only.sym), VPOINTER_OTHER);
  _V10_Dpair_D1256.first = VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR);
  _V10_Dpair_D1256.rest = VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR);
  _V10_Dpair_D1255.first = VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR);
  _V10_Dpair_D1255.rest = VEncodePointer(&_V10_Dpair_D1254, VPOINTER_PAIR);
  _V10_Dpair_D1254.first = VEncodePointer(&_V10_Dpair_D1208, VPOINTER_PAIR);
  _V10_Dpair_D1254.rest = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1253.first = VEncodePointer(&_V10_Dpair_D1210, VPOINTER_PAIR);
  _V10_Dpair_D1253.rest = VEncodePointer(&_V10_Dpair_D1252, VPOINTER_PAIR);
  _V10_Dpair_D1252.first = VEncodePointer(&_V10_Dpair_D1212, VPOINTER_PAIR);
  _V10_Dpair_D1252.rest = VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR);
  _V10_Dpair_D1251.first = VEncodePointer(&_V10_Dpair_D1214, VPOINTER_PAIR);
  _V10_Dpair_D1251.rest = VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR);
  _V10_Dpair_D1250.first = VEncodePointer(&_V10_Dpair_D1216, VPOINTER_PAIR);
  _V10_Dpair_D1250.rest = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1249.first = VEncodePointer(&_V10_Dpair_D1218, VPOINTER_PAIR);
  _V10_Dpair_D1249.rest = VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR);
  _V10_Dpair_D1248.first = VEncodePointer(&_V10_Dpair_D1220, VPOINTER_PAIR);
  _V10_Dpair_D1248.rest = VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR);
  _V10_Dpair_D1247.first = VEncodePointer(&_V10_Dpair_D1222, VPOINTER_PAIR);
  _V10_Dpair_D1247.rest = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1246.first = VEncodePointer(&_V10_Dpair_D1224, VPOINTER_PAIR);
  _V10_Dpair_D1246.rest = VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR);
  _V10_Dpair_D1245.first = VEncodePointer(&_V10_Dpair_D1226, VPOINTER_PAIR);
  _V10_Dpair_D1245.rest = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1243.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1243.rest = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR);
  _V10_Dpair_D1240.first = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1240.rest = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1239.first = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1239.rest = VNULL;
  _V10_Dpair_D1238.first = _V0define;
  _V10_Dpair_D1238.rest = VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER);
  _V10_Dpair_D1236.first = _V0import;
  _V10_Dpair_D1236.rest = VEncodePointer(&_V10_Dstring_D1235.sym, VPOINTER_OTHER);
  _V10_Dpair_D1234.first = _V10foreign_Ddeclare;
  _V10_Dpair_D1234.rest = VEncodePointer(&_V10_Dstring_D1233.sym, VPOINTER_OTHER);
  _V10_Dpair_D1232.first = _V10vcore_Ddeclare;
  _V10_Dpair_D1232.rest = VEncodePointer(&_V10_Dstring_D1231.sym, VPOINTER_OTHER);
  _V10_Dpair_D1230.first = _V10foreign_Dfunction;
  _V10_Dpair_D1230.rest = VEncodePointer(&_V10_Dstring_D1229.sym, VPOINTER_OTHER);
  _V10_Dpair_D1228.first = _V10basic__intrinsic;
  _V10_Dpair_D1228.rest = VEncodePointer(&_V10_Dstring_D1227.sym, VPOINTER_OTHER);
  _V10_Dpair_D1226.first = _V10intrinsic;
  _V10_Dpair_D1226.rest = VEncodePointer(&_V10_Dstring_D1225.sym, VPOINTER_OTHER);
  _V10_Dpair_D1224.first = _V0set_B;
  _V10_Dpair_D1224.rest = VEncodePointer(&_V10_Dstring_D1223.sym, VPOINTER_OTHER);
  _V10_Dpair_D1222.first = _V10letrec;
  _V10_Dpair_D1222.rest = VEncodePointer(&_V10_Dstring_D1221.sym, VPOINTER_OTHER);
  _V10_Dpair_D1220.first = _V0letrec;
  _V10_Dpair_D1220.rest = VEncodePointer(&_V10_Dstring_D1219.sym, VPOINTER_OTHER);
  _V10_Dpair_D1218.first = _V0or;
  _V10_Dpair_D1218.rest = VEncodePointer(&_V10_Dstring_D1217.sym, VPOINTER_OTHER);
  _V10_Dpair_D1216.first = _V0begin;
  _V10_Dpair_D1216.rest = VEncodePointer(&_V10_Dstring_D1215.sym, VPOINTER_OTHER);
  _V10_Dpair_D1214.first = _V0if;
  _V10_Dpair_D1214.rest = VEncodePointer(&_V10_Dstring_D1213.sym, VPOINTER_OTHER);
  _V10_Dpair_D1212.first = _V10qualified__case__lambda;
  _V10_Dpair_D1212.rest = VEncodePointer(&_V10_Dstring_D1211.sym, VPOINTER_OTHER);
  _V10_Dpair_D1210.first = _V10qualified__lambda;
  _V10_Dpair_D1210.rest = VEncodePointer(&_V10_Dstring_D1209.sym, VPOINTER_OTHER);
  _V10_Dpair_D1208.first = _V0case__lambda;
  _V10_Dpair_D1208.rest = VEncodePointer(&_V10_Dstring_D1207.sym, VPOINTER_OTHER);
  _V10_Dpair_D1206.first = _V0lambda;
  _V10_Dpair_D1206.rest = VEncodePointer(&_V10_Dstring_D1205.sym, VPOINTER_OTHER);
  _V10_Dpair_D1204.first = _V0quote;
  _V10_Dpair_D1204.rest = VEncodePointer(&_V10_Dstring_D1203.sym, VPOINTER_OTHER);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V10_Dpair_D1199.first = _V0toplevel;
  _V10_Dpair_D1199.rest = VNULL;
  _V10_Dpair_D1193.first = _V0lambda;
  _V10_Dpair_D1193.rest = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1192.first = _V0case__lambda;
  _V10_Dpair_D1192.rest = VEncodePointer(&_V10_Dpair_D1191, VPOINTER_PAIR);
  _V10_Dpair_D1191.first = _V10qualified__lambda;
  _V10_Dpair_D1191.rest = VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR);
  _V10_Dpair_D1190.first = _V10qualified__case__lambda;
  _V10_Dpair_D1190.rest = VNULL;
  _V10_Dpair_D1180.first = _V0quote;
  _V10_Dpair_D1180.rest = VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR);
  _V10_Dpair_D1179.first = _V0set_B;
  _V10_Dpair_D1179.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
