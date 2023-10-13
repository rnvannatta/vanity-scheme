/* Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D381 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D380 = { { VSTRING, 21 }, "_V0scheme_V0r7rs_V20" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[5]; } _V0exit = { { VSYMBOL, 5 }, "exit" };
static struct { VBlob sym; char bytes[13]; } _V0command__line = { { VSYMBOL, 13 }, "command-line" };
static struct { VBlob sym; char bytes[7]; } _V0values = { { VSYMBOL, 7 }, "values" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[31]; } _V0call__with__current__continuation = { { VSYMBOL, 31 }, "call-with-current-continuation" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[6]; } _V0write = { { VSYMBOL, 6 }, "write" };
static struct { VBlob sym; char bytes[8]; } _V0display = { { VSYMBOL, 8 }, "display" };
static struct { VBlob sym; char bytes[8]; } _V0newline = { { VSYMBOL, 8 }, "newline" };
static struct { VBlob sym; char bytes[5]; } _V0read = { { VSYMBOL, 5 }, "read" };
static struct { VBlob sym; char bytes[10]; } _V0read__line = { { VSYMBOL, 10 }, "read-line" };
static struct { VBlob sym; char bytes[10]; } _V0read__char = { { VSYMBOL, 10 }, "read-char" };
static struct { VBlob sym; char bytes[21]; } _V0with__input__from__file = { { VSYMBOL, 21 }, "with-input-from-file" };
static struct { VBlob sym; char bytes[20]; } _V0with__output__to__file = { { VSYMBOL, 20 }, "with-output-to-file" };
static struct { VBlob sym; char bytes[18]; } _V0get__output__string = { { VSYMBOL, 18 }, "get-output-string" };
static struct { VBlob sym; char bytes[19]; } _V0open__output__string = { { VSYMBOL, 19 }, "open-output-string" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[17]; } _V0open__output__file = { { VSYMBOL, 17 }, "open-output-file" };
static struct { VBlob sym; char bytes[16]; } _V0open__input__file = { { VSYMBOL, 16 }, "open-input-file" };
static struct { VBlob sym; char bytes[19]; } _V0current__input__port = { { VSYMBOL, 19 }, "current-input-port" };
static struct { VBlob sym; char bytes[19]; } _V0current__error__port = { { VSYMBOL, 19 }, "current-error-port" };
static struct { VBlob sym; char bytes[20]; } _V0current__output__port = { { VSYMBOL, 20 }, "current-output-port" };
static struct { VBlob sym; char bytes[14]; } _V0char___Ginteger = { { VSYMBOL, 14 }, "char->integer" };
static struct { VBlob sym; char bytes[16]; } _V0vector__for__each = { { VSYMBOL, 16 }, "vector-for-each" };
static struct { VBlob sym; char bytes[14]; } _V0vector__length = { { VSYMBOL, 14 }, "vector-length" };
static struct { VBlob sym; char bytes[12]; } _V0vector__set_B = { { VSYMBOL, 12 }, "vector-set!" };
static struct { VBlob sym; char bytes[11]; } _V0vector__ref = { { VSYMBOL, 11 }, "vector-ref" };
static struct { VBlob sym; char bytes[7]; } _V0vector = { { VSYMBOL, 7 }, "vector" };
static struct { VBlob sym; char bytes[13]; } _V0list___Gvector = { { VSYMBOL, 13 }, "list->vector" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[14]; } _V0string__append = { { VSYMBOL, 14 }, "string-append" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gnumber = { { VSYMBOL, 15 }, "string->number" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[12]; } _V0string__set_B = { { VSYMBOL, 12 }, "string-set!" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[13]; } _V0string__copy_B = { { VSYMBOL, 13 }, "string-copy!" };
static struct { VBlob sym; char bytes[12]; } _V0string__copy = { { VSYMBOL, 12 }, "string-copy" };
static struct { VBlob sym; char bytes[10]; } _V0substring = { { VSYMBOL, 10 }, "substring" };
static struct { VBlob sym; char bytes[12]; } _V0make__string = { { VSYMBOL, 12 }, "make-string" };
static struct { VBlob sym; char bytes[13]; } _V0list___Gstring = { { VSYMBOL, 13 }, "list->string" };
static struct { VBlob sym; char bytes[13]; } _V0string___Glist = { { VSYMBOL, 13 }, "string->list" };
static struct { VBlob sym; char bytes[6]; } _V0assoc = { { VSYMBOL, 6 }, "assoc" };
static struct { VBlob sym; char bytes[5]; } _V0assv = { { VSYMBOL, 5 }, "assv" };
static struct { VBlob sym; char bytes[5]; } _V0assq = { { VSYMBOL, 5 }, "assq" };
static struct { VBlob sym; char bytes[7]; } _V0member = { { VSYMBOL, 7 }, "member" };
static struct { VBlob sym; char bytes[5]; } _V0memv = { { VSYMBOL, 5 }, "memv" };
static struct { VBlob sym; char bytes[5]; } _V0memq = { { VSYMBOL, 5 }, "memq" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[7]; } _V0append = { { VSYMBOL, 7 }, "append" };
static struct { VBlob sym; char bytes[9]; } _V0for__each = { { VSYMBOL, 9 }, "for-each" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[9]; } _V0list__ref = { { VSYMBOL, 9 }, "list-ref" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[7]; } _V0cddddr = { { VSYMBOL, 7 }, "cddddr" };
static struct { VBlob sym; char bytes[7]; } _V0cdddar = { { VSYMBOL, 7 }, "cdddar" };
static struct { VBlob sym; char bytes[7]; } _V0cddadr = { { VSYMBOL, 7 }, "cddadr" };
static struct { VBlob sym; char bytes[7]; } _V0cddaar = { { VSYMBOL, 7 }, "cddaar" };
static struct { VBlob sym; char bytes[7]; } _V0cdaddr = { { VSYMBOL, 7 }, "cdaddr" };
static struct { VBlob sym; char bytes[7]; } _V0cdadar = { { VSYMBOL, 7 }, "cdadar" };
static struct { VBlob sym; char bytes[7]; } _V0cdaadr = { { VSYMBOL, 7 }, "cdaadr" };
static struct { VBlob sym; char bytes[7]; } _V0cdaaar = { { VSYMBOL, 7 }, "cdaaar" };
static struct { VBlob sym; char bytes[7]; } _V0cadddr = { { VSYMBOL, 7 }, "cadddr" };
static struct { VBlob sym; char bytes[7]; } _V0caddar = { { VSYMBOL, 7 }, "caddar" };
static struct { VBlob sym; char bytes[7]; } _V0cadadr = { { VSYMBOL, 7 }, "cadadr" };
static struct { VBlob sym; char bytes[7]; } _V0cadaar = { { VSYMBOL, 7 }, "cadaar" };
static struct { VBlob sym; char bytes[7]; } _V0caaddr = { { VSYMBOL, 7 }, "caaddr" };
static struct { VBlob sym; char bytes[7]; } _V0caadar = { { VSYMBOL, 7 }, "caadar" };
static struct { VBlob sym; char bytes[7]; } _V0caaadr = { { VSYMBOL, 7 }, "caaadr" };
static struct { VBlob sym; char bytes[7]; } _V0caaaar = { { VSYMBOL, 7 }, "caaaar" };
static struct { VBlob sym; char bytes[6]; } _V0cdddr = { { VSYMBOL, 6 }, "cdddr" };
static struct { VBlob sym; char bytes[6]; } _V0cddar = { { VSYMBOL, 6 }, "cddar" };
static struct { VBlob sym; char bytes[6]; } _V0cdadr = { { VSYMBOL, 6 }, "cdadr" };
static struct { VBlob sym; char bytes[6]; } _V0cdaar = { { VSYMBOL, 6 }, "cdaar" };
static struct { VBlob sym; char bytes[6]; } _V0caddr = { { VSYMBOL, 6 }, "caddr" };
static struct { VBlob sym; char bytes[6]; } _V0cadar = { { VSYMBOL, 6 }, "cadar" };
static struct { VBlob sym; char bytes[6]; } _V0caadr = { { VSYMBOL, 6 }, "caadr" };
static struct { VBlob sym; char bytes[6]; } _V0caaar = { { VSYMBOL, 6 }, "caaar" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[5]; } _V0caar = { { VSYMBOL, 5 }, "caar" };
static struct { VBlob sym; char bytes[9]; } _V0set__cdr_B = { { VSYMBOL, 9 }, "set-cdr!" };
static struct { VBlob sym; char bytes[9]; } _V0set__car_B = { { VSYMBOL, 9 }, "set-car!" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[4]; } _V0min = { { VSYMBOL, 4 }, "min" };
static struct { VBlob sym; char bytes[4]; } _V0max = { { VSYMBOL, 4 }, "max" };
static struct { VBlob sym; char bytes[10]; } _V0remainder = { { VSYMBOL, 10 }, "remainder" };
static struct { VBlob sym; char bytes[9]; } _V0quotient = { { VSYMBOL, 9 }, "quotient" };
static struct { VBlob sym; char bytes[2]; } _V0_W = { { VSYMBOL, 2 }, "/" };
static struct { VBlob sym; char bytes[2]; } _V0_S = { { VSYMBOL, 2 }, "*" };
static struct { VBlob sym; char bytes[2]; } _V0__ = { { VSYMBOL, 2 }, "-" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[9]; } _V0complex_Q = { { VSYMBOL, 9 }, "complex\?" };
static struct { VBlob sym; char bytes[8]; } _V0number_Q = { { VSYMBOL, 8 }, "number\?" };
static struct { VBlob sym; char bytes[15]; } _V0exact___Ginexact = { { VSYMBOL, 15 }, "exact->inexact" };
static struct { VBlob sym; char bytes[8]; } _V0inexact = { { VSYMBOL, 8 }, "inexact" };
static struct { VBlob sym; char bytes[3]; } _V0_G_E = { { VSYMBOL, 3 }, ">=" };
static struct { VBlob sym; char bytes[3]; } _V0_L_E = { { VSYMBOL, 3 }, "<=" };
static struct { VBlob sym; char bytes[2]; } _V0_G = { { VSYMBOL, 2 }, ">" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[2]; } _V0_L = { { VSYMBOL, 2 }, "<" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[9]; } _V0symbol_E_Q = { { VSYMBOL, 9 }, "symbol=\?" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[6]; } _V0char_Q = { { VSYMBOL, 6 }, "char\?" };
static struct { VBlob sym; char bytes[9]; } _V0integer_Q = { { VSYMBOL, 9 }, "integer\?" };
static struct { VBlob sym; char bytes[6]; } _V0real_Q = { { VSYMBOL, 6 }, "real\?" };
static struct { VBlob sym; char bytes[9]; } _V0inexact_Q = { { VSYMBOL, 9 }, "inexact\?" };
static struct { VBlob sym; char bytes[7]; } _V0exact_Q = { { VSYMBOL, 7 }, "exact\?" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[11]; } _V0procedure_Q = { { VSYMBOL, 11 }, "procedure\?" };
static struct { VBlob sym; char bytes[8]; } _V0vector_Q = { { VSYMBOL, 8 }, "vector\?" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[9]; } _V0boolean_Q = { { VSYMBOL, 9 }, "boolean\?" };
static struct { VBlob sym; char bytes[12]; } _V0eof__object_Q = { { VSYMBOL, 12 }, "eof-object\?" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static void _V0scheme_V0r7rs_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61, VWORD _var62, VWORD _var63, VWORD _var64, VWORD _var65, VWORD _var66, VWORD _var67, VWORD _var68, VWORD _var69, VWORD _var70, VWORD _var71, VWORD _var72, VWORD _var73, VWORD _var74, VWORD _var75, VWORD _var76, VWORD _var77, VWORD _var78, VWORD _var79, VWORD _var80, VWORD _var81, VWORD _var82, VWORD _var83, VWORD _var84, VWORD _var85, VWORD _var86, VWORD _var87, VWORD _var88, VWORD _var89, VWORD _var90, VWORD _var91, VWORD _var92, VWORD _var93, VWORD _var94, VWORD _var95, VWORD _var96, VWORD _var97, VWORD _var98, VWORD _var99, VWORD _var100, VWORD _var101, VWORD _var102, VWORD _var103, VWORD _var104, VWORD _var105, VWORD _var106, VWORD _var107, VWORD _var108, VWORD _var109, VWORD _var110, VWORD _var111, VWORD _var112, VWORD _var113, VWORD _var114, VWORD _var115, VWORD _var116, VWORD _var117, VWORD _var118, VWORD _var119, VWORD _var120, VWORD _var121, VWORD _var122, VWORD _var123, VWORD _var124, VWORD _var125) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_lambda2, runtime, upenv, 126, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57, _var58, _var59, _var60, _var61, _var62, _var63, _var64, _var65, _var66, _var67, _var68, _var69, _var70, _var71, _var72, _var73, _var74, _var75, _var76, _var77, _var78, _var79, _var80, _var81, _var82, _var83, _var84, _var85, _var86, _var87, _var88, _var89, _var90, _var91, _var92, _var93, _var94, _var95, _var96, _var97, _var98, _var99, _var100, _var101, _var102, _var103, _var104, _var105, _var106, _var107, _var108, _var109, _var110, _var111, _var112, _var113, _var114, _var115, _var116, _var117, _var118, _var119, _var120, _var121, _var122, _var123, _var124, _var125) {
  // ((bruijn ##k.2 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote null?) (bruijn null? 0 125)) (##inline ##sys.cons (##inline ##sys.cons (quote eof-object?) (bruijn eof-object? 0 1)) (##inline ##sys.cons (##inline ##sys.cons (quote boolean?) (bruijn boolean? 0 124)) (##inline ##sys.cons (##inline ##sys.cons (quote pair?) (bruijn pair? 0 2)) (##inline ##sys.cons (##inline ##sys.cons (quote vector?) (bruijn vector? 0 123)) (##inline ##sys.cons (##inline ##sys.cons (quote procedure?) (bruijn procedure? 0 3)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol?) (bruijn symbol? 0 122)) (##inline ##sys.cons (##inline ##sys.cons (quote string?) (bruijn string? 0 4)) (##inline ##sys.cons (##inline ##sys.cons (quote exact?) (bruijn exact? 0 121)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact?) (bruijn inexact? 0 5)) (##inline ##sys.cons (##inline ##sys.cons (quote real?) (bruijn real? 0 120)) (##inline ##sys.cons (##inline ##sys.cons (quote integer?) (bruijn integer? 0 6)) (##inline ##sys.cons (##inline ##sys.cons (quote char?) (bruijn char? 0 119)) (##inline ##sys.cons (##inline ##sys.cons (quote eq?) (bruijn eq? 0 7)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol=?) (bruijn symbol=? 0 118)) (##inline ##sys.cons (##inline ##sys.cons (quote eqv?) (bruijn eqv? 0 8)) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (bruijn equal? 0 117)) (##inline ##sys.cons (##inline ##sys.cons (quote not) (bruijn not 0 9)) (##inline ##sys.cons (##inline ##sys.cons (quote <) (bruijn < 0 116)) (##inline ##sys.cons (##inline ##sys.cons (quote =) (bruijn = 0 10)) (##inline ##sys.cons (##inline ##sys.cons (quote >) (bruijn > 0 115)) (##inline ##sys.cons (##inline ##sys.cons (quote <=) (bruijn <= 0 11)) (##inline ##sys.cons (##inline ##sys.cons (quote >=) (bruijn >= 0 114)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact) (bruijn inexact 0 12)) (##inline ##sys.cons (##inline ##sys.cons (quote exact->inexact) (bruijn exact->inexact 0 113)) (##inline ##sys.cons (##inline ##sys.cons (quote number?) (bruijn number? 0 13)) (##inline ##sys.cons (##inline ##sys.cons (quote complex?) (bruijn complex? 0 112)) (##inline ##sys.cons (##inline ##sys.cons (quote +) (bruijn + 0 14)) (##inline ##sys.cons (##inline ##sys.cons (quote -) (bruijn - 0 111)) (##inline ##sys.cons (##inline ##sys.cons (quote *) (bruijn * 0 15)) (##inline ##sys.cons (##inline ##sys.cons (quote /) (bruijn / 0 110)) (##inline ##sys.cons (##inline ##sys.cons (quote quotient) (bruijn quotient 0 16)) (##inline ##sys.cons (##inline ##sys.cons (quote remainder) (bruijn remainder 0 109)) (##inline ##sys.cons (##inline ##sys.cons (quote max) (bruijn max 0 17)) (##inline ##sys.cons (##inline ##sys.cons (quote min) (bruijn min 0 108)) (##inline ##sys.cons (##inline ##sys.cons (quote cons) (bruijn cons 0 18)) (##inline ##sys.cons (##inline ##sys.cons (quote car) (bruijn car 0 107)) (##inline ##sys.cons (##inline ##sys.cons (quote cdr) (bruijn cdr 0 19)) (##inline ##sys.cons (##inline ##sys.cons (quote set-car!) (bruijn set-car! 0 106)) (##inline ##sys.cons (##inline ##sys.cons (quote set-cdr!) (bruijn set-cdr! 0 20)) (##inline ##sys.cons (##inline ##sys.cons (quote caar) (bruijn caar 0 105)) (##inline ##sys.cons (##inline ##sys.cons (quote cadr) (bruijn cadr 0 21)) (##inline ##sys.cons (##inline ##sys.cons (quote cdar) (bruijn cdar 0 104)) (##inline ##sys.cons (##inline ##sys.cons (quote cddr) (bruijn cddr 0 22)) (##inline ##sys.cons (##inline ##sys.cons (quote caaar) (bruijn caaar 0 103)) (##inline ##sys.cons (##inline ##sys.cons (quote caadr) (bruijn caadr 0 23)) (##inline ##sys.cons (##inline ##sys.cons (quote cadar) (bruijn cadar 0 102)) (##inline ##sys.cons (##inline ##sys.cons (quote caddr) (bruijn caddr 0 24)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaar) (bruijn cdaar 0 101)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadr) (bruijn cdadr 0 25)) (##inline ##sys.cons (##inline ##sys.cons (quote cddar) (bruijn cddar 0 100)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddr) (bruijn cdddr 0 26)) (##inline ##sys.cons (##inline ##sys.cons (quote caaaar) (bruijn caaaar 0 99)) (##inline ##sys.cons (##inline ##sys.cons (quote caaadr) (bruijn caaadr 0 27)) (##inline ##sys.cons (##inline ##sys.cons (quote caadar) (bruijn caadar 0 98)) (##inline ##sys.cons (##inline ##sys.cons (quote caaddr) (bruijn caaddr 0 28)) (##inline ##sys.cons (##inline ##sys.cons (quote cadaar) (bruijn cadaar 0 97)) (##inline ##sys.cons (##inline ##sys.cons (quote cadadr) (bruijn cadadr 0 29)) (##inline ##sys.cons (##inline ##sys.cons (quote caddar) (bruijn caddar 0 96)) (##inline ##sys.cons (##inline ##sys.cons (quote cadddr) (bruijn cadddr 0 30)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaaar) (bruijn cdaaar 0 95)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaadr) (bruijn cdaadr 0 31)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadar) (bruijn cdadar 0 94)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaddr) (bruijn cdaddr 0 32)) (##inline ##sys.cons (##inline ##sys.cons (quote cddaar) (bruijn cddaar 0 93)) (##inline ##sys.cons (##inline ##sys.cons (quote cddadr) (bruijn cddadr 0 33)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddar) (bruijn cdddar 0 92)) (##inline ##sys.cons (##inline ##sys.cons (quote cddddr) (bruijn cddddr 0 34)) (##inline ##sys.cons (##inline ##sys.cons (quote list) (bruijn list 0 91)) (##inline ##sys.cons (##inline ##sys.cons (quote length) (bruijn length 0 35)) (##inline ##sys.cons (##inline ##sys.cons (quote list-ref) (bruijn list-ref 0 90)) (##inline ##sys.cons (##inline ##sys.cons (quote map) (bruijn map 0 36)) (##inline ##sys.cons (##inline ##sys.cons (quote for-each) (bruijn for-each 0 89)) (##inline ##sys.cons (##inline ##sys.cons (quote append) (bruijn append 0 37)) (##inline ##sys.cons (##inline ##sys.cons (quote reverse) (bruijn reverse 0 88)) (##inline ##sys.cons (##inline ##sys.cons (quote memq) (bruijn memq 0 38)) (##inline ##sys.cons (##inline ##sys.cons (quote memv) (bruijn memv 0 87)) (##inline ##sys.cons (##inline ##sys.cons (quote member) (bruijn member 0 39)) (##inline ##sys.cons (##inline ##sys.cons (quote assq) (bruijn assq 0 86)) (##inline ##sys.cons (##inline ##sys.cons (quote assv) (bruijn assv 0 40)) (##inline ##sys.cons (##inline ##sys.cons (quote assoc) (bruijn assoc 0 85)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 0 79)) (##inline ##sys.cons (##inline ##sys.cons (quote list->string) (bruijn list->string 0 84)) (##inline ##sys.cons (##inline ##sys.cons (quote make-string) (bruijn make-string 0 41)) (##inline ##sys.cons (##inline ##sys.cons (quote substring) (bruijn substring 0 83)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy) (bruijn string-copy 0 42)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy!) (bruijn string-copy! 0 82)) (##inline ##sys.cons (##inline ##sys.cons (quote string-ref) (bruijn string-ref 0 43)) (##inline ##sys.cons (##inline ##sys.cons (quote string-set!) (bruijn string-set! 0 81)) (##inline ##sys.cons (##inline ##sys.cons (quote string-length) (bruijn string-length 0 44)) (##inline ##sys.cons (##inline ##sys.cons (quote string->symbol) (bruijn string->symbol 0 80)) (##inline ##sys.cons (##inline ##sys.cons (quote string->number) (bruijn string->number 0 45)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 0 79)) (##inline ##sys.cons (##inline ##sys.cons (quote string-append) (bruijn string-append 0 46)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol->string) (bruijn symbol->string 0 78)) (##inline ##sys.cons (##inline ##sys.cons (quote list->vector) (bruijn list->vector 0 47)) (##inline ##sys.cons (##inline ##sys.cons (quote vector) (bruijn vector 0 77)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-ref) (bruijn vector-ref 0 48)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-set!) (bruijn vector-set! 0 76)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-length) (bruijn vector-length 0 49)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-for-each) (bruijn vector-for-each 0 75)) (##inline ##sys.cons (##inline ##sys.cons (quote char->integer) (bruijn char->integer 0 50)) (##inline ##sys.cons (##inline ##sys.cons (quote current-output-port) (bruijn current-output-port 0 74)) (##inline ##sys.cons (##inline ##sys.cons (quote current-error-port) (bruijn current-error-port 0 51)) (##inline ##sys.cons (##inline ##sys.cons (quote current-input-port) (bruijn current-input-port 0 73)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-file) (bruijn open-input-file 0 52)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-file) (bruijn open-output-file 0 72)) (##inline ##sys.cons (##inline ##sys.cons (quote close-port) (bruijn close-port 0 53)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-string) (bruijn open-output-string 0 71)) (##inline ##sys.cons (##inline ##sys.cons (quote get-output-string) (bruijn get-output-string 0 54)) (##inline ##sys.cons (##inline ##sys.cons (quote with-output-to-file) (bruijn with-output-to-file 0 70)) (##inline ##sys.cons (##inline ##sys.cons (quote with-input-from-file) (bruijn with-input-from-file 0 55)) (##inline ##sys.cons (##inline ##sys.cons (quote read-char) (bruijn read-char 0 69)) (##inline ##sys.cons (##inline ##sys.cons (quote read-line) (bruijn read-line 0 56)) (##inline ##sys.cons (##inline ##sys.cons (quote read) (bruijn read 0 68)) (##inline ##sys.cons (##inline ##sys.cons (quote newline) (bruijn newline 0 57)) (##inline ##sys.cons (##inline ##sys.cons (quote display) (bruijn display 0 67)) (##inline ##sys.cons (##inline ##sys.cons (quote write) (bruijn write 0 58)) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (bruijn call/cc 0 66)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-current-continuation) (bruijn call-with-current-continuation 0 59)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (bruijn call-with-values 0 65)) (##inline ##sys.cons (##inline ##sys.cons (quote apply) (bruijn apply 0 60)) (##inline ##sys.cons (##inline ##sys.cons (quote values) (bruijn values 0 64)) (##inline ##sys.cons (##inline ##sys.cons (quote command-line) (bruijn command-line 0 61)) (##inline ##sys.cons (##inline ##sys.cons (quote exit) (bruijn exit 0 63)) (##inline ##sys.cons (##inline ##sys.cons (quote error) (bruijn error 0 62)) (quote ()))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
V_CALL(_var0, runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER),
      _var125
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER),
      _var1
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER),
      _var124
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER),
      _var2
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER),
      _var123
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER),
      _var3
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER),
      _var122
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER),
      _var4
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER),
      _var121
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER),
      _var5
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER),
      _var120
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER),
      _var6
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER),
      _var119
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER),
      _var7
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER),
      _var118
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      _var8
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      _var117
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0not.sym, VPOINTER_OTHER),
      _var9
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L.sym, VPOINTER_OTHER),
      _var116
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_E.sym, VPOINTER_OTHER),
      _var10
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G.sym, VPOINTER_OTHER),
      _var115
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER),
      _var11
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER),
      _var114
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER),
      _var12
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER),
      _var113
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER),
      _var13
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER),
      _var112
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      _var14
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0__.sym, VPOINTER_OTHER),
      _var111
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_S.sym, VPOINTER_OTHER),
      _var15
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_W.sym, VPOINTER_OTHER),
      _var110
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER),
      _var16
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER),
      _var109
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0max.sym, VPOINTER_OTHER),
      _var17
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0min.sym, VPOINTER_OTHER),
      _var108
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cons.sym, VPOINTER_OTHER),
      _var18
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0car.sym, VPOINTER_OTHER),
      _var107
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER),
      _var19
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER),
      _var106
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER),
      _var20
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caar.sym, VPOINTER_OTHER),
      _var105
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER),
      _var21
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER),
      _var104
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER),
      _var22
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER),
      _var103
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER),
      _var23
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER),
      _var102
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER),
      _var24
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER),
      _var101
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER),
      _var25
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER),
      _var100
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER),
      _var26
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER),
      _var99
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER),
      _var27
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER),
      _var98
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER),
      _var28
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER),
      _var97
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER),
      _var29
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER),
      _var96
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER),
      _var30
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER),
      _var95
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER),
      _var31
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER),
      _var94
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER),
      _var32
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER),
      _var93
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER),
      _var33
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER),
      _var92
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER),
      _var34
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list.sym, VPOINTER_OTHER),
      _var91
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0length.sym, VPOINTER_OTHER),
      _var35
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER),
      _var90
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0map.sym, VPOINTER_OTHER),
      _var36
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER),
      _var89
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      _var37
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      _var88
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memq.sym, VPOINTER_OTHER),
      _var38
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memv.sym, VPOINTER_OTHER),
      _var87
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0member.sym, VPOINTER_OTHER),
      _var39
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assq.sym, VPOINTER_OTHER),
      _var86
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assv.sym, VPOINTER_OTHER),
      _var40
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER),
      _var85
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      _var79
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER),
      _var84
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER),
      _var41
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0substring.sym, VPOINTER_OTHER),
      _var83
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER),
      _var42
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER),
      _var82
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER),
      _var43
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER),
      _var81
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER),
      _var44
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER),
      _var80
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER),
      _var45
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      _var79
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER),
      _var46
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER),
      _var78
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER),
      _var47
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector.sym, VPOINTER_OTHER),
      _var77
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER),
      _var48
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER),
      _var76
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER),
      _var49
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER),
      _var75
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER),
      _var50
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER),
      _var74
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER),
      _var51
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER),
      _var73
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER),
      _var52
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER),
      _var72
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER),
      _var53
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER),
      _var71
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER),
      _var54
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER),
      _var70
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER),
      _var55
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER),
      _var69
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER),
      _var56
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read.sym, VPOINTER_OTHER),
      _var68
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0newline.sym, VPOINTER_OTHER),
      _var57
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0display.sym, VPOINTER_OTHER),
      _var67
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0write.sym, VPOINTER_OTHER),
      _var58
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      _var66
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER),
      _var59
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      _var65
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0apply.sym, VPOINTER_OTHER),
      _var60
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0values.sym, VPOINTER_OTHER),
      _var64
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER),
      _var61
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exit.sym, VPOINTER_OTHER),
      _var63
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      _var62
    )
,
      VNULL
    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    );
 }
}
static void _V0scheme_V0r7rs_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0scheme_V0r7rs_V20_lambda2) (bruijn ##k.1 127 0) (bruijn ##x.254 124 0) (bruijn ##x.255 123 0) (bruijn ##x.256 122 0) (bruijn ##x.257 121 0) (bruijn ##x.258 120 0) (bruijn ##x.259 119 0) (bruijn ##x.260 118 0) (bruijn ##x.261 117 0) (bruijn ##x.262 116 0) (bruijn ##x.263 115 0) (bruijn ##x.264 114 0) (bruijn ##x.265 113 0) (bruijn ##x.266 112 0) (bruijn ##x.267 111 0) (bruijn ##x.268 110 0) (bruijn ##x.269 109 0) (bruijn ##x.270 108 0) (bruijn ##x.271 107 0) (bruijn ##x.272 106 0) (bruijn ##x.273 105 0) (bruijn ##x.274 104 0) (bruijn ##x.275 103 0) (bruijn ##x.276 102 0) (bruijn ##x.277 101 0) (bruijn ##x.278 100 0) (bruijn ##x.279 99 0) (bruijn ##x.280 98 0) (bruijn ##x.281 97 0) (bruijn ##x.282 96 0) (bruijn ##x.283 95 0) (bruijn ##x.284 94 0) (bruijn ##x.285 93 0) (bruijn ##x.286 92 0) (bruijn ##x.287 91 0) (bruijn ##x.288 90 0) (bruijn ##x.289 89 0) (bruijn ##x.290 88 0) (bruijn ##x.291 87 0) (bruijn ##x.292 86 0) (bruijn ##x.293 85 0) (bruijn ##x.294 84 0) (bruijn ##x.295 83 0) (bruijn ##x.296 82 0) (bruijn ##x.297 81 0) (bruijn ##x.298 80 0) (bruijn ##x.299 79 0) (bruijn ##x.300 78 0) (bruijn ##x.301 77 0) (bruijn ##x.302 76 0) (bruijn ##x.303 75 0) (bruijn ##x.304 74 0) (bruijn ##x.305 73 0) (bruijn ##x.306 72 0) (bruijn ##x.307 71 0) (bruijn ##x.308 70 0) (bruijn ##x.309 69 0) (bruijn ##x.310 68 0) (bruijn ##x.311 67 0) (bruijn ##x.312 66 0) (bruijn ##x.313 65 0) (bruijn ##x.314 64 0) (bruijn ##x.315 63 0) (bruijn ##x.316 62 0) (bruijn ##x.317 61 0) (bruijn ##x.318 60 0) (bruijn ##x.319 59 0) (bruijn ##x.320 58 0) (bruijn ##x.321 57 0) (bruijn ##x.322 56 0) (bruijn ##x.323 55 0) (bruijn ##x.324 54 0) (bruijn ##x.325 53 0) (bruijn ##x.326 52 0) (bruijn ##x.327 51 0) (bruijn ##x.328 50 0) (bruijn ##x.329 49 0) (bruijn ##x.330 48 0) (bruijn ##x.331 47 0) (bruijn ##x.332 46 0) (bruijn ##x.333 45 0) (bruijn ##x.334 44 0) (bruijn ##x.335 43 0) (bruijn ##x.336 42 0) (bruijn ##x.337 41 0) (bruijn ##x.338 40 0) (bruijn ##x.339 39 0) (bruijn ##x.340 38 0) (bruijn ##x.341 37 0) (bruijn ##x.342 36 0) (bruijn ##x.343 35 0) (bruijn ##x.344 34 0) (bruijn ##x.345 33 0) (bruijn ##x.346 32 0) (bruijn ##x.347 31 0) (bruijn ##x.348 30 0) (bruijn ##x.349 29 0) (bruijn ##x.350 28 0) (bruijn ##x.351 27 0) (bruijn ##x.352 26 0) (bruijn ##x.353 25 0) (bruijn ##x.354 24 0) (bruijn ##x.355 23 0) (bruijn ##x.356 22 0) (bruijn ##x.357 21 0) (bruijn ##x.358 20 0) (bruijn ##x.359 19 0) (bruijn ##x.360 18 0) (bruijn ##x.361 17 0) (bruijn ##x.362 16 0) (bruijn ##x.363 15 0) (bruijn ##x.364 14 0) (bruijn ##x.365 13 0) (bruijn ##x.366 12 0) (bruijn ##x.367 11 0) (bruijn ##x.368 10 0) (bruijn ##x.369 9 0) (bruijn ##x.370 8 0) (bruijn ##x.371 7 0) (bruijn ##x.372 6 0) (bruijn ##x.373 5 0) (bruijn ##x.374 4 0) (bruijn ##x.375 3 0) (bruijn ##x.376 2 0) (bruijn ##x.377 1 0) (bruijn ##x.378 0 0))
V_CALL_FUNC(_V0scheme_V0r7rs_V20_lambda2, env, runtime,
      VGetArg(upenv, 127-1, 0),
      VGetArg(upenv, 124-1, 0),
      VGetArg(upenv, 123-1, 0),
      VGetArg(upenv, 122-1, 0),
      VGetArg(upenv, 121-1, 0),
      VGetArg(upenv, 120-1, 0),
      VGetArg(upenv, 119-1, 0),
      VGetArg(upenv, 118-1, 0),
      VGetArg(upenv, 117-1, 0),
      VGetArg(upenv, 116-1, 0),
      VGetArg(upenv, 115-1, 0),
      VGetArg(upenv, 114-1, 0),
      VGetArg(upenv, 113-1, 0),
      VGetArg(upenv, 112-1, 0),
      VGetArg(upenv, 111-1, 0),
      VGetArg(upenv, 110-1, 0),
      VGetArg(upenv, 109-1, 0),
      VGetArg(upenv, 108-1, 0),
      VGetArg(upenv, 107-1, 0),
      VGetArg(upenv, 106-1, 0),
      VGetArg(upenv, 105-1, 0),
      VGetArg(upenv, 104-1, 0),
      VGetArg(upenv, 103-1, 0),
      VGetArg(upenv, 102-1, 0),
      VGetArg(upenv, 101-1, 0),
      VGetArg(upenv, 100-1, 0),
      VGetArg(upenv, 99-1, 0),
      VGetArg(upenv, 98-1, 0),
      VGetArg(upenv, 97-1, 0),
      VGetArg(upenv, 96-1, 0),
      VGetArg(upenv, 95-1, 0),
      VGetArg(upenv, 94-1, 0),
      VGetArg(upenv, 93-1, 0),
      VGetArg(upenv, 92-1, 0),
      VGetArg(upenv, 91-1, 0),
      VGetArg(upenv, 90-1, 0),
      VGetArg(upenv, 89-1, 0),
      VGetArg(upenv, 88-1, 0),
      VGetArg(upenv, 87-1, 0),
      VGetArg(upenv, 86-1, 0),
      VGetArg(upenv, 85-1, 0),
      VGetArg(upenv, 84-1, 0),
      VGetArg(upenv, 83-1, 0),
      VGetArg(upenv, 82-1, 0),
      VGetArg(upenv, 81-1, 0),
      VGetArg(upenv, 80-1, 0),
      VGetArg(upenv, 79-1, 0),
      VGetArg(upenv, 78-1, 0),
      VGetArg(upenv, 77-1, 0),
      VGetArg(upenv, 76-1, 0),
      VGetArg(upenv, 75-1, 0),
      VGetArg(upenv, 74-1, 0),
      VGetArg(upenv, 73-1, 0),
      VGetArg(upenv, 72-1, 0),
      VGetArg(upenv, 71-1, 0),
      VGetArg(upenv, 70-1, 0),
      VGetArg(upenv, 69-1, 0),
      VGetArg(upenv, 68-1, 0),
      VGetArg(upenv, 67-1, 0),
      VGetArg(upenv, 66-1, 0),
      VGetArg(upenv, 65-1, 0),
      VGetArg(upenv, 64-1, 0),
      VGetArg(upenv, 63-1, 0),
      VGetArg(upenv, 62-1, 0),
      VGetArg(upenv, 61-1, 0),
      VGetArg(upenv, 60-1, 0),
      VGetArg(upenv, 59-1, 0),
      VGetArg(upenv, 58-1, 0),
      VGetArg(upenv, 57-1, 0),
      VGetArg(upenv, 56-1, 0),
      VGetArg(upenv, 55-1, 0),
      VGetArg(upenv, 54-1, 0),
      VGetArg(upenv, 53-1, 0),
      VGetArg(upenv, 52-1, 0),
      VGetArg(upenv, 51-1, 0),
      VGetArg(upenv, 50-1, 0),
      VGetArg(upenv, 49-1, 0),
      VGetArg(upenv, 48-1, 0),
      VGetArg(upenv, 47-1, 0),
      VGetArg(upenv, 46-1, 0),
      VGetArg(upenv, 45-1, 0),
      VGetArg(upenv, 44-1, 0),
      VGetArg(upenv, 43-1, 0),
      VGetArg(upenv, 42-1, 0),
      VGetArg(upenv, 41-1, 0),
      VGetArg(upenv, 40-1, 0),
      VGetArg(upenv, 39-1, 0),
      VGetArg(upenv, 38-1, 0),
      VGetArg(upenv, 37-1, 0),
      VGetArg(upenv, 36-1, 0),
      VGetArg(upenv, 35-1, 0),
      VGetArg(upenv, 34-1, 0),
      VGetArg(upenv, 33-1, 0),
      VGetArg(upenv, 32-1, 0),
      VGetArg(upenv, 31-1, 0),
      VGetArg(upenv, 30-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 28-1, 0),
      VGetArg(upenv, 27-1, 0),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0scheme_V0r7rs_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 124 0) (close _V0scheme_V0r7rs_V20_k127) (quote null?))
V_CALL(VGetArg(upenv, 124-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k127, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 123 0) (close _V0scheme_V0r7rs_V20_k126) (quote boolean?))
V_CALL(VGetArg(upenv, 123-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k126, env)}),
      VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 122 0) (close _V0scheme_V0r7rs_V20_k125) (quote vector?))
V_CALL(VGetArg(upenv, 122-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k125, env)}),
      VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 121 0) (close _V0scheme_V0r7rs_V20_k124) (quote symbol?))
V_CALL(VGetArg(upenv, 121-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k124, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 120 0) (close _V0scheme_V0r7rs_V20_k123) (quote exact?))
V_CALL(VGetArg(upenv, 120-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k123, env)}),
      VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 119 0) (close _V0scheme_V0r7rs_V20_k122) (quote real?))
V_CALL(VGetArg(upenv, 119-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k122, env)}),
      VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 118 0) (close _V0scheme_V0r7rs_V20_k121) (quote char?))
V_CALL(VGetArg(upenv, 118-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k121, env)}),
      VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 117 0) (close _V0scheme_V0r7rs_V20_k120) (quote symbol=?))
V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k120, env)}),
      VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 116 0) (close _V0scheme_V0r7rs_V20_k119) (quote equal?))
V_CALL(VGetArg(upenv, 116-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k119, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 115 0) (close _V0scheme_V0r7rs_V20_k118) (quote <))
V_CALL(VGetArg(upenv, 115-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k118, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 114 0) (close _V0scheme_V0r7rs_V20_k117) (quote >))
V_CALL(VGetArg(upenv, 114-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k117, env)}),
      VEncodePointer(&_V0_G.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 113 0) (close _V0scheme_V0r7rs_V20_k116) (quote >=))
V_CALL(VGetArg(upenv, 113-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k116, env)}),
      VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 112 0) (close _V0scheme_V0r7rs_V20_k115) (quote exact->inexact))
V_CALL(VGetArg(upenv, 112-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k115, env)}),
      VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 111 0) (close _V0scheme_V0r7rs_V20_k114) (quote complex?))
V_CALL(VGetArg(upenv, 111-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k114, env)}),
      VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 110 0) (close _V0scheme_V0r7rs_V20_k113) (quote -))
V_CALL(VGetArg(upenv, 110-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k113, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 109 0) (close _V0scheme_V0r7rs_V20_k112) (quote /))
V_CALL(VGetArg(upenv, 109-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k112, env)}),
      VEncodePointer(&_V0_W.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 108 0) (close _V0scheme_V0r7rs_V20_k111) (quote remainder))
V_CALL(VGetArg(upenv, 108-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k111, env)}),
      VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 107 0) (close _V0scheme_V0r7rs_V20_k110) (quote min))
V_CALL(VGetArg(upenv, 107-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k110, env)}),
      VEncodePointer(&_V0min.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 106 0) (close _V0scheme_V0r7rs_V20_k109) (quote car))
V_CALL(VGetArg(upenv, 106-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k109, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 105 0) (close _V0scheme_V0r7rs_V20_k108) (quote set-car!))
V_CALL(VGetArg(upenv, 105-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k108, env)}),
      VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 104 0) (close _V0scheme_V0r7rs_V20_k107) (quote caar))
V_CALL(VGetArg(upenv, 104-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k107, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 103 0) (close _V0scheme_V0r7rs_V20_k106) (quote cdar))
V_CALL(VGetArg(upenv, 103-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k106, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 102 0) (close _V0scheme_V0r7rs_V20_k105) (quote caaar))
V_CALL(VGetArg(upenv, 102-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k105, env)}),
      VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 101 0) (close _V0scheme_V0r7rs_V20_k104) (quote cadar))
V_CALL(VGetArg(upenv, 101-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k104, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 100 0) (close _V0scheme_V0r7rs_V20_k103) (quote cdaar))
V_CALL(VGetArg(upenv, 100-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k103, env)}),
      VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 99 0) (close _V0scheme_V0r7rs_V20_k102) (quote cddar))
V_CALL(VGetArg(upenv, 99-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k102, env)}),
      VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 98 0) (close _V0scheme_V0r7rs_V20_k101) (quote caaaar))
V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k101, env)}),
      VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 97 0) (close _V0scheme_V0r7rs_V20_k100) (quote caadar))
V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k100, env)}),
      VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 96 0) (close _V0scheme_V0r7rs_V20_k99) (quote cadaar))
V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k99, env)}),
      VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 95 0) (close _V0scheme_V0r7rs_V20_k98) (quote caddar))
V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k98, env)}),
      VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 94 0) (close _V0scheme_V0r7rs_V20_k97) (quote cdaaar))
V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k97, env)}),
      VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 93 0) (close _V0scheme_V0r7rs_V20_k96) (quote cdadar))
V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k96, env)}),
      VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 92 0) (close _V0scheme_V0r7rs_V20_k95) (quote cddaar))
V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k95, env)}),
      VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 91 0) (close _V0scheme_V0r7rs_V20_k94) (quote cdddar))
V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k94, env)}),
      VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 90 0) (close _V0scheme_V0r7rs_V20_k93) (quote list))
V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k93, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 89 0) (close _V0scheme_V0r7rs_V20_k92) (quote list-ref))
V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k92, env)}),
      VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 88 0) (close _V0scheme_V0r7rs_V20_k91) (quote for-each))
V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k91, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 87 0) (close _V0scheme_V0r7rs_V20_k90) (quote reverse))
V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k90, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 86 0) (close _V0scheme_V0r7rs_V20_k89) (quote memv))
V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k89, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 85 0) (close _V0scheme_V0r7rs_V20_k88) (quote assq))
V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k88, env)}),
      VEncodePointer(&_V0assq.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 84 0) (close _V0scheme_V0r7rs_V20_k87) (quote assoc))
V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k87, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 83 0) (close _V0scheme_V0r7rs_V20_k86) (quote list->string))
V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k86, env)}),
      VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 82 0) (close _V0scheme_V0r7rs_V20_k85) (quote substring))
V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k85, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 81 0) (close _V0scheme_V0r7rs_V20_k84) (quote string-copy!))
V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k84, env)}),
      VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 80 0) (close _V0scheme_V0r7rs_V20_k83) (quote string-set!))
V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k83, env)}),
      VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 79 0) (close _V0scheme_V0r7rs_V20_k82) (quote string->symbol))
V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k82, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 78 0) (close _V0scheme_V0r7rs_V20_k81) (quote string->list))
V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k81, env)}),
      VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 77 0) (close _V0scheme_V0r7rs_V20_k80) (quote symbol->string))
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k80, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 76 0) (close _V0scheme_V0r7rs_V20_k79) (quote vector))
V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k79, env)}),
      VEncodePointer(&_V0vector.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 75 0) (close _V0scheme_V0r7rs_V20_k78) (quote vector-set!))
V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k78, env)}),
      VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 74 0) (close _V0scheme_V0r7rs_V20_k77) (quote vector-for-each))
V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k77, env)}),
      VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 73 0) (close _V0scheme_V0r7rs_V20_k76) (quote current-output-port))
V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k76, env)}),
      VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 72 0) (close _V0scheme_V0r7rs_V20_k75) (quote current-input-port))
V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k75, env)}),
      VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 71 0) (close _V0scheme_V0r7rs_V20_k74) (quote open-output-file))
V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k74, env)}),
      VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 70 0) (close _V0scheme_V0r7rs_V20_k73) (quote open-output-string))
V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k73, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 69 0) (close _V0scheme_V0r7rs_V20_k72) (quote with-output-to-file))
V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k72, env)}),
      VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 68 0) (close _V0scheme_V0r7rs_V20_k71) (quote read-char))
V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k71, env)}),
      VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 67 0) (close _V0scheme_V0r7rs_V20_k70) (quote read))
V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k70, env)}),
      VEncodePointer(&_V0read.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 66 0) (close _V0scheme_V0r7rs_V20_k69) (quote display))
V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k69, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 65 0) (close _V0scheme_V0r7rs_V20_k68) (quote call/cc))
V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k68, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 64 0) (close _V0scheme_V0r7rs_V20_k67) (quote call-with-values))
V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k67, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 63 0) (close _V0scheme_V0r7rs_V20_k66) (quote values))
V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k66, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 62 0) (close _V0scheme_V0r7rs_V20_k65) (quote exit))
V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k65, env)}),
      VEncodePointer(&_V0exit.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 61 0) (close _V0scheme_V0r7rs_V20_k64) (quote error))
V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k64, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 60 0) (close _V0scheme_V0r7rs_V20_k63) (quote command-line))
V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k63, env)}),
      VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 59 0) (close _V0scheme_V0r7rs_V20_k62) (quote apply))
V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k62, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 58 0) (close _V0scheme_V0r7rs_V20_k61) (quote call-with-current-continuation))
V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k61, env)}),
      VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 57 0) (close _V0scheme_V0r7rs_V20_k60) (quote write))
V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k60, env)}),
      VEncodePointer(&_V0write.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 56 0) (close _V0scheme_V0r7rs_V20_k59) (quote newline))
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k59, env)}),
      VEncodePointer(&_V0newline.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 55 0) (close _V0scheme_V0r7rs_V20_k58) (quote read-line))
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k58, env)}),
      VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 54 0) (close _V0scheme_V0r7rs_V20_k57) (quote with-input-from-file))
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k57, env)}),
      VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 53 0) (close _V0scheme_V0r7rs_V20_k56) (quote get-output-string))
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k56, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 52 0) (close _V0scheme_V0r7rs_V20_k55) (quote close-port))
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k55, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 51 0) (close _V0scheme_V0r7rs_V20_k54) (quote open-input-file))
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k54, env)}),
      VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 50 0) (close _V0scheme_V0r7rs_V20_k53) (quote current-error-port))
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k53, env)}),
      VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 49 0) (close _V0scheme_V0r7rs_V20_k52) (quote char->integer))
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k52, env)}),
      VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 48 0) (close _V0scheme_V0r7rs_V20_k51) (quote vector-length))
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k51, env)}),
      VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 47 0) (close _V0scheme_V0r7rs_V20_k50) (quote vector-ref))
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k50, env)}),
      VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 46 0) (close _V0scheme_V0r7rs_V20_k49) (quote list->vector))
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k49, env)}),
      VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 45 0) (close _V0scheme_V0r7rs_V20_k48) (quote string-append))
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k48, env)}),
      VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 44 0) (close _V0scheme_V0r7rs_V20_k47) (quote string->number))
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k47, env)}),
      VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 43 0) (close _V0scheme_V0r7rs_V20_k46) (quote string-length))
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k46, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 42 0) (close _V0scheme_V0r7rs_V20_k45) (quote string-ref))
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k45, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 41 0) (close _V0scheme_V0r7rs_V20_k44) (quote string-copy))
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k44, env)}),
      VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 40 0) (close _V0scheme_V0r7rs_V20_k43) (quote make-string))
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k43, env)}),
      VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 39 0) (close _V0scheme_V0r7rs_V20_k42) (quote assv))
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k42, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close _V0scheme_V0r7rs_V20_k41) (quote member))
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k41, env)}),
      VEncodePointer(&_V0member.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0scheme_V0r7rs_V20_k40) (quote memq))
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k40, env)}),
      VEncodePointer(&_V0memq.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0scheme_V0r7rs_V20_k39) (quote append))
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k39, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0scheme_V0r7rs_V20_k38) (quote map))
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k38, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0scheme_V0r7rs_V20_k37) (quote length))
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k37, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0scheme_V0r7rs_V20_k36) (quote cddddr))
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k36, env)}),
      VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0scheme_V0r7rs_V20_k35) (quote cddadr))
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k35, env)}),
      VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0scheme_V0r7rs_V20_k34) (quote cdaddr))
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k34, env)}),
      VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0scheme_V0r7rs_V20_k33) (quote cdaadr))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k33, env)}),
      VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0scheme_V0r7rs_V20_k32) (quote cadddr))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k32, env)}),
      VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0scheme_V0r7rs_V20_k31) (quote cadadr))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k31, env)}),
      VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0scheme_V0r7rs_V20_k30) (quote caaddr))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k30, env)}),
      VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0scheme_V0r7rs_V20_k29) (quote caaadr))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k29, env)}),
      VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0scheme_V0r7rs_V20_k28) (quote cdddr))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k28, env)}),
      VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0scheme_V0r7rs_V20_k27) (quote cdadr))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k27, env)}),
      VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0scheme_V0r7rs_V20_k26) (quote caddr))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k26, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0scheme_V0r7rs_V20_k25) (quote caadr))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k25, env)}),
      VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0scheme_V0r7rs_V20_k24) (quote cddr))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k24, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0scheme_V0r7rs_V20_k23) (quote cadr))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k23, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0scheme_V0r7rs_V20_k22) (quote set-cdr!))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k22, env)}),
      VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0scheme_V0r7rs_V20_k21) (quote cdr))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k21, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0scheme_V0r7rs_V20_k20) (quote cons))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k20, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0scheme_V0r7rs_V20_k19) (quote max))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k19, env)}),
      VEncodePointer(&_V0max.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0scheme_V0r7rs_V20_k18) (quote quotient))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k18, env)}),
      VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0scheme_V0r7rs_V20_k17) (quote *))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k17, env)}),
      VEncodePointer(&_V0_S.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0scheme_V0r7rs_V20_k16) (quote +))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k16, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0scheme_V0r7rs_V20_k15) (quote number?))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k15, env)}),
      VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0scheme_V0r7rs_V20_k14) (quote inexact))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k14, env)}),
      VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0scheme_V0r7rs_V20_k13) (quote <=))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k13, env)}),
      VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0scheme_V0r7rs_V20_k12) (quote =))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k12, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0scheme_V0r7rs_V20_k11) (quote not))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k11, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0scheme_V0r7rs_V20_k10) (quote eqv?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k10, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0scheme_V0r7rs_V20_k9) (quote eq?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k9, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0scheme_V0r7rs_V20_k8) (quote integer?))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k8, env)}),
      VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0scheme_V0r7rs_V20_k7) (quote inexact?))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k7, env)}),
      VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0scheme_V0r7rs_V20_k6) (quote string?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k6, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0scheme_V0r7rs_V20_k5) (quote procedure?))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k5, env)}),
      VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0scheme_V0r7rs_V20_k4) (quote pair?))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k4, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0scheme_V0r7rs_V20_k3) (quote eof-object?))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k3, env)}),
      VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0scheme_V0r7rs_V20_k2) (##string ##string.380) (bruijn ##x.379 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k2, env)}),
      VEncodePointer(&_V10string_D380.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0scheme_V0r7rs_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0scheme_V0r7rs_V20_k1) (##string ##string.381))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k1, env)}),
      VEncodePointer(&_V10string_D381.sym, VPOINTER_OTHER)
    );
 }
}
VFunc _V0scheme_V0r7rs_V20 = (VFunc)_V0scheme_V0r7rs_V20_lambda1;