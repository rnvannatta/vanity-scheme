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
static struct { VBlob sym; char bytes[21]; } _V10string_D1132 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[1]; } _V10string_D1131 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1130 = { { VSTRING, 24 }, "open-input-file: failed" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1129 = { { VSTRING, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1128 = { { VSTRING, 27 }, "open-output-string: failed" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1127 = { { VSTRING, 3 }, "#(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1126 = { { VSTRING, 2 }, "(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1125 = { { VSTRING, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1124 = { { VSTRING, 4 }, " . " };
static struct { VBlob sym; char bytes[3]; } _V0ok = { { VSYMBOL, 3 }, "ok" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1123 = { { VSTRING, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10string_D1122 = { { VSTRING, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1121 = { { VSTRING, 41 }, "printf: format string has trailing tilde" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1120 = { { VSTRING, 8 }, "error: " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1119 = { { VSTRING, 2 }, ":" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1118 = { { VSTRING, 2 }, " " };
static struct { VBlob sym; char bytes[5]; } _V0iota = { { VSYMBOL, 5 }, "iota" };
static struct { VBlob sym; char bytes[11]; } _V0fold__right = { { VSYMBOL, 11 }, "fold-right" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[7]; } _V0printf = { { VSYMBOL, 7 }, "printf" };
static struct { VBlob sym; char bytes[7]; } _V0format = { { VSYMBOL, 7 }, "format" };
static struct { VBlob sym; char bytes[8]; } _V0writeln = { { VSYMBOL, 8 }, "writeln" };
static struct { VBlob sym; char bytes[10]; } _V0displayln = { { VSYMBOL, 10 }, "displayln" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[5]; } _V0exit = { { VSYMBOL, 5 }, "exit" };
static struct { VBlob sym; char bytes[20]; } _V0make__temporary__file = { { VSYMBOL, 20 }, "make-temporary-file" };
static struct { VBlob sym; char bytes[20]; } _V0open__output__process = { { VSYMBOL, 20 }, "open-output-process" };
static struct { VBlob sym; char bytes[19]; } _V0open__input__process = { { VSYMBOL, 19 }, "open-input-process" };
static struct { VBlob sym; char bytes[7]; } _V0system = { { VSYMBOL, 7 }, "system" };
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
static void _V0vanity_V0core_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k149, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.4 148 0) (##inline ##sys.cons (##inline ##sys.cons (quote null?) (bruijn null? 148 1)) (##inline ##sys.cons (##inline ##sys.cons (quote eof-object?) (bruijn eof-object? 148 3)) (##inline ##sys.cons (##inline ##sys.cons (quote boolean?) (bruijn boolean? 148 2)) (##inline ##sys.cons (##inline ##sys.cons (quote pair?) (bruijn pair? 148 4)) (##inline ##sys.cons (##inline ##sys.cons (quote vector?) (bruijn vector? 148 5)) (##inline ##sys.cons (##inline ##sys.cons (quote procedure?) (bruijn procedure? 148 6)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol?) (bruijn symbol? 148 7)) (##inline ##sys.cons (##inline ##sys.cons (quote string?) (bruijn string? 148 8)) (##inline ##sys.cons (##inline ##sys.cons (quote exact?) (bruijn exact? 148 10)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact?) (bruijn inexact? 148 12)) (##inline ##sys.cons (##inline ##sys.cons (quote real?) (bruijn real? 148 13)) (##inline ##sys.cons (##inline ##sys.cons (quote integer?) (bruijn integer? 148 11)) (##inline ##sys.cons (##inline ##sys.cons (quote char?) (bruijn char? 148 9)) (##inline ##sys.cons (##inline ##sys.cons (quote eq?) (bruijn eq? 148 14)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol=?) (bruijn symbol=? 148 15)) (##inline ##sys.cons (##inline ##sys.cons (quote eqv?) (bruijn eqv? 148 16)) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (bruijn equal? 148 17)) (##inline ##sys.cons (##inline ##sys.cons (quote not) (bruijn not 148 18)) (##inline ##sys.cons (##inline ##sys.cons (quote <) (bruijn < 148 19)) (##inline ##sys.cons (##inline ##sys.cons (quote =) (bruijn = 148 20)) (##inline ##sys.cons (##inline ##sys.cons (quote >) (bruijn > 148 21)) (##inline ##sys.cons (##inline ##sys.cons (quote <=) (bruijn <= 148 22)) (##inline ##sys.cons (##inline ##sys.cons (quote >=) (bruijn >= 148 23)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact) (bruijn inexact 148 24)) (##inline ##sys.cons (##inline ##sys.cons (quote exact->inexact) (bruijn exact->inexact 148 25)) (##inline ##sys.cons (##inline ##sys.cons (quote number?) (bruijn number? 148 26)) (##inline ##sys.cons (##inline ##sys.cons (quote complex?) (bruijn complex? 148 27)) (##inline ##sys.cons (##inline ##sys.cons (quote +) (bruijn + 148 28)) (##inline ##sys.cons (##inline ##sys.cons (quote -) (bruijn - 148 29)) (##inline ##sys.cons (##inline ##sys.cons (quote *) (bruijn * 148 30)) (##inline ##sys.cons (##inline ##sys.cons (quote /) (bruijn / 148 31)) (##inline ##sys.cons (##inline ##sys.cons (quote quotient) (bruijn quotient 148 32)) (##inline ##sys.cons (##inline ##sys.cons (quote remainder) (bruijn remainder 148 33)) (##inline ##sys.cons (##inline ##sys.cons (quote max) (bruijn max 148 34)) (##inline ##sys.cons (##inline ##sys.cons (quote min) (bruijn min 148 35)) (##inline ##sys.cons (##inline ##sys.cons (quote cons) (bruijn cons 148 36)) (##inline ##sys.cons (##inline ##sys.cons (quote car) (bruijn car 148 37)) (##inline ##sys.cons (##inline ##sys.cons (quote cdr) (bruijn cdr 148 38)) (##inline ##sys.cons (##inline ##sys.cons (quote set-car!) (bruijn set-car! 148 39)) (##inline ##sys.cons (##inline ##sys.cons (quote set-cdr!) (bruijn set-cdr! 148 40)) (##inline ##sys.cons (##inline ##sys.cons (quote caar) (bruijn caar 148 41)) (##inline ##sys.cons (##inline ##sys.cons (quote cadr) (bruijn cadr 148 42)) (##inline ##sys.cons (##inline ##sys.cons (quote cdar) (bruijn cdar 148 43)) (##inline ##sys.cons (##inline ##sys.cons (quote cddr) (bruijn cddr 148 44)) (##inline ##sys.cons (##inline ##sys.cons (quote caaar) (bruijn caaar 148 45)) (##inline ##sys.cons (##inline ##sys.cons (quote caadr) (bruijn caadr 148 46)) (##inline ##sys.cons (##inline ##sys.cons (quote cadar) (bruijn cadar 148 47)) (##inline ##sys.cons (##inline ##sys.cons (quote caddr) (bruijn caddr 148 48)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaar) (bruijn cdaar 148 49)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadr) (bruijn cdadr 148 50)) (##inline ##sys.cons (##inline ##sys.cons (quote cddar) (bruijn cddar 148 51)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddr) (bruijn cdddr 148 52)) (##inline ##sys.cons (##inline ##sys.cons (quote caaaar) (bruijn caaaar 148 53)) (##inline ##sys.cons (##inline ##sys.cons (quote caaadr) (bruijn caaadr 148 54)) (##inline ##sys.cons (##inline ##sys.cons (quote caadar) (bruijn caadar 148 55)) (##inline ##sys.cons (##inline ##sys.cons (quote caaddr) (bruijn caaddr 148 56)) (##inline ##sys.cons (##inline ##sys.cons (quote cadaar) (bruijn cadaar 148 57)) (##inline ##sys.cons (##inline ##sys.cons (quote cadadr) (bruijn cadadr 148 58)) (##inline ##sys.cons (##inline ##sys.cons (quote caddar) (bruijn caddar 148 59)) (##inline ##sys.cons (##inline ##sys.cons (quote cadddr) (bruijn cadddr 148 60)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaaar) (bruijn cdaaar 148 61)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaadr) (bruijn cdaadr 148 62)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadar) (bruijn cdadar 148 63)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaddr) (bruijn cdaddr 148 64)) (##inline ##sys.cons (##inline ##sys.cons (quote cddaar) (bruijn cddaar 148 65)) (##inline ##sys.cons (##inline ##sys.cons (quote cddadr) (bruijn cddadr 148 66)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddar) (bruijn cdddar 148 67)) (##inline ##sys.cons (##inline ##sys.cons (quote cddddr) (bruijn cddddr 148 68)) (##inline ##sys.cons (##inline ##sys.cons (quote list) (bruijn list 148 69)) (##inline ##sys.cons (##inline ##sys.cons (quote length) (bruijn length 148 70)) (##inline ##sys.cons (##inline ##sys.cons (quote list-ref) (bruijn list-ref 148 71)) (##inline ##sys.cons (##inline ##sys.cons (quote map) (bruijn map 148 72)) (##inline ##sys.cons (##inline ##sys.cons (quote for-each) (bruijn for-each 148 73)) (##inline ##sys.cons (##inline ##sys.cons (quote append) (bruijn append 148 77)) (##inline ##sys.cons (##inline ##sys.cons (quote reverse) (bruijn reverse 148 78)) (##inline ##sys.cons (##inline ##sys.cons (quote memq) (bruijn memq 148 79)) (##inline ##sys.cons (##inline ##sys.cons (quote memv) (bruijn memv 148 80)) (##inline ##sys.cons (##inline ##sys.cons (quote member) (bruijn member 148 81)) (##inline ##sys.cons (##inline ##sys.cons (quote assq) (bruijn assq 148 82)) (##inline ##sys.cons (##inline ##sys.cons (quote assv) (bruijn assv 148 83)) (##inline ##sys.cons (##inline ##sys.cons (quote assoc) (bruijn assoc 148 84)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 148 96)) (##inline ##sys.cons (##inline ##sys.cons (quote list->string) (bruijn list->string 148 95)) (##inline ##sys.cons (##inline ##sys.cons (quote make-string) (bruijn make-string 148 85)) (##inline ##sys.cons (##inline ##sys.cons (quote substring) (bruijn substring 148 86)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy) (bruijn string-copy 148 87)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy!) (bruijn string-copy! 148 88)) (##inline ##sys.cons (##inline ##sys.cons (quote string-ref) (bruijn string-ref 148 89)) (##inline ##sys.cons (##inline ##sys.cons (quote string-set!) (bruijn string-set! 148 90)) (##inline ##sys.cons (##inline ##sys.cons (quote string-length) (bruijn string-length 148 91)) (##inline ##sys.cons (##inline ##sys.cons (quote string->symbol) (bruijn string->symbol 148 92)) (##inline ##sys.cons (##inline ##sys.cons (quote string->number) (bruijn string->number 148 93)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 148 96)) (##inline ##sys.cons (##inline ##sys.cons (quote string-append) (bruijn string-append 148 97)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol->string) (bruijn symbol->string 148 94)) (##inline ##sys.cons (##inline ##sys.cons (quote list->vector) (bruijn list->vector 148 98)) (##inline ##sys.cons (##inline ##sys.cons (quote vector) (bruijn vector 148 99)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-ref) (bruijn vector-ref 148 100)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-set!) (bruijn vector-set! 148 101)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-length) (bruijn vector-length 148 102)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-for-each) (bruijn vector-for-each 148 103)) (##inline ##sys.cons (##inline ##sys.cons (quote char->integer) (bruijn char->integer 148 104)) (##inline ##sys.cons (##inline ##sys.cons (quote current-output-port) (bruijn current-output-port 148 105)) (##inline ##sys.cons (##inline ##sys.cons (quote current-error-port) (bruijn current-error-port 148 106)) (##inline ##sys.cons (##inline ##sys.cons (quote current-input-port) (bruijn current-input-port 148 107)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-file) (bruijn open-input-file 148 113)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-file) (bruijn open-output-file 148 114)) (##inline ##sys.cons (##inline ##sys.cons (quote close-port) (bruijn close-port 148 109)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-string) (bruijn open-output-string 148 115)) (##inline ##sys.cons (##inline ##sys.cons (quote get-output-string) (bruijn get-output-string 148 116)) (##inline ##sys.cons (##inline ##sys.cons (quote with-output-to-file) (bruijn with-output-to-file 148 117)) (##inline ##sys.cons (##inline ##sys.cons (quote with-input-from-file) (bruijn with-input-from-file 148 118)) (##inline ##sys.cons (##inline ##sys.cons (quote read-char) (bruijn read-char 148 119)) (##inline ##sys.cons (##inline ##sys.cons (quote read-line) (bruijn read-line 148 120)) (##inline ##sys.cons (##inline ##sys.cons (quote read) (bruijn read 148 121)) (##inline ##sys.cons (##inline ##sys.cons (quote newline) (bruijn newline 148 122)) (##inline ##sys.cons (##inline ##sys.cons (quote display) (bruijn display 148 124)) (##inline ##sys.cons (##inline ##sys.cons (quote write) (bruijn write 148 125)) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (bruijn call/cc 148 126)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-current-continuation) (bruijn call-with-current-continuation 148 127)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (bruijn call-with-values 148 128)) (##inline ##sys.cons (##inline ##sys.cons (quote apply) (bruijn apply 148 129)) (##inline ##sys.cons (##inline ##sys.cons (quote values) (bruijn values 148 130)) (##inline ##sys.cons (##inline ##sys.cons (quote command-line) (bruijn command-line 148 131)) (##inline ##sys.cons (##inline ##sys.cons (quote system) (bruijn system 148 132)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-process) (bruijn open-input-process 148 133)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-process) (bruijn open-output-process 148 134)) (##inline ##sys.cons (##inline ##sys.cons (quote make-temporary-file) (bruijn make-temporary-file 148 135)) (##inline ##sys.cons (##inline ##sys.cons (quote exit) (bruijn exit 148 136)) (##inline ##sys.cons (##inline ##sys.cons (quote atom?) (bruijn atom? 148 137)) (##inline ##sys.cons (##inline ##sys.cons (quote displayln) (bruijn displayln 148 138)) (##inline ##sys.cons (##inline ##sys.cons (quote writeln) (bruijn writeln 148 139)) (##inline ##sys.cons (##inline ##sys.cons (quote format) (bruijn format 148 144)) (##inline ##sys.cons (##inline ##sys.cons (quote printf) (bruijn printf 148 142)) (##inline ##sys.cons (##inline ##sys.cons (quote sprintf) (bruijn sprintf 148 143)) (##inline ##sys.cons (##inline ##sys.cons (quote error) (bruijn error 148 145)) (##inline ##sys.cons (##inline ##sys.cons (quote fold) (bruijn fold 148 75)) (##inline ##sys.cons (##inline ##sys.cons (quote fold-right) (bruijn fold-right 148 76)) (##inline ##sys.cons (##inline ##sys.cons (quote iota) (bruijn iota 148 74)) (quote ())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
V_CALL(VGetArg(upenv, 148-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 2)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 4)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 5)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 6)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 7)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 8)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 10)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 12)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 13)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 11)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 9)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 14)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 15)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 16)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 17)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0not.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 18)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 19)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_E.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 20)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 21)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 22)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 23)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 24)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 25)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 26)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 27)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 28)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0__.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 29)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_S.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 30)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_W.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 31)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 32)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 33)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0max.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 34)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0min.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 35)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cons.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 36)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0car.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 37)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 38)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 39)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 40)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 41)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 42)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 43)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 44)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 45)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 46)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 47)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 48)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 49)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 50)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 51)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 52)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 53)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 54)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 55)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 56)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 57)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 58)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 59)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 60)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 61)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 62)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 63)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 64)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 65)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 66)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 67)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 68)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 69)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0length.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 70)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 71)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0map.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 72)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 73)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 77)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 78)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memq.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 79)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memv.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 80)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0member.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 81)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assq.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 82)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assv.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 83)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 84)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 96)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 95)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 85)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0substring.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 86)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 87)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 88)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 89)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 90)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 91)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 92)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 93)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 96)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 97)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 94)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 98)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 99)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 100)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 101)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 102)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 103)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 104)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 105)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 106)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 107)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 113)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 114)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 109)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 115)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 116)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 117)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 118)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 119)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 120)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 121)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0newline.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 122)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0display.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 124)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0write.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 125)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 126)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 127)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 128)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0apply.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 129)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0values.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 130)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 131)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0system.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 132)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__process.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 133)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__process.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 134)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__temporary__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 135)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exit.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 136)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 137)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0displayln.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 138)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0writeln.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 139)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0format.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 144)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0printf.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 142)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 143)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 145)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0fold.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 75)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0fold__right.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 76)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0iota.sym, VPOINTER_OTHER),
      VGetArg(upenv, 148-1, 74)
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
static void _V0error_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.435 1 0) (bruijn irritants 9 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0loop_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k163, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.437 6 0) (bruijn ##x.441 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 162 38) (close _V0loop_k163) (bruijn irritants 5 1))
V_CALL(VGetArg(upenv, 162-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k163, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn write 161 125) (close _V0loop_k162) (bruijn ##x.442 0 0) (bruijn err 12 0))
V_CALL(VGetArg(upenv, 161-1, 125), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k162, env)}),
      _var0,
      VGetArg(upenv, 12-1, 0)
    );
 }
}
static void _V0loop_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 160 37) (close _V0loop_k161) (bruijn irritants 3 1))
V_CALL(VGetArg(upenv, 160-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k161, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.438 0 0) ((bruijn display 159 124) (close _V0loop_k160) (##string ##string.1118) (bruijn err 10 0)) ((bruijn ##k.437 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 159-1, 124), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k160, env)}),
      VEncodePointer(&_V10string_D1118.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 158 18) (close _V0loop_k159) (bruijn ##x.443 0 0))
V_CALL(VGetArg(upenv, 158-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k159, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda6" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 157 1) (close _V0loop_k158) (bruijn irritants 0 1))
V_CALL(VGetArg(upenv, 157-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k158, env)}),
      _var1
    );
 }
}
static void _V0error_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0error_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0error_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0error_k157) (bruijn loop 0 1) (close _V0loop_lambda6))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k157, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda6, env)})
    );
 }
}
static void _V0error_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0error_lambda5) (bruijn ##k.433 1 0) #f)
V_CALL_FUNC(_V0error_lambda5, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0error_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.432 1 0) ((bruijn display 154 124) (close _V0error_k156) (##string ##string.1119) (bruijn err 5 0)) ((bruijn ##k.433 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 154-1, 124), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k156, env)}),
      VEncodePointer(&_V10string_D1119.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0error_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k165, runtime, upenv, 1, argc, _var0) {
  // (##sys.abort (bruijn ##k.427 7 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      VGetArg(upenv, 7-1, 0)
    );
 }
}
static void _V0error_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn newline 154 122) (close _V0error_k165) (bruijn err 5 0))
V_CALL(VGetArg(upenv, 154-1, 122), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k165, env)}),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0error_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0error_k155) (close _V0error_k164))
V_CALL_FUNC(_V0error_k155, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k164, env)})
    );
 }
}
static void _V0error_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 152 18) (close _V0error_k154) (bruijn ##x.444 0 0))
V_CALL(VGetArg(upenv, 152-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k154, env)}),
      _var0
    );
 }
}
static void _V0error_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 151 1) (close _V0error_k153) (bruijn irritants 3 2))
V_CALL(VGetArg(upenv, 151-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k153, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0error_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 150 124) (close _V0error_k152) (bruijn msg 2 1) (bruijn err 1 0))
V_CALL(VGetArg(upenv, 150-1, 124), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k152, env)}),
      upenv->up->vars[1],
      upenv->vars[0]
    );
 }
}
static void _V0error_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 149 124) (close _V0error_k151) (##string ##string.1120) (bruijn err 0 0))
V_CALL(VGetArg(upenv, 149-1, 124), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k151, env)}),
      VEncodePointer(&_V10string_D1120.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0error_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0error_lambda4" };
 VRecordCall(&dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0error_lambda4, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0error_lambda4, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn current-error-port 148 106) (close _V0error_k150))
