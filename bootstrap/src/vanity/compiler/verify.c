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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1251 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1250 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "_V0vanity_V0hashtable_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1249 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1248 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1247 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
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
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1246 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0verify_V20" };
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
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1226 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "toplevel-only (define sym expr)" };
static VPair _V10_Dpair_D1225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1224 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "toplevel-only (import libspec)" };
static VPair _V10_Dpair_D1223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D1222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "toplevel-only (##foreign.declare \"decl\")" };
static VPair _V10_Dpair_D1221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D1220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "toplevel-only (##vcore.declare \"cname\" lambda)" };
static VPair _V10_Dpair_D1219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1218 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "(##foreign.function \"C\" decl ret name argtypes ...)" };
static VPair _V10_Dpair_D1217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1216 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "(##basic-intrinsic \"VName\" nargs)" };
static VPair _V10_Dpair_D1215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1214 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "(##intrinsic \"VName\" min) or (##intrinsic \"VName\" min max/+)" };
static VPair _V10_Dpair_D1213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1212 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "(set! sym expr)" };
static VPair _V10_Dpair_D1211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1210 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "(##letrec path ((sym expr) ...) body)" };
static VPair _V10_Dpair_D1209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1208 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "(letrec ((sym expr) ...) body)" };
static VPair _V10_Dpair_D1207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1206 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "(or first second)" };
static VPair _V10_Dpair_D1205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1204 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "(begin first second)" };
static VPair _V10_Dpair_D1203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1202 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "(if test then else)" };
static VPair _V10_Dpair_D1201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1200 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "(##qualified-case-lambda name static\? (formals body) ...)" };
static VPair _V10_Dpair_D1199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D1198 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "(##qualified-lambda name static\? formals body)" };
static VPair _V10_Dpair_D1197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1196 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "(case-lambda (formals body) ...)" };
static VPair _V10_Dpair_D1195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1194 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "(lambda formals body)" };
static VPair _V10_Dpair_D1193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1192 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "(quote datum)" };
VWEAK VWORD _V0verify__expanded;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0verify__expanded = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "verify-expanded" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1191 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "vsc: verify: ~A: " };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1190 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " in " };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1189 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "verify: malformed forms in post-expansion IR" };
static VPair _V10_Dpair_D1188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1187 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "improper toplevel form list" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D1186 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "##foreign.declare payload is not a string" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1185 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "##vcore.declare payload is not a lambda or case-lambda" };
static struct { VBlob sym; char bytes[91]; } _V10_Dstring_D1184 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 91 }, "##vcore.function payload in ##vcore.declare is miscompiled by cps (see EXPAND_WRINKLES.md)" };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.function" };
static VPair _V10_Dpair_D1183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1179 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "##vcore.declare name is not a string" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1178 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "n-ary import, expander must split into one import per libspec" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1177 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "empty import" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1176 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "improper import" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1175 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "toplevel define of a builtin intrinsic" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1174 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "toplevel define of a reserved symbol" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1173 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "toplevel define name is not a symbol" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V0toplevel__form;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0toplevel__form = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "toplevel-form" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1172 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1171 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "quote or set! form in application operator position" };
static VPair _V10_Dpair_D1170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1168 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "application operator is not a symbol or combination" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1167 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "improper application" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1166 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "malformed special form, expected " };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1165 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "define-library must be fully expanded away" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[91]; } _V10_Dstring_D1164 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 91 }, "malformed ##foreign.function, expected (##foreign.function \"C\" decl ret name argtypes ...)" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D1163 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "malformed ##basic-intrinsic, expected exactly 2 operands" };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1162 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "malformed ##basic-intrinsic, expected (##basic-intrinsic \"VName\" nargs)" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[48]; } _V10_Dstring_D1161 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 48 }, "malformed ##intrinsic, expected 2 or 3 operands" };
static struct { VBlob sym; char bytes[64]; } _V10_Dstring_D1160 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 64 }, "malformed ##intrinsic, expected (##intrinsic \"VName\" min max/+)" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1159 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "malformed ##intrinsic, expected (##intrinsic \"VName\" min)" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1158 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "set! target is a builtin intrinsic" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1157 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "set! target is a reserved symbol" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1156 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "set! target is not a symbol" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
static struct { VBlob sym; char bytes[59]; } _V10_Dstring_D1155 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 59 }, "malformed ##letrec path, expected a proper list of symbols" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D1154 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "malformed ##qualified-case-lambda name, expected a proper list of symbols" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1153 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "##qualified-case-lambda static\? is not a boolean" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
static struct { VBlob sym; char bytes[69]; } _V10_Dstring_D1152 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 69 }, "malformed ##qualified-lambda name, expected a proper list of symbols" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1151 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "##qualified-lambda static\? is not a boolean" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1150 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "stray () in expression position" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1149 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "reserved symbol in expression position" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1148 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "malformed library name, expected a proper list of symbols" };
static struct { VBlob sym; char bytes[71]; } _V10_Dstring_D1147 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 71 }, "string library names are deprecated, expected a proper list of symbols" };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1146 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "malformed rename import" };
VWEAK VWORD _V0prefix;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0prefix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "prefix" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1145 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "malformed prefix import" };
VWEAK VWORD _V0except;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0except = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "except" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1144 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "malformed except import" };
VWEAK VWORD _V0only;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0only = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "only" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1143 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "malformed only import" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1142 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "improper letrec binding list" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1141 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "malformed letrec binding, expected (sym expr)" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1140 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "letrec binding name is not a symbol" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1139 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "improper case-lambda clause list" };
static struct { VBlob sym; char bytes[54]; } _V10_Dstring_D1138 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "malformed case-lambda clause, expected (formals body)" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1137 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "malformed lambda formals" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1136 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "non-symbol in lambda formals" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1135 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "duplicate binder after alpha-conversion" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1134 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "builtin intrinsic cannot be bound" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1133 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "reserved symbol cannot be bound" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0builtin_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0arity_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0verify_V0verify__expanded, _var0, _var1);
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.800) ((##vcore.cons (bruijn ##.%x.349 1 0) (bruijn ##.violations.137 3 0))) (set! (bruijn ##.%k.347 2 0) (bruijn ##.violations.137 3 0) (bruijn ##.%x.800 0 0)))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139, got ~D~N"
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
  // ((bruijn ##.list.113 5 20) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139_V0k8) (bruijn ##.msg.150 0 1) (bruijn ##.form.151 0 2) (bruijn ##.ctx.152 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 20)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139_V0k8, self)))),
      _var1,
      _var2,
      _var3);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.353 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 4 2) (bruijn ##.%k.350 3 0) (##string ##.string.1135) (bruijn ##.sym.153 3 1) (bruijn ##.ctx.154 3 2)) ((bruijn ##.hash-table-set!.112 8 19) (bruijn ##.%k.350 3 0) (bruijn ##.binders.138 4 1) (bruijn ##.sym.153 3 1) #t))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1135.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 19)), 4,
      statics->up->up->vars[0],
      statics->up->up->up->vars[1],
      statics->up->up->vars[1],
      VEncodeBool(true));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.354 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.352 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 3 2) (bruijn ##.%k.350 2 0) (##string ##.string.1134) (bruijn ##.sym.153 2 1) (bruijn ##.ctx.154 2 2)) ((bruijn ##.hash-table-ref.111 7 18) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k11) (bruijn ##.binders.138 3 1) (bruijn ##.sym.153 2 1) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0lambda3)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1134.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 18)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k11, self)))),
      statics->up->up->vars[1],
      statics->up->vars[1],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0lambda3, self)))));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.351 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 2 2) (bruijn ##.%k.350 1 0) (##string ##.string.1133) (bruijn ##.sym.153 1 1) (bruijn ##.ctx.154 1 2)) (##qualified-call (vanity compiler verify builtin?) #t (bruijn ##.builtin?.133 5 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k10) (bruijn ##.sym.153 1 1)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1133.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k10, self))));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.134 4 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k9) (bruijn ##.sym.153 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140_V0k9, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.805 1 1) (basic-block 1 1 (##.%x.807) ((##vcore.car (bruijn ##.f.158 6 1))) (##qualified-call (vanity compiler verify verify-expanded ##.note-binder!.140) #f (bruijn ##.note-binder!.140 9 3) (bruijn ##.%k.362 1 0) (bruijn ##.%x.807 0 0) (bruijn ##.ctx.156 8 2))) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 8 2) (bruijn ##.%k.362 0 0) (##string ##.string.1136) (bruijn ##.formals.155 7 1) (bruijn ##.ctx.156 7 2)))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
      VEncodePointer(&_V10_Dstring_D1136.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157_V0k13(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.806) ((##vcore.cdr (bruijn ##.f.158 5 1))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.141 ##.loop.157) #f (bruijn ##.loop.157 6 0) (bruijn ##.%k.356 5 0) (bruijn ##.%x.806 0 0)))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.801) ((##vcore.null? (bruijn ##.f.158 1 1))) (if (bruijn ##.%p.801 0 0) ((bruijn ##.%k.356 1 0) #t) (basic-block 1 1 (##.%p.802) ((##vcore.symbol? (bruijn ##.f.158 2 1))) (if (bruijn ##.%p.802 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.note-binder!.140) #f (bruijn ##.note-binder!.140 5 3) (bruijn ##.%k.356 2 0) (bruijn ##.f.158 2 1) (bruijn ##.ctx.156 4 2)) (basic-block 1 1 (##.%p.803) ((##vcore.pair? (bruijn ##.f.158 3 1))) (if (bruijn ##.%p.803 0 0) (basic-block 2 2 (##.%x.804 ##.%p.805) ((##vcore.car (bruijn ##.f.158 4 1)) (##vcore.symbol? (bruijn ##.%x.804 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157_V0k12) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157_V0k13))) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 6 2) (bruijn ##.%k.356 3 0) (##string ##.string.1137) (bruijn ##.formals.155 5 1) (bruijn ##.ctx.156 5 2))))))))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157_V0k13, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1137.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157")) (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.141 ##.loop.157) #f (bruijn ##.loop.157 0 0) (bruijn ##.%k.355 1 0) (bruijn ##.formals.155 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157, self))));
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141_V10_Dloop_D157(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.372 0 0) (bruijn ##.%k.369 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 7 10) (bruijn ##.%k.373 0 0) (bruijn ##.body.812 1 0) (bruijn ##.ctx.160 6 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.141) #f (bruijn ##.verify-formals.141 7 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k16) (bruijn ##.formals.809 2 0) (bruijn ##.ctx.160 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k16, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.808 1 0) (basic-block 3 3 (##.formals.809 ##.expr.4.810 ##.%p.811) ((##vcore.car (bruijn ##.clause.159 4 1)) (##vcore.cdr (bruijn ##.clause.159 4 1)) (##vcore.pair? (bruijn ##.expr.4.810 0 1))) (if (bruijn ##.%p.811 0 2) (basic-block 3 3 (##.body.812 ##.%x.813 ##.%p.814) ((##vcore.car (bruijn ##.expr.4.810 1 1)) (##vcore.cdr (bruijn ##.expr.4.810 1 1)) (##vcore.null? (bruijn ##.%x.813 0 1))) (if (bruijn ##.%p.814 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k15) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda5) (bruijn ##.kk.1.161 4 1)) ((bruijn ##.%k.369 2 0) #f))) ((bruijn ##.%k.369 1 0) #f))) ((bruijn ##.%k.369 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda5, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 4 2) (bruijn ##.%k.367 0 0) (##string ##.string.1138) (bruijn ##.clause.159 3 1) (bruijn ##.ctx.160 3 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1138.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k17(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.366 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda6) (bruijn ##.kk.1.161 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda6, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.808) ((##vcore.pair? (bruijn ##.clause.159 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k14) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k17)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0k17, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.365 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-clause.142) #f (bruijn ##.verify-clause.142 3 5) (bruijn ##.%k.377 0 0) (bruijn ##.c.169 0 1) (bruijn ##.ctx.168 2 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.376 0 0) ((bruijn ##.for-each.93 6 0) (bruijn ##.%k.375 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0lambda7) (bruijn ##.clauses.167 1 1)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 2 2) (bruijn ##.%k.375 1 0) (##string ##.string.1139) (bruijn ##.clauses.167 1 1) (bruijn ##.ctx.168 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0lambda7, self)))),
      statics->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1139.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.list?.110 5 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0k18) (bruijn ##.clauses.167 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143_V0k18, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.387 0 0) (bruijn ##.%k.384 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.822 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.note-binder!.140) #f (bruijn ##.note-binder!.140 11 3) (bruijn ##.%k.390 0 0) (bruijn ##.x.816 4 0) (bruijn ##.ctx.171 10 2)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 11 2) (bruijn ##.%k.390 0 0) (##string ##.string.1140) (bruijn ##.b.172 8 1) (bruijn ##.ctx.171 10 2)))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1140.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 10 10) (bruijn ##.%k.388 1 0) (bruijn ##.val.819 2 0) (bruijn ##.ctx.171 9 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.822) ((##vcore.symbol? (bruijn ##.x.816 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k22) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k23)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k23, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.815 1 0) (basic-block 3 3 (##.x.816 ##.expr.8.817 ##.%p.818) ((##vcore.car (bruijn ##.b.172 4 1)) (##vcore.cdr (bruijn ##.b.172 4 1)) (##vcore.pair? (bruijn ##.expr.8.817 0 1))) (if (bruijn ##.%p.818 0 2) (basic-block 3 3 (##.val.819 ##.%x.820 ##.%p.821) ((##vcore.car (bruijn ##.expr.8.817 1 1)) (##vcore.cdr (bruijn ##.expr.8.817 1 1)) (##vcore.null? (bruijn ##.%x.820 0 1))) (if (bruijn ##.%p.821 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k21) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda10) (bruijn ##.kk.5.173 4 1)) ((bruijn ##.%k.384 2 0) #f))) ((bruijn ##.%k.384 1 0) #f))) ((bruijn ##.%k.384 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda10, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 6 2) (bruijn ##.%k.382 0 0) (##string ##.string.1141) (bruijn ##.b.172 3 1) (bruijn ##.ctx.171 5 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1141.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.381 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda11) (bruijn ##.kk.5.173 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda11, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.815) ((##vcore.pair? (bruijn ##.b.172 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k20) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k24)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k24, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.380 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda9, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.379 0 0) ((bruijn ##.for-each.93 6 0) (bruijn ##.%k.378 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda8) (bruijn ##.bindings.170 1 1)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 2 2) (bruijn ##.%k.378 1 0) (##string ##.string.1142) (bruijn ##.bindings.170 1 1) (bruijn ##.ctx.171 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0lambda8, self)))),
      statics->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1142.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.list?.110 5 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k19) (bruijn ##.bindings.170 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144_V0k19, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.823 1 0) (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.131 6 1) (bruijn ##.%k.396 0 0) (bruijn ##.path.179 2 1)) ((bruijn ##.%k.396 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.824) ((##vcore.not (bruijn ##.%x.394 1 0))) (if (bruijn ##.%p.824 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 4 2) (bruijn ##.%k.392 3 0) (bruijn ##.what.180 3 2) (bruijn ##.path.179 3 1) (bruijn ##.ctx.181 3 3)) ((bruijn ##.%k.392 3 0) #f)))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145, got ~D~N"
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
  // (basic-block 1 1 (##.%p.823) ((##vcore.pair? (bruijn ##.path.179 1 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k25) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k26)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k25, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145_V0k26, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.455 0 0) (bruijn ##.%k.452 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.872) ((##vcore.not (bruijn ##.%x.458 1 0))) (if (bruijn ##.%p.872 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 11 2) (bruijn ##.%k.456 2 0) (##string ##.string.1143) (bruijn ##.spec.182 10 1) (bruijn ##.ctx.183 10 2)) ((bruijn ##.%k.456 2 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1143.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.131 12 1) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k31) (bruijn ##.syms.871 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k31, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146) #f (bruijn ##.verify-libspec.146 9 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k30) (bruijn ##.lib.870 1 0) (bruijn ##.ctx.183 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k30, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.453 0 0) (basic-block 2 2 (##.expr.12.868 ##.%p.869) ((##vcore.cdr (bruijn ##.spec.182 6 1)) (##vcore.pair? (bruijn ##.expr.12.868 0 0))) (if (bruijn ##.%p.869 0 1) (basic-block 2 2 (##.lib.870 ##.syms.871) ((##vcore.car (bruijn ##.expr.12.868 1 0)) (##vcore.cdr (bruijn ##.expr.12.868 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k29) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda13) (bruijn ##.kk.9.184 6 1))) ((bruijn ##.%k.452 3 0) #f))) ((bruijn ##.%k.452 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k29, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda13, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.825 1 0) (basic-block 1 1 (##.%x.867) ((##vcore.car (bruijn ##.spec.182 4 1))) ((bruijn ##.equal?.109 9 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k28) 'only (bruijn ##.%x.867 0 0))) ((bruijn ##.%k.452 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k28, self)))),
      _V0only,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.446 0 0) (bruijn ##.%k.443 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.866) ((##vcore.not (bruijn ##.%x.449 1 0))) (if (bruijn ##.%p.866 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 12 2) (bruijn ##.%k.447 2 0) (##string ##.string.1144) (bruijn ##.spec.182 11 1) (bruijn ##.ctx.183 11 2)) ((bruijn ##.%k.447 2 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1144.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.131 13 1) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k37) (bruijn ##.syms.865 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k37, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q, _V60_V0vanity_V0compiler_V0verify)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146) #f (bruijn ##.verify-libspec.146 10 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k36) (bruijn ##.lib.864 1 0) (bruijn ##.ctx.183 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k36, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.444 0 0) (basic-block 2 2 (##.expr.14.862 ##.%p.863) ((##vcore.cdr (bruijn ##.spec.182 7 1)) (##vcore.pair? (bruijn ##.expr.14.862 0 0))) (if (bruijn ##.%p.863 0 1) (basic-block 2 2 (##.lib.864 ##.syms.865) ((##vcore.car (bruijn ##.expr.14.862 1 0)) (##vcore.cdr (bruijn ##.expr.14.862 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k35) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda14) (bruijn ##.kk.9.184 7 1))) ((bruijn ##.%k.443 3 0) #f))) ((bruijn ##.%k.443 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda14, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.826 1 0) (basic-block 1 1 (##.%x.861) ((##vcore.car (bruijn ##.spec.182 5 1))) ((bruijn ##.equal?.109 10 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k34) 'except (bruijn ##.%x.861 0 0))) ((bruijn ##.%k.443 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k34, self)))),
      _V0except,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.436 0 0) (bruijn ##.%k.431 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.859 ##.%p.860) ((##vcore.symbol? (bruijn ##.sym.856 2 0)) (##vcore.not (bruijn ##.%x.859 0 0))) (if (bruijn ##.%p.860 0 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 13 2) (bruijn ##.%k.437 1 0) (##string ##.string.1145) (bruijn ##.spec.182 12 1) (bruijn ##.ctx.183 12 2)) ((bruijn ##.%k.437 1 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1145.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146) #f (bruijn ##.verify-libspec.146 12 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k42) (bruijn ##.lib.853 2 0) (bruijn ##.ctx.183 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k42, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.432 0 0) (basic-block 2 2 (##.expr.16.851 ##.%p.852) ((##vcore.cdr (bruijn ##.spec.182 8 1)) (##vcore.pair? (bruijn ##.expr.16.851 0 0))) (if (bruijn ##.%p.852 0 1) (basic-block 3 3 (##.lib.853 ##.expr.17.854 ##.%p.855) ((##vcore.car (bruijn ##.expr.16.851 1 0)) (##vcore.cdr (bruijn ##.expr.16.851 1 0)) (##vcore.pair? (bruijn ##.expr.17.854 0 1))) (if (bruijn ##.%p.855 0 2) (basic-block 3 3 (##.sym.856 ##.%x.857 ##.%p.858) ((##vcore.car (bruijn ##.expr.17.854 1 1)) (##vcore.cdr (bruijn ##.expr.17.854 1 1)) (##vcore.null? (bruijn ##.%x.857 0 1))) (if (bruijn ##.%p.858 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k41) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda15) (bruijn ##.kk.9.184 9 1)) ((bruijn ##.%k.431 5 0) #f))) ((bruijn ##.%k.431 4 0) #f))) ((bruijn ##.%k.431 3 0) #f))) ((bruijn ##.%k.431 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda15, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.827 1 0) (basic-block 1 1 (##.%x.850) ((##vcore.car (bruijn ##.spec.182 6 1))) ((bruijn ##.equal?.109 11 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k40) 'prefix (bruijn ##.%x.850 0 0))) ((bruijn ##.%k.431 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k40, self)))),
      _V0prefix,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.409 0 0) (bruijn ##.%k.406 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.417 0 0) (basic-block 1 1 (##.%x.839) ((##vcore.cdr (bruijn ##.rs.204 3 1))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146 ##.loop.203) #f (bruijn ##.loop.203 4 0) (bruijn ##.%k.415 3 0) (bruijn ##.%x.839 0 0))) ((bruijn ##.%k.415 2 0) #f))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.425 0 0) (bruijn ##.%k.422 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.848) ((##vcore.symbol? (bruijn ##.a.842 3 0))) (if (bruijn ##.%p.848 0 0) (basic-block 1 1 (##.%r.849) ((##vcore.symbol? (bruijn ##.b.845 3 0))) ((bruijn ##.%k.426 2 0) (bruijn ##.%r.849 0 0))) ((bruijn ##.%k.426 1 0) #f)))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.841 1 1) (basic-block 3 3 (##.a.842 ##.expr.23.843 ##.%p.844) ((##vcore.car (bruijn ##.input.21.840 2 0)) (##vcore.cdr (bruijn ##.input.21.840 2 0)) (##vcore.pair? (bruijn ##.expr.23.843 0 1))) (if (bruijn ##.%p.844 0 2) (basic-block 3 3 (##.b.845 ##.%x.846 ##.%p.847) ((##vcore.car (bruijn ##.expr.23.843 1 1)) (##vcore.cdr (bruijn ##.expr.23.843 1 1)) (##vcore.null? (bruijn ##.%x.846 0 1))) (if (bruijn ##.%p.847 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k52) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda18) (bruijn ##.kk.20.205 4 1)) ((bruijn ##.%k.422 2 0) #f))) ((bruijn ##.%k.422 1 0) #f))) ((bruijn ##.%k.422 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda18, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.420 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k53(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.419 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda19) (bruijn ##.kk.20.205 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda19, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.21.840 ##.%p.841) ((##vcore.car (bruijn ##.rs.204 3 1)) (##vcore.pair? (bruijn ##.input.21.840 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k51) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k53)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k53, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.838) ((##vcore.null? (bruijn ##.rs.204 1 1))) (if (bruijn ##.%p.838 0 0) ((bruijn ##.%k.415 1 0) (bruijn ##.%p.838 0 0)) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k50) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda17))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0k50, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203_V0lambda17, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.413 1 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203")) (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146 ##.loop.203) #f (bruijn ##.loop.203 0 0) (bruijn ##.%k.414 1 0) (bruijn ##.renames.836 4 1))) ((bruijn ##.%k.414 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203, self))));
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V10_Dloop_D203(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.837) ((##vcore.not (bruijn ##.%x.412 1 0))) (if (bruijn ##.%p.837 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 15 2) (bruijn ##.%k.410 3 0) (##string ##.string.1146) (bruijn ##.spec.182 14 1) (bruijn ##.ctx.183 14 2)) ((bruijn ##.%k.410 3 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1146.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k49) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k54))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k54, self)))));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k47(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.list?.110 16 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k48) (bruijn ##.renames.836 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k48, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146) #f (bruijn ##.verify-libspec.146 12 9) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k47) (bruijn ##.lib.835 1 0) (bruijn ##.ctx.183 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k47, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.407 0 0) (basic-block 2 2 (##.expr.19.833 ##.%p.834) ((##vcore.cdr (bruijn ##.spec.182 9 1)) (##vcore.pair? (bruijn ##.expr.19.833 0 0))) (if (bruijn ##.%p.834 0 1) (basic-block 2 2 (##.lib.835 ##.renames.836) ((##vcore.car (bruijn ##.expr.19.833 1 0)) (##vcore.cdr (bruijn ##.expr.19.833 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k46) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda16) (bruijn ##.kk.9.184 9 1))) ((bruijn ##.%k.406 3 0) #f))) ((bruijn ##.%k.406 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k46, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda16, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.828 1 0) (basic-block 1 1 (##.%x.832) ((##vcore.car (bruijn ##.spec.182 7 1))) ((bruijn ##.equal?.109 12 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k45) 'rename (bruijn ##.%x.832 0 0))) ((bruijn ##.%k.406 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k45, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.830 1 0) (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.131 13 1) (bruijn ##.%k.404 0 0) (bruijn ##.spec.182 9 1)) ((bruijn ##.%k.404 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.831) ((##vcore.not (bruijn ##.%x.402 1 0))) (if (bruijn ##.%p.831 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 11 2) (bruijn ##.%k.399 4 0) (##string ##.string.1148) (bruijn ##.spec.182 10 1) (bruijn ##.ctx.183 10 2)) ((bruijn ##.%k.399 4 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1148.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.829) ((##vcore.string? (bruijn ##.spec.182 7 1))) (if (bruijn ##.%p.829 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 8 2) (bruijn ##.%k.399 1 0) (##string ##.string.1147) (bruijn ##.spec.182 7 1) (bruijn ##.ctx.183 7 2)) (basic-block 1 1 (##.%p.830) ((##vcore.pair? (bruijn ##.spec.182 8 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k56) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k57)))))
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
      VEncodePointer(&_V10_Dstring_D1147.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k56, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k57, self)))));
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.398 4 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda20) (bruijn ##.kk.9.184 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda20, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k43(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.828) ((##vcore.pair? (bruijn ##.spec.182 5 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k44) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k55)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k55, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k38(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.827) ((##vcore.pair? (bruijn ##.spec.182 4 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k39) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k43)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k39, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k43, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.826) ((##vcore.pair? (bruijn ##.spec.182 3 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k33) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k38)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k38, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.825) ((##vcore.pair? (bruijn ##.spec.182 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k27) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0k32, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.397 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146_V0lambda12, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.462 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 3 2) (bruijn ##.%k.460 2 0) (##string ##.string.1149) (bruijn ##.expr.211 2 1) (bruijn ##.ctx.212 2 2)) ((bruijn ##.%k.460 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1149.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.665 0 0) (bruijn ##.%k.661 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.666 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.662 0 0) (basic-block 2 2 (##.expr.27.1042 ##.%p.1043) ((##vcore.cdr (bruijn ##.expr.211 9 1)) (##vcore.pair? (bruijn ##.expr.27.1042 0 0))) (if (bruijn ##.%p.1043 0 1) (basic-block 2 2 (##.%x.1044 ##.%p.1045) ((##vcore.cdr (bruijn ##.expr.27.1042 1 0)) (##vcore.null? (bruijn ##.%x.1044 0 0))) (if (bruijn ##.%p.1045 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k61) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda22) (bruijn ##.kk.24.213 6 1)) ((bruijn ##.%k.661 4 0) #f))) ((bruijn ##.%k.661 3 0) #f))) ((bruijn ##.%k.661 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda22, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.877 1 0) (basic-block 1 1 (##.%x.1041) ((##vcore.car (bruijn ##.expr.211 7 1))) ((bruijn ##.equal?.109 12 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k60) 'quote (bruijn ##.%x.1041 0 0))) ((bruijn ##.%k.661 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k60, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.656 0 0) (bruijn ##.%k.651 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 14 10) (bruijn ##.%k.657 0 0) (bruijn ##.body.1038 1 0) (bruijn ##.ctx.212 13 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.141) #f (bruijn ##.verify-formals.141 14 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k66) (bruijn ##.formals.1035 2 0) (bruijn ##.ctx.212 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k66, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.652 0 0) (basic-block 2 2 (##.expr.29.1033 ##.%p.1034) ((##vcore.cdr (bruijn ##.expr.211 10 1)) (##vcore.pair? (bruijn ##.expr.29.1033 0 0))) (if (bruijn ##.%p.1034 0 1) (basic-block 3 3 (##.formals.1035 ##.expr.30.1036 ##.%p.1037) ((##vcore.car (bruijn ##.expr.29.1033 1 0)) (##vcore.cdr (bruijn ##.expr.29.1033 1 0)) (##vcore.pair? (bruijn ##.expr.30.1036 0 1))) (if (bruijn ##.%p.1037 0 2) (basic-block 3 3 (##.body.1038 ##.%x.1039 ##.%p.1040) ((##vcore.car (bruijn ##.expr.30.1036 1 1)) (##vcore.cdr (bruijn ##.expr.30.1036 1 1)) (##vcore.null? (bruijn ##.%x.1039 0 1))) (if (bruijn ##.%p.1040 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k65) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda23) (bruijn ##.kk.24.213 8 1)) ((bruijn ##.%k.651 5 0) #f))) ((bruijn ##.%k.651 4 0) #f))) ((bruijn ##.%k.651 3 0) #f))) ((bruijn ##.%k.651 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda23, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.878 1 0) (basic-block 1 1 (##.%x.1032) ((##vcore.car (bruijn ##.expr.211 8 1))) ((bruijn ##.equal?.109 13 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k64) 'lambda (bruijn ##.%x.1032 0 0))) ((bruijn ##.%k.651 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k64, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.647 0 0) (bruijn ##.%k.645 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-clauses.143) #f (bruijn ##.verify-clauses.143 13 6) (bruijn ##.%k.648 0 0) (bruijn ##.clauses.1031 1 0) (bruijn ##.ctx.212 12 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.646 0 0) (basic-block 1 1 (##.clauses.1031) ((##vcore.cdr (bruijn ##.expr.211 11 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k70) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda24) (bruijn ##.kk.24.213 7 1))) ((bruijn ##.%k.645 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda24, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.879 1 0) (basic-block 1 1 (##.%x.1030) ((##vcore.car (bruijn ##.expr.211 9 1))) ((bruijn ##.equal?.109 14 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k69) 'case-lambda (bruijn ##.%x.1030 0 0))) ((bruijn ##.%k.645 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k69, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.637 0 0) (bruijn ##.%k.630 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1029 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 21 2) (bruijn ##.%k.640 0 0) (##string ##.string.1151) (bruijn ##.expr.211 20 1) (bruijn ##.ctx.212 20 2)) ((bruijn ##.%k.640 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1151.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 20-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k79(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 20 10) (bruijn ##.%k.638 2 0) (bruijn ##.body.1026 3 0) (bruijn ##.ctx.212 19 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k78(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-formals.141) #f (bruijn ##.verify-formals.141 20 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k79) (bruijn ##.formals.1023 4 0) (bruijn ##.ctx.212 19 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k79, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1029) ((##vcore.not (bruijn ##.%x.641 1 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k77) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k78)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k77, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k78, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k75(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.boolean?.104 22 11) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k76) (bruijn ##.static?.1020 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k76, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-path.145) #f (bruijn ##.verify-path.145 18 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k75) (bruijn ##.name.1017 4 0) (##string ##.string.1152) (bruijn ##.ctx.212 17 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k75, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D1152.sym, VPOINTER_OTHER);
    VWORD _arg3 = 
      VGetArg(statics, 17-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.631 0 0) (basic-block 2 2 (##.expr.33.1015 ##.%p.1016) ((##vcore.cdr (bruijn ##.expr.211 12 1)) (##vcore.pair? (bruijn ##.expr.33.1015 0 0))) (if (bruijn ##.%p.1016 0 1) (basic-block 3 3 (##.name.1017 ##.expr.34.1018 ##.%p.1019) ((##vcore.car (bruijn ##.expr.33.1015 1 0)) (##vcore.cdr (bruijn ##.expr.33.1015 1 0)) (##vcore.pair? (bruijn ##.expr.34.1018 0 1))) (if (bruijn ##.%p.1019 0 2) (basic-block 3 3 (##.static?.1020 ##.expr.35.1021 ##.%p.1022) ((##vcore.car (bruijn ##.expr.34.1018 1 1)) (##vcore.cdr (bruijn ##.expr.34.1018 1 1)) (##vcore.pair? (bruijn ##.expr.35.1021 0 1))) (if (bruijn ##.%p.1022 0 2) (basic-block 3 3 (##.formals.1023 ##.expr.36.1024 ##.%p.1025) ((##vcore.car (bruijn ##.expr.35.1021 1 1)) (##vcore.cdr (bruijn ##.expr.35.1021 1 1)) (##vcore.pair? (bruijn ##.expr.36.1024 0 1))) (if (bruijn ##.%p.1025 0 2) (basic-block 3 3 (##.body.1026 ##.%x.1027 ##.%p.1028) ((##vcore.car (bruijn ##.expr.36.1024 1 1)) (##vcore.cdr (bruijn ##.expr.36.1024 1 1)) (##vcore.null? (bruijn ##.%x.1027 0 1))) (if (bruijn ##.%p.1028 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k74) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda25) (bruijn ##.kk.24.213 12 1)) ((bruijn ##.%k.630 7 0) #f))) ((bruijn ##.%k.630 6 0) #f))) ((bruijn ##.%k.630 5 0) #f))) ((bruijn ##.%k.630 4 0) #f))) ((bruijn ##.%k.630 3 0) #f))) ((bruijn ##.%k.630 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k74, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda25, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.880 1 0) (basic-block 1 1 (##.%x.1014) ((##vcore.car (bruijn ##.expr.211 10 1))) ((bruijn ##.equal?.109 15 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k73) '##qualified-lambda (bruijn ##.%x.1014 0 0))) ((bruijn ##.%k.630 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k73, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.623 0 0) (bruijn ##.%k.619 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1013 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 20 2) (bruijn ##.%k.626 0 0) (##string ##.string.1153) (bruijn ##.expr.211 19 1) (bruijn ##.ctx.212 19 2)) ((bruijn ##.%k.626 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1153.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-clauses.143) #f (bruijn ##.verify-clauses.143 19 6) (bruijn ##.%k.624 2 0) (bruijn ##.clauses.1012 3 1) (bruijn ##.ctx.212 18 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1013) ((##vcore.not (bruijn ##.%x.627 1 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k86) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k87)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k87, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.boolean?.104 21 11) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k85) (bruijn ##.static?.1011 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k85, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-path.145) #f (bruijn ##.verify-path.145 17 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k84) (bruijn ##.name.1008 2 0) (##string ##.string.1154) (bruijn ##.ctx.212 16 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k84, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D1154.sym, VPOINTER_OTHER);
    VWORD _arg3 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.620 0 0) (basic-block 2 2 (##.expr.38.1006 ##.%p.1007) ((##vcore.cdr (bruijn ##.expr.211 13 1)) (##vcore.pair? (bruijn ##.expr.38.1006 0 0))) (if (bruijn ##.%p.1007 0 1) (basic-block 3 3 (##.name.1008 ##.expr.39.1009 ##.%p.1010) ((##vcore.car (bruijn ##.expr.38.1006 1 0)) (##vcore.cdr (bruijn ##.expr.38.1006 1 0)) (##vcore.pair? (bruijn ##.expr.39.1009 0 1))) (if (bruijn ##.%p.1010 0 2) (basic-block 2 2 (##.static?.1011 ##.clauses.1012) ((##vcore.car (bruijn ##.expr.39.1009 1 1)) (##vcore.cdr (bruijn ##.expr.39.1009 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k83) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda26) (bruijn ##.kk.24.213 11 1))) ((bruijn ##.%k.619 4 0) #f))) ((bruijn ##.%k.619 3 0) #f))) ((bruijn ##.%k.619 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k83, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda26, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.881 1 0) (basic-block 1 1 (##.%x.1005) ((##vcore.car (bruijn ##.expr.211 11 1))) ((bruijn ##.equal?.109 16 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k82) '##qualified-case-lambda (bruijn ##.%x.1005 0 0))) ((bruijn ##.%k.619 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k82, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.614 0 0) (bruijn ##.%k.608 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k93(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 19 10) (bruijn ##.%k.615 0 0) (bruijn ##.y.1002 1 0) (bruijn ##.ctx.212 18 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 19 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k93) (bruijn ##.x.999 2 0) (bruijn ##.ctx.212 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k93, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 19 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k92) (bruijn ##.p.996 3 0) (bruijn ##.ctx.212 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k92, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.609 0 0) (basic-block 2 2 (##.expr.41.994 ##.%p.995) ((##vcore.cdr (bruijn ##.expr.211 14 1)) (##vcore.pair? (bruijn ##.expr.41.994 0 0))) (if (bruijn ##.%p.995 0 1) (basic-block 3 3 (##.p.996 ##.expr.42.997 ##.%p.998) ((##vcore.car (bruijn ##.expr.41.994 1 0)) (##vcore.cdr (bruijn ##.expr.41.994 1 0)) (##vcore.pair? (bruijn ##.expr.42.997 0 1))) (if (bruijn ##.%p.998 0 2) (basic-block 3 3 (##.x.999 ##.expr.43.1000 ##.%p.1001) ((##vcore.car (bruijn ##.expr.42.997 1 1)) (##vcore.cdr (bruijn ##.expr.42.997 1 1)) (##vcore.pair? (bruijn ##.expr.43.1000 0 1))) (if (bruijn ##.%p.1001 0 2) (basic-block 3 3 (##.y.1002 ##.%x.1003 ##.%p.1004) ((##vcore.car (bruijn ##.expr.43.1000 1 1)) (##vcore.cdr (bruijn ##.expr.43.1000 1 1)) (##vcore.null? (bruijn ##.%x.1003 0 1))) (if (bruijn ##.%p.1004 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k91) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda27) (bruijn ##.kk.24.213 13 1)) ((bruijn ##.%k.608 6 0) #f))) ((bruijn ##.%k.608 5 0) #f))) ((bruijn ##.%k.608 4 0) #f))) ((bruijn ##.%k.608 3 0) #f))) ((bruijn ##.%k.608 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k91, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda27, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.882 1 0) (basic-block 1 1 (##.%x.993) ((##vcore.car (bruijn ##.expr.211 12 1))) ((bruijn ##.equal?.109 17 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k90) 'if (bruijn ##.%x.993 0 0))) ((bruijn ##.%k.608 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k90, self)))),
      _V0if,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.603 0 0) (bruijn ##.%k.598 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k98(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 19 10) (bruijn ##.%k.604 0 0) (bruijn ##.y.990 1 0) (bruijn ##.ctx.212 18 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 19 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k98) (bruijn ##.x.987 2 0) (bruijn ##.ctx.212 18 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k98, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.599 0 0) (basic-block 2 2 (##.expr.45.985 ##.%p.986) ((##vcore.cdr (bruijn ##.expr.211 15 1)) (##vcore.pair? (bruijn ##.expr.45.985 0 0))) (if (bruijn ##.%p.986 0 1) (basic-block 3 3 (##.x.987 ##.expr.46.988 ##.%p.989) ((##vcore.car (bruijn ##.expr.45.985 1 0)) (##vcore.cdr (bruijn ##.expr.45.985 1 0)) (##vcore.pair? (bruijn ##.expr.46.988 0 1))) (if (bruijn ##.%p.989 0 2) (basic-block 3 3 (##.y.990 ##.%x.991 ##.%p.992) ((##vcore.car (bruijn ##.expr.46.988 1 1)) (##vcore.cdr (bruijn ##.expr.46.988 1 1)) (##vcore.null? (bruijn ##.%x.991 0 1))) (if (bruijn ##.%p.992 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k97) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda28) (bruijn ##.kk.24.213 13 1)) ((bruijn ##.%k.598 5 0) #f))) ((bruijn ##.%k.598 4 0) #f))) ((bruijn ##.%k.598 3 0) #f))) ((bruijn ##.%k.598 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k97, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda28, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.883 1 0) (basic-block 1 1 (##.%x.984) ((##vcore.car (bruijn ##.expr.211 13 1))) ((bruijn ##.equal?.109 18 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k96) 'begin (bruijn ##.%x.984 0 0))) ((bruijn ##.%k.598 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k96, self)))),
      _V0begin,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.593 0 0) (bruijn ##.%k.588 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 20 10) (bruijn ##.%k.594 0 0) (bruijn ##.y.981 1 0) (bruijn ##.ctx.212 19 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 20 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k103) (bruijn ##.x.978 2 0) (bruijn ##.ctx.212 19 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k103, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.589 0 0) (basic-block 2 2 (##.expr.48.976 ##.%p.977) ((##vcore.cdr (bruijn ##.expr.211 16 1)) (##vcore.pair? (bruijn ##.expr.48.976 0 0))) (if (bruijn ##.%p.977 0 1) (basic-block 3 3 (##.x.978 ##.expr.49.979 ##.%p.980) ((##vcore.car (bruijn ##.expr.48.976 1 0)) (##vcore.cdr (bruijn ##.expr.48.976 1 0)) (##vcore.pair? (bruijn ##.expr.49.979 0 1))) (if (bruijn ##.%p.980 0 2) (basic-block 3 3 (##.y.981 ##.%x.982 ##.%p.983) ((##vcore.car (bruijn ##.expr.49.979 1 1)) (##vcore.cdr (bruijn ##.expr.49.979 1 1)) (##vcore.null? (bruijn ##.%x.982 0 1))) (if (bruijn ##.%p.983 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k102) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda29) (bruijn ##.kk.24.213 14 1)) ((bruijn ##.%k.588 5 0) #f))) ((bruijn ##.%k.588 4 0) #f))) ((bruijn ##.%k.588 3 0) #f))) ((bruijn ##.%k.588 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k102, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda29, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.884 1 0) (basic-block 1 1 (##.%x.975) ((##vcore.car (bruijn ##.expr.211 14 1))) ((bruijn ##.equal?.109 19 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k101) 'or (bruijn ##.%x.975 0 0))) ((bruijn ##.%k.588 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k101, self)))),
      _V0or,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.583 0 0) (bruijn ##.%k.578 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k108(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 21 10) (bruijn ##.%k.584 0 0) (bruijn ##.body.972 1 0) (bruijn ##.ctx.212 20 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-bindings.144) #f (bruijn ##.verify-bindings.144 21 7) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k108) (bruijn ##.bindings.969 2 0) (bruijn ##.ctx.212 20 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k108, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.579 0 0) (basic-block 2 2 (##.expr.51.967 ##.%p.968) ((##vcore.cdr (bruijn ##.expr.211 17 1)) (##vcore.pair? (bruijn ##.expr.51.967 0 0))) (if (bruijn ##.%p.968 0 1) (basic-block 3 3 (##.bindings.969 ##.expr.52.970 ##.%p.971) ((##vcore.car (bruijn ##.expr.51.967 1 0)) (##vcore.cdr (bruijn ##.expr.51.967 1 0)) (##vcore.pair? (bruijn ##.expr.52.970 0 1))) (if (bruijn ##.%p.971 0 2) (basic-block 3 3 (##.body.972 ##.%x.973 ##.%p.974) ((##vcore.car (bruijn ##.expr.52.970 1 1)) (##vcore.cdr (bruijn ##.expr.52.970 1 1)) (##vcore.null? (bruijn ##.%x.973 0 1))) (if (bruijn ##.%p.974 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k107) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda30) (bruijn ##.kk.24.213 15 1)) ((bruijn ##.%k.578 5 0) #f))) ((bruijn ##.%k.578 4 0) #f))) ((bruijn ##.%k.578 3 0) #f))) ((bruijn ##.%k.578 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k107, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda30, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.885 1 0) (basic-block 1 1 (##.%x.966) ((##vcore.car (bruijn ##.expr.211 15 1))) ((bruijn ##.equal?.109 20 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k106) 'letrec (bruijn ##.%x.966 0 0))) ((bruijn ##.%k.578 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k106, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.573 0 0) (bruijn ##.%k.567 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k114(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 23 10) (bruijn ##.%k.574 0 0) (bruijn ##.body.963 1 0) (bruijn ##.ctx.212 22 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k113(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-bindings.144) #f (bruijn ##.verify-bindings.144 23 7) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k114) (bruijn ##.bindings.960 2 0) (bruijn ##.ctx.212 22 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k114, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-path.145) #f (bruijn ##.verify-path.145 23 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k113) (bruijn ##.path.957 3 0) (##string ##.string.1155) (bruijn ##.ctx.212 22 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k113, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D1155.sym, VPOINTER_OTHER);
    VWORD _arg3 = 
      VGetArg(statics, 22-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.568 0 0) (basic-block 2 2 (##.expr.54.955 ##.%p.956) ((##vcore.cdr (bruijn ##.expr.211 18 1)) (##vcore.pair? (bruijn ##.expr.54.955 0 0))) (if (bruijn ##.%p.956 0 1) (basic-block 3 3 (##.path.957 ##.expr.55.958 ##.%p.959) ((##vcore.car (bruijn ##.expr.54.955 1 0)) (##vcore.cdr (bruijn ##.expr.54.955 1 0)) (##vcore.pair? (bruijn ##.expr.55.958 0 1))) (if (bruijn ##.%p.959 0 2) (basic-block 3 3 (##.bindings.960 ##.expr.56.961 ##.%p.962) ((##vcore.car (bruijn ##.expr.55.958 1 1)) (##vcore.cdr (bruijn ##.expr.55.958 1 1)) (##vcore.pair? (bruijn ##.expr.56.961 0 1))) (if (bruijn ##.%p.962 0 2) (basic-block 3 3 (##.body.963 ##.%x.964 ##.%p.965) ((##vcore.car (bruijn ##.expr.56.961 1 1)) (##vcore.cdr (bruijn ##.expr.56.961 1 1)) (##vcore.null? (bruijn ##.%x.964 0 1))) (if (bruijn ##.%p.965 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k112) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda31) (bruijn ##.kk.24.213 17 1)) ((bruijn ##.%k.567 6 0) #f))) ((bruijn ##.%k.567 5 0) #f))) ((bruijn ##.%k.567 4 0) #f))) ((bruijn ##.%k.567 3 0) #f))) ((bruijn ##.%k.567 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k112, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda31, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.886 1 0) (basic-block 1 1 (##.%x.954) ((##vcore.car (bruijn ##.expr.211 16 1))) ((bruijn ##.equal?.109 21 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k111) '##letrec (bruijn ##.%x.954 0 0))) ((bruijn ##.%k.567 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k111, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.557 0 0) (bruijn ##.%k.552 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.562 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 27 2) (bruijn ##.%k.560 2 0) (##string ##.string.1158) (bruijn ##.expr.211 26 1) (bruijn ##.ctx.212 26 2)) ((bruijn ##.%k.560 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1158.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.561 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 26 2) (bruijn ##.%k.560 1 0) (##string ##.string.1157) (bruijn ##.expr.211 25 1) (bruijn ##.ctx.212 25 2)) (##qualified-call (vanity compiler verify builtin?) #t (bruijn ##.builtin?.133 29 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k121) (bruijn ##.sym.946 5 0)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1157.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 25-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k121, self))));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.953 1 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 25 2) (bruijn ##.%k.560 0 0) (##string ##.string.1156) (bruijn ##.expr.211 24 1) (bruijn ##.ctx.212 24 2)) (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.134 28 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k120) (bruijn ##.sym.946 4 0)))
if(VDecodeBool(
statics->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1156.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 24-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k120, self))));
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
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k122(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 24 10) (bruijn ##.%k.558 1 0) (bruijn ##.val.949 2 0) (bruijn ##.ctx.212 23 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.952 ##.%p.953) ((##vcore.symbol? (bruijn ##.sym.946 3 0)) (##vcore.not (bruijn ##.%x.952 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k119) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k122)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k122, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.553 0 0) (basic-block 2 2 (##.expr.58.944 ##.%p.945) ((##vcore.cdr (bruijn ##.expr.211 19 1)) (##vcore.pair? (bruijn ##.expr.58.944 0 0))) (if (bruijn ##.%p.945 0 1) (basic-block 3 3 (##.sym.946 ##.expr.59.947 ##.%p.948) ((##vcore.car (bruijn ##.expr.58.944 1 0)) (##vcore.cdr (bruijn ##.expr.58.944 1 0)) (##vcore.pair? (bruijn ##.expr.59.947 0 1))) (if (bruijn ##.%p.948 0 2) (basic-block 3 3 (##.val.949 ##.%x.950 ##.%p.951) ((##vcore.car (bruijn ##.expr.59.947 1 1)) (##vcore.cdr (bruijn ##.expr.59.947 1 1)) (##vcore.null? (bruijn ##.%x.950 0 1))) (if (bruijn ##.%p.951 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k118) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda32) (bruijn ##.kk.24.213 17 1)) ((bruijn ##.%k.552 5 0) #f))) ((bruijn ##.%k.552 4 0) #f))) ((bruijn ##.%k.552 3 0) #f))) ((bruijn ##.%k.552 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k118, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda32, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.887 1 0) (basic-block 1 1 (##.%x.943) ((##vcore.car (bruijn ##.expr.211 17 1))) ((bruijn ##.equal?.109 22 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k117) 'set! (bruijn ##.%x.943 0 0))) ((bruijn ##.%k.552 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k117, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.520 0 0) (bruijn ##.%k.518 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.543 0 0) (bruijn ##.%k.540 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.941 1 0) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.132 33 2) (bruijn ##.%k.548 0 0) (bruijn ##.min.938 3 0)) ((bruijn ##.%k.548 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.942) ((##vcore.not (bruijn ##.%x.546 1 0))) (if (bruijn ##.%p.942 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 31 2) (bruijn ##.%k.544 3 0) (##string ##.string.1159) (bruijn ##.expr.211 30 1) (bruijn ##.ctx.212 30 2)) ((bruijn ##.%k.544 3 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1159.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 30-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 30-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.941) ((##vcore.string? (bruijn ##.name.935 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k129) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k130)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k129, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k130, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.920 1 0) (basic-block 3 3 (##.name.935 ##.expr.67.936 ##.%p.937) ((##vcore.car (bruijn ##.rest.919 5 0)) (##vcore.cdr (bruijn ##.rest.919 5 0)) (##vcore.pair? (bruijn ##.expr.67.936 0 1))) (if (bruijn ##.%p.937 0 2) (basic-block 3 3 (##.min.938 ##.%x.939 ##.%p.940) ((##vcore.car (bruijn ##.expr.67.936 1 1)) (##vcore.cdr (bruijn ##.expr.67.936 1 1)) (##vcore.null? (bruijn ##.%x.939 0 1))) (if (bruijn ##.%p.940 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k128) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda35) (bruijn ##.kk.64.275 4 1)) ((bruijn ##.%k.540 2 0) #f))) ((bruijn ##.%k.540 1 0) #f))) ((bruijn ##.%k.540 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k128, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda35, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.529 0 0) (bruijn ##.%k.525 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.537 0 0) (basic-block 1 1 (##.%r.934) ((##vcore.>= (bruijn ##.max.928 7 0) (bruijn ##.min.925 8 0))) ((bruijn ##.%k.534 4 0) (bruijn ##.%r.934 0 0))) ((bruijn ##.%k.534 3 0) #f))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.535 0 0) (basic-block 1 1 (##.%p.933) ((##vcore.eq? (bruijn ##.max.928 5 0) '+)) (if (bruijn ##.%p.933 0 0) ((bruijn ##.%k.534 2 0) (bruijn ##.%p.933 0 0)) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.132 37 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k136) (bruijn ##.max.928 5 0)))) ((bruijn ##.%k.534 1 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k136, self))));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.931 1 0) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.132 35 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k135) (bruijn ##.min.925 4 0)) ((bruijn ##.%k.534 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k135, self))));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.932) ((##vcore.not (bruijn ##.%x.532 1 0))) (if (bruijn ##.%p.932 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 33 2) (bruijn ##.%k.530 3 0) (##string ##.string.1160) (bruijn ##.expr.211 32 1) (bruijn ##.ctx.212 32 2)) ((bruijn ##.%k.530 3 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1160.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 32-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 32-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.931) ((##vcore.string? (bruijn ##.name.922 4 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k134) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k137)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k134, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k137, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.921 1 0) (basic-block 3 3 (##.name.922 ##.expr.69.923 ##.%p.924) ((##vcore.car (bruijn ##.rest.919 6 0)) (##vcore.cdr (bruijn ##.rest.919 6 0)) (##vcore.pair? (bruijn ##.expr.69.923 0 1))) (if (bruijn ##.%p.924 0 2) (basic-block 3 3 (##.min.925 ##.expr.70.926 ##.%p.927) ((##vcore.car (bruijn ##.expr.69.923 1 1)) (##vcore.cdr (bruijn ##.expr.69.923 1 1)) (##vcore.pair? (bruijn ##.expr.70.926 0 1))) (if (bruijn ##.%p.927 0 2) (basic-block 3 3 (##.max.928 ##.%x.929 ##.%p.930) ((##vcore.car (bruijn ##.expr.70.926 1 1)) (##vcore.cdr (bruijn ##.expr.70.926 1 1)) (##vcore.null? (bruijn ##.%x.929 0 1))) (if (bruijn ##.%p.930 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k133) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda36) (bruijn ##.kk.64.275 6 1)) ((bruijn ##.%k.525 3 0) #f))) ((bruijn ##.%k.525 2 0) #f))) ((bruijn ##.%k.525 1 0) #f))) ((bruijn ##.%k.525 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k133, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda36, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 26 2) (bruijn ##.%k.523 0 0) (##string ##.string.1161) (bruijn ##.expr.211 25 1) (bruijn ##.ctx.212 25 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1161.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 25-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k138(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.522 2 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda37) (bruijn ##.kk.64.275 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda37, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k131(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.921) ((##vcore.pair? (bruijn ##.rest.919 4 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k132) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k138)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k132, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k138, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.920) ((##vcore.pair? (bruijn ##.rest.919 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k127) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k131)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k131, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.521 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda34, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.519 0 0) (basic-block 1 1 (##.rest.919) ((##vcore.cdr (bruijn ##.expr.211 20 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k126) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda33) (bruijn ##.kk.24.213 16 1))) ((bruijn ##.%k.518 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k126, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda33, self)))),
      VGetArg(statics, 16-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.888 1 0) (basic-block 1 1 (##.%x.918) ((##vcore.car (bruijn ##.expr.211 18 1))) ((bruijn ##.equal?.109 23 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k125) '##intrinsic (bruijn ##.%x.918 0 0))) ((bruijn ##.%k.518 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k125, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.501 0 0) (bruijn ##.%k.499 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.509 0 0) (bruijn ##.%k.506 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.916 1 0) (##qualified-call (vanity compiler verify arity?) #t (bruijn ##.arity?.132 34 2) (bruijn ##.%k.514 0 0) (bruijn ##.n.913 3 0)) ((bruijn ##.%k.514 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.917) ((##vcore.not (bruijn ##.%x.512 1 0))) (if (bruijn ##.%p.917 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 32 2) (bruijn ##.%k.510 3 0) (##string ##.string.1162) (bruijn ##.expr.211 31 1) (bruijn ##.ctx.212 31 2)) ((bruijn ##.%k.510 3 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1162.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 31-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 31-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.916) ((##vcore.string? (bruijn ##.name.910 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k145) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k146)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k145, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k146, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.909 1 0) (basic-block 3 3 (##.name.910 ##.expr.74.911 ##.%p.912) ((##vcore.car (bruijn ##.rest.908 5 0)) (##vcore.cdr (bruijn ##.rest.908 5 0)) (##vcore.pair? (bruijn ##.expr.74.911 0 1))) (if (bruijn ##.%p.912 0 2) (basic-block 3 3 (##.n.913 ##.%x.914 ##.%p.915) ((##vcore.car (bruijn ##.expr.74.911 1 1)) (##vcore.cdr (bruijn ##.expr.74.911 1 1)) (##vcore.null? (bruijn ##.%x.914 0 1))) (if (bruijn ##.%p.915 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k144) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda40) (bruijn ##.kk.71.289 4 1)) ((bruijn ##.%k.506 2 0) #f))) ((bruijn ##.%k.506 1 0) #f))) ((bruijn ##.%k.506 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k144, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda40, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 26 2) (bruijn ##.%k.504 0 0) (##string ##.string.1163) (bruijn ##.expr.211 25 1) (bruijn ##.ctx.212 25 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1163.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 25-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k147(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.503 1 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda41) (bruijn ##.kk.71.289 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda41, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.909) ((##vcore.pair? (bruijn ##.rest.908 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k143) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k147)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k147, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.502 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda39))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda39, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.500 0 0) (basic-block 1 1 (##.rest.908) ((##vcore.cdr (bruijn ##.expr.211 21 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k142) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda38) (bruijn ##.kk.24.213 17 1))) ((bruijn ##.%k.499 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k142, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda38, self)))),
      VGetArg(statics, 17-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.889 1 0) (basic-block 1 1 (##.%x.907) ((##vcore.car (bruijn ##.expr.211 19 1))) ((bruijn ##.equal?.109 24 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k141) '##basic-intrinsic (bruijn ##.%x.907 0 0))) ((bruijn ##.%k.499 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k141, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.488 0 0) (bruijn ##.%k.486 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.904) ((##vcore.>= (bruijn ##.%x.496 1 0) 4)) (if (bruijn ##.%p.904 0 0) (basic-block 2 2 (##.%x.905 ##.%r.906) ((##vcore.car (bruijn ##.rest.902 6 0)) (##vcore.string? (bruijn ##.%x.905 0 0))) ((bruijn ##.%k.493 3 0) (bruijn ##.%r.906 0 1))) ((bruijn ##.%k.493 2 0) #f)))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.492 1 0) ((bruijn ##.length.101 30 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k154) (bruijn ##.rest.902 3 0)) ((bruijn ##.%k.493 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k154, self)))),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.903) ((##vcore.not (bruijn ##.%x.491 1 0))) (if (bruijn ##.%p.903 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 27 2) (bruijn ##.%k.489 3 0) (##string ##.string.1164) (bruijn ##.expr.211 26 1) (bruijn ##.ctx.212 26 2)) ((bruijn ##.%k.489 3 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1164.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k153) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k155))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k153, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k155, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list?.110 28 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k152) (bruijn ##.rest.902 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k152, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.487 0 0) (basic-block 1 1 (##.rest.902) ((##vcore.cdr (bruijn ##.expr.211 22 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k151) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda42) (bruijn ##.kk.24.213 18 1))) ((bruijn ##.%k.486 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k151, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda42, self)))),
      VGetArg(statics, 18-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.890 1 0) (basic-block 1 1 (##.%x.901) ((##vcore.car (bruijn ##.expr.211 20 1))) ((bruijn ##.equal?.109 25 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k150) '##foreign.function (bruijn ##.%x.901 0 0))) ((bruijn ##.%k.486 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k150, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.468 0 0) (bruijn ##.%k.467 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 27 2) (bruijn ##.%k.469 4 0) (bruijn ##.%x.471 0 0) (bruijn ##.expr.211 26 1) (bruijn ##.ctx.212 26 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.896 1 0) ((bruijn ##.%k.483 0 0) (bruijn ##.%p.896 1 0)) (basic-block 1 1 (##.%r.900) ((##vcore.pair? (bruijn ##.f.892 8 0))) ((bruijn ##.%k.483 1 0) (bruijn ##.%r.900 0 0))))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.898 1 0) (basic-block 1 1 (##.%x.899) ((##vcore.car (bruijn ##.f.892 11 0))) ((bruijn ##.memv.105 37 12) (bruijn ##.%k.479 1 0) (bruijn ##.%x.899 0 0) '(##pair ##.pair.1170))) ((bruijn ##.%k.479 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 12)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.476 1 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 33 2) (bruijn ##.%k.477 0 0) (##string ##.string.1171) (bruijn ##.expr.211 32 1) (bruijn ##.ctx.212 32 2)) ((bruijn ##.%k.477 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 33-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1171.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 32-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 32-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 33 10) (bruijn ##.%k.475 0 0) (bruijn ##.e.301 0 1) (bruijn ##.ctx.212 32 2))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.93 36 0) (bruijn ##.%k.469 9 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda44) (bruijn ##.expr.211 31 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda44, self)))),
      VGetArg(statics, 31-1, 1));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k166) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k167))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k166, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k167, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.897) ((##vcore.not (bruijn ##.%x.481 1 0))) (if (bruijn ##.%p.897 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 30 2) (bruijn ##.%k.469 7 0) (##string ##.string.1168) (bruijn ##.expr.211 29 1) (bruijn ##.ctx.212 29 2)) (basic-block 1 1 (##.%p.898) ((##vcore.pair? (bruijn ##.f.892 9 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k164) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k165)))))
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
      VEncodePointer(&_V10_Dstring_D1168.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 29-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 29-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k164, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k165, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.895) ((##vcore.not (bruijn ##.%x.484 1 0))) (if (bruijn ##.%p.895 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 27 2) (bruijn ##.%k.469 4 0) (##string ##.string.1167) (bruijn ##.expr.211 26 1) (bruijn ##.ctx.212 26 2)) (basic-block 1 1 (##.%p.896) ((##vcore.symbol? (bruijn ##.f.892 6 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k162) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k163)))))
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
      VEncodePointer(&_V10_Dstring_D1167.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k162, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k163, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.75.299 0 0) (basic-block 1 1 (##.%x.894) ((##vcore.cdr (bruijn ##.x.75.299 1 0))) ((bruijn ##.string-append.106 30 13) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k160) (##string ##.string.1166) (bruijn ##.%x.894 0 0))) ((bruijn ##.list?.110 29 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k161) (bruijn ##.expr.211 24 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k160, self)))),
      VEncodePointer(&_V10_Dstring_D1166.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k161, self)))),
      VGetArg(statics, 24-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.893) ((##vcore.eq? (bruijn ##.f.892 2 0) 'define-library)) (if (bruijn ##.%p.893 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 24 2) (bruijn ##.%k.469 1 0) (##string ##.string.1165) (bruijn ##.expr.211 23 1) (bruijn ##.ctx.212 23 2)) ((bruijn ##.assv.107 28 14) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k159) (bruijn ##.f.892 2 0) (bruijn ##.reserved-shapes.135 27 5))))
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
      VEncodePointer(&_V10_Dstring_D1165.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 23-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k159, self)))),
      statics->up->vars[0],
      VGetArg(statics, 27-1, 5));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.891 1 0) (basic-block 1 1 (##.f.892) ((##vcore.car (bruijn ##.expr.211 21 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k158) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda43) (bruijn ##.kk.24.213 17 1))) ((bruijn ##.%k.467 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k158, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda43, self)))),
      VGetArg(statics, 17-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k168(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.108 24 15) (bruijn ##.%k.465 15 0) (##string ##.string.1172))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 15)), 2,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D1172.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k156(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.891) ((##vcore.pair? (bruijn ##.expr.211 19 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k157) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k168)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k157, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k168, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.890) ((##vcore.pair? (bruijn ##.expr.211 18 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k149) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k156)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k156, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.889) ((##vcore.pair? (bruijn ##.expr.211 17 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k140) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k148)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k148, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k123(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.888) ((##vcore.pair? (bruijn ##.expr.211 16 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k124) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k139, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.887) ((##vcore.pair? (bruijn ##.expr.211 15 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k116) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k123)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k123, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k109(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.886) ((##vcore.pair? (bruijn ##.expr.211 14 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k110) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k115)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k110, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k115, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k104(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.885) ((##vcore.pair? (bruijn ##.expr.211 13 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k105) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k109)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k109, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k99(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.884) ((##vcore.pair? (bruijn ##.expr.211 12 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k100) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k104)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k100, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k104, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.883) ((##vcore.pair? (bruijn ##.expr.211 11 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k95) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k99)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k99, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k88(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.882) ((##vcore.pair? (bruijn ##.expr.211 10 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k89) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k94)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k94, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k80(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.881) ((##vcore.pair? (bruijn ##.expr.211 9 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k81) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k88, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k71(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.880) ((##vcore.pair? (bruijn ##.expr.211 8 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k72) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k80, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.879) ((##vcore.pair? (bruijn ##.expr.211 7 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k68) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k71)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k71, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.878) ((##vcore.pair? (bruijn ##.expr.211 6 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k63) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k67)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k67, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.877) ((##vcore.pair? (bruijn ##.expr.211 5 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k59) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k62)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k62, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.873) ((##vcore.symbol? (bruijn ##.expr.211 1 1))) (if (bruijn ##.%p.873 0 0) (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.134 5 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k58) (bruijn ##.expr.211 1 1)) (basic-block 1 1 (##.%p.874) ((##vcore.null? (bruijn ##.expr.211 2 1))) (if (bruijn ##.%p.874 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 3 2) (bruijn ##.%k.460 2 0) (##string ##.string.1150) (bruijn ##.expr.211 2 1) (bruijn ##.ctx.212 2 2)) (basic-block 2 2 (##.%x.875 ##.%p.876) ((##vcore.pair? (bruijn ##.expr.211 3 1)) (##vcore.not (bruijn ##.%x.875 0 0))) (if (bruijn ##.%p.876 0 1) ((bruijn ##.%k.460 3 0) #t) (##vcore.call/cc (bruijn ##.%k.460 3 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda21))))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0k58, self))));
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
      VEncodePointer(&_V10_Dstring_D1150.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147_V0lambda21, self)))));
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.689 0 0) (bruijn ##.%k.686 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1063 ##.%x.1064 ##.%x.1065 ##.%x.1066 ##.%r.1067) ((##vcore.cons (bruijn ##.x.1062 2 0) '()) (##vcore.cons 'define (bruijn ##.%x.1063 0 0)) (##vcore.cons (bruijn ##.%x.1064 0 1) '()) (##vcore.cons (bruijn ##.n.303 9 2) (bruijn ##.%x.1065 0 2)) (##vcore.cons 'toplevel-form (bruijn ##.%x.1066 0 3))) ((bruijn ##.%k.690 1 0) (bruijn ##.%r.1067 0 4)))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.687 0 0) (basic-block 2 2 (##.expr.79.1060 ##.%p.1061) ((##vcore.cdr (bruijn ##.form.302 6 1)) (##vcore.pair? (bruijn ##.expr.79.1060 0 0))) (if (bruijn ##.%p.1061 0 1) (basic-block 1 1 (##.x.1062) ((##vcore.car (bruijn ##.expr.79.1060 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k171) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda46) (bruijn ##.kk.76.304 6 1))) ((bruijn ##.%k.686 3 0) #f))) ((bruijn ##.%k.686 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k171, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda46, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1046 1 0) (basic-block 1 1 (##.%x.1059) ((##vcore.car (bruijn ##.form.302 4 1))) ((bruijn ##.equal?.109 9 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k170) 'define (bruijn ##.%x.1059 0 0))) ((bruijn ##.%k.686 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k170, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.678 0 0) (bruijn ##.%k.675 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1054 ##.%x.1055 ##.%x.1056 ##.%x.1057 ##.%r.1058) ((##vcore.cons (bruijn ##.f.1053 2 0) '()) (##vcore.cons '##vcore.declare (bruijn ##.%x.1054 0 0)) (##vcore.cons (bruijn ##.%x.1055 0 1) '()) (##vcore.cons (bruijn ##.n.303 10 2) (bruijn ##.%x.1056 0 2)) (##vcore.cons 'toplevel-form (bruijn ##.%x.1057 0 3))) ((bruijn ##.%k.679 1 0) (bruijn ##.%r.1058 0 4)))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.676 0 0) (basic-block 2 2 (##.expr.81.1051 ##.%p.1052) ((##vcore.cdr (bruijn ##.form.302 7 1)) (##vcore.pair? (bruijn ##.expr.81.1051 0 0))) (if (bruijn ##.%p.1052 0 1) (basic-block 1 1 (##.f.1053) ((##vcore.car (bruijn ##.expr.81.1051 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k175) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda47) (bruijn ##.kk.76.304 7 1))) ((bruijn ##.%k.675 3 0) #f))) ((bruijn ##.%k.675 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k175, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda47, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1047 1 0) (basic-block 1 1 (##.%x.1050) ((##vcore.car (bruijn ##.form.302 5 1))) ((bruijn ##.equal?.109 10 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k174) '##vcore.declare (bruijn ##.%x.1050 0 0))) ((bruijn ##.%k.675 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k174, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1048 ##.%r.1049) ((##vcore.cons (bruijn ##.n.303 5 2) '()) (##vcore.cons 'toplevel-form (bruijn ##.%x.1048 0 0))) ((bruijn ##.%k.672 1 0) (bruijn ##.%r.1049 0 1)))
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
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k176(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.671 2 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda48) (bruijn ##.kk.76.304 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda48, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k172(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1047) ((##vcore.pair? (bruijn ##.form.302 3 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k173) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k176)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k173, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k176, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1046) ((##vcore.pair? (bruijn ##.form.302 2 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k169) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k172)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k169, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0k172, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.670 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148_V0lambda45, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.753 0 0) (bruijn ##.%k.748 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.758 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 16 2) (bruijn ##.%k.756 2 0) (##string ##.string.1175) (bruijn ##.form.312 15 1) (bruijn ##.ctx.314 13 0)) ((bruijn ##.%k.756 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1175.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.757 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 15 2) (bruijn ##.%k.756 1 0) (##string ##.string.1174) (bruijn ##.form.312 14 1) (bruijn ##.ctx.314 12 0)) (##qualified-call (vanity compiler verify builtin?) #t (bruijn ##.builtin?.133 18 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k183) (bruijn ##.x.1107 5 0)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1174.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k183, self))));
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1114 1 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 14 2) (bruijn ##.%k.756 0 0) (##string ##.string.1173) (bruijn ##.form.312 13 1) (bruijn ##.ctx.314 11 0)) (##qualified-call (vanity compiler verify reserved-symbol?) #t (bruijn ##.reserved-symbol?.134 17 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k182) (bruijn ##.x.1107 4 0)))
if(VDecodeBool(
statics->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1173.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0verify;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k182, self))));
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
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k184(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 13 10) (bruijn ##.%k.754 1 0) (bruijn ##.val.1110 2 0) (bruijn ##.ctx.314 10 0))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1113 ##.%p.1114) ((##vcore.symbol? (bruijn ##.x.1107 3 0)) (##vcore.not (bruijn ##.%x.1113 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k181) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k184)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k184, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.749 0 0) (basic-block 2 2 (##.expr.85.1105 ##.%p.1106) ((##vcore.cdr (bruijn ##.form.312 8 1)) (##vcore.pair? (bruijn ##.expr.85.1105 0 0))) (if (bruijn ##.%p.1106 0 1) (basic-block 3 3 (##.x.1107 ##.expr.86.1108 ##.%p.1109) ((##vcore.car (bruijn ##.expr.85.1105 1 0)) (##vcore.cdr (bruijn ##.expr.85.1105 1 0)) (##vcore.pair? (bruijn ##.expr.86.1108 0 1))) (if (bruijn ##.%p.1109 0 2) (basic-block 3 3 (##.val.1110 ##.%x.1111 ##.%p.1112) ((##vcore.car (bruijn ##.expr.86.1108 1 1)) (##vcore.cdr (bruijn ##.expr.86.1108 1 1)) (##vcore.null? (bruijn ##.%x.1111 0 1))) (if (bruijn ##.%p.1112 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k180) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda50) (bruijn ##.kk.82.315 7 1)) ((bruijn ##.%k.748 5 0) #f))) ((bruijn ##.%k.748 4 0) #f))) ((bruijn ##.%k.748 3 0) #f))) ((bruijn ##.%k.748 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k180, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda50, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1068 1 0) (basic-block 1 1 (##.%x.1104) ((##vcore.car (bruijn ##.form.312 6 1))) ((bruijn ##.equal?.109 11 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k179) 'define (bruijn ##.%x.1104 0 0))) ((bruijn ##.%k.748 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k179, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.736 0 0) (bruijn ##.%k.734 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146) #f (bruijn ##.verify-libspec.146 16 9) (bruijn ##.%k.741 0 0) (bruijn ##.l.324 0 1) (bruijn ##.ctx.314 13 0))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k190(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.93 19 0) (bruijn ##.%k.737 4 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda52) (bruijn ##.libs.1097 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda52, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1098) ((##vcore.not (bruijn ##.%x.745 1 0))) (if (bruijn ##.%p.1098 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 13 2) (bruijn ##.%k.737 2 0) (##string ##.string.1176) (bruijn ##.form.312 12 1) (bruijn ##.ctx.314 10 0)) (basic-block 1 1 (##.%p.1099) ((##vcore.null? (bruijn ##.libs.1097 4 0))) (if (bruijn ##.%p.1099 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 14 2) (bruijn ##.%k.737 3 0) (##string ##.string.1177) (bruijn ##.form.312 13 1) (bruijn ##.ctx.314 11 0)) (basic-block 3 3 (##.%x.1100 ##.%x.1101 ##.%p.1102) ((##vcore.cdr (bruijn ##.libs.1097 5 0)) (##vcore.null? (bruijn ##.%x.1100 0 0)) (##vcore.not (bruijn ##.%x.1101 0 1))) (if (bruijn ##.%p.1102 0 2) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 15 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k190) (##string ##.string.1178) (bruijn ##.form.312 14 1) (bruijn ##.ctx.314 12 0)) (basic-block 1 1 (##.%x.1103) ((##vcore.car (bruijn ##.libs.1097 6 0))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-libspec.146) #f (bruijn ##.verify-libspec.146 16 9) (bruijn ##.%k.737 5 0) (bruijn ##.%x.1103 0 0) (bruijn ##.ctx.314 13 0)))))))))
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
      VEncodePointer(&_V10_Dstring_D1176.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
      VEncodePointer(&_V10_Dstring_D1177.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k190, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1178.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list?.110 15 17) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k189) (bruijn ##.libs.1097 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k189, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.735 0 0) (basic-block 1 1 (##.libs.1097) ((##vcore.cdr (bruijn ##.form.312 9 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k188) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda51) (bruijn ##.kk.82.315 6 1))) ((bruijn ##.%k.734 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k188, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda51, self)))),
      VGetArg(statics, 6-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1069 1 0) (basic-block 1 1 (##.%x.1096) ((##vcore.car (bruijn ##.form.312 7 1))) ((bruijn ##.equal?.109 12 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k187) 'import (bruijn ##.%x.1096 0 0))) ((bruijn ##.%k.734 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k187, self)))),
      _V0import,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.718 0 0) (bruijn ##.%k.713 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1090 1 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 16 2) (bruijn ##.%k.729 0 0) (##string ##.string.1179) (bruijn ##.form.312 15 1) (bruijn ##.ctx.314 13 0)) ((bruijn ##.%k.729 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1179.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1091 1 0) (basic-block 1 1 (##.%x.1095) ((##vcore.car (bruijn ##.lam.1086 5 0))) ((bruijn ##.memv.105 22 12) (bruijn ##.%k.726 1 0) (bruijn ##.%x.1095 0 0) '(##pair ##.pair.1183))) ((bruijn ##.%k.726 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 12)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1183, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1092 1 0) (basic-block 2 2 (##.%x.1093 ##.%r.1094) ((##vcore.car (bruijn ##.lam.1086 7 0)) (##vcore.eq? (bruijn ##.%x.1093 0 0) '##vcore.function)) ((bruijn ##.%k.723 1 0) (bruijn ##.%r.1094 0 1))) ((bruijn ##.%k.723 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.721 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 19 2) (bruijn ##.%k.719 5 0) (##string ##.string.1184) (bruijn ##.form.312 18 1) (bruijn ##.ctx.314 16 0)) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 19 2) (bruijn ##.%k.719 5 0) (##string ##.string.1185) (bruijn ##.form.312 18 1) (bruijn ##.ctx.314 16 0)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1184.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 16-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1185.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 16-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.720 0 0) (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 17 10) (bruijn ##.%k.719 3 0) (bruijn ##.lam.1086 4 0) (bruijn ##.ctx.314 14 0)) (basic-block 1 1 (##.%p.1092) ((##vcore.pair? (bruijn ##.lam.1086 5 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k199) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k200))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k199, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k200, self)))));
    }
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k196(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1091) ((##vcore.pair? (bruijn ##.lam.1086 3 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k197) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k198)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k197, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k198, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1089 ##.%p.1090) ((##vcore.string? (bruijn ##.str.1083 3 0)) (##vcore.not (bruijn ##.%x.1089 0 0))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k195) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k196)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k195, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k196, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.714 0 0) (basic-block 2 2 (##.expr.89.1081 ##.%p.1082) ((##vcore.cdr (bruijn ##.form.312 10 1)) (##vcore.pair? (bruijn ##.expr.89.1081 0 0))) (if (bruijn ##.%p.1082 0 1) (basic-block 3 3 (##.str.1083 ##.expr.90.1084 ##.%p.1085) ((##vcore.car (bruijn ##.expr.89.1081 1 0)) (##vcore.cdr (bruijn ##.expr.89.1081 1 0)) (##vcore.pair? (bruijn ##.expr.90.1084 0 1))) (if (bruijn ##.%p.1085 0 2) (basic-block 3 3 (##.lam.1086 ##.%x.1087 ##.%p.1088) ((##vcore.car (bruijn ##.expr.90.1084 1 1)) (##vcore.cdr (bruijn ##.expr.90.1084 1 1)) (##vcore.null? (bruijn ##.%x.1087 0 1))) (if (bruijn ##.%p.1088 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k194) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda53) (bruijn ##.kk.82.315 9 1)) ((bruijn ##.%k.713 5 0) #f))) ((bruijn ##.%k.713 4 0) #f))) ((bruijn ##.%k.713 3 0) #f))) ((bruijn ##.%k.713 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k194, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda53, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1070 1 0) (basic-block 1 1 (##.%x.1080) ((##vcore.car (bruijn ##.form.312 8 1))) ((bruijn ##.equal?.109 13 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k193) '##vcore.declare (bruijn ##.%x.1080 0 0))) ((bruijn ##.%k.713 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k193, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.706 0 0) (bruijn ##.%k.702 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1078 ##.%p.1079) ((##vcore.string? (bruijn ##.str.1075 2 0)) (##vcore.not (bruijn ##.%x.1078 0 0))) (if (bruijn ##.%p.1079 0 1) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 15 2) (bruijn ##.%k.707 1 0) (##string ##.string.1186) (bruijn ##.form.312 14 1) (bruijn ##.ctx.314 12 0)) ((bruijn ##.%k.707 1 0) #f)))
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
      VEncodePointer(&_V10_Dstring_D1186.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.703 0 0) (basic-block 2 2 (##.expr.92.1073 ##.%p.1074) ((##vcore.cdr (bruijn ##.form.312 11 1)) (##vcore.pair? (bruijn ##.expr.92.1073 0 0))) (if (bruijn ##.%p.1074 0 1) (basic-block 3 3 (##.str.1075 ##.%x.1076 ##.%p.1077) ((##vcore.car (bruijn ##.expr.92.1073 1 0)) (##vcore.cdr (bruijn ##.expr.92.1073 1 0)) (##vcore.null? (bruijn ##.%x.1076 0 1))) (if (bruijn ##.%p.1077 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k204) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda54) (bruijn ##.kk.82.315 9 1)) ((bruijn ##.%k.702 4 0) #f))) ((bruijn ##.%k.702 3 0) #f))) ((bruijn ##.%k.702 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k204, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda54, self)))),
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
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1071 1 0) (basic-block 1 1 (##.%x.1072) ((##vcore.car (bruijn ##.form.312 9 1))) ((bruijn ##.equal?.109 14 16) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k203) '##foreign.declare (bruijn ##.%x.1072 0 0))) ((bruijn ##.%k.702 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k203, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k207(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.108 13 15) (bruijn ##.%k.698 5 0) (##string ##.string.1172))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 15)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1172.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.699 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k207))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k207, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler verify verify-expanded ##.verify-expr.147) #f (bruijn ##.verify-expr.147 9 10) (bruijn ##.%k.700 0 0) (bruijn ##.form.312 8 1) (bruijn ##.ctx.314 6 0))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k205(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k206) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda55) (bruijn ##.kk.82.315 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k206, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda55, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1071) ((##vcore.pair? (bruijn ##.form.312 7 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k202) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k205)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k205, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k191(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1070) ((##vcore.pair? (bruijn ##.form.312 6 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k192) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k201)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k192, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k201, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k185(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1069) ((##vcore.pair? (bruijn ##.form.312 5 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k186) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k191)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k186, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k191, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1068) ((##vcore.pair? (bruijn ##.form.312 4 1))) ((close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k178) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k185)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k178, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k185, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.697 1 0)) (##vcore.call/cc (bruijn ##.%k.696 2 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda49)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0lambda49, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler verify verify-expanded ##.toplevel-ctx.148) #f (bruijn ##.toplevel-ctx.148 1 11) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k177) (bruijn ##.form.312 0 1) (bruijn ##.n.313 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[11]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149_V0k177, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334_V0k208(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1118 ##.%x.1119) ((##vcore.cdr (bruijn ##.forms.335 4 1)) (##vcore.+ (bruijn ##.n.336 4 2) 1)) (##qualified-call (vanity compiler verify verify-expanded ##.loop.334) #f (bruijn ##.loop.334 5 0) (bruijn ##.%k.774 4 0) (bruijn ##.%x.1118 0 0) (bruijn ##.%x.1119 0 1)))
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
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1115) ((##vcore.null? (bruijn ##.forms.335 1 1))) (if (bruijn ##.%p.1115 0 0) ((bruijn ##.%k.774 1 0) #t) (basic-block 1 1 (##.%p.1116) ((##vcore.pair? (bruijn ##.forms.335 2 1))) (if (bruijn ##.%p.1116 0 0) (basic-block 1 1 (##.%x.1117) ((##vcore.car (bruijn ##.forms.335 3 1))) (##qualified-call (vanity compiler verify verify-expanded ##.verify-toplevel.149) #f (bruijn ##.verify-toplevel.149 5 12) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334_V0k208) (bruijn ##.%x.1117 0 0) (bruijn ##.n.336 3 2))) (##qualified-call (vanity compiler verify verify-expanded ##.bad!.139) #f (bruijn ##.bad!.139 4 2) (bruijn ##.%k.774 2 0) (##string ##.string.1187) (bruijn ##.forms.335 2 1) '(##pair ##.pair.1188))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334_V0k208, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
      VEncodePointer(&_V10_Dstring_D1187.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.102 8 9) (bruijn ##.%k.345 6 0) (##string ##.string.1189) (bruijn ##.%x.763 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1189.sym, VPOINTER_OTHER),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k211(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.length.101 7 8) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k212) (bruijn ##.violations.337 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k212, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.94 16 1) (bruijn ##.%k.764 8 0) (bruijn ##.%x.765 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 2,
      VGetArg(statics, 8-1, 0),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k222(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.95 15 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k223, self)))));
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
  // ((bruijn ##.write.97 15 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k222) (bruijn ##.%x.766 1 0) (bruijn ##.%x.767 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k222, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.95 14 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k221))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k221, self)))));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k219(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.96 13 3) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k220) (bruijn ##.v.338 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k220, self)))),
      VGetArg(statics, 5-1, 1));
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
  // ((bruijn ##.display.98 13 5) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k219) (##string ##.string.1190) (bruijn ##.%x.768 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k219, self)))),
      VEncodePointer(&_V10_Dstring_D1190.sym, VPOINTER_OTHER),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k217(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.95 12 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k218))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k218, self)))));
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
  // ((bruijn ##.write.97 12 4) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k217) (bruijn ##.%x.769 1 0) (bruijn ##.%x.770 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k217, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.95 11 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k216))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k216, self)))));
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k214(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadr.99 10 6) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215) (bruijn ##.v.338 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k215, self)))),
      statics->up->vars[1]);
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
  // (basic-block 1 1 (##.%x.1122) ((##vcore.car (bruijn ##.v.338 2 1))) ((bruijn ##.format.100 10 7) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k214) (bruijn ##.%x.771 1 0) (##string ##.string.1191) (bruijn ##.%x.1122 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k214, self)))),
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1191.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-error-port.95 8 2) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k213))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k213, self)))));
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1120 ##.%p.1121) ((##vcore.null? (bruijn ##.violations.337 1 0)) (##vcore.not (bruijn ##.%x.1120 0 0))) (if (bruijn ##.%p.1121 0 1) ((bruijn ##.for-each.93 7 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k211) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda56) (bruijn ##.violations.337 1 0)) ((bruijn ##.%k.345 5 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k211, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0lambda56, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k209(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.103 5 10) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k210) (bruijn ##.violations.137 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k210, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 13 ('() (bruijn ##.%x.346 1 0) (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148") (close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334")) (##qualified-call (vanity compiler verify verify-expanded ##.loop.334) #f (bruijn ##.loop.334 0 0) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k209) (bruijn ##.toplevel-forms.136 3 1) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = VNULL;
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dbad_B_D139, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dnote__binder_B_D140, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__formals_D141, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clause_D142, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__clauses_D143, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__bindings_D144, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__path_D145, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__libspec_D146, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__expr_D147, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dtoplevel__ctx_D148, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dverify__toplevel_D149, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k209, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V10_Dloop_D334(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // ((bruijn ##.make-hash-table.114 2 21) (close _V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k7) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.115 2 22))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[21]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0verify__expanded_V0k7, self)))),
      _V40_V10vcore_Deq_Q,
      statics->up->vars[22]);
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
  // (basic-block 1 1 (##.%p.1123) ((##vcore.null? (bruijn ##.x.339 1 1))) (if (bruijn ##.%p.1123 0 0) ((bruijn ##.%k.780 1 0) #t) (basic-block 1 1 (##.%p.1124) ((##vcore.pair? (bruijn ##.x.339 2 1))) (if (bruijn ##.%p.1124 0 0) (basic-block 2 2 (##.%x.1125 ##.%p.1126) ((##vcore.car (bruijn ##.x.339 3 1)) (##vcore.symbol? (bruijn ##.%x.1125 0 0))) (if (bruijn ##.%p.1126 0 1) (basic-block 1 1 (##.%x.1127) ((##vcore.cdr (bruijn ##.x.339 4 1))) (##qualified-call (vanity compiler verify symbol-list?) #t (bruijn ##.symbol-list?.131 5 1) (bruijn ##.%k.780 4 0) (bruijn ##.%x.1127 0 0))) ((bruijn ##.%k.780 3 0) #f))) ((bruijn ##.%k.780 2 0) #f)))))
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
  // (basic-block 1 1 (##.%p.1128) ((##vcore.int? (bruijn ##.x.340 1 1))) (if (bruijn ##.%p.1128 0 0) (basic-block 1 1 (##.%r.1129) ((##vcore.>= (bruijn ##.x.340 2 1) 0)) ((bruijn ##.%k.786 2 0) (bruijn ##.%r.1129 0 0))) ((bruijn ##.%k.786 1 0) #f)))
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
void _V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.789 0 0) ((bruijn ##.%k.788 1 0) #t) ((bruijn ##.%k.788 1 0) #f))
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
  // ((bruijn ##.lookup-intrinsic-name.116 2 23) (close _V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k224) (bruijn ##.x.341 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0builtin_Q_V0k224, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.792 0 0) ((bruijn ##.%k.790 2 0) #t) ((bruijn ##.%k.790 2 0) #f))
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
  // (basic-block 1 1 (##.%p.1130) ((##vcore.eq? (bruijn ##.x.342 1 1) 'define-library)) (if (bruijn ##.%p.1130 0 0) ((bruijn ##.%k.790 1 0) (bruijn ##.%p.1130 0 0)) ((bruijn ##.assv.107 3 14) (close _V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k225) (bruijn ##.x.342 1 1) (bruijn ##.reserved-shapes.135 2 5))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q_V0k225, self)))),
      statics->vars[1],
      statics->up->vars[5]);
}
    }
}
static void _V0vanity_V0compiler_V0verify_V20_V0k226(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1131 ##.%r.1132) ((##vcore.cons 'verify-expanded (bruijn ##.verify-expanded.130 1 0)) (##vcore.cons (bruijn ##.%x.1131 0 0) '())) ((bruijn ##.%k.344 9 0) (bruijn ##.%r.1132 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V0vanity_V0compiler_V0verify_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23) {
 if(argc != 24) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0verify_V20_V0lambda2, got ~D~N"
  "-- expected 24~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[24]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 24, 24, statics);
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
  // (##letrec (vanity compiler verify) 6 ((close "_V50_V0vanity_V0compiler_V0verify_V0verify__expanded" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0symbol__list_Q" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0arity_Q" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0builtin_Q" (vanity compiler verify)) (close "_V50_V0vanity_V0compiler_V0verify_V0reserved__symbol_Q" (vanity compiler verify)) #f) (set! (close _V0vanity_V0compiler_V0verify_V20_V0k226) (bruijn ##.reserved-shapes.135 0 5) '(##pair ##.pair.1245)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k226, self)))),
      VEncodeInt(0l), VEncodeInt(5l),
      VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR)
    );
    }
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0verify_V20_V0lambda2) (##string ##.string.1246) (bruijn ##.%x.794 0 0) 'for-each 'newline 'current-error-port 'caddr 'write 'display 'cadr 'format 'length 'compiler-error 'reverse 'boolean? 'memv 'string-append 'assv 'error 'equal? 'list? 'hash-table-ref 'hash-table-set! 'list 'make-hash-table 'current-hash 'lookup-intrinsic-name)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 27,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D1246.sym, VPOINTER_OTHER),
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
  // (##vcore.vector (close _V0vanity_V0compiler_V0verify_V20_V0k6) (bruijn ##.%x.795 4 0) (bruijn ##.%x.796 3 0) (bruijn ##.%x.797 2 0) (bruijn ##.%x.798 1 0) (bruijn ##.%x.799 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k6, self)))),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k5) (##string ##.string.1247))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1247.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k4) (##string ##.string.1248))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1248.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k3) (##string ##.string.1249))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1249.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k2) (##string ##.string.1250))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1250.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0verify_V20_V0k1) (##string ##.string.1251))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0verify_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1251.sym, VPOINTER_OTHER));
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
  _V10_Dpair_D1245.first = VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR);
  _V10_Dpair_D1245.rest = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1243.first = VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR);
  _V10_Dpair_D1243.rest = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D1201, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR);
  _V10_Dpair_D1240.first = VEncodePointer(&_V10_Dpair_D1203, VPOINTER_PAIR);
  _V10_Dpair_D1240.rest = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1239.first = VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR);
  _V10_Dpair_D1239.rest = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1238.first = VEncodePointer(&_V10_Dpair_D1207, VPOINTER_PAIR);
  _V10_Dpair_D1238.rest = VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR);
  _V10_Dpair_D1237.first = VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR);
  _V10_Dpair_D1237.rest = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1236.first = VEncodePointer(&_V10_Dpair_D1211, VPOINTER_PAIR);
  _V10_Dpair_D1236.rest = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1235.first = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1235.rest = VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR);
  _V10_Dpair_D1234.first = VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR);
  _V10_Dpair_D1234.rest = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1233.first = VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR);
  _V10_Dpair_D1233.rest = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1232.first = VEncodePointer(&_V10_Dpair_D1219, VPOINTER_PAIR);
  _V10_Dpair_D1232.rest = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1231.first = VEncodePointer(&_V10_Dpair_D1221, VPOINTER_PAIR);
  _V10_Dpair_D1231.rest = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1230.first = VEncodePointer(&_V10_Dpair_D1223, VPOINTER_PAIR);
  _V10_Dpair_D1230.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1229.first = VEncodePointer(&_V10_Dpair_D1225, VPOINTER_PAIR);
  _V10_Dpair_D1229.rest = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1228.first = VEncodePointer(&_V10_Dpair_D1227, VPOINTER_PAIR);
  _V10_Dpair_D1228.rest = VNULL;
  _V10_Dpair_D1227.first = _V0define;
  _V10_Dpair_D1227.rest = VEncodePointer(&_V10_Dstring_D1226.sym, VPOINTER_OTHER);
  _V10_Dpair_D1225.first = _V0import;
  _V10_Dpair_D1225.rest = VEncodePointer(&_V10_Dstring_D1224.sym, VPOINTER_OTHER);
  _V10_Dpair_D1223.first = _V10foreign_Ddeclare;
  _V10_Dpair_D1223.rest = VEncodePointer(&_V10_Dstring_D1222.sym, VPOINTER_OTHER);
  _V10_Dpair_D1221.first = _V10vcore_Ddeclare;
  _V10_Dpair_D1221.rest = VEncodePointer(&_V10_Dstring_D1220.sym, VPOINTER_OTHER);
  _V10_Dpair_D1219.first = _V10foreign_Dfunction;
  _V10_Dpair_D1219.rest = VEncodePointer(&_V10_Dstring_D1218.sym, VPOINTER_OTHER);
  _V10_Dpair_D1217.first = _V10basic__intrinsic;
  _V10_Dpair_D1217.rest = VEncodePointer(&_V10_Dstring_D1216.sym, VPOINTER_OTHER);
  _V10_Dpair_D1215.first = _V10intrinsic;
  _V10_Dpair_D1215.rest = VEncodePointer(&_V10_Dstring_D1214.sym, VPOINTER_OTHER);
  _V10_Dpair_D1213.first = _V0set_B;
  _V10_Dpair_D1213.rest = VEncodePointer(&_V10_Dstring_D1212.sym, VPOINTER_OTHER);
  _V10_Dpair_D1211.first = _V10letrec;
  _V10_Dpair_D1211.rest = VEncodePointer(&_V10_Dstring_D1210.sym, VPOINTER_OTHER);
  _V10_Dpair_D1209.first = _V0letrec;
  _V10_Dpair_D1209.rest = VEncodePointer(&_V10_Dstring_D1208.sym, VPOINTER_OTHER);
  _V10_Dpair_D1207.first = _V0or;
  _V10_Dpair_D1207.rest = VEncodePointer(&_V10_Dstring_D1206.sym, VPOINTER_OTHER);
  _V10_Dpair_D1205.first = _V0begin;
  _V10_Dpair_D1205.rest = VEncodePointer(&_V10_Dstring_D1204.sym, VPOINTER_OTHER);
  _V10_Dpair_D1203.first = _V0if;
  _V10_Dpair_D1203.rest = VEncodePointer(&_V10_Dstring_D1202.sym, VPOINTER_OTHER);
  _V10_Dpair_D1201.first = _V10qualified__case__lambda;
  _V10_Dpair_D1201.rest = VEncodePointer(&_V10_Dstring_D1200.sym, VPOINTER_OTHER);
  _V10_Dpair_D1199.first = _V10qualified__lambda;
  _V10_Dpair_D1199.rest = VEncodePointer(&_V10_Dstring_D1198.sym, VPOINTER_OTHER);
  _V10_Dpair_D1197.first = _V0case__lambda;
  _V10_Dpair_D1197.rest = VEncodePointer(&_V10_Dstring_D1196.sym, VPOINTER_OTHER);
  _V10_Dpair_D1195.first = _V0lambda;
  _V10_Dpair_D1195.rest = VEncodePointer(&_V10_Dstring_D1194.sym, VPOINTER_OTHER);
  _V10_Dpair_D1193.first = _V0quote;
  _V10_Dpair_D1193.rest = VEncodePointer(&_V10_Dstring_D1192.sym, VPOINTER_OTHER);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V10_Dpair_D1188.first = _V0toplevel;
  _V10_Dpair_D1188.rest = VNULL;
  _V10_Dpair_D1183.first = _V0lambda;
  _V10_Dpair_D1183.rest = VEncodePointer(&_V10_Dpair_D1182, VPOINTER_PAIR);
  _V10_Dpair_D1182.first = _V0case__lambda;
  _V10_Dpair_D1182.rest = VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR);
  _V10_Dpair_D1181.first = _V10qualified__lambda;
  _V10_Dpair_D1181.rest = VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR);
  _V10_Dpair_D1180.first = _V10qualified__case__lambda;
  _V10_Dpair_D1180.rest = VNULL;
  _V10_Dpair_D1170.first = _V0quote;
  _V10_Dpair_D1170.rest = VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR);
  _V10_Dpair_D1169.first = _V0set_B;
  _V10_Dpair_D1169.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