V_CALL(VGetArg(upenv, 148-1, 106), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k150, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k149) (bruijn error 147 145) (close _V0error_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k149, env)}),
      VEncodeInt(147l), VEncodeInt(145l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_lambda4, env)})
    );
 }
}
static void _V0format_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k167, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-sprintf 149 141) (bruijn ##k.446 2 0) (bruijn a 2 1) (bruijn ##x.448 0 0))
V_CALL(VGetArg(upenv, 149-1, 141), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0format_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k169, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 150 140) (bruijn ##k.446 3 0) (bruijn ##x.450 0 0) (bruijn b 3 2) (bruijn args 3 3))
V_CALL(VGetArg(upenv, 150-1, 140), runtime,
      upenv->up->up->vars[0],
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
 }
}
static void _V0format_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k170, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.451 0 0) ((bruijn format-sprintf 150 141) (bruijn ##k.446 3 0) (bruijn b 3 2) (bruijn args 3 3)) ((bruijn format-printf 150 140) (bruijn ##k.446 3 0) (bruijn a 3 1) (bruijn b 3 2) (bruijn args 3 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 150-1, 141), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 150-1, 140), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
}
 }
}
static void _V0format_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.449 0 0) ((bruijn current-output-port 149 105) (close _V0format_k169)) ((bruijn eq? 149 14) (close _V0format_k170) (bruijn a 2 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 149-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k169, env)})
    );
} else {
V_CALL(VGetArg(upenv, 149-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k170, env)}),
      upenv->up->vars[1],
      VEncodeBool(false)
    );
}
 }
}
static void _V0format_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.447 0 0) ((bruijn cons 148 36) (close _V0format_k167) (bruijn b 1 2) (bruijn args 1 3)) ((bruijn eq? 148 14) (close _V0format_k168) (bruijn a 1 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 148-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k167, env)}),
      upenv->vars[2],
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 148-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k168, env)}),
      upenv->vars[1],
      VEncodeBool(true)
    );
}
 }
}
__attribute__((used)) static void _V20CaseError__V0format_lambda7(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0format_lambda7 #t (2 ((bruijn sprintf 147 143) (bruijn ##k.445 0 0) (bruijn fmt 0 1))) (3 + ((bruijn string? 147 8) (close _V0format_k166) (bruijn a 0 1))))
 VError("Not enough arguments to _V0format_lambda7, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0format_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0format_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0format_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 147 143) (bruijn ##k.445 0 0) (bruijn fmt 0 1))
V_CALL(VGetArg(upenv, 147-1, 143), runtime,
      _var0,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case1__V0format_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0format_lambda7" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0format_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 147 8) (close _V0format_k166) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 147-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k166, env)}),
      _var1
    );
 }
}
void _V0format_lambda7(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0format_lambda7:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0format_lambda7\n"
"    cmp edx, 3\n"
"    jge _V20Case1__V0format_lambda7\n"
"    jmp _V20CaseError__V0format_lambda7\n"
);
static void _V0vanity_V0core_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k148) (bruijn format 146 144) (close _V0format_lambda7))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k148, env)}),
      VEncodeInt(146l), VEncodeInt(144l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_lambda7, env)})
    );
 }
}
static void _V0sprintf_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.452 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0sprintf_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 149 109) (close _V0sprintf_k174) (bruijn strport 2 0))
V_CALL(VGetArg(upenv, 149-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k174, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0sprintf_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-output-string 148 116) (close _V0sprintf_k173) (bruijn strport 1 0))
V_CALL(VGetArg(upenv, 148-1, 116), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k173, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0sprintf_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn format-printf 147 140) (close _V0sprintf_k172) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 147-1, 140), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k172, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0sprintf_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0sprintf_lambda8" };
 VRecordCall(&dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0sprintf_lambda8, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_lambda8, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn open-output-string 146 115) (close _V0sprintf_k171))
V_CALL(VGetArg(upenv, 146-1, 115), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k171, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k147) (bruijn sprintf 145 143) (close _V0sprintf_lambda8))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k147, env)}),
      VEncodeInt(145l), VEncodeInt(143l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_lambda8, env)})
    );
 }
}
static void _V0printf_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k175, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 146 140) (bruijn ##k.455 1 0) (bruijn ##x.456 0 0) (bruijn fmt 1 1) (quote ()))
V_CALL(VGetArg(upenv, 146-1, 140), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1],
      VNULL
    );
 }
}
static void _V0printf_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k178, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 148 140) (bruijn ##k.457 3 0) (bruijn ##x.459 1 0) (bruijn a 3 1) (bruijn ##x.460 0 0))
V_CALL(VGetArg(upenv, 148-1, 140), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0printf_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 147 36) (close _V0printf_k178) (bruijn b 2 2) (bruijn args 2 3))
V_CALL(VGetArg(upenv, 147-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k178, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0printf_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.458 0 0) ((bruijn current-output-port 146 105) (close _V0printf_k177)) ((bruijn format-printf 146 140) (bruijn ##k.457 1 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn args 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 146-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k177, env)})
    );
} else {
V_CALL(VGetArg(upenv, 146-1, 140), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]
    );
}
 }
}
__attribute__((used)) static void _V20CaseError__V0printf_lambda9(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0printf_lambda9 #t (2 ((bruijn current-output-port 145 105) (close _V0printf_k175))) (3 + ((bruijn string? 145 8) (close _V0printf_k176) (bruijn a 0 1))))
 VError("Not enough arguments to _V0printf_lambda9, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0printf_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0printf_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0printf_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 145 105) (close _V0printf_k175))
V_CALL(VGetArg(upenv, 145-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k175, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0printf_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0printf_lambda9" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0printf_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 145 8) (close _V0printf_k176) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 145-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k176, env)}),
      _var1
    );
 }
}
void _V0printf_lambda9(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0printf_lambda9:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0printf_lambda9\n"
"    cmp edx, 3\n"
"    jge _V20Case1__V0printf_lambda9\n"
"    jmp _V20CaseError__V0printf_lambda9\n"
);
static void _V0vanity_V0core_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k146) (bruijn printf 144 142) (close _V0printf_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k146, env)}),
      VEncodeInt(144l), VEncodeInt(142l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_lambda9, env)})
    );
 }
}
static void _V0format__sprintf_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k182, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.461 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0format__sprintf_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 147 109) (close _V0format__sprintf_k182) (bruijn strport 2 0))
V_CALL(VGetArg(upenv, 147-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k182, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0format__sprintf_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-output-string 146 116) (close _V0format__sprintf_k181) (bruijn strport 1 0))
V_CALL(VGetArg(upenv, 146-1, 116), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k181, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0format__sprintf_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn format-printf 145 140) (close _V0format__sprintf_k180) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 145-1, 140), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k180, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0format__sprintf_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0format__sprintf_lambda10" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0format__sprintf_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-string 144 115) (close _V0format__sprintf_k179))
V_CALL(VGetArg(upenv, 144-1, 115), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k179, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k145) (bruijn format-sprintf 143 141) (close _V0format__sprintf_lambda10))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k145, env)}),
      VEncodeInt(143l), VEncodeInt(141l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_lambda10, env)})
    );
 }
}
static void _V0format__printf_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k184, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.465 1 0) 0 (bruijn args 3 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->up->up->vars[3]
    );
 }
}
static void _V0loop_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k190, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.502 1 0) ((bruijn error 152 145) (bruijn ##k.503 0 0) (##string ##string.1121) (bruijn fmt 9 2)) ((bruijn ##k.503 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 152-1, 145), runtime,
      _var0,
      VEncodePointer(&_V10string_D1121.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k196, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 1) (bruijn ##k.467 11 0) (bruijn ##x.473 0 0) (bruijn args 11 2))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2)
    );
 }
}
static void _V0loop_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 156 28) (close _V0loop_k196) (bruijn i 10 1) 2)
V_CALL(VGetArg(upenv, 156-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k196, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k198, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.499 1 0) ((bruijn ##k.500 0 0) (bruijn ##p.499 1 0)) ((bruijn eqv? 157 16) (bruijn ##k.500 0 0) (bruijn ##x.1 3 0) (quote #\N)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 157-1, 16), runtime,
      _var0,
      upenv->up->up->vars[0],
      VEncodeChar('N')
    );
}
 }
}
static void _V0loop_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 1) (bruijn ##k.467 13 0) (bruijn ##x.476 0 0) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0,
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void _V0loop_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 158 28) (close _V0loop_k201) (bruijn i 12 1) 2)
V_CALL(VGetArg(upenv, 158-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k201, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k203, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.497 1 0) ((bruijn ##k.498 0 0) (bruijn ##p.497 1 0)) ((bruijn eqv? 159 16) (bruijn ##k.498 0 0) (bruijn ##x.1 5 0) (quote #\A)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 159-1, 16), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('A')
    );
}
 }
}
static void _V0loop_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k206, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.483 1 0) ((bruijn error 161 145) (bruijn ##k.484 0 0) (##string ##string.1122) (bruijn fmt 18 2)) ((bruijn ##k.484 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 161-1, 145), runtime,
      _var0,
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 20 1) (bruijn ##k.467 19 0) (bruijn ##x.480 1 0) (bruijn ##x.481 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 19-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 164 38) (close _V0loop_k211) (bruijn args 18 2))
V_CALL(VGetArg(upenv, 164-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k211, env)}),
      VGetArg(upenv, 18-1, 2)
    );
 }
}
static void _V0loop_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 163 28) (close _V0loop_k210) (bruijn i 17 1) 2)
V_CALL(VGetArg(upenv, 163-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k210, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 162 124) (close _V0loop_k209) (bruijn ##x.482 0 0) (bruijn port 19 1))
V_CALL(VGetArg(upenv, 162-1, 124), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k209, env)}),
      _var0,
      VGetArg(upenv, 19-1, 1)
    );
 }
}
static void _V0loop_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 161 37) (close _V0loop_k208) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 161-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k208, env)}),
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0loop_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k206) (close _V0loop_k207))
V_CALL_FUNC(_V0loop_k206, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k207, env)})
    );
 }
}
static void _V0loop_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k213, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.495 1 0) ((bruijn ##k.496 0 0) (bruijn ##p.495 1 0)) ((bruijn eqv? 161 16) (bruijn ##k.496 0 0) (bruijn ##x.1 7 0) (quote #\S)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 161-1, 16), runtime,
      _var0,
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('S')
    );
}
 }
}
static void _V0loop_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k216, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.491 1 0) ((bruijn error 163 145) (bruijn ##k.492 0 0) (##string ##string.1122) (bruijn fmt 20 2)) ((bruijn ##k.492 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 163-1, 145), runtime,
      _var0,
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k221, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 22 1) (bruijn ##k.467 21 0) (bruijn ##x.488 1 0) (bruijn ##x.489 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 21-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 166 38) (close _V0loop_k221) (bruijn args 20 2))
V_CALL(VGetArg(upenv, 166-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k221, env)}),
      VGetArg(upenv, 20-1, 2)
    );
 }
}
static void _V0loop_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 165 28) (close _V0loop_k220) (bruijn i 19 1) 2)
V_CALL(VGetArg(upenv, 165-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k220, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn write 164 125) (close _V0loop_k219) (bruijn ##x.490 0 0) (bruijn port 21 1))
V_CALL(VGetArg(upenv, 164-1, 125), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k219, env)}),
      _var0,
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0loop_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 163 37) (close _V0loop_k218) (bruijn args 17 2))
V_CALL(VGetArg(upenv, 163-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k218, env)}),
      VGetArg(upenv, 17-1, 2)
    );
 }
}
static void _V0loop_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k216) (close _V0loop_k217))
V_CALL_FUNC(_V0loop_k216, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k217, env)})
    );
 }
}
static void _V0loop_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 163 145) (bruijn ##k.467 17 0) (##string ##string.1123) (bruijn ##x.493 0 0))
V_CALL(VGetArg(upenv, 163-1, 145), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V10string_D1123.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substring 162 86) (close _V0loop_k223) (bruijn fmt 19 2) (bruijn i 16 1) (bruijn ##x.494 0 0))
V_CALL(VGetArg(upenv, 162-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k223, env)}),
      VGetArg(upenv, 19-1, 2),
      VGetArg(upenv, 16-1, 1),
      _var0
    );
 }
}
static void _V0loop_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.485 0 0) ((bruijn null? 161 1) (close _V0loop_k215) (bruijn args 15 2)) ((bruijn + 161 28) (close _V0loop_k222) (bruijn i 15 1) 2))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 161-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k215, env)}),
      VGetArg(upenv, 15-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 161-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k222, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeInt(2l)
    );
}
 }
}
static void _V0loop_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k213) (close _V0loop_k214))
V_CALL_FUNC(_V0loop_k213, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k214, env)})
    );
 }
}
static void _V0loop_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.477 0 0) ((bruijn null? 159 1) (close _V0loop_k205) (bruijn args 13 2)) ((bruijn eqv? 159 16) (close _V0loop_k212) (bruijn ##x.1 5 0) (quote #\s)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 159-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k205, env)}),
      VGetArg(upenv, 13-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 159-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k212, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('s')
    );
}
 }
}
static void _V0loop_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k203) (close _V0loop_k204))
V_CALL_FUNC(_V0loop_k203, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k204, env)})
    );
 }
}
static void _V0loop_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.474 0 0) (##sys.display-word (close _V0loop_k200) #\newline (bruijn port 14 1)) ((bruijn eqv? 157 16) (close _V0loop_k202) (bruijn ##x.1 3 0) (quote #\a)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k200, env)}),
      VEncodeChar('\n'),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 157-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k202, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('a')
    );
}
 }
}
static void _V0loop_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k198) (close _V0loop_k199))
V_CALL_FUNC(_V0loop_k198, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k199, env)})
    );
 }
}
static void _V0loop_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.471 0 0) (##sys.display-word (close _V0loop_k195) #\~ (bruijn port 12 1)) ((bruijn eqv? 155 16) (close _V0loop_k197) (bruijn ##x.1 1 0) (quote #\n)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k195, env)}),
      VEncodeChar('~'),
      VGetArg(upenv, 12-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 155-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k197, env)}),
      upenv->vars[0],
      VEncodeChar('n')
    );
}
 }
}
static void _V0loop_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 154 16) (close _V0loop_k194) (bruijn ##x.1 0 0) (quote #\~))
V_CALL(VGetArg(upenv, 154-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k194, env)}),
      _var0,
      VEncodeChar('~')
    );
 }
}
static void _V0loop_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 153 89) (close _V0loop_k193) (bruijn fmt 10 2) (bruijn ##x.501 0 0))
V_CALL(VGetArg(upenv, 153-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k193, env)}),
      VGetArg(upenv, 10-1, 2),
      _var0
    );
 }
}
static void _V0loop_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 152 28) (close _V0loop_k192) (bruijn i 6 1) 1)
V_CALL(VGetArg(upenv, 152-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k192, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k190) (close _V0loop_k191))
V_CALL_FUNC(_V0loop_k190, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k191, env)})
    );
 }
}
static void _V0loop_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 150 20) (close _V0loop_k189) (bruijn ##x.504 0 0) (bruijn len 6 0))
V_CALL(VGetArg(upenv, 150-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k189, env)}),
      _var0,
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0loop_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k225, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.467 5 0) (bruijn ##x.506 0 0) (bruijn args 5 2))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 150 28) (close _V0loop_k225) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 150-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k225, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.469 0 0) ((bruijn + 149 28) (close _V0loop_k188) (bruijn i 3 1) 1) (##sys.display-word (close _V0loop_k224) (bruijn c 1 0) (bruijn port 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 149-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k188, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k224, env)}),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0loop_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 148 14) (close _V0loop_k187) (bruijn c 0 0) #\~)
V_CALL(VGetArg(upenv, 148-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k187, env)}),
      _var0,
      VEncodeChar('~')
    );
 }
}
static void _V0loop_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.468 0 0) ((bruijn string-ref 147 89) (close _V0loop_k186) (bruijn fmt 4 2) (bruijn i 1 1)) ((bruijn ##k.467 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 147-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k186, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda13" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda13, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 146 19) (close _V0loop_k185) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 146-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k185, env)}),
      _var1,
      upenv->up->vars[0]
    );
 }
}
static void _V0format__printf_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0format__printf_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0format__printf_k184) (bruijn loop 0 1) (close _V0loop_lambda13))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k184, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda13, env)})
    );
 }
}
static void _V0format__printf_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0format__printf_lambda12) (bruijn ##k.464 1 0) #f)
V_CALL_FUNC(_V0format__printf_lambda12, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0format__printf_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0format__printf_lambda11" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0format__printf_lambda11, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_lambda11, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 143 91) (close _V0format__printf_k183) (bruijn fmt 0 2))
V_CALL(VGetArg(upenv, 143-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k183, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k144) (bruijn format-printf 142 140) (close _V0format__printf_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k144, env)}),
      VEncodeInt(142l), VEncodeInt(140l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_lambda11, env)})
    );
 }
}
static void _V0writeln_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0writeln_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k226, runtime, upenv, 1, argc, _var0) {
  // ((bruijn writeln 143 139) (bruijn ##k.507 1 0) (bruijn x 1 1) (bruijn ##x.508 0 0))
V_CALL(VGetArg(upenv, 143-1, 139), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0writeln_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0writeln_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k227, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 143 122) (bruijn ##k.509 1 0) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 143-1, 122), runtime,
      upenv->vars[0],
      upenv->vars[2]
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0writeln_lambda14(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0writeln_lambda14 #t (2 ((bruijn current-output-port 142 105) (close _V0writeln_k226))) (3 ((bruijn write 142 125) (close _V0writeln_k227) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0writeln_lambda14, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0writeln_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0writeln_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0writeln_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 142 105) (close _V0writeln_k226))
V_CALL(VGetArg(upenv, 142-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k226, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0writeln_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0writeln_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0writeln_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn write 142 125) (close _V0writeln_k227) (bruijn x 0 1) (bruijn port 0 2))
V_CALL(VGetArg(upenv, 142-1, 125), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k227, env)}),
      _var1,
      _var2
    );
 }
}
void _V0writeln_lambda14(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0writeln_lambda14:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0writeln_lambda14\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0writeln_lambda14\n"
"    jmp _V20CaseError__V0writeln_lambda14\n"
);
static void _V0vanity_V0core_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k143) (bruijn writeln 141 139) (close _V0writeln_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k143, env)}),
      VEncodeInt(141l), VEncodeInt(139l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_lambda14, env)})
    );
 }
}
static void _V0displayln_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0displayln_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k228, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 142 138) (bruijn ##k.511 1 0) (bruijn x 1 1) (bruijn ##x.512 0 0))
V_CALL(VGetArg(upenv, 142-1, 138), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0displayln_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0displayln_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 142 122) (bruijn ##k.513 1 0) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 142-1, 122), runtime,
      upenv->vars[0],
      upenv->vars[2]
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0displayln_lambda15(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0displayln_lambda15 #t (2 ((bruijn current-output-port 141 105) (close _V0displayln_k228))) (3 ((bruijn display 141 124) (close _V0displayln_k229) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0displayln_lambda15, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0displayln_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0displayln_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0displayln_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 141 105) (close _V0displayln_k228))
V_CALL(VGetArg(upenv, 141-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k228, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0displayln_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0displayln_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0displayln_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn display 141 124) (close _V0displayln_k229) (bruijn x 0 1) (bruijn port 0 2))
V_CALL(VGetArg(upenv, 141-1, 124), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k229, env)}),
      _var1,
      _var2
    );
 }
}
void _V0displayln_lambda15(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0displayln_lambda15:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0displayln_lambda15\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0displayln_lambda15\n"
"    jmp _V20CaseError__V0displayln_lambda15\n"
);
static void _V0vanity_V0core_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k142) (bruijn displayln 140 138) (close _V0displayln_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k142, env)}),
      VEncodeInt(140l), VEncodeInt(138l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_lambda15, env)})
    );
 }
}
static void _V0atom_Q_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0atom_Q_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0atom_Q_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 141 18) (bruijn ##k.515 1 0) (bruijn ##x.516 0 0))
V_CALL(VGetArg(upenv, 141-1, 18), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0atom_Q_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0atom_Q_lambda16" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0atom_Q_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 140 4) (close _V0atom_Q_k230) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 140-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_k230, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k141) (bruijn atom? 139 137) (close _V0atom_Q_lambda16))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k141, env)}),
      VEncodeInt(139l), VEncodeInt(137l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_lambda16, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k140) (bruijn exit 138 136) ##sys.exit)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k140, env)}),
      VEncodeInt(138l), VEncodeInt(136l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VExit2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k139) (bruijn make-temporary-file 137 135) ##sys.make-temporary-file)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k139, env)}),
      VEncodeInt(137l), VEncodeInt(135l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMakeTemporaryFile2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k138) (bruijn open-output-process 136 134) ##sys.open-output-process)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k138, env)}),
      VEncodeInt(136l), VEncodeInt(134l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenOutputProcess2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k137) (bruijn open-input-process 135 133) ##sys.open-input-process)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k137, env)}),
      VEncodeInt(135l), VEncodeInt(133l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenInputProcess2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k136) (bruijn system 134 132) ##sys.system)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k136, env)}),
      VEncodeInt(134l), VEncodeInt(132l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSystem2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k135) (bruijn command-line 133 131) ##sys.command-line)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k135, env)}),
      VEncodeInt(133l), VEncodeInt(131l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCommandLine2,NULL)})
    );
 }
}
static void _V0values_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0values_lambda18" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0values_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn apply 134 129) (bruijn ##k.518 0 0) (bruijn k 0 1) (bruijn args 1 1))
V_CALL(VGetArg(upenv, 134-1, 129), runtime,
      _var0,
      _var1,
      upenv->vars[1]
    );
 }
}
static void _V0values_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0values_lambda17" };
 VRecordCall(&dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0values_lambda17, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda17, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 133 126) (bruijn ##k.517 0 0) (close _V0values_lambda18))
V_CALL(VGetArg(upenv, 133-1, 126), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda18, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k134) (bruijn values 132 130) (close _V0values_lambda17))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k134, env)}),
      VEncodeInt(132l), VEncodeInt(130l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda17, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k133) (bruijn apply 131 129) ##sys.apply)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k133, env)}),
      VEncodeInt(131l), VEncodeInt(129l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VApply2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k132) (bruijn call-with-values 130 128) ##sys.call-with-values)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k132, env)}),
      VEncodeInt(130l), VEncodeInt(128l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCallValues2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k131) (bruijn call-with-current-continuation 129 127) ##sys.call/cc)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k131, env)}),
      VEncodeInt(129l), VEncodeInt(127l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCallCC2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k130) (bruijn call/cc 128 126) ##sys.call/cc)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k130, env)}),
      VEncodeInt(128l), VEncodeInt(126l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCallCC2,NULL)})
    );
 }
}
static void _V0write_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0write_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0write_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0write_k231, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 129 123) (bruijn ##k.519 1 0) (bruijn x 1 1) #t (bruijn ##x.520 0 0))
V_CALL(VGetArg(upenv, 129-1, 123), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(true),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0write_lambda19(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0write_lambda19 #t (2 ((bruijn current-output-port 128 105) (close _V0write_k231))) (3 ((bruijn printout 128 123) (bruijn ##k.521 0 0) (bruijn x 0 1) #t (bruijn port 0 2))))
 VError("Not enough arguments to _V0write_lambda19, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0write_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0write_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0write_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 128 105) (close _V0write_k231))
V_CALL(VGetArg(upenv, 128-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_k231, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0write_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0write_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0write_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 128 123) (bruijn ##k.521 0 0) (bruijn x 0 1) #t (bruijn port 0 2))
V_CALL(VGetArg(upenv, 128-1, 123), runtime,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2
    );
 }
}
void _V0write_lambda19(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0write_lambda19:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0write_lambda19\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0write_lambda19\n"
"    jmp _V20CaseError__V0write_lambda19\n"
);
static void _V0vanity_V0core_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k129) (bruijn write 127 125) (close _V0write_lambda19))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k129, env)}),
      VEncodeInt(127l), VEncodeInt(125l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_lambda19, env)})
    );
 }
}
static void _V0display_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display_k232" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display_k232, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 128 123) (bruijn ##k.522 1 0) (bruijn x 1 1) #f (bruijn ##x.523 0 0))
V_CALL(VGetArg(upenv, 128-1, 123), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(false),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0display_lambda20(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0display_lambda20 #t (2 ((bruijn current-output-port 127 105) (close _V0display_k232))) (3 ((bruijn printout 127 123) (bruijn ##k.524 0 0) (bruijn x 0 1) #f (bruijn port 0 2))))
 VError("Not enough arguments to _V0display_lambda20, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0display_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0display_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0display_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 127 105) (close _V0display_k232))
V_CALL(VGetArg(upenv, 127-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_k232, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0display_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0display_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0display_lambda20, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 127 123) (bruijn ##k.524 0 0) (bruijn x 0 1) #f (bruijn port 0 2))
V_CALL(VGetArg(upenv, 127-1, 123), runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2
    );
 }
}
void _V0display_lambda20(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0display_lambda20:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0display_lambda20\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0display_lambda20\n"
"    jmp _V20CaseError__V0display_lambda20\n"
);
static void _V0vanity_V0core_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k128) (bruijn display 126 124) (close _V0display_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k128, env)}),
      VEncodeInt(126l), VEncodeInt(124l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_lambda20, env)})
    );
 }
}
static void _V0printout_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k238, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.530 2 0) (bruijn ##x.532 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0printout_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 132 38) (close _V0printout_k238) (bruijn x 6 1))
V_CALL(VGetArg(upenv, 132-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k238, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.533 5 0) (bruijn ##x.537 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 136 38) (close _V0loop_k243) (bruijn xs 4 1))
V_CALL(VGetArg(upenv, 136-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k243, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printout 135 123) (close _V0loop_k242) (bruijn ##x.538 0 0) (bruijn write? 9 2) (bruijn port 9 3))
V_CALL(VGetArg(upenv, 135-1, 123), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k242, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2),
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0loop_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 134 37) (close _V0loop_k241) (bruijn xs 2 1))
V_CALL(VGetArg(upenv, 134-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k241, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k245, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 135 123) (bruijn ##k.533 3 0) (bruijn xs 3 1) (bruijn write? 9 2) (bruijn port 9 3))
V_CALL(VGetArg(upenv, 135-1, 123), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VGetArg(upenv, 9-1, 2),
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0loop_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.539 0 0) ((bruijn ##k.533 2 0) (quote ok)) (##sys.display-word (close _V0loop_k245) (##string ##string.1124) (bruijn port 8 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k245, env)}),
      VEncodePointer(&_V10string_D1124.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 3)
    );
}
 }
}
static void _V0loop_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.534 0 0) (##sys.display-word (close _V0loop_k240) (##string ##string.1118) (bruijn port 7 3)) ((bruijn null? 133 1) (close _V0loop_k244) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k240, env)}),
      VEncodePointer(&_V10string_D1118.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 133-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k244, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda23" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 132 4) (close _V0loop_k239) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 132-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k239, env)}),
      _var1
    );
 }
}
static void _V0printout_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0printout_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0printout_k237) (bruijn loop 0 1) (close _V0loop_lambda23))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k237, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda23, env)})
    );
 }
}
static void _V0printout_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k246, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (bruijn ##k.525 5 0) (##string ##string.1125) (bruijn port 5 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1125.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0printout_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k236" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout_lambda22) (close _V0printout_k246) #f)
V_CALL_FUNC(_V0printout_lambda22, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k246, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0printout_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k235" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printout 129 123) (close _V0printout_k236) (bruijn ##x.541 0 0) (bruijn write? 3 2) (bruijn port 3 3))
V_CALL(VGetArg(upenv, 129-1, 123), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k236, env)}),
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
 }
}
static void _V0printout_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 128 37) (close _V0printout_k235) (bruijn x 2 1))
V_CALL(VGetArg(upenv, 128-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k235, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0printout_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k250, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.545 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k253, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.553 1 0) ((bruijn ##k.554 0 0) #f) (##sys.display-word (bruijn ##k.554 0 0) (##string ##string.1118) (bruijn port 9 3)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1118.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3)
    );
}
 }
}
static void _V0loop_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k257, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.547 6 0) (bruijn ##x.551 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 137 28) (close _V0loop_k257) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 137-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k257, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printout 136 123) (close _V0loop_k256) (bruijn ##x.552 0 0) (bruijn write? 10 2) (bruijn port 10 3))
V_CALL(VGetArg(upenv, 136-1, 123), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k256, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3)
    );
 }
}
static void _V0loop_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector-ref 135 100) (close _V0loop_k255) (bruijn x 9 1) (bruijn i 3 1))
V_CALL(VGetArg(upenv, 135-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k255, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k253) (close _V0loop_k254))
V_CALL_FUNC(_V0loop_k253, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k254, env)})
    );
 }
}
static void _V0loop_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.548 0 0) ((bruijn ##k.547 1 0) #f) ((bruijn eq? 133 14) (close _V0loop_k252) (bruijn i 1 1) 0))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 133-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k252, env)}),
      upenv->vars[1],
      VEncodeInt(0l)
    );
}
 }
}
static void _V0loop_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda25" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 132 14) (close _V0loop_k251) (bruijn i 0 1) (bruijn len 3 0))
V_CALL(VGetArg(upenv, 132-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k251, env)}),
      _var1,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0printout_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0printout_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0printout_k250) (bruijn loop 0 1) (close _V0loop_lambda25))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k250, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda25, env)})
    );
 }
}
static void _V0printout_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k258, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (bruijn ##k.525 5 0) (##string ##string.1125) (bruijn port 5 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1125.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0printout_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout_lambda24) (close _V0printout_k258) #f)
V_CALL_FUNC(_V0printout_lambda24, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k258, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0printout_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0printout_k249) (##string ##string.1127) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k249, env)}),
      VEncodePointer(&_V10string_D1127.sym, VPOINTER_OTHER),
      upenv->up->up->vars[3]
    );
 }
}
static void _V0printout_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.542 0 0) ((bruijn vector-length 128 102) (close _V0printout_k248) (bruijn x 2 1)) (if (bruijn write? 2 2) (##sys.write (bruijn ##k.525 2 0) (bruijn x 2 1) (bruijn port 2 3)) (##sys.display-word (bruijn ##k.525 2 0) (bruijn x 2 1) (bruijn port 2 3))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 128-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k248, env)}),
      upenv->up->vars[1]
    );
} else {
if(VDecodeBool(
upenv->up->vars[2])) {
    V_CALL_FUNC(VWrite2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[3]
    );
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[3]
    );
}
}
 }
}
static void _V0printout_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.526 0 0) (##sys.display-word (close _V0printout_k234) (##string ##string.1126) (bruijn port 1 3)) ((bruijn vector? 127 5) (close _V0printout_k247) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k234, env)}),
      VEncodePointer(&_V10string_D1126.sym, VPOINTER_OTHER),
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 127-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k247, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0printout_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0printout_lambda21" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0printout_lambda21, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda21, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn pair? 126 4) (close _V0printout_k233) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 126-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k233, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k127) (bruijn printout 125 123) (close _V0printout_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k127, env)}),
      VEncodeInt(125l), VEncodeInt(123l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_lambda21, env)})
    );
 }
}
static void _V0newline_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0newline_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0newline_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0newline_k259, runtime, upenv, 1, argc, _var0) {
  // (##sys.newline (bruijn ##k.555 1 0) (bruijn ##x.556 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0newline_lambda26(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0newline_lambda26 #t (1 ((bruijn current-output-port 125 105) (close _V0newline_k259))) (2 (##sys.newline (bruijn ##k.557 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0newline_lambda26, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0newline_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0newline_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0newline_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-output-port 125 105) (close _V0newline_k259))
V_CALL(VGetArg(upenv, 125-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_k259, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0newline_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0newline_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0newline_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.newline (bruijn ##k.557 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0newline_lambda26(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0newline_lambda26:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0newline_lambda26\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0newline_lambda26\n"
"    jmp _V20CaseError__V0newline_lambda26\n"
);
static void _V0vanity_V0core_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k126) (bruijn newline 124 122) (close _V0newline_lambda26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k126, env)}),
      VEncodeInt(124l), VEncodeInt(122l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_lambda26, env)})
    );
 }
}
static void _V0read_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read_k260, runtime, upenv, 1, argc, _var0) {
  // (##sys.read (bruijn ##k.558 1 0) (bruijn ##x.559 0 0))
    V_CALL_FUNC(VRead2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0read_lambda27(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read_lambda27 #t (1 ((bruijn current-input-port 124 107) (close _V0read_k260))) (2 (##sys.read (bruijn ##k.560 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read_lambda27, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 124 107) (close _V0read_k260))
V_CALL(VGetArg(upenv, 124-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_k260, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0read_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read (bruijn ##k.560 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VRead2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0read_lambda27(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read_lambda27:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0read_lambda27\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0read_lambda27\n"
"    jmp _V20CaseError__V0read_lambda27\n"
);
static void _V0vanity_V0core_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k125) (bruijn read 123 121) (close _V0read_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k125, env)}),
      VEncodeInt(123l), VEncodeInt(121l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_lambda27, env)})
    );
 }
}
static void _V0read__line_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__line_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__line_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__line_k261, runtime, upenv, 1, argc, _var0) {
  // (##sys.read-line (bruijn ##k.561 1 0) (bruijn ##x.562 0 0))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0read__line_lambda28(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__line_lambda28 #t (1 ((bruijn current-input-port 123 107) (close _V0read__line_k261))) (2 (##sys.read-line (bruijn ##k.563 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__line_lambda28, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__line_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read__line_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__line_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 123 107) (close _V0read__line_k261))
V_CALL(VGetArg(upenv, 123-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_k261, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0read__line_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read__line_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__line_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read-line (bruijn ##k.563 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0read__line_lambda28(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read__line_lambda28:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0read__line_lambda28\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0read__line_lambda28\n"
"    jmp _V20CaseError__V0read__line_lambda28\n"
);
static void _V0vanity_V0core_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k124) (bruijn read-line 122 120) (close _V0read__line_lambda28))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k124, env)}),
      VEncodeInt(122l), VEncodeInt(120l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_lambda28, env)})
    );
 }
}
static void _V0read__char_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__char_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__char_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__char_k262, runtime, upenv, 1, argc, _var0) {
  // (##sys.read-char (bruijn ##k.564 1 0) (bruijn ##x.565 0 0))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0read__char_lambda29(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__char_lambda29 #t (1 ((bruijn current-input-port 122 107) (close _V0read__char_k262))) (2 (##sys.read-char (bruijn ##k.566 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__char_lambda29, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__char_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read__char_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__char_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 122 107) (close _V0read__char_k262))
V_CALL(VGetArg(upenv, 122-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_k262, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0read__char_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read__char_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__char_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read-char (bruijn ##k.566 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0read__char_lambda29(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read__char_lambda29:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0read__char_lambda29\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0read__char_lambda29\n"
"    jmp _V20CaseError__V0read__char_lambda29\n"
);
static void _V0vanity_V0core_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k123) (bruijn read-char 121 119) (close _V0read__char_lambda29))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k123, env)}),
      VEncodeInt(121l), VEncodeInt(119l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_lambda29, env)})
    );
 }
}
static void _V0with__input__from__file_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k268" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k268, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.568 4 0) (bruijn ret 2 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->vars[0]
    );
 }
}
static void _V0with__input__from__file_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k267" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 127 109) (close _V0with__input__from__file_k268) (bruijn port 3 1))
V_CALL(VGetArg(upenv, 127-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k268, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0with__input__from__file_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 126 107) (close _V0with__input__from__file_k267) (bruijn stdout 2 2))
V_CALL(VGetArg(upenv, 126-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k267, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0with__input__from__file_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__input__from__file_k266))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k266, env)})
    );
 }
}
static void _V0with__input__from__file_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__input__from__file_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda31, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn current-input-port 124 107) (close _V0with__input__from__file_k265) (bruijn port 0 1))
V_CALL(VGetArg(upenv, 124-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k265, env)}),
      _var1
    );
 }
}
static void _V0with__input__from__file_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0with__input__from__file_lambda31) (bruijn ##k.567 2 0) (bruijn ##x.572 1 0) (bruijn ##x.573 0 0))
V_CALL_FUNC(_V0with__input__from__file_lambda31, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0with__input__from__file_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 122 107) (close _V0with__input__from__file_k264))
V_CALL(VGetArg(upenv, 122-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k264, env)})
    );
 }
}
static void _V0with__input__from__file_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__input__from__file_lambda30" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0with__input__from__file_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-input-file 121 113) (close _V0with__input__from__file_k263) (bruijn str 0 1))
V_CALL(VGetArg(upenv, 121-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k263, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k122) (bruijn with-input-from-file 120 118) (close _V0with__input__from__file_lambda30))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k122, env)}),
      VEncodeInt(120l), VEncodeInt(118l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_lambda30, env)})
    );
 }
}
static void _V0with__output__to__file_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k274" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k274, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.575 4 0) (bruijn ret 2 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->vars[0]
    );
 }
}
static void _V0with__output__to__file_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 126 109) (close _V0with__output__to__file_k274) (bruijn port 3 1))
V_CALL(VGetArg(upenv, 126-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k274, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0with__output__to__file_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k272" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-output-port 125 105) (close _V0with__output__to__file_k273) (bruijn stdout 2 2))
V_CALL(VGetArg(upenv, 125-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k273, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0with__output__to__file_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__output__to__file_k272))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k272, env)})
    );
 }
}
static void _V0with__output__to__file_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__output__to__file_lambda33" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn current-output-port 123 105) (close _V0with__output__to__file_k271) (bruijn port 0 1))
V_CALL(VGetArg(upenv, 123-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k271, env)}),
      _var1
    );
 }
}
static void _V0with__output__to__file_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0with__output__to__file_lambda33) (bruijn ##k.574 2 0) (bruijn ##x.579 1 0) (bruijn ##x.580 0 0))
V_CALL_FUNC(_V0with__output__to__file_lambda33, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0with__output__to__file_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k269" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-output-port 121 105) (close _V0with__output__to__file_k270))
V_CALL(VGetArg(upenv, 121-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k270, env)})
    );
 }
}
static void _V0with__output__to__file_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__output__to__file_lambda32" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0with__output__to__file_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda32, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-file 120 114) (close _V0with__output__to__file_k269) (bruijn str 0 1))
V_CALL(VGetArg(upenv, 120-1, 114), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k269, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k121) (bruijn with-output-to-file 119 117) (close _V0with__output__to__file_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k121, env)}),
      VEncodeInt(119l), VEncodeInt(117l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_lambda32, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k120) (bruijn get-output-string 118 116) ##sys.get-output-string)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k120, env)}),
      VEncodeInt(118l), VEncodeInt(116l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VGetOutputString2,NULL)})
    );
 }
}
static void _V0open__output__string_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string_lambda34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string_lambda34, runtime, upenv, 1, argc, _var0) {
  // ((bruijn try-or-gc 118 108) (bruijn ##k.581 0 0) (bruijn open-output-string-impl 118 112) (##string ##string.1128))
V_CALL(VGetArg(upenv, 118-1, 108), runtime,
      _var0,
      VGetArg(upenv, 118-1, 112),
      VEncodePointer(&_V10string_D1128.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0core_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k119) (bruijn open-output-string 117 115) (close _V0open__output__string_lambda34))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k119, env)}),
      VEncodeInt(117l), VEncodeInt(115l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string_lambda34, env)})
    );
 }
}
static void _V0open__output__file_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file_lambda36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file_lambda36, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-output-file-impl 118 111) (bruijn ##k.583 0 0) (bruijn path 1 1))
V_CALL(VGetArg(upenv, 118-1, 111), runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0open__output__file_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__output__file_lambda35" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__output__file_lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 117 108) (bruijn ##k.582 0 0) (close _V0open__output__file_lambda36) (##string ##string.1129))
V_CALL(VGetArg(upenv, 117-1, 108), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file_lambda36, env)}),
      VEncodePointer(&_V10string_D1129.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0core_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k118) (bruijn open-output-file 116 114) (close _V0open__output__file_lambda35))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k118, env)}),
      VEncodeInt(116l), VEncodeInt(114l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file_lambda35, env)})
    );
 }
}
static void _V0open__input__file_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file_lambda38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file_lambda38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-input-file-impl 117 110) (bruijn ##k.585 0 0) (bruijn path 1 1))
V_CALL(VGetArg(upenv, 117-1, 110), runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0open__input__file_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__input__file_lambda37" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__input__file_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 116 108) (bruijn ##k.584 0 0) (close _V0open__input__file_lambda38) (##string ##string.1130))
V_CALL(VGetArg(upenv, 116-1, 108), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file_lambda38, env)}),
      VEncodePointer(&_V10string_D1130.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0core_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k117) (bruijn open-input-file 115 113) (close _V0open__input__file_lambda37))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k117, env)}),
      VEncodeInt(115l), VEncodeInt(113l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file_lambda37, env)})
    );
 }
}
static void _V0open__output__string__impl_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_k275, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##sys.set-finalizer! (bruijn ##k.590 0 0) (bruijn ret 1 1) ##sys.close-stream) ((bruijn ##k.590 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCloseStream2,NULL)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0open__output__string__impl_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_k276, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 117 130) (bruijn ##k.588 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
V_CALL(VGetArg(upenv, 117-1, 130), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0open__output__string__impl_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_lambda40" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__output__string__impl_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__output__string__impl_k275) (close _V0open__output__string__impl_k276))
V_CALL_FUNC(_V0open__output__string__impl_k275, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_k276, env)})
    );
 }
}
static void _V0open__output__string__impl_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_lambda39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 115 128) (bruijn ##k.586 0 0) ##sys.open-output-string (close _V0open__output__string__impl_lambda40))
V_CALL(VGetArg(upenv, 115-1, 128), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenOutputString2,NULL)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_lambda40, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k116) (bruijn open-output-string-impl 114 112) (close _V0open__output__string__impl_lambda39))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k116, env)}),
      VEncodeInt(114l), VEncodeInt(112l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_lambda39, env)})
    );
 }
}
static void _V0open__output__file__impl_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda42, runtime, upenv, 1, argc, _var0) {
  // (##sys.open-output-stream (bruijn ##k.592 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenOutputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0open__output__file__impl_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_k277" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_k277, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##sys.set-finalizer! (bruijn ##k.595 0 0) (bruijn ret 1 1) ##sys.close-stream) ((bruijn ##k.595 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCloseStream2,NULL)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0open__output__file__impl_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_k278" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_k278, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 116 130) (bruijn ##k.593 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
V_CALL(VGetArg(upenv, 116-1, 130), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0open__output__file__impl_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda43" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__output__file__impl_k277) (close _V0open__output__file__impl_k278))
V_CALL_FUNC(_V0open__output__file__impl_k277, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_k278, env)})
    );
 }
}
static void _V0open__output__file__impl_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda41" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 114 128) (bruijn ##k.591 0 0) (close _V0open__output__file__impl_lambda42) (close _V0open__output__file__impl_lambda43))
V_CALL(VGetArg(upenv, 114-1, 128), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda42, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda43, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k115) (bruijn open-output-file-impl 113 111) (close _V0open__output__file__impl_lambda41))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k115, env)}),
      VEncodeInt(113l), VEncodeInt(111l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda41, env)})
    );
 }
}
static void _V0open__input__file__impl_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda45, runtime, upenv, 1, argc, _var0) {
  // (##sys.open-input-stream (bruijn ##k.597 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenInputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0open__input__file__impl_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_k279" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_k279, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##sys.set-finalizer! (bruijn ##k.600 0 0) (bruijn ret 1 1) ##sys.close-stream) ((bruijn ##k.600 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCloseStream2,NULL)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0open__input__file__impl_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_k280, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 115 130) (bruijn ##k.598 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
V_CALL(VGetArg(upenv, 115-1, 130), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0open__input__file__impl_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda46" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda46, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__input__file__impl_k279) (close _V0open__input__file__impl_k280))
V_CALL_FUNC(_V0open__input__file__impl_k279, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_k280, env)})
    );
 }
}
static void _V0open__input__file__impl_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda44" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 113 128) (bruijn ##k.596 0 0) (close _V0open__input__file__impl_lambda45) (close _V0open__input__file__impl_lambda46))
V_CALL(VGetArg(upenv, 113-1, 128), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda45, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda46, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k114) (bruijn open-input-file-impl 112 110) (close _V0open__input__file__impl_lambda44))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k114, env)}),
      VEncodeInt(112l), VEncodeInt(110l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda44, env)})
    );
 }
}
static void _V0close__port_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0close__port_k281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0close__port_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0close__port_k281, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.602 0 0) (##sys.finalize! (bruijn ##k.601 1 0) (bruijn port 1 1)) (##sys.close-stream (bruijn ##k.601 1 0) (bruijn port 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VFinalize, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
} else {
    V_CALL_FUNC(VCloseStream2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
}
 }
}
static void _V0close__port_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0close__port_lambda47" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0close__port_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0close__port_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##sys.has-finalizer? (close _V0close__port_k281) (bruijn port 0 1))
    V_CALL_FUNC(VHasFinalizer, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0close__port_k281, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k113) (bruijn close-port 111 109) (close _V0close__port_lambda47))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k113, env)}),
      VEncodeInt(111l), VEncodeInt(109l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0close__port_lambda47, env)})
    );
 }
}
static void _V0try__or__gc_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda50" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda50, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ok 0 2) ((bruijn ##k.606 0 0) (bruijn ret 0 1)) ((bruijn error 114 145) (bruijn ##k.606 0 0) (bruijn msg 3 2)))
if(VDecodeBool(
_var2)) {
V_CALL(_var0, runtime,
      _var1
    );
} else {
V_CALL(VGetArg(upenv, 114-1, 145), runtime,
      _var0,
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0try__or__gc_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0try__or__gc_k282" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0try__or__gc_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 113 128) (bruijn ##k.604 1 0) (bruijn thunk 2 1) (close _V0try__or__gc_lambda50))
V_CALL(VGetArg(upenv, 113-1, 128), runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda50, env)})
    );
 }
}
static void _V0try__or__gc_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda49" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda49, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (bruijn ok 0 2) ((bruijn ##k.604 0 0) (bruijn ret 0 1)) (##sys.garbage-collect (close _V0try__or__gc_k282) #t))
if(VDecodeBool(
_var2)) {
V_CALL(_var0, runtime,
      _var1
    );
} else {
    V_CALL_FUNC(VGarbageCollect, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_k282, env)}),
      VEncodeBool(true)
    );
}
 }
}
static void _V0try__or__gc_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda48" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda48, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call-with-values 111 128) (bruijn ##k.603 0 0) (bruijn thunk 0 1) (close _V0try__or__gc_lambda49))
V_CALL(VGetArg(upenv, 111-1, 128), runtime,
      _var0,
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda49, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k112) (bruijn try-or-gc 110 108) (close _V0try__or__gc_lambda48))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k112, env)}),
      VEncodeInt(110l), VEncodeInt(108l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda48, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0current__input__port_lambda51(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0current__input__port_lambda51 #t (1 ((bruijn ##k.608 0 0) (bruijn in 1 0))) (2 (set! (bruijn ##k.609 0 0) (bruijn in 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0current__input__port_lambda51, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0current__input__port_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0current__input__port_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0current__input__port_lambda51, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.608 0 0) (bruijn in 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
 }
}
__attribute__((used)) static void _V20Case1__V0current__input__port_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0current__input__port_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0current__input__port_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.609 0 0) (bruijn in 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0current__input__port_lambda51(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0current__input__port_lambda51:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0current__input__port_lambda51\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0current__input__port_lambda51\n"
"    jmp _V20CaseError__V0current__input__port_lambda51\n"
);
static void _V0vanity_V0core_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k111) (bruijn current-input-port 109 107) (close _V0current__input__port_lambda51))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k111, env)}),
      VEncodeInt(109l), VEncodeInt(107l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0current__input__port_lambda51, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.stdin->port (close _V0vanity_V0core_V20_k110))
    V_CALL_FUNC(VStdinPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k110, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0current__error__port_lambda52(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0current__error__port_lambda52 #t (1 ((bruijn ##k.611 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.612 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0current__error__port_lambda52, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0current__error__port_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0current__error__port_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0current__error__port_lambda52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.611 0 0) (bruijn out 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
 }
}
__attribute__((used)) static void _V20Case1__V0current__error__port_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0current__error__port_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0current__error__port_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.612 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0current__error__port_lambda52(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0current__error__port_lambda52:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0current__error__port_lambda52\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0current__error__port_lambda52\n"
"    jmp _V20CaseError__V0current__error__port_lambda52\n"
);
static void _V0vanity_V0core_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k109) (bruijn current-error-port 107 106) (close _V0current__error__port_lambda52))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k109, env)}),
      VEncodeInt(107l), VEncodeInt(106l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0current__error__port_lambda52, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.stderr->port (close _V0vanity_V0core_V20_k108))
    V_CALL_FUNC(VStderrPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k108, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0current__output__port_lambda53(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0current__output__port_lambda53 #t (1 ((bruijn ##k.614 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.615 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0current__output__port_lambda53, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0current__output__port_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0current__output__port_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0current__output__port_lambda53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.614 0 0) (bruijn out 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
 }
}
__attribute__((used)) static void _V20Case1__V0current__output__port_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0current__output__port_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0current__output__port_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.615 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0current__output__port_lambda53(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0current__output__port_lambda53:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0current__output__port_lambda53\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0current__output__port_lambda53\n"
"    jmp _V20CaseError__V0current__output__port_lambda53\n"
);
static void _V0vanity_V0core_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k107) (bruijn current-output-port 105 105) (close _V0current__output__port_lambda53))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k107, env)}),
      VEncodeInt(105l), VEncodeInt(105l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0current__output__port_lambda53, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.stdout->port (close _V0vanity_V0core_V20_k106))
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k106, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k105) (bruijn char->integer 103 104) ##sys.char-integer)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k105, env)}),
      VEncodeInt(103l), VEncodeInt(104l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCharInt2,NULL)})
    );
 }
}
static void _V0vector__for__each_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k284, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.617 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.619 4 0) (bruijn ##x.622 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k287" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 109 28) (close _V0loop_k288) (bruijn i 3 1) 1)
V_CALL(VGetArg(upenv, 109-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k288, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k286" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn f 5 1) (close _V0loop_k287) (bruijn ##x.623 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k287, env)}),
      _var0
    );
 }
}
static void _V0loop_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k285" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.620 0 0) ((bruijn vector-ref 107 100) (close _V0loop_k286) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.619 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 107-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k286, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda56" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 106 19) (close _V0loop_k285) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 106-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k285, env)}),
      _var1,
      upenv->up->vars[0]
    );
 }
}
static void _V0vector__for__each_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda55" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k284) (bruijn loop 0 1) (close _V0loop_lambda56))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k284, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda56, env)})
    );
 }
}
static void _V0vector__for__each_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k283" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vector__for__each_lambda55) (bruijn ##k.616 1 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda55, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k290" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k290, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.625 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k295" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.627 5 0) (bruijn ##x.630 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 110 28) (close _V0loop_k295) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 110-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k295, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k293" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn f 6 1) (close _V0loop_k294) (bruijn ##x.631 1 0) (bruijn ##x.632 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k294, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k292" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector-ref 108 100) (close _V0loop_k293) (bruijn ys 5 3) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 108-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k293, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k291" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.628 0 0) ((bruijn vector-ref 107 100) (close _V0loop_k292) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.627 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 107-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k292, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda58" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 106 19) (close _V0loop_k291) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 106-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k291, env)}),
      _var1,
      upenv->up->vars[0]
    );
 }
}
static void _V0vector__for__each_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k290) (bruijn loop 0 1) (close _V0loop_lambda58))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k290, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda58, env)})
    );
 }
}
static void _V0vector__for__each_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k289" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vector__for__each_lambda57) (bruijn ##k.624 1 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda57, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k297" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k297, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.634 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k303, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.636 6 0) (bruijn ##x.639 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 111 28) (close _V0loop_k303) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 111-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k303, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k301" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn f 7 1) (close _V0loop_k302) (bruijn ##x.640 2 0) (bruijn ##x.641 1 0) (bruijn ##x.642 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k302, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector-ref 109 100) (close _V0loop_k301) (bruijn zs 6 4) (bruijn i 3 1))
V_CALL(VGetArg(upenv, 109-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k301, env)}),
      VGetArg(upenv, 6-1, 4),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k299" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector-ref 108 100) (close _V0loop_k300) (bruijn ys 5 3) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 108-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k300, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.637 0 0) ((bruijn vector-ref 107 100) (close _V0loop_k299) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.636 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 107-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k299, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda60" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 106 19) (close _V0loop_k298) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 106-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k298, env)}),
      _var1,
      upenv->up->vars[0]
    );
 }
}
static void _V0vector__for__each_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k297) (bruijn loop 0 1) (close _V0loop_lambda60))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k297, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda60, env)})
    );
 }
}
static void _V0vector__for__each_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k296" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vector__for__each_lambda59) (bruijn ##k.633 1 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda59, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k306" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k306, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.644 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.646 4 0) (bruijn ##x.649 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k309" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 110 28) (close _V0loop_k310) (bruijn i 3 1) 1)
V_CALL(VGetArg(upenv, 110-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k310, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k308" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 109 129) (close _V0loop_k309) (bruijn f 6 1) (bruijn ##x.650 0 0))
V_CALL(VGetArg(upenv, 109-1, 129), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k309, env)}),
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda63" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn vector-ref 109 100) (bruijn ##k.651 0 0) (bruijn vec 0 1) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 109-1, 100), runtime,
      _var0,
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k307" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.647 0 0) ((bruijn map 108 72) (close _V0loop_k308) (close _V0loop_lambda63) (bruijn vecs 5 2)) ((bruijn ##k.646 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 108-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k308, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda63, env)}),
      VGetArg(upenv, 5-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda62" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 107 19) (close _V0loop_k307) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 107-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k307, env)}),
      _var1,
      upenv->up->vars[0]
    );
 }
}
static void _V0vector__for__each_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k306) (bruijn loop 0 1) (close _V0loop_lambda62))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k306, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda62, env)})
    );
 }
}
static void _V0vector__for__each_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k305" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vector__for__each_lambda61) (bruijn ##k.643 2 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda61, env, runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector-length 104 102) (close _V0vector__for__each_k305) (bruijn ##x.652 0 0))
V_CALL(VGetArg(upenv, 104-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k305, env)}),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vector__for__each_lambda54(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vector__for__each_lambda54 #t (3 ((bruijn vector-length 103 102) (close _V0vector__for__each_k283) (bruijn xs 0 2))) (4 ((bruijn vector-length 103 102) (close _V0vector__for__each_k289) (bruijn xs 0 2))) (5 ((bruijn vector-length 103 102) (close _V0vector__for__each_k296) (bruijn xs 0 2))) (2 + ((bruijn car 103 37) (close _V0vector__for__each_k304) (bruijn vecs 0 2))))
 VError("Not enough arguments to _V0vector__for__each_lambda54, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vector__for__each_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vector__for__each_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vector__for__each_lambda54, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn vector-length 103 102) (close _V0vector__for__each_k283) (bruijn xs 0 2))
V_CALL(VGetArg(upenv, 103-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k283, env)}),
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case1__V0vector__for__each_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vector__for__each_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vector__for__each_lambda54, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn vector-length 103 102) (close _V0vector__for__each_k289) (bruijn xs 0 2))
V_CALL(VGetArg(upenv, 103-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k289, env)}),
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case2__V0vector__for__each_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vector__for__each_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vector__for__each_lambda54, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn vector-length 103 102) (close _V0vector__for__each_k296) (bruijn xs 0 2))
V_CALL(VGetArg(upenv, 103-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k296, env)}),
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case3__V0vector__for__each_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vector__for__each_lambda54" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vector__for__each_lambda54, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn car 103 37) (close _V0vector__for__each_k304) (bruijn vecs 0 2))
V_CALL(VGetArg(upenv, 103-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k304, env)}),
      _varargs
    );
 }
}
void _V0vector__for__each_lambda54(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0vector__for__each_lambda54:\n"
"    cmp edx, 3\n"
"    je _V20Case0__V0vector__for__each_lambda54\n"
"    cmp edx, 4\n"
"    je _V20Case1__V0vector__for__each_lambda54\n"
"    cmp edx, 5\n"
"    je _V20Case2__V0vector__for__each_lambda54\n"
"    cmp edx, 2\n"
"    jge _V20Case3__V0vector__for__each_lambda54\n"
"    jmp _V20CaseError__V0vector__for__each_lambda54\n"
);
static void _V0vanity_V0core_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k104) (bruijn vector-for-each 102 103) (close _V0vector__for__each_lambda54))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k104, env)}),
      VEncodeInt(102l), VEncodeInt(103l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda54, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k103) (bruijn vector-length 101 102) ##sys.vector-length)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k103, env)}),
      VEncodeInt(101l), VEncodeInt(102l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorLength2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k102) (bruijn vector-set! 100 101) ##sys.vector-set!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k102, env)}),
      VEncodeInt(100l), VEncodeInt(101l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorSet2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k101) (bruijn vector-ref 99 100) ##sys.vector-ref)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k101, env)}),
      VEncodeInt(99l), VEncodeInt(100l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorRef2,NULL)})
    );
 }
}
static void _V0vector_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vector_lambda64" };
 VRecordCall(&dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vector_lambda64, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_lambda64, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn list->vector 99 98) (bruijn ##k.653 0 0) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 99-1, 98), runtime,
      _var0,
      _varargs
    );
 }
}
static void _V0vanity_V0core_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k100) (bruijn vector 98 99) (close _V0vector_lambda64))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k100, env)}),
      VEncodeInt(98l), VEncodeInt(99l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_lambda64, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k99) (bruijn list->vector 97 98) ##sys.list->vector)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k99, env)}),
      VEncodeInt(97l), VEncodeInt(98l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VListVector2,NULL)})
    );
 }
}
static void _V0string__append_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k317, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.656 7 0) (bruijn str 3 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0string__append_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 103 88) (close _V0string__append_k317) (bruijn str 2 0) (bruijn ##x.659 0 0) (bruijn b 6 2))
V_CALL(VGetArg(upenv, 103-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k317, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0string__append_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k315" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 102 91) (close _V0string__append_k316) (bruijn a 5 1))
V_CALL(VGetArg(upenv, 102-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k316, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0string__append_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k314" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 101 88) (close _V0string__append_k315) (bruijn str 0 0) 0 (bruijn a 4 1))
V_CALL(VGetArg(upenv, 101-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k315, env)}),
      _var0,
      VEncodeInt(0l),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0string__append_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k313" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-string 100 85) (close _V0string__append_k314) (bruijn len 0 0))
V_CALL(VGetArg(upenv, 100-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k314, env)}),
      _var0
    );
 }
}
static void _V0string__append_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 99 28) (close _V0string__append_k313) (bruijn ##x.660 1 0) (bruijn ##x.661 0 0))
V_CALL(VGetArg(upenv, 99-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k313, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k311" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 98 91) (close _V0string__append_k312) (bruijn b 1 2))
V_CALL(VGetArg(upenv, 98-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k312, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0string__append_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.662 12 0) (bruijn str 7 0))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 7-1, 0)
    );
 }
}
static void _V0string__append_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 108 88) (close _V0string__append_k329) (bruijn str 6 0) (bruijn ##x.666 0 0) (bruijn c 11 3))
V_CALL(VGetArg(upenv, 108-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k329, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 3)
    );
 }
}
static void _V0string__append_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 107 28) (close _V0string__append_k328) (bruijn ##x.667 1 0) (bruijn ##x.668 0 0))
V_CALL(VGetArg(upenv, 107-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k328, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 106 91) (close _V0string__append_k327) (bruijn b 9 2))
V_CALL(VGetArg(upenv, 106-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k327, env)}),
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0string__append_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k325" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 105 91) (close _V0string__append_k326) (bruijn a 8 1))
V_CALL(VGetArg(upenv, 105-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k326, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0string__append_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k324" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 104 88) (close _V0string__append_k325) (bruijn str 2 0) (bruijn ##x.669 0 0) (bruijn b 7 2))
V_CALL(VGetArg(upenv, 104-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k325, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0string__append_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 103 91) (close _V0string__append_k324) (bruijn a 6 1))
V_CALL(VGetArg(upenv, 103-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k324, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0string__append_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 102 88) (close _V0string__append_k323) (bruijn str 0 0) 0 (bruijn a 5 1))
V_CALL(VGetArg(upenv, 102-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k323, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0string__append_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-string 101 85) (close _V0string__append_k322) (bruijn len 0 0))
V_CALL(VGetArg(upenv, 101-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k322, env)}),
      _var0
    );
 }
}
static void _V0string__append_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 100 28) (close _V0string__append_k321) (bruijn ##x.670 2 0) (bruijn ##x.671 1 0) (bruijn ##x.672 0 0))
V_CALL(VGetArg(upenv, 100-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k321, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 99 91) (close _V0string__append_k320) (bruijn c 2 3))
V_CALL(VGetArg(upenv, 99-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k320, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0string__append_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 98 91) (close _V0string__append_k319) (bruijn b 1 2))
V_CALL(VGetArg(upenv, 98-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k319, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0string__append_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k347" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.673 18 0) (bruijn str 12 0))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 12-1, 0)
    );
 }
}
static void _V0string__append_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 114 88) (close _V0string__append_k347) (bruijn str 11 0) (bruijn ##x.678 0 0) (bruijn d 17 4))
V_CALL(VGetArg(upenv, 114-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k347, env)}),
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 4)
    );
 }
}
static void _V0string__append_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 113 28) (close _V0string__append_k346) (bruijn ##x.679 2 0) (bruijn ##x.680 1 0) (bruijn ##x.681 0 0))
V_CALL(VGetArg(upenv, 113-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k346, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 112 91) (close _V0string__append_k345) (bruijn c 15 3))
V_CALL(VGetArg(upenv, 112-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k345, env)}),
      VGetArg(upenv, 15-1, 3)
    );
 }
}
static void _V0string__append_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 111 91) (close _V0string__append_k344) (bruijn b 14 2))
V_CALL(VGetArg(upenv, 111-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k344, env)}),
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0string__append_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 110 91) (close _V0string__append_k343) (bruijn a 13 1))
V_CALL(VGetArg(upenv, 110-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k343, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0string__append_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 109 88) (close _V0string__append_k342) (bruijn str 6 0) (bruijn ##x.682 0 0) (bruijn c 12 3))
V_CALL(VGetArg(upenv, 109-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k342, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0string__append_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 108 28) (close _V0string__append_k341) (bruijn ##x.683 1 0) (bruijn ##x.684 0 0))
V_CALL(VGetArg(upenv, 108-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k341, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 107 91) (close _V0string__append_k340) (bruijn b 10 2))
V_CALL(VGetArg(upenv, 107-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k340, env)}),
      VGetArg(upenv, 10-1, 2)
    );
 }
}
static void _V0string__append_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 106 91) (close _V0string__append_k339) (bruijn a 9 1))
V_CALL(VGetArg(upenv, 106-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k339, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0string__append_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 105 88) (close _V0string__append_k338) (bruijn str 2 0) (bruijn ##x.685 0 0) (bruijn b 8 2))
V_CALL(VGetArg(upenv, 105-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k338, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 2)
    );
 }
}
static void _V0string__append_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 104 91) (close _V0string__append_k337) (bruijn a 7 1))
V_CALL(VGetArg(upenv, 104-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k337, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0string__append_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-copy! 103 88) (close _V0string__append_k336) (bruijn str 0 0) 0 (bruijn a 6 1))
V_CALL(VGetArg(upenv, 103-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k336, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0string__append_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-string 102 85) (close _V0string__append_k335) (bruijn len 0 0))
V_CALL(VGetArg(upenv, 102-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k335, env)}),
      _var0
    );
 }
}
static void _V0string__append_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 101 28) (close _V0string__append_k334) (bruijn ##x.686 3 0) (bruijn ##x.687 2 0) (bruijn ##x.688 1 0) (bruijn ##x.689 0 0))
V_CALL(VGetArg(upenv, 101-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k334, env)}),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 100 91) (close _V0string__append_k333) (bruijn d 3 4))
V_CALL(VGetArg(upenv, 100-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k333, env)}),
      upenv->up->up->vars[4]
    );
 }
}
static void _V0string__append_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 99 91) (close _V0string__append_k332) (bruijn c 2 3))
V_CALL(VGetArg(upenv, 99-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k332, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0string__append_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 98 91) (close _V0string__append_k331) (bruijn b 1 2))
V_CALL(VGetArg(upenv, 98-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k331, env)}),
      upenv->vars[2]
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0string__append_lambda65 #t (1 ((bruijn string-copy 97 87) (bruijn ##k.654 0 0) (##string ##string.1131))) (2 ((bruijn string-copy 97 87) (bruijn ##k.655 0 0) (bruijn a 0 1))) (3 ((bruijn string-length 97 91) (close _V0string__append_k311) (bruijn a 0 1))) (4 ((bruijn string-length 97 91) (close _V0string__append_k318) (bruijn a 0 1))) (5 ((bruijn string-length 97 91) (close _V0string__append_k330) (bruijn a 0 1))) (1 + ((bruijn fold-right 97 76) (bruijn ##k.690 0 0) (bruijn string-append 97 97) (##string ##string.1131) (bruijn strs 0 1))))
 VError("Not enough arguments to _V0string__append_lambda65, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0string__append_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0string__append_lambda65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string-copy 97 87) (bruijn ##k.654 0 0) (##string ##string.1131))
V_CALL(VGetArg(upenv, 97-1, 87), runtime,
      _var0,
      VEncodePointer(&_V10string_D1131.sym, VPOINTER_OTHER)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0string__append_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0string__append_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn string-copy 97 87) (bruijn ##k.655 0 0) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 97-1, 87), runtime,
      _var0,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case2__V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0string__append_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0string__append_lambda65, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn string-length 97 91) (close _V0string__append_k311) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 97-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k311, env)}),
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case3__V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0string__append_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0string__append_lambda65, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 97 91) (close _V0string__append_k318) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 97-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k318, env)}),
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case4__V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0string__append_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0string__append_lambda65, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn string-length 97 91) (close _V0string__append_k330) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 97-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k330, env)}),
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case5__V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0string__append_lambda65" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0string__append_lambda65, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 97 76) (bruijn ##k.690 0 0) (bruijn string-append 97 97) (##string ##string.1131) (bruijn strs 0 1))
V_CALL(VGetArg(upenv, 97-1, 76), runtime,
      _var0,
      VGetArg(upenv, 97-1, 97),
      VEncodePointer(&_V10string_D1131.sym, VPOINTER_OTHER),
      _varargs
    );
 }
}
void _V0string__append_lambda65(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0string__append_lambda65:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0string__append_lambda65\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0string__append_lambda65\n"
"    cmp edx, 3\n"
"    je _V20Case2__V0string__append_lambda65\n"
"    cmp edx, 4\n"
"    je _V20Case3__V0string__append_lambda65\n"
"    cmp edx, 5\n"
"    je _V20Case4__V0string__append_lambda65\n"
"    cmp edx, 1\n"
"    jge _V20Case5__V0string__append_lambda65\n"
"    jmp _V20CaseError__V0string__append_lambda65\n"
);
static void _V0vanity_V0core_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k98) (bruijn string-append 96 97) (close _V0string__append_lambda65))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k98, env)}),
      VEncodeInt(96l), VEncodeInt(97l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_lambda65, env)})
    );
 }
}
static void _V0string___Glist_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k350" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k350, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.692 3 0) (bruijn ##x.694 0 0) (quote ()))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0,
      VNULL
    );
 }
}
static void _V0string___Glist_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k349" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 99 29) (close _V0string___Glist_k350) (bruijn ##x.695 0 0) 1)
V_CALL(VGetArg(upenv, 99-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k350, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0string___Glist_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k348" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 98 91) (close _V0string___Glist_k349) (bruijn str 2 1))
V_CALL(VGetArg(upenv, 98-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k349, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k354" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.696 4 0) (bruijn ##x.698 2 0) (bruijn ##x.699 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k353" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 101 36) (close _V0loop_k354) (bruijn ##x.700 0 0) (bruijn acc 3 2))
V_CALL(VGetArg(upenv, 101-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k354, env)}),
      _var0,
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k352" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 100 89) (close _V0loop_k353) (bruijn str 4 1) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 100-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k353, env)}),
      upenv->up->up->up->vars[1],
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k351" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.697 0 0) ((bruijn ##k.696 1 0) (bruijn acc 1 2)) ((bruijn - 99 29) (close _V0loop_k352) (bruijn i 1 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 99-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k352, env)}),
      upenv->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda68" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda68, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda68, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 98 14) (close _V0loop_k351) (bruijn i 0 1) -1)
V_CALL(VGetArg(upenv, 98-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k351, env)}),
      _var1,
      VEncodeInt(-1l)
    );
 }
}
static void _V0string___Glist_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0string___Glist_lambda67" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0string___Glist_k348) (bruijn loop 0 1) (close _V0loop_lambda68))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k348, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda68, env)})
    );
 }
}
static void _V0string___Glist_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0string___Glist_lambda66" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0string___Glist_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0string___Glist_lambda67) (bruijn ##k.691 0 0) #f)
V_CALL_FUNC(_V0string___Glist_lambda67, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k97) (bruijn string->list 95 96) (close _V0string___Glist_lambda66))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k97, env)}),
      VEncodeInt(95l), VEncodeInt(96l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_lambda66, env)})
    );
 }
}
static void _V0list___Gstring_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k357" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k357, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.702 1 0) (bruijn lst 4 1) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k362, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.704 5 0) (bruijn ##x.707 1 0) (bruijn ##x.708 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k361" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 103 28) (close _V0loop_k362) (bruijn i 4 2) 1)
V_CALL(VGetArg(upenv, 103-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k362, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k360" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 102 38) (close _V0loop_k361) (bruijn lst 3 1))
V_CALL(VGetArg(upenv, 102-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k361, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k359" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-set! 101 90) (close _V0loop_k360) (bruijn str 4 0) (bruijn i 2 2) (bruijn ##x.709 0 0))
V_CALL(VGetArg(upenv, 101-1, 90), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k360, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[2],
      _var0
    );
 }
}
static void _V0loop_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.705 0 0) ((bruijn ##k.704 1 0) (bruijn str 3 0)) ((bruijn car 100 37) (close _V0loop_k359) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 100-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k359, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda71" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda71, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 99 1) (close _V0loop_k358) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 99-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k358, env)}),
      _var1
    );
 }
}
static void _V0list___Gstring_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list___Gstring_lambda70" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0list___Gstring_k357) (bruijn loop 0 1) (close _V0loop_lambda71))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k357, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda71, env)})
    );
 }
}
static void _V0list___Gstring_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k356" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0list___Gstring_lambda70) (bruijn ##k.701 2 0) #f)
V_CALL_FUNC(_V0list___Gstring_lambda70, env, runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0list___Gstring_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k355" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-string 96 85) (close _V0list___Gstring_k356) (bruijn ##x.710 0 0))
V_CALL(VGetArg(upenv, 96-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k356, env)}),
      _var0
    );
 }
}
static void _V0list___Gstring_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list___Gstring_lambda69" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0list___Gstring_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 95 70) (close _V0list___Gstring_k355) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 95-1, 70), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k355, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k96) (bruijn list->string 94 95) (close _V0list___Gstring_lambda69))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k96, env)}),
      VEncodeInt(94l), VEncodeInt(95l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_lambda69, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k95) (bruijn symbol->string 93 94) ##sys.symbol->string)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k95, env)}),
      VEncodeInt(93l), VEncodeInt(94l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSymbolString2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k94) (bruijn string->number 92 93) ##sys.string->number)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k94, env)}),
      VEncodeInt(92l), VEncodeInt(93l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringNumber2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k93) (bruijn string->symbol 91 92) ##sys.string->symbol)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k93, env)}),
      VEncodeInt(91l), VEncodeInt(92l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringSymbol2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k92) (bruijn string-length 90 91) ##sys.string-length)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k92, env)}),
      VEncodeInt(90l), VEncodeInt(91l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringLength2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k91) (bruijn string-set! 89 90) ##sys.string-set!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k91, env)}),
      VEncodeInt(89l), VEncodeInt(90l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringSet2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k90) (bruijn string-ref 88 89) ##sys.string-ref)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k90, env)}),
      VEncodeInt(88l), VEncodeInt(89l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringRef2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k89) (bruijn string-copy! 87 88) ##sys.string-copy!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k89, env)}),
      VEncodeInt(87l), VEncodeInt(88l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringCopy2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k88) (bruijn string-copy 86 87) ##sys.substring)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k88, env)}),
      VEncodeInt(86l), VEncodeInt(87l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSubstring2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k87) (bruijn substring 85 86) ##sys.substring)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k87, env)}),
      VEncodeInt(85l), VEncodeInt(86l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSubstring2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k86) (bruijn make-string 84 85) ##sys.make-string)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k86, env)}),
      VEncodeInt(84l), VEncodeInt(85l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMakeString2,NULL)})
    );
 }
}
static void _V0assoc_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k366" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assoc 88 84) (bruijn ##k.711 4 0) (bruijn x 4 1) (bruijn ##x.714 0 0))
V_CALL(VGetArg(upenv, 88-1, 84), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0assoc_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k365" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.713 0 0) ((bruijn car 87 37) (bruijn ##k.711 3 0) (bruijn alst 3 2)) ((bruijn cdr 87 38) (close _V0assoc_k366) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 87-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 87-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k366, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0assoc_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k364" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 86 17) (close _V0assoc_k365) (bruijn x 2 1) (bruijn ##x.715 0 0))
V_CALL(VGetArg(upenv, 86-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k365, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0assoc_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k363" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.712 0 0) ((bruijn ##k.711 1 0) #f) ((bruijn caar 85 41) (close _V0assoc_k364) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 85-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k364, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0assoc_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0assoc_lambda72" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0assoc_lambda72, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 84 1) (close _V0assoc_k363) (bruijn alst 0 2))
V_CALL(VGetArg(upenv, 84-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k363, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k85) (bruijn assoc 83 84) (close _V0assoc_lambda72))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k85, env)}),
      VEncodeInt(83l), VEncodeInt(84l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_lambda72, env)})
    );
 }
}
static void _V0assv_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k370" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k370, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assv 87 83) (bruijn ##k.716 4 0) (bruijn x 4 1) (bruijn ##x.719 0 0))
V_CALL(VGetArg(upenv, 87-1, 83), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0assv_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k369" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.718 0 0) ((bruijn car 86 37) (bruijn ##k.716 3 0) (bruijn alst 3 2)) ((bruijn cdr 86 38) (close _V0assv_k370) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 86-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 86-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k370, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0assv_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 85 16) (close _V0assv_k369) (bruijn x 2 1) (bruijn ##x.720 0 0))
V_CALL(VGetArg(upenv, 85-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k369, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0assv_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k367" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.717 0 0) ((bruijn ##k.716 1 0) #f) ((bruijn caar 84 41) (close _V0assv_k368) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 84-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k368, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0assv_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0assv_lambda73" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0assv_lambda73, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_lambda73, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 83 1) (close _V0assv_k367) (bruijn alst 0 2))
V_CALL(VGetArg(upenv, 83-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k367, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k84) (bruijn assv 82 83) (close _V0assv_lambda73))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k84, env)}),
      VEncodeInt(82l), VEncodeInt(83l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_lambda73, env)})
    );
 }
}
static void _V0assq_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k374" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assq 86 82) (bruijn ##k.721 4 0) (bruijn x 4 1) (bruijn ##x.724 0 0))
V_CALL(VGetArg(upenv, 86-1, 82), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0assq_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k373" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.723 0 0) ((bruijn car 85 37) (bruijn ##k.721 3 0) (bruijn alst 3 2)) ((bruijn cdr 85 38) (close _V0assq_k374) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 85-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 85-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k374, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0assq_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k372" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 84 14) (close _V0assq_k373) (bruijn x 2 1) (bruijn ##x.725 0 0))
V_CALL(VGetArg(upenv, 84-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k373, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0assq_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k371" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.722 0 0) ((bruijn ##k.721 1 0) #f) ((bruijn caar 83 41) (close _V0assq_k372) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 83-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k372, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0assq_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0assq_lambda74" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0assq_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_lambda74, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 82 1) (close _V0assq_k371) (bruijn alst 0 2))
V_CALL(VGetArg(upenv, 82-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k371, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k83) (bruijn assq 81 82) (close _V0assq_lambda74))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k83, env)}),
      VEncodeInt(81l), VEncodeInt(82l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_lambda74, env)})
    );
 }
}
static void _V0member_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k378" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k378, runtime, upenv, 1, argc, _var0) {
  // ((bruijn member 85 81) (bruijn ##k.726 4 0) (bruijn x 4 1) (bruijn ##x.729 0 0))
V_CALL(VGetArg(upenv, 85-1, 81), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0member_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k377" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.728 0 0) ((bruijn ##k.726 3 0) (bruijn lst 3 2)) ((bruijn cdr 84 38) (close _V0member_k378) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 84-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k378, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0member_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k376" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 83 17) (close _V0member_k377) (bruijn x 2 1) (bruijn ##x.730 0 0))
V_CALL(VGetArg(upenv, 83-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k377, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0member_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k375" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.727 0 0) ((bruijn ##k.726 1 0) #f) ((bruijn car 82 37) (close _V0member_k376) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 82-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k376, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0member_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0member_lambda75" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0member_lambda75, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_lambda75, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 81 1) (close _V0member_k375) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 81-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k375, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k82) (bruijn member 80 81) (close _V0member_lambda75))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k82, env)}),
      VEncodeInt(80l), VEncodeInt(81l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_lambda75, env)})
    );
 }
}
static void _V0memv_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k382" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 84 80) (bruijn ##k.731 4 0) (bruijn x 4 1) (bruijn ##x.734 0 0))
V_CALL(VGetArg(upenv, 84-1, 80), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memv_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k381" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.733 0 0) ((bruijn ##k.731 3 0) (bruijn lst 3 2)) ((bruijn cdr 83 38) (close _V0memv_k382) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 83-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k382, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0memv_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k380" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 82 16) (close _V0memv_k381) (bruijn x 2 1) (bruijn ##x.735 0 0))
V_CALL(VGetArg(upenv, 82-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k381, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memv_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k379" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.732 0 0) ((bruijn ##k.731 1 0) #f) ((bruijn car 81 37) (close _V0memv_k380) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 81-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k380, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0memv_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memv_lambda76" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memv_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_lambda76, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 80 1) (close _V0memv_k379) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 80-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k379, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k81) (bruijn memv 79 80) (close _V0memv_lambda76))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k81, env)}),
      VEncodeInt(79l), VEncodeInt(80l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_lambda76, env)})
    );
 }
}
static void _V0memq_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k386" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k386, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memq 83 79) (bruijn ##k.736 4 0) (bruijn x 4 1) (bruijn ##x.739 0 0))
V_CALL(VGetArg(upenv, 83-1, 79), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memq_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k385" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.738 0 0) ((bruijn ##k.736 3 0) (bruijn lst 3 2)) ((bruijn cdr 82 38) (close _V0memq_k386) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 82-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k386, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0memq_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k384" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 81 14) (close _V0memq_k385) (bruijn x 2 1) (bruijn ##x.740 0 0))
V_CALL(VGetArg(upenv, 81-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k385, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memq_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k383" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.737 0 0) ((bruijn ##k.736 1 0) #f) ((bruijn car 80 37) (close _V0memq_k384) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 80-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k384, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0memq_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memq_lambda77" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memq_lambda77, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_lambda77, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 79 1) (close _V0memq_k383) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 79-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k383, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k80) (bruijn memq 78 79) (close _V0memq_lambda77))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k80, env)}),
      VEncodeInt(78l), VEncodeInt(79l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_lambda77, env)})
    );
 }
}
static void _V0reverse_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reverse_k387" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reverse_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 1 1) (bruijn ##k.742 1 0) (quote ()) (bruijn lst 2 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VNULL,
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k391" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 5 1) (bruijn ##k.744 4 0) (bruijn ##x.746 1 0) (bruijn ##x.747 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k390" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 83 38) (close _V0iter_k391) (bruijn rest 3 2))
V_CALL(VGetArg(upenv, 83-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k391, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0iter_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k389" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 82 36) (close _V0iter_k390) (bruijn ##x.748 0 0) (bruijn acc 2 1))
V_CALL(VGetArg(upenv, 82-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k390, env)}),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k388" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.745 0 0) ((bruijn ##k.744 1 0) (bruijn acc 1 1)) ((bruijn car 81 37) (close _V0iter_k389) (bruijn rest 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 81-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k389, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0iter_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda80" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda80, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda80, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 80 1) (close _V0iter_k388) (bruijn rest 0 2))
V_CALL(VGetArg(upenv, 80-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k388, env)}),
      _var2
    );
 }
}
static void _V0reverse_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reverse_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0reverse_k387) (bruijn iter 0 1) (close _V0iter_lambda80))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_k387, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda80, env)})
    );
 }
}
static void _V0reverse_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reverse_lambda78" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0reverse_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0reverse_lambda79) (bruijn ##k.741 0 0) #f)
V_CALL_FUNC(_V0reverse_lambda79, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k79) (bruijn reverse 77 78) (close _V0reverse_lambda78))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k79, env)}),
      VEncodeInt(77l), VEncodeInt(78l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_lambda78, env)})
    );
 }
}
static void _V0append_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k392" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k392, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.752 1 0) (bruijn a 2 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k393" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k393, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.754 1 0) (##inline ##sys.cons (##inline ##sys.car (bruijn a 1 1)) (bruijn ##x.757 0 0)))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
VInlineCar(
upenv->vars[1]
    )
,
      _var0
    )

    );
 }
}
static void _V0loop_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda83" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (bruijn a 0 1)) ((bruijn ##k.754 0 0) (bruijn b 2 2)) ((bruijn loop 1 1) (close _V0loop_k393) (##inline ##sys.cdr (bruijn a 0 1))))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(_var0, runtime,
      upenv->up->vars[2]
    );
} else {
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k393, env)}),
      VInlineCdr(
_var1
    )

    );
}
 }
}
static void _V0append_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0append_lambda82" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0append_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0append_k392) (bruijn loop 0 1) (close _V0loop_lambda83))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k392, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda83, env)})
    );
 }
}
static void _V0append_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k394" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k394, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 78 77) (bruijn ##k.759 1 0) (bruijn a 1 1) (bruijn ##x.760 0 0))
V_CALL(VGetArg(upenv, 78-1, 77), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0append_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k396" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 79 77) (bruijn ##k.761 2 0) (bruijn a 2 1) (bruijn ##x.762 0 0))
V_CALL(VGetArg(upenv, 79-1, 77), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0append_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 78 77) (close _V0append_k396) (bruijn b 1 2) (bruijn ##x.763 0 0))
V_CALL(VGetArg(upenv, 78-1, 77), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k396, env)}),
      upenv->vars[2],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0append_lambda81 #t (1 ((bruijn ##k.749 0 0) (quote ()))) (2 ((bruijn ##k.750 0 0) (bruijn a 0 1))) (3 ((close _V0append_lambda82) (bruijn ##k.751 0 0) #f)) (4 ((bruijn append 77 77) (close _V0append_k394) (bruijn b 0 2) (bruijn c 0 3))) (5 ((bruijn append 77 77) (close _V0append_k395) (bruijn c 0 3) (bruijn d 0 4))) (1 + ((bruijn fold-right 77 76) (bruijn ##k.764 0 0) (bruijn append 77 77) (quote ()) (bruijn lsts 0 1))))
 VError("Not enough arguments to _V0append_lambda81, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0append_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0append_lambda81, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.749 0 0) (quote ()))
V_CALL(_var0, runtime,
      VNULL
    );
 }
}
__attribute__((used)) static void _V20Case1__V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0append_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0append_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.750 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case2__V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0append_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0append_lambda81, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0append_lambda82) (bruijn ##k.751 0 0) #f)
V_CALL_FUNC(_V0append_lambda82, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case3__V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0append_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0append_lambda81, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn append 77 77) (close _V0append_k394) (bruijn b 0 2) (bruijn c 0 3))
V_CALL(VGetArg(upenv, 77-1, 77), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k394, env)}),
      _var2,
      _var3
    );
 }
}
__attribute__((used)) static void _V20Case4__V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0append_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0append_lambda81, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn append 77 77) (close _V0append_k395) (bruijn c 0 3) (bruijn d 0 4))
V_CALL(VGetArg(upenv, 77-1, 77), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k395, env)}),
      _var3,
      _var4
    );
 }
}
__attribute__((used)) static void _V20Case5__V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0append_lambda81" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0append_lambda81, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 77 76) (bruijn ##k.764 0 0) (bruijn append 77 77) (quote ()) (bruijn lsts 0 1))
V_CALL(VGetArg(upenv, 77-1, 76), runtime,
      _var0,
      VGetArg(upenv, 77-1, 77),
      VNULL,
      _varargs
    );
 }
}
void _V0append_lambda81(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0append_lambda81:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0append_lambda81\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0append_lambda81\n"
"    cmp edx, 3\n"
"    je _V20Case2__V0append_lambda81\n"
"    cmp edx, 4\n"
"    je _V20Case3__V0append_lambda81\n"
"    cmp edx, 5\n"
"    je _V20Case4__V0append_lambda81\n"
"    cmp edx, 1\n"
"    jge _V20Case5__V0append_lambda81\n"
"    jmp _V20CaseError__V0append_lambda81\n"
);
static void _V0vanity_V0core_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k78) (bruijn append 76 77) (close _V0append_lambda81))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k78, env)}),
      VEncodeInt(76l), VEncodeInt(77l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_lambda81, env)})
    );
 }
}
static void _V0fold__right_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k397" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.766 1 0) (bruijn ks 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k401" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k401, runtime, upenv, 1, argc, _var0) {
  // ((bruijn kons 6 1) (bruijn ##k.768 4 0) (bruijn ##x.770 2 0) (bruijn ##x.771 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k400" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 4 1) (close _V0loop_k401) (bruijn ##x.772 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k401, env)}),
      _var0
    );
 }
}
static void _V0loop_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 80 38) (close _V0loop_k400) (bruijn ks 2 1))
V_CALL(VGetArg(upenv, 80-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k400, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k398" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.769 0 0) ((bruijn ##k.768 1 0) (bruijn knil 3 2)) ((bruijn car 79 37) (close _V0loop_k399) (bruijn ks 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 79-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k399, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda86" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 78 1) (close _V0loop_k398) (bruijn ks 0 1))
V_CALL(VGetArg(upenv, 78-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k398, env)}),
      _var1
    );
 }
}
static void _V0fold__right_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0fold__right_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0fold__right_k397) (bruijn loop 0 1) (close _V0loop_lambda86))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k397, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda86, env)})
    );
 }
}
static void _V0fold__right_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fold__right_lambda84" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fold__right_lambda84, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda84, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0fold__right_lambda85) (bruijn ##k.765 0 0) #f)
V_CALL_FUNC(_V0fold__right_lambda85, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k77) (bruijn fold-right 75 76) (close _V0fold__right_lambda84))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k77, env)}),
      VEncodeInt(75l), VEncodeInt(76l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_lambda84, env)})
    );
 }
}
static void _V0fold_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold_k402" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_k402, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.774 1 0) (bruijn knil 2 2) (bruijn ks 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k406" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k406, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.776 4 0) (bruijn ##x.778 1 0) (bruijn ##x.779 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k405" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 80 38) (close _V0loop_k406) (bruijn ks 3 2))
V_CALL(VGetArg(upenv, 80-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k406, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k404" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn kons 4 1) (close _V0loop_k405) (bruijn ##x.780 0 0) (bruijn kur 2 1))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k405, env)}),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k403" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.777 0 0) ((bruijn ##k.776 1 0) (bruijn kur 1 1)) ((bruijn car 78 37) (close _V0loop_k404) (bruijn ks 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 78-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k404, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda89" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda89, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 77 1) (close _V0loop_k403) (bruijn ks 0 2))
V_CALL(VGetArg(upenv, 77-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k403, env)}),
      _var2
    );
 }
}
static void _V0fold_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0fold_lambda88" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0fold_k402) (bruijn loop 0 1) (close _V0loop_lambda89))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_k402, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda89, env)})
    );
 }
}
static void _V0fold_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fold_lambda87" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fold_lambda87, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_lambda87, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0fold_lambda88) (bruijn ##k.773 0 0) #f)
V_CALL_FUNC(_V0fold_lambda88, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k76) (bruijn fold 74 75) (close _V0fold_lambda87))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k76, env)}),
      VEncodeInt(74l), VEncodeInt(75l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_lambda87, env)})
    );
 }
}
static void _V0iota_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iota_k407" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k407, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.782 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k410" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k410, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 79 36) (bruijn ##k.784 3 0) (bruijn i 3 1) (bruijn ##x.786 0 0))
V_CALL(VGetArg(upenv, 79-1, 36), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k409" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 3 1) (close _V0loop_k410) (bruijn ##x.787 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k410, env)}),
      _var0
    );
 }
}
static void _V0loop_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k408" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.785 0 0) ((bruijn ##k.784 1 0) (quote ())) ((bruijn + 77 28) (close _V0loop_k409) (bruijn i 1 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 77-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k409, env)}),
      upenv->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda92" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 76 14) (close _V0loop_k408) (bruijn i 0 1) (bruijn n 2 1))
V_CALL(VGetArg(upenv, 76-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k408, env)}),
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0iota_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iota_lambda91" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k407) (bruijn loop 0 1) (close _V0loop_lambda92))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k407, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda92, env)})
    );
 }
}
static void _V0iota_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iota_k411" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k411, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.789 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k415" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 80 36) (bruijn ##k.791 4 0) (bruijn ##x.793 2 0) (bruijn ##x.794 0 0))
V_CALL(VGetArg(upenv, 80-1, 36), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k414" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 4 1) (close _V0loop_k415) (bruijn ##x.795 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k415, env)}),
      _var0
    );
 }
}
static void _V0loop_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k413" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 78 28) (close _V0loop_k414) (bruijn i 2 1) 1)
V_CALL(VGetArg(upenv, 78-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k414, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k412" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.792 0 0) ((bruijn ##k.791 1 0) (quote ())) ((bruijn + 77 28) (close _V0loop_k413) (bruijn i 1 1) (bruijn b 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 77-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k413, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0loop_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda94" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 76 14) (close _V0loop_k412) (bruijn i 0 1) (bruijn n 2 1))
V_CALL(VGetArg(upenv, 76-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k412, env)}),
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0iota_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iota_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k411) (bruijn loop 0 1) (close _V0loop_lambda94))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k411, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda94, env)})
    );
 }
}
static void _V0iota_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iota_k416" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k416, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.797 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k421" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 81 36) (bruijn ##k.799 5 0) (bruijn ##x.801 2 0) (bruijn ##x.802 0 0))
V_CALL(VGetArg(upenv, 81-1, 36), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k420" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 5 1) (close _V0loop_k421) (bruijn ##x.803 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k421, env)}),
      _var0
    );
 }
}
static void _V0loop_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k419" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 79 28) (close _V0loop_k420) (bruijn i 3 1) 1)
V_CALL(VGetArg(upenv, 79-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k420, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k418" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 78 28) (close _V0loop_k419) (bruijn ##x.804 0 0) (bruijn b 4 2))
V_CALL(VGetArg(upenv, 78-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k419, env)}),
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k417" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.800 0 0) ((bruijn ##k.799 1 0) (quote ())) ((bruijn * 77 30) (close _V0loop_k418) (bruijn i 1 1) (bruijn s 3 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 77-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k418, env)}),
      upenv->vars[1],
      upenv->up->up->vars[3]
    );
}
 }
}
static void _V0loop_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda96" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 76 14) (close _V0loop_k417) (bruijn i 0 1) (bruijn n 2 1))
V_CALL(VGetArg(upenv, 76-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k417, env)}),
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0iota_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iota_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k416) (bruijn loop 0 1) (close _V0loop_lambda96))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k416, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda96, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0iota_lambda90(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0iota_lambda90 #t (2 ((close _V0iota_lambda91) (bruijn ##k.781 0 0) #f)) (3 ((close _V0iota_lambda93) (bruijn ##k.788 0 0) #f)) (4 ((close _V0iota_lambda95) (bruijn ##k.796 0 0) #f)))
 VError("Not enough arguments to _V0iota_lambda90, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0iota_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0iota_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0iota_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iota_lambda91) (bruijn ##k.781 0 0) #f)
V_CALL_FUNC(_V0iota_lambda91, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0iota_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0iota_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0iota_lambda90, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0iota_lambda93) (bruijn ##k.788 0 0) #f)
V_CALL_FUNC(_V0iota_lambda93, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case2__V0iota_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0iota_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0iota_lambda90, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0iota_lambda95) (bruijn ##k.796 0 0) #f)
V_CALL_FUNC(_V0iota_lambda95, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0iota_lambda90(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0iota_lambda90:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0iota_lambda90\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0iota_lambda90\n"
"    cmp edx, 4\n"
"    je _V20Case2__V0iota_lambda90\n"
"    jmp _V20CaseError__V0iota_lambda90\n"
);
static void _V0vanity_V0core_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k75) (bruijn iota 73 74) (close _V0iota_lambda90))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k75, env)}),
      VEncodeInt(73l), VEncodeInt(74l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_lambda90, env)})
    );
 }
}
static void _V0for__each_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k422" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k422, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.806 1 0) (bruijn xs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k423" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k423, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.808 1 0) (##inline ##sys.cdr (bruijn xs 1 1)))
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda99" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k423) (##inline ##sys.car (bruijn xs 0 1))) ((bruijn ##k.808 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
_var1
    )

    )
)) {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k423, env)}),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0for__each_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0for__each_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k422) (bruijn loop 0 1) (close _V0loop_lambda99))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k422, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda99, env)})
    );
 }
}
static void _V0for__each_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k424" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k424, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.815 1 0) (bruijn xs 2 2) (bruijn ys 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k425" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.817 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)))
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )
,
      VInlineCdr(
upenv->vars[2]
    )

    );
 }
}
static void _V0loop_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda101" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda101, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k425) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))) ((bruijn ##k.817 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
_var1
    )

    )
)) {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k425, env)}),
      VInlineCar(
_var1
    )
,
      VInlineCar(
_var2
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0for__each_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0for__each_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k424) (bruijn loop 0 1) (close _V0loop_lambda101))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k424, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda101, env)})
    );
 }
}
static void _V0for__each_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k426" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k426, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.826 1 0) (bruijn xs 2 2) (bruijn ys 2 3) (bruijn zs 2 4))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3],
      upenv->up->vars[4]
    );
 }
}
static void _V0loop_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k427" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k427, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.828 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)) (##inline ##sys.cdr (bruijn zs 1 3)))
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )
,
      VInlineCdr(
upenv->vars[2]
    )
,
      VInlineCdr(
upenv->vars[3]
    )

    );
 }
}
static void _V0loop_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda103" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda103, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda103, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k427) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))) ((bruijn ##k.828 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
_var1
    )

    )
)) {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k427, env)}),
      VInlineCar(
_var1
    )
,
      VInlineCar(
_var2
    )
,
      VInlineCar(
_var3
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0for__each_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0for__each_lambda102" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k426) (bruijn loop 0 1) (close _V0loop_lambda103))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k426, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda103, env)})
    );
 }
}
static void _V0for__each_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k428" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k428, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.839 1 0) (bruijn lsts 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k431" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k431, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 1) (bruijn ##k.841 3 0) (bruijn ##x.844 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k430" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 77 72) (close _V0loop_k431) ##sys.cdr (bruijn lsts 2 1))
V_CALL(VGetArg(upenv, 77-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k431, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCdr2,NULL)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k429" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 76 129) (close _V0loop_k430) (bruijn f 3 1) (bruijn ##x.845 0 0))
V_CALL(VGetArg(upenv, 76-1, 129), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k430, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda105" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.not (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1)))) ((bruijn map 75 72) (close _V0loop_k429) ##sys.car (bruijn lsts 0 1)) ((bruijn ##k.841 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
VInlineCar(
_var1
    )

    )

    )
)) {
V_CALL(VGetArg(upenv, 75-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k429, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCar2,NULL)}),
      _var1
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0for__each_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0for__each_lambda104" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k428) (bruijn loop 0 1) (close _V0loop_lambda105))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k428, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda105, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0for__each_lambda97(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0for__each_lambda97 #t (3 ((close _V0for__each_lambda98) (bruijn ##k.805 0 0) #f)) (4 ((close _V0for__each_lambda100) (bruijn ##k.814 0 0) #f)) (5 ((close _V0for__each_lambda102) (bruijn ##k.825 0 0) #f)) (2 + ((close _V0for__each_lambda104) (bruijn ##k.838 0 0) #f)))
 VError("Not enough arguments to _V0for__each_lambda97, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0for__each_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0for__each_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0for__each_lambda97, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0for__each_lambda98) (bruijn ##k.805 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda98, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0for__each_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0for__each_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0for__each_lambda97, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0for__each_lambda100) (bruijn ##k.814 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda100, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case2__V0for__each_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0for__each_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0for__each_lambda97, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0for__each_lambda102) (bruijn ##k.825 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda102, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case3__V0for__each_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0for__each_lambda97" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0for__each_lambda97, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0for__each_lambda104) (bruijn ##k.838 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda104, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0for__each_lambda97(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0for__each_lambda97:\n"
"    cmp edx, 3\n"
"    je _V20Case0__V0for__each_lambda97\n"
"    cmp edx, 4\n"
"    je _V20Case1__V0for__each_lambda97\n"
"    cmp edx, 5\n"
"    je _V20Case2__V0for__each_lambda97\n"
"    cmp edx, 2\n"
"    jge _V20Case3__V0for__each_lambda97\n"
"    jmp _V20CaseError__V0for__each_lambda97\n"
);
static void _V0vanity_V0core_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k74) (bruijn for-each 72 73) (close _V0for__each_lambda97))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k74, env)}),
      VEncodeInt(72l), VEncodeInt(73l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda97, env)})
    );
 }
}
static void _V0map_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k432" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k432, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.849 1 0) (bruijn xs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k434" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k434, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.851 2 0) (##inline ##sys.cons (bruijn ##x.853 1 0) (bruijn ##x.854 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k433" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 2 1) (close _V0loop_k434) (##inline ##sys.cdr (bruijn xs 1 1)))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k434, env)}),
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda108" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.851 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k433) (##inline ##sys.car (bruijn xs 0 1))))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(_var0, runtime,
      VNULL
    );
} else {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k433, env)}),
      VInlineCar(
_var1
    )

    );
}
 }
}
static void _V0map_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0map_lambda107" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k432) (bruijn loop 0 1) (close _V0loop_lambda108))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k432, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda108, env)})
    );
 }
}
static void _V0map_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k435" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k435, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.858 1 0) (bruijn xs 2 2) (bruijn ys 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k437" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k437, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.860 2 0) (##inline ##sys.cons (bruijn ##x.862 1 0) (bruijn ##x.863 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k436" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 2 1) (close _V0loop_k437) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k437, env)}),
      VInlineCdr(
upenv->vars[1]
    )
,
      VInlineCdr(
upenv->vars[2]
    )

    );
 }
}
static void _V0loop_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda110" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda110, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda110, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.860 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k436) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(_var0, runtime,
      VNULL
    );
} else {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k436, env)}),
      VInlineCar(
_var1
    )
,
      VInlineCar(
_var2
    )

    );
}
 }
}
static void _V0map_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0map_lambda109" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k435) (bruijn loop 0 1) (close _V0loop_lambda110))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k435, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda110, env)})
    );
 }
}
static void _V0map_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k438" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k438, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.869 1 0) (bruijn xs 2 2) (bruijn ys 2 3) (bruijn zs 2 4))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3],
      upenv->up->vars[4]
    );
 }
}
static void _V0loop_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k440" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k440, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.871 2 0) (##inline ##sys.cons (bruijn ##x.873 1 0) (bruijn ##x.874 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k439" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 2 1) (close _V0loop_k440) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)) (##inline ##sys.cdr (bruijn zs 1 3)))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k440, env)}),
      VInlineCdr(
upenv->vars[1]
    )
,
      VInlineCdr(
upenv->vars[2]
    )
,
      VInlineCdr(
upenv->vars[3]
    )

    );
 }
}
static void _V0loop_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda112" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda112, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda112, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.871 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k439) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(_var0, runtime,
      VNULL
    );
} else {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k439, env)}),
      VInlineCar(
_var1
    )
,
      VInlineCar(
_var2
    )
,
      VInlineCar(
_var3
    )

    );
}
 }
}
static void _V0map_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0map_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k438) (bruijn loop 0 1) (close _V0loop_lambda112))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k438, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda112, env)})
    );
 }
}
static void _V0map_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k441" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k441, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.882 1 0) (bruijn lsts 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k445" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k445, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.884 4 0) (##inline ##sys.cons (bruijn ##x.886 2 0) (bruijn ##x.887 0 0)))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
upenv->up->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k444" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 4 1) (close _V0loop_k445) (bruijn ##x.888 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k445, env)}),
      _var0
    );
 }
}
static void _V0loop_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k443" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 76 72) (close _V0loop_k444) ##sys.cdr (bruijn lsts 2 1))
V_CALL(VGetArg(upenv, 76-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k444, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCdr2,NULL)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k442" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 75 129) (close _V0loop_k443) (bruijn f 3 1) (bruijn ##x.889 0 0))
V_CALL(VGetArg(upenv, 75-1, 129), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k443, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda114" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1))) ((bruijn ##k.884 0 0) (quote ())) ((bruijn map 74 72) (close _V0loop_k442) ##sys.car (bruijn lsts 0 1)))
if(VDecodeBool(
VInlineNullP(
VInlineCar(
_var1
    )

    )
)) {
V_CALL(_var0, runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 74-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k442, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCar2,NULL)}),
      _var1
    );
}
 }
}
static void _V0map_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0map_lambda113" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k441) (bruijn loop 0 1) (close _V0loop_lambda114))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k441, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda114, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0map_lambda106(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0map_lambda106 #t (3 ((close _V0map_lambda107) (bruijn ##k.848 0 0) #f)) (4 ((close _V0map_lambda109) (bruijn ##k.857 0 0) #f)) (5 ((close _V0map_lambda111) (bruijn ##k.868 0 0) #f)) (2 + ((close _V0map_lambda113) (bruijn ##k.881 0 0) #f)))
 VError("Not enough arguments to _V0map_lambda106, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0map_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0map_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0map_lambda106, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0map_lambda107) (bruijn ##k.848 0 0) #f)
V_CALL_FUNC(_V0map_lambda107, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0map_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0map_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0map_lambda106, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0map_lambda109) (bruijn ##k.857 0 0) #f)
V_CALL_FUNC(_V0map_lambda109, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case2__V0map_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0map_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0map_lambda106, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0map_lambda111) (bruijn ##k.868 0 0) #f)
V_CALL_FUNC(_V0map_lambda111, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case3__V0map_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0map_lambda106" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0map_lambda106, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0map_lambda113) (bruijn ##k.881 0 0) #f)
V_CALL_FUNC(_V0map_lambda113, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0map_lambda106(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0map_lambda106:\n"
"    cmp edx, 3\n"
"    je _V20Case0__V0map_lambda106\n"
"    cmp edx, 4\n"
"    je _V20Case1__V0map_lambda106\n"
"    cmp edx, 5\n"
"    je _V20Case2__V0map_lambda106\n"
"    cmp edx, 2\n"
"    jge _V20Case3__V0map_lambda106\n"
"    jmp _V20CaseError__V0map_lambda106\n"
);
static void _V0vanity_V0core_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k73) (bruijn map 71 72) (close _V0map_lambda106))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k73, env)}),
      VEncodeInt(71l), VEncodeInt(72l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda106, env)})
    );
 }
}
static void _V0list__ref_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__ref_k447" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__ref_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_k447, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-ref 73 71) (bruijn ##k.891 2 0) (##inline ##sys.cdr (bruijn lst 2 1)) (bruijn ##x.894 0 0))
V_CALL(VGetArg(upenv, 73-1, 71), runtime,
      upenv->up->vars[0],
      VInlineCdr(
upenv->up->vars[1]
    )
,
      _var0
    );
 }
}
static void _V0list__ref_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__ref_k446" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__ref_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.892 0 0) ((bruijn ##k.891 1 0) (##inline ##sys.car (bruijn lst 1 1))) ((bruijn - 72 29) (close _V0list__ref_k447) (bruijn x 1 2) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCar(
upenv->vars[1]
    )

    );
} else {
V_CALL(VGetArg(upenv, 72-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_k447, env)}),
      upenv->vars[2],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0list__ref_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__ref_lambda115" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__ref_lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_lambda115, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 71 14) (close _V0list__ref_k446) (bruijn x 0 2) 0)
V_CALL(VGetArg(upenv, 71-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_k446, env)}),
      _var2,
      VEncodeInt(0l)
    );
 }
}
static void _V0vanity_V0core_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k72) (bruijn list-ref 70 71) (close _V0list__ref_lambda115))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k72, env)}),
      VEncodeInt(70l), VEncodeInt(71l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_lambda115, env)})
    );
 }
}
static void _V0length_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0length_k448" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0length_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_k448, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.896 1 0) (bruijn lst 2 1) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k449" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k449, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.898 1 0) (##inline ##sys.cdr (bruijn lst 1 1)) (bruijn ##x.901 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )
,
      _var0
    );
 }
}
static void _V0loop_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda118" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda118, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda118, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn lst 0 1)) ((bruijn ##k.898 0 0) (bruijn i 0 2)) ((bruijn + 72 28) (close _V0loop_k449) (bruijn i 0 2) 1))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(_var0, runtime,
      _var2
    );
} else {
V_CALL(VGetArg(upenv, 72-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k449, env)}),
      _var2,
      VEncodeInt(1l)
    );
}
 }
}
static void _V0length_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0length_lambda117" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0length_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0length_k448) (bruijn loop 0 1) (close _V0loop_lambda118))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_k448, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda118, env)})
    );
 }
}
static void _V0length_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0length_lambda116" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0length_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0length_lambda117) (bruijn ##k.895 0 0) #f)
V_CALL_FUNC(_V0length_lambda117, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k71) (bruijn length 69 70) (close _V0length_lambda116))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k71, env)}),
      VEncodeInt(69l), VEncodeInt(70l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_lambda116, env)})
    );
 }
}
static void _V0list_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0list_lambda119" };
 VRecordCall(&dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0list_lambda119, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0list_lambda119, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##k.902 0 0) (bruijn args 0 1))
V_CALL(_var0, runtime,
      _varargs
    );
 }
}
static void _V0vanity_V0core_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k70) (bruijn list 68 69) (close _V0list_lambda119))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k70, env)}),
      VEncodeInt(68l), VEncodeInt(69l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_lambda119, env)})
    );
 }
}
static void _V0cddddr_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddddr_lambda120" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddddr_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddddr_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.903 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
VInlineCdr(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k69) (bruijn cddddr 67 68) (close _V0cddddr_lambda120))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k69, env)}),
      VEncodeInt(67l), VEncodeInt(68l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddddr_lambda120, env)})
    );
 }
}
static void _V0cdddar_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdddar_lambda121" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddar_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddar_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.907 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
VInlineCdr(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k68) (bruijn cdddar 66 67) (close _V0cdddar_lambda121))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k68, env)}),
      VEncodeInt(66l), VEncodeInt(67l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddar_lambda121, env)})
    );
 }
}
static void _V0cddadr_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddadr_lambda122" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddadr_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddadr_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.911 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
VInlineCar(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k67) (bruijn cddadr 65 66) (close _V0cddadr_lambda122))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k67, env)}),
      VEncodeInt(65l), VEncodeInt(66l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddadr_lambda122, env)})
    );
 }
}
static void _V0cddaar_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddaar_lambda123" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddaar_lambda123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddaar_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.915 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
VInlineCar(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k66) (bruijn cddaar 64 65) (close _V0cddaar_lambda123))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k66, env)}),
      VEncodeInt(64l), VEncodeInt(65l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddaar_lambda123, env)})
    );
 }
}
static void _V0cdaddr_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaddr_lambda124" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaddr_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaddr_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.919 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
VInlineCdr(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k65) (bruijn cdaddr 63 64) (close _V0cdaddr_lambda124))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k65, env)}),
      VEncodeInt(63l), VEncodeInt(64l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaddr_lambda124, env)})
    );
 }
}
static void _V0cdadar_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdadar_lambda125" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadar_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadar_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.923 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
VInlineCdr(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k64) (bruijn cdadar 62 63) (close _V0cdadar_lambda125))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k64, env)}),
      VEncodeInt(62l), VEncodeInt(63l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadar_lambda125, env)})
    );
 }
}
static void _V0cdaadr_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaadr_lambda126" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaadr_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaadr_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.927 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
VInlineCar(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k63) (bruijn cdaadr 61 62) (close _V0cdaadr_lambda126))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k63, env)}),
      VEncodeInt(61l), VEncodeInt(62l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaadr_lambda126, env)})
    );
 }
}
static void _V0cdaaar_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaaar_lambda127" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaaar_lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaaar_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.931 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
VInlineCar(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k62) (bruijn cdaaar 60 61) (close _V0cdaaar_lambda127))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k62, env)}),
      VEncodeInt(60l), VEncodeInt(61l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaaar_lambda127, env)})
    );
 }
}
static void _V0cadddr_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadddr_lambda128" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadddr_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadddr_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.935 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
VInlineCdr(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k61) (bruijn cadddr 59 60) (close _V0cadddr_lambda128))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k61, env)}),
      VEncodeInt(59l), VEncodeInt(60l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadddr_lambda128, env)})
    );
 }
}
static void _V0caddar_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caddar_lambda129" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caddar_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddar_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.939 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
VInlineCdr(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k60) (bruijn caddar 58 59) (close _V0caddar_lambda129))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k60, env)}),
      VEncodeInt(58l), VEncodeInt(59l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddar_lambda129, env)})
    );
 }
}
static void _V0cadadr_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadadr_lambda130" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadadr_lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadadr_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.943 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
VInlineCar(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k59) (bruijn cadadr 57 58) (close _V0cadadr_lambda130))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k59, env)}),
      VEncodeInt(57l), VEncodeInt(58l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadadr_lambda130, env)})
    );
 }
}
static void _V0cadaar_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadaar_lambda131" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadaar_lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadaar_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.947 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
VInlineCar(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k58) (bruijn cadaar 56 57) (close _V0cadaar_lambda131))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k58, env)}),
      VEncodeInt(56l), VEncodeInt(57l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadaar_lambda131, env)})
    );
 }
}
static void _V0caaddr_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaddr_lambda132" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaddr_lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaddr_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.951 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
VInlineCdr(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k57) (bruijn caaddr 55 56) (close _V0caaddr_lambda132))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k57, env)}),
      VEncodeInt(55l), VEncodeInt(56l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaddr_lambda132, env)})
    );
 }
}
static void _V0caadar_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caadar_lambda133" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caadar_lambda133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadar_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.955 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
VInlineCdr(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k56) (bruijn caadar 54 55) (close _V0caadar_lambda133))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k56, env)}),
      VEncodeInt(54l), VEncodeInt(55l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadar_lambda133, env)})
    );
 }
}
static void _V0caaadr_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaadr_lambda134" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaadr_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaadr_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.959 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
VInlineCar(
VInlineCdr(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k55) (bruijn caaadr 53 54) (close _V0caaadr_lambda134))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k55, env)}),
      VEncodeInt(53l), VEncodeInt(54l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaadr_lambda134, env)})
    );
 }
}
static void _V0caaaar_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaaar_lambda135" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaaar_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaaar_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.963 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
VInlineCar(
VInlineCar(
_var1
    )

    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k54) (bruijn caaaar 52 53) (close _V0caaaar_lambda135))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k54, env)}),
      VEncodeInt(52l), VEncodeInt(53l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaaar_lambda135, env)})
    );
 }
}
static void _V0cdddr_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdddr_lambda136" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddr_lambda136, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddr_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.967 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
VInlineCdr(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k53) (bruijn cdddr 51 52) (close _V0cdddr_lambda136))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k53, env)}),
      VEncodeInt(51l), VEncodeInt(52l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddr_lambda136, env)})
    );
 }
}
static void _V0cddar_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddar_lambda137" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddar_lambda137, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddar_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.970 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
VInlineCar(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k52) (bruijn cddar 50 51) (close _V0cddar_lambda137))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k52, env)}),
      VEncodeInt(50l), VEncodeInt(51l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddar_lambda137, env)})
    );
 }
}
static void _V0cdadr_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdadr_lambda138" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadr_lambda138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadr_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.973 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
VInlineCdr(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k51) (bruijn cdadr 49 50) (close _V0cdadr_lambda138))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k51, env)}),
      VEncodeInt(49l), VEncodeInt(50l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadr_lambda138, env)})
    );
 }
}
static void _V0cdaar_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaar_lambda139" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaar_lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaar_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.976 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
VInlineCar(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k50) (bruijn cdaar 48 49) (close _V0cdaar_lambda139))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k50, env)}),
      VEncodeInt(48l), VEncodeInt(49l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaar_lambda139, env)})
    );
 }
}
static void _V0caddr_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caddr_lambda140" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caddr_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddr_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.979 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
VInlineCdr(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k49) (bruijn caddr 47 48) (close _V0caddr_lambda140))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k49, env)}),
      VEncodeInt(47l), VEncodeInt(48l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddr_lambda140, env)})
    );
 }
}
static void _V0cadar_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadar_lambda141" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadar_lambda141, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadar_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.982 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
VInlineCar(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k48) (bruijn cadar 46 47) (close _V0cadar_lambda141))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k48, env)}),
      VEncodeInt(46l), VEncodeInt(47l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadar_lambda141, env)})
    );
 }
}
static void _V0caadr_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caadr_lambda142" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caadr_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadr_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.985 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
VInlineCdr(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k47) (bruijn caadr 45 46) (close _V0caadr_lambda142))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k47, env)}),
      VEncodeInt(45l), VEncodeInt(46l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadr_lambda142, env)})
    );
 }
}
static void _V0caaar_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaar_lambda143" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaar_lambda143, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaar_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.988 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
VInlineCar(
_var1
    )

    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k46) (bruijn caaar 44 45) (close _V0caaar_lambda143))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k46, env)}),
      VEncodeInt(44l), VEncodeInt(45l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaar_lambda143, env)})
    );
 }
}
static void _V0cddr_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddr_lambda144" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddr_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddr_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.991 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k45) (bruijn cddr 43 44) (close _V0cddr_lambda144))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k45, env)}),
      VEncodeInt(43l), VEncodeInt(44l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddr_lambda144, env)})
    );
 }
}
static void _V0cdar_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdar_lambda145" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdar_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdar_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.993 0 0) (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k44) (bruijn cdar 42 43) (close _V0cdar_lambda145))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k44, env)}),
      VEncodeInt(42l), VEncodeInt(43l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdar_lambda145, env)})
    );
 }
}
static void _V0cadr_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadr_lambda146" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadr_lambda146, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadr_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.995 0 0) (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k43) (bruijn cadr 41 42) (close _V0cadr_lambda146))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k43, env)}),
      VEncodeInt(41l), VEncodeInt(42l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadr_lambda146, env)})
    );
 }
}
static void _V0caar_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caar_lambda147" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caar_lambda147, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caar_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.997 0 0) (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k42) (bruijn caar 40 41) (close _V0caar_lambda147))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k42, env)}),
      VEncodeInt(40l), VEncodeInt(41l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caar_lambda147, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k41) (bruijn set-cdr! 39 40) ##sys.set-cdr!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k41, env)}),
      VEncodeInt(39l), VEncodeInt(40l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSetCdr2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k40) (bruijn set-car! 38 39) ##sys.set-car!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k40, env)}),
      VEncodeInt(38l), VEncodeInt(39l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSetCar2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k39) (bruijn cdr 37 38) ##sys.cdr)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k39, env)}),
      VEncodeInt(37l), VEncodeInt(38l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCdr2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k38) (bruijn car 36 37) ##sys.car)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k38, env)}),
      VEncodeInt(36l), VEncodeInt(37l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCar2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k37) (bruijn cons 35 36) ##sys.cons)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k37, env)}),
      VEncodeInt(35l), VEncodeInt(36l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCons2,NULL)})
    );
 }
}
static void _V0min_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k450" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k450, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1001 0 0) ((bruijn ##k.1000 1 0) (bruijn a 1 1)) ((bruijn ##k.1000 1 0) (bruijn b 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]
    );
}
 }
}
static void _V0min_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k451" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k451, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 36 35) (bruijn ##k.1002 1 0) (bruijn ##x.1003 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0min_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k453" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k453, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 37 35) (bruijn ##k.1004 2 0) (bruijn ##x.1005 0 0) (bruijn d 2 4))
V_CALL(VGetArg(upenv, 37-1, 35), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]
    );
 }
}
static void _V0min_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k452" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn min 36 35) (close _V0min_k453) (bruijn ##x.1006 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k453, env)}),
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0min_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k454" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k454, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1008 1 0) (bruijn a 2 1) (bruijn bs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k458" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.1010 4 0) (bruijn ##x.1012 1 0) (bruijn ##x.1013 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k457" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 40 38) (close _V0loop_k458) (bruijn bs 5 2))
V_CALL(VGetArg(upenv, 40-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k458, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k456" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn min 39 35) (close _V0loop_k457) (bruijn a 4 1) (bruijn ##x.1014 0 0))
V_CALL(VGetArg(upenv, 39-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k457, env)}),
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k455" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1011 0 0) ((bruijn ##k.1010 1 0) (bruijn ret 1 1)) ((bruijn car 38 37) (close _V0loop_k456) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k456, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0loop_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda150" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda150, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda150, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 37 1) (close _V0loop_k455) (bruijn bs 2 2))
V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k455, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0min_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0min_lambda149" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0min_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0min_k454) (bruijn loop 0 1) (close _V0loop_lambda150))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k454, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda150, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0min_lambda148(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0min_lambda148 #t (2 ((bruijn ##k.999 0 0) (bruijn a 0 1))) (3 ((bruijn < 35 19) (close _V0min_k450) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn min 35 35) (close _V0min_k451) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn min 35 35) (close _V0min_k452) (bruijn a 0 1) (bruijn b 0 2))) (2 + ((close _V0min_lambda149) (bruijn ##k.1007 0 0) #f)))
 VError("Not enough arguments to _V0min_lambda148, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0min_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0min_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0min_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.999 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case1__V0min_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0min_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0min_lambda148, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 35 19) (close _V0min_k450) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 35-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k450, env)}),
      _var1,
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case2__V0min_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0min_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0min_lambda148, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn min 35 35) (close _V0min_k451) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 35-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k451, env)}),
      _var1,
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case3__V0min_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0min_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0min_lambda148, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn min 35 35) (close _V0min_k452) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 35-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k452, env)}),
      _var1,
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case4__V0min_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0min_lambda148" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0min_lambda148, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0min_lambda149) (bruijn ##k.1007 0 0) #f)
V_CALL_FUNC(_V0min_lambda149, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0min_lambda148(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0min_lambda148:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0min_lambda148\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0min_lambda148\n"
"    cmp edx, 4\n"
"    je _V20Case2__V0min_lambda148\n"
"    cmp edx, 5\n"
"    je _V20Case3__V0min_lambda148\n"
"    cmp edx, 2\n"
"    jge _V20Case4__V0min_lambda148\n"
"    jmp _V20CaseError__V0min_lambda148\n"
);
static void _V0vanity_V0core_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k36) (bruijn min 34 35) (close _V0min_lambda148))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k36, env)}),
      VEncodeInt(34l), VEncodeInt(35l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_lambda148, env)})
    );
 }
}
static void _V0max_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k459" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k459, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1017 0 0) ((bruijn ##k.1016 1 0) (bruijn a 1 1)) ((bruijn ##k.1016 1 0) (bruijn b 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]
    );
}
 }
}
static void _V0max_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k460" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k460, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 35 34) (bruijn ##k.1018 1 0) (bruijn ##x.1019 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0max_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k462" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k462, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 36 34) (bruijn ##k.1020 2 0) (bruijn ##x.1021 0 0) (bruijn d 2 4))
V_CALL(VGetArg(upenv, 36-1, 34), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]
    );
 }
}
static void _V0max_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k461" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn max 35 34) (close _V0max_k462) (bruijn ##x.1022 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k462, env)}),
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0max_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k463" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k463, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1024 1 0) (bruijn a 2 1) (bruijn bs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k467" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k467, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.1026 4 0) (bruijn ##x.1028 1 0) (bruijn ##x.1029 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k466" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 39 38) (close _V0loop_k467) (bruijn bs 5 2))
V_CALL(VGetArg(upenv, 39-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k467, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k465" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn max 38 34) (close _V0loop_k466) (bruijn a 4 1) (bruijn ##x.1030 0 0))
V_CALL(VGetArg(upenv, 38-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k466, env)}),
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k464" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1027 0 0) ((bruijn ##k.1026 1 0) (bruijn ret 1 1)) ((bruijn car 37 37) (close _V0loop_k465) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 37-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k465, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0loop_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda153" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda153, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda153, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 36 1) (close _V0loop_k464) (bruijn bs 2 2))
V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k464, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0max_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0max_lambda152" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0max_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0max_k463) (bruijn loop 0 1) (close _V0loop_lambda153))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k463, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda153, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0max_lambda151(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0max_lambda151 #t (2 ((bruijn ##k.1015 0 0) (bruijn a 0 1))) (3 ((bruijn > 34 21) (close _V0max_k459) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn max 34 34) (close _V0max_k460) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn max 34 34) (close _V0max_k461) (bruijn a 0 1) (bruijn b 0 2))) (2 + ((close _V0max_lambda152) (bruijn ##k.1023 0 0) #f)))
 VError("Not enough arguments to _V0max_lambda151, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0max_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0max_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0max_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1015 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case1__V0max_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0max_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0max_lambda151, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn > 34 21) (close _V0max_k459) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 34-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k459, env)}),
      _var1,
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case2__V0max_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0max_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0max_lambda151, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn max 34 34) (close _V0max_k460) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 34-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k460, env)}),
      _var1,
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case3__V0max_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0max_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0max_lambda151, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn max 34 34) (close _V0max_k461) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 34-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k461, env)}),
      _var1,
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case4__V0max_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0max_lambda151" };
 VRecordCall(&dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0max_lambda151, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0max_lambda152) (bruijn ##k.1023 0 0) #f)
V_CALL_FUNC(_V0max_lambda152, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0max_lambda151(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0max_lambda151:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0max_lambda151\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0max_lambda151\n"
"    cmp edx, 4\n"
"    je _V20Case2__V0max_lambda151\n"
"    cmp edx, 5\n"
"    je _V20Case3__V0max_lambda151\n"
"    cmp edx, 2\n"
"    jge _V20Case4__V0max_lambda151\n"
"    jmp _V20CaseError__V0max_lambda151\n"
);
static void _V0vanity_V0core_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k35) (bruijn max 33 34) (close _V0max_lambda151))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k35, env)}),
      VEncodeInt(33l), VEncodeInt(34l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_lambda151, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k34) (bruijn remainder 32 33) ##sys.remainder)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k34, env)}),
      VEncodeInt(32l), VEncodeInt(33l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VRem2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k33) (bruijn quotient 31 32) ##sys.quotient)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k33, env)}),
      VEncodeInt(31l), VEncodeInt(32l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VQuot2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k32) (bruijn / 30 31) ##sys./)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k32, env)}),
      VEncodeInt(30l), VEncodeInt(31l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VDiv2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k31) (bruijn * 29 30) ##sys.*)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k31, env)}),
      VEncodeInt(29l), VEncodeInt(30l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMul2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k30) (bruijn - 28 29) ##sys.-)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k30, env)}),
      VEncodeInt(28l), VEncodeInt(29l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSub2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k29) (bruijn + 27 28) ##sys.+)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k29, env)}),
      VEncodeInt(27l), VEncodeInt(28l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VAdd2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k28) (bruijn complex? 26 27) (bruijn number? 26 26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k28, env)}),
      VEncodeInt(26l), VEncodeInt(27l),
      VGetArg(upenv, 26-1, 26)
    );
 }
}
static void _V0number_Q_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0number_Q_k468" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0number_Q_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_k468, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1032 0 0) ((bruijn ##k.1031 1 0) (bruijn ##p.1032 0 0)) (##sys.int? (bruijn ##k.1031 1 0) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
    V_CALL_FUNC(VIntP2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
}
 }
}
static void _V0number_Q_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0number_Q_lambda154" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0number_Q_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##sys.double? (close _V0number_Q_k468) (bruijn x 0 1))
    V_CALL_FUNC(VDoubleP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0number_Q_k468, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k27) (bruijn number? 25 26) (close _V0number_Q_lambda154))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k27, env)}),
      VEncodeInt(25l), VEncodeInt(26l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0number_Q_lambda154, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k26) (bruijn exact->inexact 24 25) (bruijn inexact 24 24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k26, env)}),
      VEncodeInt(24l), VEncodeInt(25l),
      VGetArg(upenv, 24-1, 24)
    );
 }
}
static void _V0inexact_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0inexact_lambda155" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0inexact_lambda155, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inexact_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1033 0 0) (bruijn x 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k25) (bruijn inexact 23 24) (close _V0inexact_lambda155))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k25, env)}),
      VEncodeInt(23l), VEncodeInt(24l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inexact_lambda155, env)})
    );
 }
}
static void _V0_G_E_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k471" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k471, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1035 3 0) (bruijn ##x.1037 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_G_E_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k470" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 26 36) (close _V0_G_E_k471) (bruijn x0 3 1) (bruijn ##x.1038 0 0))
V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k471, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_G_E_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k469" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 25 36) (close _V0_G_E_k470) (bruijn x1 2 2) (bruijn xs 2 3))
V_CALL(VGetArg(upenv, 25-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k470, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k478" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k478, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1039 7 0) (bruijn ##x.1042 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k477" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1041 0 0) ((bruijn ##k.1039 6 0) #f) ((bruijn cdr 31 38) (close _V0loop_k478) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 31-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k478, env)}),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0loop_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k476" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 30 14) (close _V0loop_k477) (bruijn ##x.1043 0 0) -1)
V_CALL(VGetArg(upenv, 30-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k477, env)}),
      _var0,
      VEncodeInt(-1l)
    );
 }
}
static void _V0loop_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k475" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0loop_k476) (bruijn ##x.1044 1 0) (bruijn ##x.1045 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k476, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k474" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 28 42) (close _V0loop_k475) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 28-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k475, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k473" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1040 0 0) ((bruijn ##k.1039 2 0) #t) ((bruijn car 27 37) (close _V0loop_k474) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true)
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k474, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0loop_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k472" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 26 1) (close _V0loop_k473) (bruijn ##x.1046 0 0))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k473, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda158" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda158, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda158, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 25 38) (close _V0loop_k472) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 25-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k472, env)}),
      _var1
    );
 }
}
static void _V0_G_E_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_G_E_lambda157" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_G_E_k469) (bruijn loop 0 1) (close _V0loop_lambda158))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k469, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda158, env)})
    );
 }
}
static void _V0_G_E_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_G_E_lambda156" };
 VRecordCall(&dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_E_lambda156, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_lambda156, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_G_E_lambda157) (bruijn ##k.1034 0 0) #f)
V_CALL_FUNC(_V0_G_E_lambda157, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k24) (bruijn >= 22 23) (close _V0_G_E_lambda156))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k24, env)}),
      VEncodeInt(22l), VEncodeInt(23l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_lambda156, env)})
    );
 }
}
static void _V0_L_E_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k481" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k481, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1048 3 0) (bruijn ##x.1050 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_L_E_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k480" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 25 36) (close _V0_L_E_k481) (bruijn x0 3 1) (bruijn ##x.1051 0 0))
V_CALL(VGetArg(upenv, 25-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k481, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_L_E_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k479" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 24 36) (close _V0_L_E_k480) (bruijn x1 2 2) (bruijn xs 2 3))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k480, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k488" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k488, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1052 7 0) (bruijn ##x.1055 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k487" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1054 0 0) ((bruijn ##k.1052 6 0) #f) ((bruijn cdr 30 38) (close _V0loop_k488) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 30-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k488, env)}),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0loop_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k486" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 29 14) (close _V0loop_k487) (bruijn ##x.1056 0 0) 1)
V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k487, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k485" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0loop_k486) (bruijn ##x.1057 1 0) (bruijn ##x.1058 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k486, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k484" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 27 42) (close _V0loop_k485) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 27-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k485, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k483" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1053 0 0) ((bruijn ##k.1052 2 0) #t) ((bruijn car 26 37) (close _V0loop_k484) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true)
    );
} else {
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k484, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0loop_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k482" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 25 1) (close _V0loop_k483) (bruijn ##x.1059 0 0))
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k483, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda161" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda161, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 24 38) (close _V0loop_k482) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k482, env)}),
      _var1
    );
 }
}
static void _V0_L_E_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_L_E_lambda160" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_L_E_k479) (bruijn loop 0 1) (close _V0loop_lambda161))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k479, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda161, env)})
    );
 }
}
static void _V0_L_E_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_L_E_lambda159" };
 VRecordCall(&dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_E_lambda159, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_lambda159, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_L_E_lambda160) (bruijn ##k.1047 0 0) #f)
V_CALL_FUNC(_V0_L_E_lambda160, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k23) (bruijn <= 21 22) (close _V0_L_E_lambda159))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k23, env)}),
      VEncodeInt(21l), VEncodeInt(22l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_lambda159, env)})
    );
 }
}
static void _V0_G_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k491" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1061 3 0) (bruijn ##x.1063 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_G_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k490" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 24 36) (close _V0_G_k491) (bruijn x0 3 1) (bruijn ##x.1064 0 0))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k491, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_G_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k489" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 36) (close _V0_G_k490) (bruijn x1 2 2) (bruijn xs 2 3))
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k490, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k498" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k498, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1065 7 0) (bruijn ##x.1068 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k497" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1067 0 0) ((bruijn cdr 29 38) (close _V0loop_k498) (bruijn xs 6 1)) ((bruijn ##k.1065 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k498, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k496" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 28 14) (close _V0loop_k497) (bruijn ##x.1069 0 0) 1)
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k497, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k495" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0loop_k496) (bruijn ##x.1070 1 0) (bruijn ##x.1071 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k496, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k494" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 26 42) (close _V0loop_k495) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 26-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k495, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k493" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1066 0 0) ((bruijn ##k.1065 2 0) #t) ((bruijn car 25 37) (close _V0loop_k494) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true)
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k494, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0loop_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k492" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 24 1) (close _V0loop_k493) (bruijn ##x.1072 0 0))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k493, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda164" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda164, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 23 38) (close _V0loop_k492) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 23-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k492, env)}),
      _var1
    );
 }
}
static void _V0_G_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_G_lambda163" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_G_k489) (bruijn loop 0 1) (close _V0loop_lambda164))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k489, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda164, env)})
    );
 }
}
static void _V0_G_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_G_lambda162" };
 VRecordCall(&dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_lambda162, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_lambda162, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_G_lambda163) (bruijn ##k.1060 0 0) #f)
V_CALL_FUNC(_V0_G_lambda163, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k22) (bruijn > 20 21) (close _V0_G_lambda162))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k22, env)}),
      VEncodeInt(20l), VEncodeInt(21l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_lambda162, env)})
    );
 }
}
static void _V0_E_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k501" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k501, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1074 3 0) (bruijn ##x.1076 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_E_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k500" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 36) (close _V0_E_k501) (bruijn x0 3 1) (bruijn ##x.1077 0 0))
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k501, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_E_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k499" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 22 36) (close _V0_E_k500) (bruijn x1 2 2) (bruijn xs 2 3))
V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k500, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k508" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k508, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1078 7 0) (bruijn ##x.1081 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k507" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1080 0 0) ((bruijn cdr 28 38) (close _V0loop_k508) (bruijn xs 6 1)) ((bruijn ##k.1078 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k508, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k506" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 27 14) (close _V0loop_k507) (bruijn ##x.1082 0 0) 0)
V_CALL(VGetArg(upenv, 27-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k507, env)}),
      _var0,
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k505" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0loop_k506) (bruijn ##x.1083 1 0) (bruijn ##x.1084 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k506, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k504" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 25 42) (close _V0loop_k505) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 25-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k505, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k503" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1079 0 0) ((bruijn ##k.1078 2 0) #t) ((bruijn car 24 37) (close _V0loop_k504) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true)
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k504, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0loop_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k502" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 23 1) (close _V0loop_k503) (bruijn ##x.1085 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k503, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda167" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda167, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 22 38) (close _V0loop_k502) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k502, env)}),
      _var1
    );
 }
}
static void _V0_E_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_E_lambda166" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_E_k499) (bruijn loop 0 1) (close _V0loop_lambda167))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k499, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda167, env)})
    );
 }
}
static void _V0_E_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_E_lambda165" };
 VRecordCall(&dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_E_lambda165, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_lambda165, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_E_lambda166) (bruijn ##k.1073 0 0) #f)
V_CALL_FUNC(_V0_E_lambda166, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k21) (bruijn = 19 20) (close _V0_E_lambda165))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k21, env)}),
      VEncodeInt(19l), VEncodeInt(20l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_lambda165, env)})
    );
 }
}
static void _V0_L_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k511" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k511, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1087 3 0) (bruijn ##x.1089 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_L_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k510" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 22 36) (close _V0_L_k511) (bruijn x0 3 1) (bruijn ##x.1090 0 0))
V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k511, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_L_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k509" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 21 36) (close _V0_L_k510) (bruijn x1 2 2) (bruijn xs 2 3))
V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k510, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k518" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k518, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1091 7 0) (bruijn ##x.1094 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k517" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1093 0 0) ((bruijn cdr 27 38) (close _V0loop_k518) (bruijn xs 6 1)) ((bruijn ##k.1091 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k518, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k516" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 26 14) (close _V0loop_k517) (bruijn ##x.1095 0 0) -1)
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k517, env)}),
      _var0,
      VEncodeInt(-1l)
    );
 }
}
static void _V0loop_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k515" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0loop_k516) (bruijn ##x.1096 1 0) (bruijn ##x.1097 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k516, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k514" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 24 42) (close _V0loop_k515) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 24-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k515, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k513" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1092 0 0) ((bruijn ##k.1091 2 0) #t) ((bruijn car 23 37) (close _V0loop_k514) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k514, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0loop_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k512" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 22 1) (close _V0loop_k513) (bruijn ##x.1098 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k513, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda170" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda170, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda170, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 21 38) (close _V0loop_k512) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 21-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k512, env)}),
      _var1
    );
 }
}
static void _V0_L_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_L_lambda169" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_L_k509) (bruijn loop 0 1) (close _V0loop_lambda170))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k509, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda170, env)})
    );
 }
}
static void _V0_L_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_L_lambda168" };
 VRecordCall(&dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_lambda168, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_lambda168, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_L_lambda169) (bruijn ##k.1086 0 0) #f)
V_CALL_FUNC(_V0_L_lambda169, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k20) (bruijn < 18 19) (close _V0_L_lambda168))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k20, env)}),
      VEncodeInt(18l), VEncodeInt(19l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_lambda168, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k19) (bruijn not 17 18) ##sys.not)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k19, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNot2,NULL)})
    );
 }
}
static void _V0equal_Q_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k522" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k522, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1111 0 0) (##sys.blob=? (bruijn ##k.1110 1 0) (bruijn x 4 1) (bruijn y 4 2)) ((bruijn ##k.1110 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      upenv->up->up->up->vars[2]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0equal_Q_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k521" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1109 1 0) (##sys.blob? (close _V0equal_Q_k522) (bruijn y 3 2)) ((bruijn ##k.1110 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k522, env)}),
      upenv->up->up->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0equal_Q_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k524" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k524, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1104 0 0) ((bruijn equal? 21 17) (bruijn ##k.1099 4 0) (##inline ##sys.cdr (bruijn x 4 1)) (##inline ##sys.cdr (bruijn y 4 2))) ((bruijn ##k.1099 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 17), runtime,
      upenv->up->up->up->vars[0],
      VInlineCdr(
upenv->up->up->up->vars[1]
    )
,
      VInlineCdr(
upenv->up->up->up->vars[2]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0equal_Q_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k523" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1101 0 0) ((bruijn ##k.1099 3 0) (bruijn ##p.1101 0 0)) (if (##inline ##sys.pair? (bruijn x 3 1)) (if (##inline ##sys.pair? (bruijn y 3 2)) ((bruijn equal? 20 17) (close _V0equal_Q_k524) (##inline ##sys.car (bruijn x 3 1)) (##inline ##sys.car (bruijn y 3 2))) ((bruijn ##k.1099 3 0) #f)) ((bruijn ##k.1099 3 0) #f)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      _var0
    );
} else {
if(VDecodeBool(
VInlinePairP(
upenv->up->up->vars[1]
    )
)) {
if(VDecodeBool(
VInlinePairP(
upenv->up->up->vars[2]
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k524, env)}),
      VInlineCar(
upenv->up->up->vars[1]
    )
,
      VInlineCar(
upenv->up->up->vars[2]
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
}
 }
}
static void _V0equal_Q_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k520" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0equal_Q_k521) (close _V0equal_Q_k523))
V_CALL_FUNC(_V0equal_Q_k521, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k523, env)})
    );
 }
}
static void _V0equal_Q_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k519" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1100 0 0) ((bruijn ##k.1099 1 0) (bruijn ##p.1100 0 0)) (##sys.blob? (close _V0equal_Q_k520) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k520, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0equal_Q_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0equal_Q_lambda171" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0equal_Q_lambda171, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_lambda171, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0equal_Q_k519) (##inline ##sys.eq? (bruijn x 0 1) (bruijn y 0 2)))
V_CALL_FUNC(_V0equal_Q_k519, env, runtime,
      VInlineEq(
_var1,
      _var2
    )

    );
 }
}
static void _V0vanity_V0core_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k18) (bruijn equal? 16 17) (close _V0equal_Q_lambda171))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k18, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_lambda171, env)})
    );
 }
}
static void _V0eqv_Q_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0eqv_Q_k527" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0eqv_Q_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0eqv_Q_k527, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1115 0 0) (##sys.symbol=? (bruijn ##k.1112 3 0) (bruijn x 3 1) (bruijn y 3 2)) ((bruijn ##k.1112 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0eqv_Q_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0eqv_Q_k526" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0eqv_Q_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0eqv_Q_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1114 0 0) (##sys.symbol? (close _V0eqv_Q_k527) (bruijn y 2 2)) ((bruijn ##k.1112 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSymbolP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0eqv_Q_k527, env)}),
      upenv->up->vars[2]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0eqv_Q_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0eqv_Q_k525" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0eqv_Q_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0eqv_Q_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1113 0 0) ((bruijn ##k.1112 1 0) (bruijn ##p.1113 0 0)) (##sys.symbol? (close _V0eqv_Q_k526) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
    V_CALL_FUNC(VSymbolP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0eqv_Q_k526, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0eqv_Q_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0eqv_Q_lambda172" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0eqv_Q_lambda172, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0eqv_Q_lambda172, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0eqv_Q_k525) (##inline ##sys.eq? (bruijn x 0 1) (bruijn y 0 2)))
V_CALL_FUNC(_V0eqv_Q_k525, env, runtime,
      VInlineEq(
_var1,
      _var2
    )

    );
 }
}
static void _V0vanity_V0core_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k17) (bruijn eqv? 15 16) (close _V0eqv_Q_lambda172))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k17, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0eqv_Q_lambda172, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k16) (bruijn symbol=? 14 15) ##sys.symbol=?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k16, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSymbolEqv2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k15) (bruijn eq? 13 14) ##sys.eq?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k15, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VEq2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k14) (bruijn real? 12 13) ##sys.double?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k14, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VDoubleP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k13) (bruijn inexact? 11 12) ##sys.double?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k13, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VDoubleP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k12) (bruijn integer? 10 11) ##sys.int?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k12, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VIntP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k11) (bruijn exact? 9 10) ##sys.int?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k11, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VIntP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k10) (bruijn char? 8 9) ##sys.char?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k10, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCharP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k9) (bruijn string? 7 8) ##sys.string?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k9, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k8) (bruijn symbol? 6 7) ##sys.symbol?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k8, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSymbolP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k7) (bruijn procedure? 5 6) ##sys.procedure?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k7, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VProcedureP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k6) (bruijn vector? 4 5) ##sys.vector?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k6, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k5) (bruijn pair? 3 4) ##sys.pair?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k5, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VPairP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k4) (bruijn eof-object? 2 3) ##sys.eof-object?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k4, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VEofP2,NULL)})
    );
 }
}
static void _V0boolean_Q_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_Q_k528" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_Q_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_k528, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1117 0 0) ((bruijn ##k.1116 1 0) (bruijn ##p.1117 0 0)) ((bruijn ##k.1116 1 0) (##inline ##sys.eq? (bruijn x 1 1) #f)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VInlineEq(
upenv->vars[1],
      VEncodeBool(false)
    )

    );
}
 }
}
static void _V0boolean_Q_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0boolean_Q_lambda173" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0boolean_Q_lambda173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0boolean_Q_k528) (##inline ##sys.eq? (bruijn x 0 1) #t))
V_CALL_FUNC(_V0boolean_Q_k528, env, runtime,
      VInlineEq(
_var1,
      VEncodeBool(true)
    )

    );
 }
}
static void _V0vanity_V0core_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k3) (bruijn boolean? 1 2) (close _V0boolean_Q_lambda173))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k3, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_Q_lambda173, env)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61, VWORD _var62, VWORD _var63, VWORD _var64, VWORD _var65, VWORD _var66, VWORD _var67, VWORD _var68, VWORD _var69, VWORD _var70, VWORD _var71, VWORD _var72, VWORD _var73, VWORD _var74, VWORD _var75, VWORD _var76, VWORD _var77, VWORD _var78, VWORD _var79, VWORD _var80, VWORD _var81, VWORD _var82, VWORD _var83, VWORD _var84, VWORD _var85, VWORD _var86, VWORD _var87, VWORD _var88, VWORD _var89, VWORD _var90, VWORD _var91, VWORD _var92, VWORD _var93, VWORD _var94, VWORD _var95, VWORD _var96, VWORD _var97, VWORD _var98, VWORD _var99, VWORD _var100, VWORD _var101, VWORD _var102, VWORD _var103, VWORD _var104, VWORD _var105, VWORD _var106, VWORD _var107, VWORD _var108, VWORD _var109, VWORD _var110, VWORD _var111, VWORD _var112, VWORD _var113, VWORD _var114, VWORD _var115, VWORD _var116, VWORD _var117, VWORD _var118, VWORD _var119, VWORD _var120, VWORD _var121, VWORD _var122, VWORD _var123, VWORD _var124, VWORD _var125, VWORD _var126, VWORD _var127, VWORD _var128, VWORD _var129, VWORD _var130, VWORD _var131, VWORD _var132, VWORD _var133, VWORD _var134, VWORD _var135, VWORD _var136, VWORD _var137, VWORD _var138, VWORD _var139, VWORD _var140, VWORD _var141, VWORD _var142, VWORD _var143, VWORD _var144, VWORD _var145) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda3, runtime, upenv, 146, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57, _var58, _var59, _var60, _var61, _var62, _var63, _var64, _var65, _var66, _var67, _var68, _var69, _var70, _var71, _var72, _var73, _var74, _var75, _var76, _var77, _var78, _var79, _var80, _var81, _var82, _var83, _var84, _var85, _var86, _var87, _var88, _var89, _var90, _var91, _var92, _var93, _var94, _var95, _var96, _var97, _var98, _var99, _var100, _var101, _var102, _var103, _var104, _var105, _var106, _var107, _var108, _var109, _var110, _var111, _var112, _var113, _var114, _var115, _var116, _var117, _var118, _var119, _var120, _var121, _var122, _var123, _var124, _var125, _var126, _var127, _var128, _var129, _var130, _var131, _var132, _var133, _var134, _var135, _var136, _var137, _var138, _var139, _var140, _var141, _var142, _var143, _var144, _var145) {
  struct { VEnv env; VWORD argv[146]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 146; env->var_len = 146; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  env->vars[10] = _var10;
  env->vars[11] = _var11;
  env->vars[12] = _var12;
  env->vars[13] = _var13;
  env->vars[14] = _var14;
  env->vars[15] = _var15;
  env->vars[16] = _var16;
  env->vars[17] = _var17;
  env->vars[18] = _var18;
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  env->vars[27] = _var27;
  env->vars[28] = _var28;
  env->vars[29] = _var29;
  env->vars[30] = _var30;
  env->vars[31] = _var31;
  env->vars[32] = _var32;
  env->vars[33] = _var33;
  env->vars[34] = _var34;
  env->vars[35] = _var35;
  env->vars[36] = _var36;
  env->vars[37] = _var37;
  env->vars[38] = _var38;
  env->vars[39] = _var39;
  env->vars[40] = _var40;
  env->vars[41] = _var41;
  env->vars[42] = _var42;
  env->vars[43] = _var43;
  env->vars[44] = _var44;
  env->vars[45] = _var45;
  env->vars[46] = _var46;
  env->vars[47] = _var47;
  env->vars[48] = _var48;
  env->vars[49] = _var49;
  env->vars[50] = _var50;
  env->vars[51] = _var51;
  env->vars[52] = _var52;
  env->vars[53] = _var53;
  env->vars[54] = _var54;
  env->vars[55] = _var55;
  env->vars[56] = _var56;
  env->vars[57] = _var57;
  env->vars[58] = _var58;
  env->vars[59] = _var59;
  env->vars[60] = _var60;
  env->vars[61] = _var61;
  env->vars[62] = _var62;
  env->vars[63] = _var63;
  env->vars[64] = _var64;
  env->vars[65] = _var65;
  env->vars[66] = _var66;
  env->vars[67] = _var67;
  env->vars[68] = _var68;
  env->vars[69] = _var69;
  env->vars[70] = _var70;
  env->vars[71] = _var71;
  env->vars[72] = _var72;
  env->vars[73] = _var73;
  env->vars[74] = _var74;
  env->vars[75] = _var75;
  env->vars[76] = _var76;
  env->vars[77] = _var77;
  env->vars[78] = _var78;
  env->vars[79] = _var79;
  env->vars[80] = _var80;
  env->vars[81] = _var81;
  env->vars[82] = _var82;
  env->vars[83] = _var83;
  env->vars[84] = _var84;
  env->vars[85] = _var85;
  env->vars[86] = _var86;
  env->vars[87] = _var87;
  env->vars[88] = _var88;
  env->vars[89] = _var89;
  env->vars[90] = _var90;
  env->vars[91] = _var91;
  env->vars[92] = _var92;
  env->vars[93] = _var93;
  env->vars[94] = _var94;
  env->vars[95] = _var95;
  env->vars[96] = _var96;
  env->vars[97] = _var97;
  env->vars[98] = _var98;
  env->vars[99] = _var99;
  env->vars[100] = _var100;
  env->vars[101] = _var101;
  env->vars[102] = _var102;
  env->vars[103] = _var103;
  env->vars[104] = _var104;
  env->vars[105] = _var105;
  env->vars[106] = _var106;
  env->vars[107] = _var107;
  env->vars[108] = _var108;
  env->vars[109] = _var109;
  env->vars[110] = _var110;
  env->vars[111] = _var111;
  env->vars[112] = _var112;
  env->vars[113] = _var113;
  env->vars[114] = _var114;
  env->vars[115] = _var115;
  env->vars[116] = _var116;
  env->vars[117] = _var117;
  env->vars[118] = _var118;
  env->vars[119] = _var119;
  env->vars[120] = _var120;
  env->vars[121] = _var121;
  env->vars[122] = _var122;
  env->vars[123] = _var123;
  env->vars[124] = _var124;
  env->vars[125] = _var125;
  env->vars[126] = _var126;
  env->vars[127] = _var127;
  env->vars[128] = _var128;
  env->vars[129] = _var129;
  env->vars[130] = _var130;
  env->vars[131] = _var131;
  env->vars[132] = _var132;
  env->vars[133] = _var133;
  env->vars[134] = _var134;
  env->vars[135] = _var135;
  env->vars[136] = _var136;
  env->vars[137] = _var137;
  env->vars[138] = _var138;
  env->vars[139] = _var139;
  env->vars[140] = _var140;
  env->vars[141] = _var141;
  env->vars[142] = _var142;
  env->vars[143] = _var143;
  env->vars[144] = _var144;
  env->vars[145] = _var145;
  // (set! (close _V0vanity_V0core_V20_k2) (bruijn null? 0 1) ##sys.null?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k2, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNullP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda3) (bruijn ##k.3 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0core_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda2) (bruijn ##k.2 1 0))
V_CALL_FUNC(_V0vanity_V0core_V20_lambda2, env, runtime,
      upenv->vars[0]
    );
 }
}
static void _V0vanity_V0core_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0core_V20_k1) (##string ##string.1132))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k1, env)}),
      VEncodePointer(&_V10string_D1132.sym, VPOINTER_OTHER)
    );
 }
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda1;
